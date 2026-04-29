__int64 __fastcall sub_179C0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  char *v5; // r12
  __int64 v6; // r14
  char *v7; // r12
  unsigned int dword; // eax
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // r13d
  int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // r12
  unsigned int v15; // ebp

  if ( !(unsigned __int8)is_mapped(*a1) )
    return 0;
  v3 = *a1;
  v4 = getseg(*a1);
  if ( !v4 )
    return 0;
  v5 = (char *)&unk_2B090;
  if ( *(_BYTE *)(v4 + 43) == 2 )
    v5 = (char *)&unk_2B0A0;
  v6 = v3;
  v7 = &v5[-v3];
  do
  {
    dword = get_dword(v6);
    v9 = *(_DWORD *)&v7[v6];
    v10 = 4;
    do
    {
      if ( (_BYTE)v9 != 0xFF )
      {
        if ( (_BYTE)v9 == 0xFE )
        {
          if ( (dword & 0xF) != 0xE )
            return 0;
        }
        else if ( (_BYTE)v9 != (_BYTE)dword )
        {
          return 0;
        }
      }
      dword >>= 8;
      v9 >>= 8;
      --v10;
    }
    while ( v10 );
    v6 += 4;
  }
  while ( v6 != v3 + 16 );
  v11 = get_dword(v3 + 4);
  v12 = get_dword(v3);
  v13 = sub_BC00(v11 >> 20, 11);
  v14 = sub_BC00((v12 & 0xFFFFF000) + v13, 31) + v3;
  v15 = is_loaded(v14);
  if ( !(_BYTE)v15 )
    return 0;
  *a2 = (unsigned int)get_dword(v14);
  return v15;
}
