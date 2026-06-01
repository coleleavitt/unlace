_QWORD *__fastcall sub_1FF45C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  _BYTE *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  void *v20; // r13
  signed __int64 v21; // rbp
  _QWORD *v22; // r12
  void **v23; // rbp
  void **v24; // rbx
  __m128i *v26; // rsi
  __m128i v27; // [rsp+0h] [rbp-B8h]
  __int64 v28; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-A0h]
  __int64 v30; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-90h]
  void *v32[2]; // [rsp+30h] [rbp-88h] BYREF
  void *v33; // [rsp+40h] [rbp-78h]
  __m128i v34; // [rsp+50h] [rbp-68h] BYREF
  __m128i v35; // [rsp+60h] [rbp-58h] BYREF
  __int16 v36; // [rsp+70h] [rbp-48h]

  v7 = *(_BYTE **)a6;
  *(_QWORD *)(a6 + 8) = 0;
  v28 = a4;
  v29 = a5;
  *v7 = 0;
  v27.m128i_i64[0] = a2;
  v27.m128i_i64[1] = a3;
  *(_OWORD *)v32 = 0;
  v33 = nullptr;
  v30 = 0;
  v31 = 0;
  while ( v29 )
  {
    v34.m128i_i8[0] = 10;
    v12 = sub_2246AB0(&v28, &v34, 1, 0);
    if ( v12 == -1 )
    {
      v10 = v28;
      v12 = v29;
      v9 = 0;
      v11 = 0;
    }
    else
    {
      v8 = v12 + 1;
      if ( v12 + 1 > v29 )
      {
        v8 = v29;
        v9 = 0;
      }
      else
      {
        v9 = v29 - v8;
      }
      v10 = v28;
      v11 = v28 + v8;
      if ( v12 > v29 )
        v12 = v29;
    }
    v30 = v10;
    v13 = 0;
    v28 = v11;
    v29 = v9;
    v31 = v12;
    v14 = sub_2246FB0(&v30, asc_22E1692, 6, 0);
    v15 = v31;
    if ( v14 < v31 )
    {
      v13 = v31 - v14;
      v15 = v14;
    }
    v34.m128i_i64[1] = v13;
    v34.m128i_i64[0] = v30 + v15;
    v16 = sub_2247130(&v34, asc_22E1692, 6, -1);
    v17 = (_BYTE *)v34.m128i_i64[0];
    v18 = v16 + 1;
    v30 = v34.m128i_i64[0];
    if ( v18 > v34.m128i_i64[1] )
      v18 = v34.m128i_u64[1];
    v19 = v34.m128i_i64[1] - v13 + v18;
    if ( v19 > v34.m128i_i64[1] )
      v19 = v34.m128i_u64[1];
    v31 = v19;
    if ( v19 )
    {
      v34.m128i_i64[0] = (__int64)&v35;
      if ( v17 )
      {
        sub_1FF3100(&v34, v17, (__int64)&v17[v19]);
      }
      else
      {
        v34.m128i_i64[1] = 0;
        v35.m128i_i8[0] = 0;
      }
      v26 = (__m128i *)v32[1];
      if ( v32[1] == v33 )
      {
        sub_A82970((void ***)v32, (const __m128i *)v32[1], &v34);
        if ( (__m128i *)v34.m128i_i64[0] != &v35 )
          operator delete((void *)v34.m128i_i64[0]);
      }
      else
      {
        *(_QWORD *)v32[1] = (char *)v32[1] + 16;
        if ( (__m128i *)v34.m128i_i64[0] == &v35 )
        {
          v26[1] = _mm_load_si128(&v35);
        }
        else
        {
          v26->m128i_i64[0] = v34.m128i_i64[0];
          v26[1].m128i_i64[0] = v35.m128i_i64[0];
        }
        v26->m128i_i64[1] = v34.m128i_i64[1];
        v32[1] = (char *)v32[1] + 32;
      }
    }
  }
  v20 = v32[0];
  v36 = 261;
  v34 = v27;
  v21 = ((char *)v32[1] - (char *)v32[0]) >> 5;
  v22 = (_QWORD *)operator new(0x20u);
  sub_1FF3E10(v22, (__int64)&v34, (unsigned __int64)v20, v21);
  v23 = (void **)v32[1];
  v24 = (void **)v32[0];
  *a1 = v22;
  if ( v23 != v24 )
  {
    do
    {
      while ( *v24 != v24 + 2 )
      {
        operator delete(*v24);
        v24 += 4;
        if ( v23 == v24 )
          goto LABEL_20;
      }
      v24 += 4;
    }
    while ( v23 != v24 );
LABEL_20:
    v24 = (void **)v32[0];
  }
  if ( v24 )
    operator delete(v24);
  return a1;
}
