/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97550
// Address: 0x00097550

//----- (00097550) --------------------------------------------------------
int __cdecl sub_97550(_DWORD *a1, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  int *v12; // eax
  int v13; // edi
  unsigned __int8 (__cdecl *v14)(int); // esi
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  const char *v18; // eax
  int v19; // eax
  int *v21; // [esp+0h] [ebp-2Ch]
  int v22; // [esp+4h] [ebp-28h]
  socklen_t optlen; // [esp+8h] [ebp-24h] BYREF
  int optval; // [esp+Ch] [ebp-20h] BYREF
  struct pollfd fds; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v26; // [esp+18h] [ebp-14h]

  v26 = __readgsdword(0x14u);
  v3 = a1[7];
  if ( v3 == -1 || (v4 = fcntl(v3, 3, 0), v4 == -1) )
  {
    v5 = 0;
  }
  else
  {
    LOBYTE(v5) = 1;
    if ( (v4 & 0x800) == 0 )
      LOBYTE(v5) = fcntl(v3, 4, v4 ^ 0x800) == 0;
  }
  v6 = a1;
  v7 = v5;
  v8 = connect(a1[7], *(const struct sockaddr **)(a2 + 24), *(_DWORD *)(a2 + 16));
  v9 = v7;
  if ( !(_BYTE)v7 )
  {
    LOBYTE(v9) = 1;
    if ( v8 != -1 )
      return v9;
    a1[11] = "connect";
    v12 = (int *)__errno(v9);
    goto LABEL_30;
  }
  if ( v8 != -1 )
  {
LABEL_8:
    v10 = v6[7];
    LOBYTE(v9) = 1;
    if ( v10 != -1 )
    {
      v11 = fcntl(v10, 3, 0);
      if ( v11 != -1 )
      {
        v9 = v11 & 0x800;
        if ( (v11 & 0x800) != 0 )
          fcntl(v10, 4, v11 ^ 0x800);
      }
      LOBYTE(v9) = 1;
    }
    return v9;
  }
  v21 = (int *)__errno(v7);
  if ( *v21 != 11 && *v21 != 115 )
  {
    v18 = "connect";
LABEL_29:
    v6[11] = v18;
    v12 = v21;
LABEL_30:
    v19 = *v12;
    goto LABEL_31;
  }
  fds.fd = a1[7];
  fds.events = 4;
  v13 = *(_DWORD *)(a3 + 8);
  v14 = *(unsigned __int8 (__cdecl **)(int))a3;
  v22 = *(_DWORD *)(a3 + 4);
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = poll(&fds, 1u, v13);
      if ( v15 )
        break;
      if ( !v14 )
      {
        v16 = a1;
        a1[11] = "poll";
        v17 = 62;
        goto LABEL_34;
      }
      if ( v14(v22) )
      {
        v16 = a1;
        a1[11] = "poll";
        v17 = 125;
LABEL_34:
        v16[12] = v17;
        return 0;
      }
    }
    if ( v15 != -1 )
      break;
    if ( *v21 != 4 )
      goto LABEL_32;
  }
  if ( v15 < 0 )
  {
LABEL_32:
    v16 = a1;
    a1[11] = "poll";
    v17 = *v21;
    goto LABEL_34;
  }
  optlen = 4;
  v6 = a1;
  if ( getsockopt(a1[7], 1, 4, &optval, &optlen) )
  {
    v18 = "getsockopt";
    goto LABEL_29;
  }
  v19 = optval;
  if ( !optval )
    goto LABEL_8;
  a1[11] = "connect";
LABEL_31:
  v6[12] = v19;
  return 0;
}
// 975CA: variable 'v5' is possibly undefined
// 9775A: variable 'v9' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
