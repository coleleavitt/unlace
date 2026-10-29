void __fastcall sub_E59960(void ***a1, void **a2, void **a3)
{
  __m128i *v5; // rax
  __m128i *v6; // rdi
  __m128i *v7; // r12
  void **v8; // rbp
  __int64 v9; // rax
  void *v10; // rsi
  void **v11; // rdi
  void **v12; // r14
  void **v13; // r12
  __m128i *v14; // rdi
  __m128i *v15; // rdi
  void *v16; // rcx
  size_t v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-70h] BYREF
  void *v19; // [rsp+10h] [rbp-68h] BYREF
  void *v20; // [rsp+18h] [rbp-60h]
  __m128i v21; // [rsp+20h] [rbp-58h] BYREF
  void *src; // [rsp+30h] [rbp-48h] BYREF
  size_t n; // [rsp+38h] [rbp-40h]
  _QWORD v24[7]; // [rsp+40h] [rbp-38h] BYREF

  a1[1] = a2;
  a1[2] = a3;
  *a1 = nullptr;
  if ( (unsigned __int8)sub_22296D0(a2, a3, 0) )
    return;
  sub_222A8E0(&v19, a2, a3);
  v5 = (__m128i *)operator new(0x20u);
  v6 = (__m128i *)v19;
  v7 = v5 + 1;
  v8 = (void **)v5;
  v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
  if ( v6 == &v21 )
  {
    v6 = v5 + 1;
    v5[1] = _mm_load_si128(&v21);
  }
  else
  {
    v9 = v21.m128i_i64[0];
    *v8 = v6;
    v8[2] = (void *)v9;
  }
  v10 = v20;
  v21.m128i_i8[0] = 0;
  v19 = &v21;
  v8[1] = v20;
  v20 = nullptr;
  if ( !(unsigned __int8)sub_22296D0(v6, v10, 0) )
  {
    sub_222A8E0(&src, *v8, v8[1]);
    v15 = (__m128i *)*v8;
    if ( src == v24 )
    {
      v17 = n;
      if ( n )
      {
        if ( n == 1 )
          v15->m128i_i8[0] = v24[0];
        else
          memcpy(v15, src, n);
        v17 = n;
        v15 = (__m128i *)*v8;
      }
      v8[1] = (void *)v17;
      v15->m128i_i8[v17] = 0;
      v15 = (__m128i *)src;
      goto LABEL_15;
    }
    if ( v7 == v15 )
    {
      v18 = v24[0];
      *v8 = src;
      *(__m128 *)(v8 + 1) = _mm_loadh_ps((const double *)&v18);
    }
    else
    {
      v18 = v24[0];
      v16 = v8[2];
      *v8 = src;
      *(__m128 *)(v8 + 1) = _mm_loadh_ps((const double *)&v18);
      if ( v15 )
      {
        src = v15;
        v24[0] = v16;
        goto LABEL_15;
      }
    }
    v15 = (__m128i *)v24;
    src = v24;
LABEL_15:
    n = 0;
    v15->m128i_i8[0] = 0;
    if ( src != v24 )
      operator delete(src);
  }
  v11 = *a1;
  v12 = (void **)*v8;
  *a1 = v8;
  v13 = (void **)v8[1];
  if ( v11 )
    sub_E58590(v11);
  v14 = (__m128i *)v19;
  a1[1] = v12;
  a1[2] = v13;
  if ( v14 != &v21 )
    operator delete(v14);
}
