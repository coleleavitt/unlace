__int64 __fastcall sub_16284D0(unsigned int a1, _WORD *a2, unsigned __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  const void *v6; // r12
  size_t v7; // rbp
  _DWORD *v8; // rbx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int *v12; // r10
  unsigned int v13; // r13d
  size_t v14; // rax
  const char *v16; // rsi
  int v17; // eax
  __int64 v18; // r9
  size_t v19; // rax
  const char *v20; // r14

  v6 = a2;
  v7 = a3;
  if ( a3 > 5 && *(_DWORD *)a2 == 1918984031 && a2[2] == 24429 )
  {
    v7 = a3 - 6;
    v6 = a2 + 3;
  }
  v8 = a4;
  v9 = 3 * a5;
  v10 = 0xAAAAAAAAAAAAAAABLL * ((12 * a5) >> 2);
  if ( 12 * a5 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v10 >> 1;
        v12 = &v8[3 * (v10 >> 1)];
        if ( *v12 >= a1 )
          break;
        v8 = v12 + 3;
        v10 = v10 - v11 - 1;
        if ( v10 <= 0 )
          goto LABEL_5;
      }
      v10 >>= 1;
    }
    while ( v11 );
  }
LABEL_5:
  v13 = 0;
  if ( v8 != &a4[v9] && *v8 == a1 )
  {
    v14 = 0;
    v16 = (const char *)(a6 + (int)v8[1]);
    if ( v16 )
      v14 = strlen(v16);
    if ( v14 != v7 || (v13 = 1, v7) && memcmp(v6, v16, v7) )
    {
      v17 = v8[2];
      v13 = 0;
      if ( v17 != -1 )
      {
        v18 = v17;
        v19 = 0;
        v20 = (const char *)(v18 + a6);
        if ( v20 )
          v19 = strlen(v20);
        v13 = 0;
        if ( v19 == v7 )
        {
          v13 = 1;
          if ( v19 )
            LOBYTE(v13) = memcmp(v6, v20, v19) == 0;
        }
      }
    }
  }
  return v13;
}
