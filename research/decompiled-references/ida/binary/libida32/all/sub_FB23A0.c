__int64 __fastcall sub_FB23A0(__int64 a1)
{
  _QWORD *v2; // rbx
  _BYTE *v3; // rsi
  __int64 v4; // rdx
  char *v5; // rdi
  int i; // r12d
  __m128i *v7; // rsi
  int v8; // edx
  int v9; // eax
  size_t v10; // r15
  __m128i *v11; // rsi
  __m128i v13; // [rsp+8h] [rbp-98h] BYREF
  __m128i v14; // [rsp+18h] [rbp-88h] BYREF
  void *v15[2]; // [rsp+28h] [rbp-78h] BYREF
  char *v16; // [rsp+38h] [rbp-68h] BYREF
  size_t v17; // [rsp+40h] [rbp-60h]
  void *v18; // [rsp+48h] [rbp-58h]
  __int64 v19; // [rsp+50h] [rbp-50h]
  char v20[72]; // [rsp+58h] [rbp-48h] BYREF

  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  strcpy((char *)&v16, "-W");
  v15[0] = &v16;
  v15[1] = &dword_0 + 2;
  v18 = v20;
  strcpy(v20, "-Wno-");
  v19 = 5;
  v2 = (_QWORD *)operator new(0x40u);
  *(_QWORD *)a1 = v2;
  *v2 = v2 + 2;
  *(_QWORD *)(a1 + 16) = v2 + 8;
  sub_FAF060(v2, &v16, (__int64)&v16 + 2);
  v3 = v18;
  v4 = v19;
  v2[4] = v2 + 6;
  sub_FAF060(v2 + 4, v3, (__int64)&v3[v4]);
  v5 = (char *)v18;
  *(_QWORD *)(a1 + 8) = v2 + 8;
  if ( v5 != v20 )
    operator delete(v5);
  if ( v15[0] != &v16 )
    operator delete(v15[0]);
  for ( i = 0; i != 24378; i += v9 )
  {
    v9 = 1;
    if ( &byte_23EDAC0[i] )
    {
      v10 = strlen(&byte_23EDAC0[i]);
      v8 = v10;
      if ( v10 )
      {
        v16 = &byte_23EDAC0[i];
        v17 = v10;
        v15[0] = "-W";
        LOWORD(v18) = 1283;
        sub_222F820(&v13, v15);
        v11 = *(__m128i **)(a1 + 8);
        if ( v11 == *(__m128i **)(a1 + 16) )
        {
          sub_A5EC30((void ***)a1, v11, &v13);
          if ( (__m128i *)v13.m128i_i64[0] != &v14 )
            operator delete((void *)v13.m128i_i64[0]);
        }
        else
        {
          v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
          if ( (__m128i *)v13.m128i_i64[0] == &v14 )
          {
            v11[1] = _mm_load_si128(&v14);
          }
          else
          {
            v11->m128i_i64[0] = v13.m128i_i64[0];
            v11[1].m128i_i64[0] = v14.m128i_i64[0];
          }
          v11->m128i_i64[1] = v13.m128i_i64[1];
          *(_QWORD *)(a1 + 8) += 32LL;
        }
        v16 = &byte_23EDAC0[i];
        v15[0] = (void *)"-Wno-";
        v17 = v10;
        LOWORD(v18) = 1283;
        sub_222F820(&v13, v15);
        v7 = *(__m128i **)(a1 + 8);
        if ( v7 == *(__m128i **)(a1 + 16) )
        {
          sub_A5EC30((void ***)a1, v7, &v13);
          if ( (__m128i *)v13.m128i_i64[0] != &v14 )
            operator delete((void *)v13.m128i_i64[0]);
        }
        else
        {
          v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
          if ( (__m128i *)v13.m128i_i64[0] == &v14 )
          {
            v7[1] = _mm_load_si128(&v14);
          }
          else
          {
            v7->m128i_i64[0] = v13.m128i_i64[0];
            v7[1].m128i_i64[0] = v14.m128i_i64[0];
          }
          v7->m128i_i64[1] = v13.m128i_i64[1];
          *(_QWORD *)(a1 + 8) += 32LL;
        }
        v8 = strlen(&byte_23EDAC0[i]);
      }
      v9 = v8 + 1;
    }
  }
  return a1;
}

