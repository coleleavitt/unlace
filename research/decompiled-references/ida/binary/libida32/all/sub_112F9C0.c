__m128i *__fastcall sub_112F9C0(__m128i *a1, __int64 a2, _DWORD *a3)
{
  __m128i v4; // xmm3
  __int64 v5; // rcx
  __m128i *v6; // rdx
  __m128i *v7; // rdi
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  const char *v11[2]; // [rsp+0h] [rbp-D8h] BYREF
  char *v12; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+18h] [rbp-C0h]
  void *v14; // [rsp+20h] [rbp-B8h]
  __int64 v15; // [rsp+28h] [rbp-B0h]
  __m128i v16; // [rsp+30h] [rbp-A8h] BYREF
  __m128i *v17; // [rsp+40h] [rbp-98h]
  __int64 v18; // [rsp+48h] [rbp-90h]
  __m128i v19; // [rsp+50h] [rbp-88h] BYREF
  __m128i *v20; // [rsp+60h] [rbp-78h]
  __int64 v21; // [rsp+68h] [rbp-70h]
  __m128i v22; // [rsp+70h] [rbp-68h] BYREF
  char *v23; // [rsp+80h] [rbp-58h]
  __int64 v24; // [rsp+88h] [rbp-50h]
  void *v25; // [rsp+90h] [rbp-48h]
  __int64 v26; // [rsp+98h] [rbp-40h]
  __m128i v27; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-28h]

  v11[0] = nullptr;
  v11[1] = nullptr;
  v12 = nullptr;
  v13 = 0;
  sub_112F190(a2, a3, v11, &v12);
  v16.m128i_i8[0] = 0;
  v23 = v12;
  v24 = v13;
  v28 = 0;
  v14 = &v16;
  v15 = 0;
  if ( v13 == 3 )
  {
    if ( *(_WORD *)v12 == 13167 && v12[2] == 50 )
    {
      v9 = _mm_load_si128(&v16);
      v26 = 0;
      v25 = &v27;
      v27 = v9;
      LOBYTE(v28) = 1;
    }
    v18 = 2;
    v17 = &v19;
    strcpy(v19.m128i_i8, "32");
    if ( !(_BYTE)v28 && *(_WORD *)v12 == 13166 && v12[2] == 50 )
    {
      v10 = _mm_load_si128(&v19);
      v26 = 2;
      v25 = &v27;
      v27 = v10;
      v18 = 0;
      v19.m128i_i8[0] = 0;
      LOBYTE(v28) = 1;
    }
    v20 = &v22;
    strcpy(v22.m128i_i8, "64");
    v21 = 2;
    if ( !(_BYTE)v28 && *(_WORD *)v12 == 13934 && v12[2] == 52 )
    {
      v4 = _mm_load_si128(&v22);
      v5 = 2;
      LOBYTE(v28) = 1;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      v27 = v4;
LABEL_11:
      a1[1] = _mm_load_si128(&v27);
      goto LABEL_15;
    }
  }
  else
  {
    v18 = 2;
    v17 = &v19;
    strcpy(v19.m128i_i8, "32");
    v20 = &v22;
    strcpy(v22.m128i_i8, "64");
    v21 = 2;
  }
  v6 = (__m128i *)v25;
  v5 = v26;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v6 == &v27 )
    goto LABEL_11;
  a1->m128i_i64[0] = (__int64)v6;
  a1[1].m128i_i64[0] = v27.m128i_i64[0];
LABEL_15:
  v7 = (__m128i *)v14;
  a1->m128i_i64[1] = v5;
  v25 = &v27;
  v26 = 0;
  v27.m128i_i8[0] = 0;
  if ( v7 != &v16 )
    operator delete(v7);
  if ( (_BYTE)v28 && v25 != &v27 )
    operator delete(v25);
  return a1;
}

