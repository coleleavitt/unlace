unsigned __int64 __fastcall sub_5285F0(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  __int64 v5; // r14
  const char *v6; // r12
  __int64 v7; // r13
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  const char **v14; // r15
  __int64 v15; // rax
  __m128i v16; // xmm0
  const char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // r15
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 *v26; // r14
  __int64 v27; // xmm1_8
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // xmm0_8
  __int64 v31; // xmm1_8
  __int64 v33; // r15
  _QWORD *v34; // r13
  __int64 v35; // rax
  __int64 v36; // r14
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __m128i v39; // [rsp+0h] [rbp-88h] BYREF
  __m128i v40; // [rsp+10h] [rbp-78h] BYREF
  __int64 v41; // [rsp+20h] [rbp-68h]
  __int64 v42; // [rsp+28h] [rbp-60h]
  __int64 v43; // [rsp+30h] [rbp-58h] BYREF
  __m128i v44; // [rsp+38h] [rbp-50h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v5 = (__int64)a2;
  v6 = a2;
  v7 = (a3 - 1) / 2;
  v40.m128i_i64[0] = a3;
  v42 = a4;
  v45 = __readfsqword(0x28u);
  if ( (__int64)a2 < v7 )
  {
    do
    {
      v10 = a5(a1 + 48 * (v5 + 1), a1 + 48 * (v5 + 1) - 24);
      v11 = 3 * v5;
      v12 = 2 * (v5 + 1) - v10;
      v13 = 3 * v12;
      v5 = v12;
      v14 = (const char **)(a1 + 8 * v11);
      v15 = a1 + 8 * v13;
      a2 = *(const char **)v15;
      v16 = _mm_loadu_si128((const __m128i *)(v15 + 8));
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      v17 = *v14;
      if ( *v14 )
      {
        v14[1] = nullptr;
        v41 = (__int64)a2;
        v39 = v16;
        qfree(v17, a2);
        a2 = (const char *)v41;
        v16 = _mm_load_si128(&v39);
      }
      *v14 = a2;
      *(__m128i *)(v14 + 1) = v16;
    }
    while ( v5 < v7 );
  }
  if ( (v40.m128i_i8[0] & 1) == 0 && (v40.m128i_i64[0] - 2) / 2 == v5 )
  {
    v33 = 2 * (v5 + 1);
    v34 = (_QWORD *)(a1 + 24 * v5);
    v35 = a1 + 48 * (v5 + 1) - 24;
    v36 = *(_QWORD *)v35;
    v37 = _mm_loadu_si128((const __m128i *)(v35 + 8));
    *(_QWORD *)v35 = 0;
    *(_OWORD *)(v35 + 8) = 0;
    v38 = *v34;
    if ( *v34 )
    {
      v34[1] = 0;
      v39 = v37;
      qfree(v38, a2);
      v37 = _mm_load_si128(&v39);
    }
    *v34 = v36;
    v5 = v33 - 1;
    *(__m128i *)(v34 + 1) = v37;
  }
  v18 = v42;
  v19 = *(_QWORD *)v42;
  v20 = _mm_loadu_si128((const __m128i *)(v42 + 8));
  *(_QWORD *)v42 = 0;
  *(_OWORD *)(v18 + 8) = 0;
  v43 = v19;
  v44 = v20;
  v21 = (v5 - 1) / 2;
  if ( v5 <= (__int64)v6 )
  {
    v26 = (__int64 *)(a1 + 24 * v5);
    v27 = _mm_srli_si128(v20, 8).m128i_u64[0];
  }
  else
  {
    v39.m128i_i64[0] = (__int64)&v43;
    while ( 1 )
    {
      a2 = (const char *)v39.m128i_i64[0];
      v25 = a1 + 24 * v21;
      v26 = (__int64 *)(a1 + 24 * v5);
      if ( !(unsigned __int8)a5(v25, v39.m128i_i64[0]) )
      {
        v19 = v43;
        v27 = v44.m128i_i64[1];
        v20.m128i_i64[0] = v44.m128i_i64[0];
        goto LABEL_15;
      }
      v22 = *(_QWORD *)v25;
      v23 = _mm_loadu_si128((const __m128i *)(v25 + 8));
      *(_QWORD *)v25 = 0;
      *(_OWORD *)(v25 + 8) = 0;
      v24 = *v26;
      if ( *v26 )
      {
        v26[1] = 0;
        v41 = v22;
        v40 = v23;
        qfree(v24, a2);
        v23 = _mm_load_si128(&v40);
        v22 = v41;
      }
      *v26 = v22;
      *(__m128i *)(v26 + 1) = v23;
      v5 = v21;
      if ( (__int64)v6 >= v21 )
        break;
      v21 = (v21 - 1) / 2;
    }
    v19 = v43;
    v20.m128i_i64[0] = v44.m128i_i64[0];
    v26 = (__int64 *)(a1 + 24 * v21);
    v27 = v44.m128i_i64[1];
  }
LABEL_15:
  v43 = 0;
  v28 = *v26;
  v44 = 0;
  if ( v28 )
  {
    v26[1] = 0;
    v39.m128i_i64[0] = v19;
    v40.m128i_i64[0] = v27;
    v41 = v20.m128i_i64[0];
    qfree(v28, a2);
    v29 = v43;
    v30 = v41;
    v31 = v40.m128i_i64[0];
    *v26 = v39.m128i_i64[0];
    v26[1] = v30;
    v26[2] = v31;
    if ( v29 )
    {
      v44.m128i_i64[0] = 0;
      qfree(v29, a2);
    }
  }
  else
  {
    *v26 = v19;
    v26[1] = v20.m128i_i64[0];
    v26[2] = v27;
  }
  return v45 - __readfsqword(0x28u);
}
