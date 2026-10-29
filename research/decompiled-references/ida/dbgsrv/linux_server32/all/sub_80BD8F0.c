/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD8F0
// Address: 0x080BD8F0

//----- (080BD8F0) --------------------------------------------------------
int __usercall sub_80BD8F0@<eax>(__m128i a1@<xmm0>, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // edi
  unsigned __int64 v7; // rax
  int v8; // eax
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ebp
  __suseconds_t v13; // eax
  unsigned int v14; // edx
  unsigned __int64 v15; // kr08_8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int timeout; // [esp+0h] [ebp-44h]
  unsigned __int64 v20; // [esp+8h] [ebp-3Ch]
  unsigned __int64 v21; // [esp+10h] [ebp-34h]
  struct pollfd fds; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v23; // [esp+24h] [ebp-20h]

  v23 = __readgsdword(0x14u);
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__cdecl **)(_DWORD *))(*a2 + 76))(a2) )
    {
      v6 = -1;
      a2[11] = "select";
      goto LABEL_14;
    }
    v3 = a2[5];
    if ( v3 )
    {
      v10 = a2[4] + 20 * v3;
      v11 = *(_DWORD *)(v10 - 12);
      v12 = *(_DWORD *)(v10 - 8);
      v21 = __PAIR64__(v12, v11);
      if ( a3 >= 0 && (sub_80D0330(), LODWORD(v18) = sub_80BBE00(a1), (v20 = v18) != 0) )
      {
        if ( __PAIR64__(v12, v11) >= v18 || !(v12 | v11) )
LABEL_24:
          v21 = v20;
      }
      else
      {
        if ( !__PAIR64__(v12, v11) )
          goto LABEL_5;
        v20 = 0;
      }
      v13 = sub_80D0330();
      timeout = 0;
      v15 = (unsigned int)v13 + 1000000LL * v14;
      v16 = 1000000LL * HIDWORD(v21) + (unsigned int)v21;
      if ( v15 < v16 )
        timeout = (v16 - v15) / 0x3E8;
      goto LABEL_6;
    }
    if ( a3 >= 0 )
    {
      sub_80D0330();
      LODWORD(v17) = sub_80BBE00(a1);
      v20 = v17;
      if ( v17 )
        goto LABEL_24;
    }
LABEL_5:
    v20 = 0;
    timeout = -1;
LABEL_6:
    v4 = a2[7];
    fds.events = 1;
    fds.fd = v4;
    while ( 1 )
    {
      v5 = poll(&fds, 1u, timeout);
      if ( v5 != -1 )
        break;
      if ( *__errno_location() != 4 )
      {
        v6 = -1;
        goto LABEL_22;
      }
    }
    v6 = v5;
    if ( v5 )
      break;
    if ( v20 )
    {
      LODWORD(v7) = sub_80D0330();
      if ( v7 >= v20 )
      {
        v6 = -1;
        a2[11] = "poll";
        v8 = 62;
LABEL_13:
        a2[12] = v8;
        goto LABEL_14;
      }
    }
  }
  if ( v5 < 0 )
  {
LABEL_22:
    a2[11] = "poll";
    v8 = *__errno_location();
    goto LABEL_13;
  }
LABEL_14:
  if ( v23 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v6;
}
// 80BD9DE: variable 'v7' is possibly undefined
// 80BDA83: variable 'v14' is possibly undefined
// 80BDB05: variable 'v17' is possibly undefined
// 80BDB45: variable 'v18' is possibly undefined
