/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BE7F0
// Address: 0x080BE7F0

//----- (080BE7F0) --------------------------------------------------------
int __cdecl sub_80BE7F0(int *a1, int a2, int a3)
{
  char v3; // di
  int v4; // eax
  int result; // eax
  int *v6; // edi
  int v7; // eax
  int i; // eax
  int timeout; // [esp+0h] [ebp-48h]
  unsigned __int8 (__cdecl *v10)(int); // [esp+4h] [ebp-44h]
  int v11; // [esp+8h] [ebp-40h]
  int optval; // [esp+18h] [ebp-30h] BYREF
  socklen_t optlen; // [esp+1Ch] [ebp-2Ch] BYREF
  struct pollfd fds; // [esp+20h] [ebp-28h] BYREF
  unsigned int v15; // [esp+28h] [ebp-20h]

  v15 = __readgsdword(0x14u);
  v3 = sub_80BD390(a1[7], 0);
  v4 = connect(a1[7], *(const struct sockaddr **)(a2 + 20), *(_DWORD *)(a2 + 16));
  if ( !v3 )
  {
    if ( v4 == -1 )
    {
      a1[11] = (int)"connect";
      a1[12] = *__errno_location();
      result = 0;
      goto LABEL_4;
    }
LABEL_3:
    result = 1;
    goto LABEL_4;
  }
  if ( v4 != -1 )
  {
LABEL_11:
    sub_80BD390(a1[7], 1);
    goto LABEL_3;
  }
  v6 = __errno_location();
  if ( *v6 != 11 && *v6 != 115 )
  {
    a1[11] = (int)"connect";
    v7 = *v6;
    goto LABEL_10;
  }
  fds.fd = a1[7];
  fds.events = 4;
  timeout = *(_DWORD *)(a3 + 8);
  v11 = *(_DWORD *)(a3 + 4);
  v10 = *(unsigned __int8 (__cdecl **)(int))a3;
  for ( i = poll(&fds, 1u, timeout); i == -1; i = poll(&fds, 1u, timeout) )
  {
    if ( *v6 != 4 )
      goto LABEL_26;
LABEL_15:
    ;
  }
  if ( !i )
  {
    if ( !v10 )
    {
      a1[11] = (int)"poll";
      v7 = 62;
      goto LABEL_10;
    }
    if ( v10(v11) )
    {
      a1[11] = (int)"poll";
      v7 = 125;
      goto LABEL_10;
    }
    goto LABEL_15;
  }
  if ( i < 0 )
  {
LABEL_26:
    a1[11] = (int)"poll";
    v7 = *v6;
    goto LABEL_10;
  }
  optlen = 4;
  if ( getsockopt(a1[7], 1, 4, &optval, &optlen) )
  {
    a1[11] = (int)"getsockopt";
    v7 = *v6;
  }
  else
  {
    v7 = optval;
    if ( !optval )
      goto LABEL_11;
    a1[11] = (int)"connect";
  }
LABEL_10:
  a1[12] = v7;
  result = 0;
LABEL_4:
  if ( v15 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
