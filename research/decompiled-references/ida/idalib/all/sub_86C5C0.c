__int64 __fastcall sub_86C5C0(unsigned int *a1, int a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7)
{
  int v7; // eax
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // r13d
  __int64 v13; // r9
  int v14; // r8d
  char *v15; // rax
  char *v16; // rax
  int v17; // edx

  v7 = a4;
  v9 = a6;
  if ( a2 == a4 )
  {
    v10 = 4;
    if ( a3 == a5 )
      return v10;
  }
  if ( a2 == a6 )
  {
    v10 = 4;
    if ( a3 == a7 )
      return v10;
  }
  v11 = 15;
  if ( a2 <= 126 )
    v11 = a2;
  if ( v7 <= 126 )
  {
    if ( a6 <= 126 )
    {
      v17 = a6 << 8;
      v13 = 0;
      v14 = v7 | v17;
      LOBYTE(v14) = v7 | v17 | 0x80;
    }
    else
    {
      v10 = 4;
      if ( a6 != 127 || !a1[36] && (unsigned __int64)(a7 + 0x80000000LL) >> 32 )
        return v10;
      LOBYTE(v7) = v7 | 0x80;
      v13 = (int)a7;
      v14 = v7;
    }
LABEL_20:
    v15 = sub_867CC0((__int64)a1, 1u, v11, 0, v14, v13);
    if ( v15 )
    {
      *v15 = -115;
      if ( v11 != 15 )
        return 0;
      v16 = sub_867CC0((__int64)a1, 1u, 15, 0, a2, a3);
      if ( v16 )
      {
        *v16 = -119;
        return 0;
      }
    }
    return *a1;
  }
  if ( v7 == 127 && a6 <= 126 )
  {
    if ( !a1[36] )
    {
      v10 = 4;
      if ( (unsigned __int64)(a5 + 0x80000000LL) >> 32 )
        return v10;
    }
    LOBYTE(v9) = a6 | 0x80;
    v13 = (int)a5;
    v14 = v9;
    goto LABEL_20;
  }
  return 4;
}
