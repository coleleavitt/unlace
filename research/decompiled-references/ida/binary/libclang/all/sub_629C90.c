void __fastcall sub_629C90(unsigned __int16 **src, unsigned __int16 **a2, char *a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int16 **v6; // rbp
  unsigned __int16 **v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbp
  __m128i *v10; // r8
  char *v11; // r12
  char *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __m128i *v15; // r8
  char *v16; // r12
  char *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // [rsp+8h] [rbp-50h]

  v4 = (char *)a2 - (char *)src;
  v5 = (__int64)&a3[(char *)a2 - (char *)src];
  v21 = ((char *)a2 - (char *)src) >> 4;
  if ( (char *)a2 - (char *)src <= 96 )
  {
    sub_629BA0(src, a2);
  }
  else
  {
    v6 = src;
    do
    {
      v7 = v6;
      v6 += 14;
      sub_629BA0(v7, v6);
    }
    while ( (char *)a2 - (char *)v6 > 96 );
    sub_629BA0(v6, a2);
    if ( v4 > 112 )
    {
      v8 = 7;
      while ( 1 )
      {
        v9 = 2 * v8;
        if ( v21 < 2 * v8 )
        {
          v13 = v21;
          v10 = (__m128i *)a3;
          v11 = (char *)src;
        }
        else
        {
          v10 = (__m128i *)a3;
          v11 = (char *)src;
          do
          {
            v12 = v11;
            v11 += 32 * v8;
            v10 = (__m128i *)sub_629AD0(v12, &v11[-16 * v8], (__int64)&v11[-16 * v8], (__int64)v11, v10);
            v13 = ((char *)a2 - v11) >> 4;
          }
          while ( v9 <= v13 );
        }
        v14 = v13;
        if ( v8 <= v13 )
          v14 = v8;
        v8 *= 4;
        sub_629AD0(v11, &v11[16 * v14], (__int64)&v11[16 * v14], (__int64)a2, v10);
        if ( v21 < v8 )
          break;
        v15 = (__m128i *)src;
        v16 = a3;
        do
        {
          v17 = v16;
          v16 += 16 * v8;
          v15 = (__m128i *)sub_629AD0(v17, &v16[16 * v9 - 16 * v8], (__int64)&v16[16 * v9 - 16 * v8], (__int64)v16, v15);
          v18 = (v5 - (__int64)v16) >> 4;
        }
        while ( v8 <= v18 );
        v19 = v9;
        if ( v18 <= v9 )
          v19 = (v5 - (__int64)v16) >> 4;
        sub_629AD0(v16, &v16[16 * v19], (__int64)&v16[16 * v19], v5, v15);
        if ( v21 <= v8 )
          return;
      }
      v20 = v21;
      if ( v21 > v9 )
        v20 = v9;
      sub_629AD0(a3, &a3[16 * v20], (__int64)&a3[16 * v20], v5, (__m128i *)src);
    }
  }
}

