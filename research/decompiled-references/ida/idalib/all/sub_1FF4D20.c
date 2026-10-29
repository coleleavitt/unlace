_QWORD *__fastcall sub_1FF4D20(_QWORD *a1, void *a2, size_t a3, void **a4)
{
  __m128i *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i *v12; // rax
  __m128i *v13; // rdi
  __int64 v14; // rax
  size_t v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v17[2]; // [rsp+10h] [rbp-A8h] BYREF
  char v18; // [rsp+20h] [rbp-98h]
  void *v19[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+40h] [rbp-78h] BYREF
  void *src; // [rsp+50h] [rbp-68h] BYREF
  size_t n; // [rsp+58h] [rbp-60h]
  __m128i v23; // [rsp+60h] [rbp-58h] BYREF
  __int16 v24; // [rsp+70h] [rbp-48h]

  v7 = (__m128i *)*a4;
  a4[1] = nullptr;
  v7->m128i_i8[0] = 0;
  src = a2;
  n = a3;
  v24 = 261;
  sub_2230FD0(v17, &src, 0, 1, 0, 0);
  if ( (v18 & 1) == 0 || !LODWORD(v17[0]) )
  {
    v8 = *(_QWORD *)(v17[0] + 16);
    v16 = *(_QWORD *)(v17[0] + 8);
    v9 = sub_228A4B0(a2, a3, 0);
    sub_1FF45C0(a1, v9, v10, v16, v8 - v16, (__int64)a4);
    goto LABEL_3;
  }
  (*(void (__fastcall **)(void **))(*(_QWORD *)v17[1] + 32LL))(v19);
  v12 = (__m128i *)sub_99BDC0(v19, 0, 0, "Error while opening fixed database: ", 0x24u);
  src = &v23;
  if ( (__m128i *)v12->m128i_i64[0] == &v12[1] )
  {
    v23 = _mm_loadu_si128(v12 + 1);
  }
  else
  {
    src = (void *)v12->m128i_i64[0];
    v23.m128i_i64[0] = v12[1].m128i_i64[0];
  }
  n = v12->m128i_u64[1];
  v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
  v12->m128i_i64[1] = 0;
  v12[1].m128i_i8[0] = 0;
  v13 = (__m128i *)*a4;
  if ( src == &v23 )
  {
    v15 = n;
    if ( n )
    {
      if ( n == 1 )
        v13->m128i_i8[0] = v23.m128i_i8[0];
      else
        memcpy(v13, src, n);
      v15 = n;
      v13 = (__m128i *)*a4;
    }
    a4[1] = (void *)v15;
    v13->m128i_i8[v15] = 0;
    v13 = (__m128i *)src;
    goto LABEL_11;
  }
  if ( v13 == (__m128i *)(a4 + 2) )
  {
    v16 = v23.m128i_i64[0];
    *a4 = src;
    *(__m128 *)(a4 + 1) = _mm_loadh_ps((const double *)&v16);
    goto LABEL_23;
  }
  v16 = v23.m128i_i64[0];
  v14 = (__int64)a4[2];
  *a4 = src;
  *(__m128 *)(a4 + 1) = _mm_loadh_ps((const double *)&v16);
  if ( !v13 )
  {
LABEL_23:
    v13 = &v23;
    src = &v23;
    goto LABEL_11;
  }
  src = v13;
  v23.m128i_i64[0] = v14;
LABEL_11:
  n = 0;
  v13->m128i_i8[0] = 0;
  if ( src != &v23 )
    operator delete(src);
  if ( v19[0] != &v20 )
    operator delete(v19[0]);
  *a1 = 0;
LABEL_3:
  sub_FC2AF0(v17);
  return a1;
}
