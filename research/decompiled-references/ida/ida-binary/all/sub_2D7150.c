unsigned __int64 __fastcall sub_2D7150(
        __int64 a1,
        const char *a2,
        double a3,
        double a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128i v11; // xmm1
  __int64 v12; // rdi
  __m128i *v13; // rsi
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r14
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v35; // [rsp-E8h] [rbp-F0h]
  __m128i v36; // [rsp-E0h] [rbp-E8h] BYREF
  __m128i v37; // [rsp-D0h] [rbp-D8h] BYREF
  __int64 v38; // [rsp-C0h] [rbp-C8h]
  __int64 v39; // [rsp-B0h] [rbp-B8h] BYREF
  __int128 v40; // [rsp-A8h] [rbp-B0h]
  __int64 v41; // [rsp-98h] [rbp-A0h]
  __int128 v42; // [rsp-90h] [rbp-98h]
  __int64 v43; // [rsp-80h] [rbp-88h]
  __int128 v44; // [rsp-78h] [rbp-80h]
  __int64 v45; // [rsp-68h] [rbp-70h]
  __int128 v46; // [rsp-60h] [rbp-68h]
  int v47; // [rsp-4Ch] [rbp-54h]
  char v48; // [rsp-48h] [rbp-50h]
  __m128i v49; // [rsp-40h] [rbp-48h] BYREF
  void *v50; // [rsp-30h] [rbp-38h] BYREF
  unsigned __int64 v51; // [rsp-28h] [rbp-30h]

  v51 = __readfsqword(0x28u);
  v44 = 0;
  v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v39, (__m128i)(unsigned __int64)"hint_data_t");
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v40 = 0;
  v42 = 0;
  v46 = 0;
  sub_2D1400((__int64)&v39, a2);
  v11 = _mm_load_si128(&v36);
  v50 = &unk_8BA740;
  v12 = *(_QWORD *)(a1 + 32);
  v13 = (__m128i *)(a1 + 40);
  v47 = 0;
  v48 = 1;
  v49 = v11;
  QT::QMetaObject::invokeMethodImpl(v12, a1 + 40, 1, 1, &v49, &v49.m128i_u64[1], &v50);
  v16 = v35;
  if ( (_QWORD)v40 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    v13 = &v37;
    v38 = 0;
    v37 = (__m128i)v17;
    sub_2D5B40(
      &v39,
      &v37,
      0.0,
      *(double *)v11.m128i_i64,
      (__m128)(unsigned __int64)"hint_data_t",
      a6,
      v14,
      v15,
      a9,
      a10);
  }
  v18 = v45;
  if ( v45 )
  {
    v19 = v46;
    if ( (_QWORD)v46 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 80 * v20);
        v22 = v21[4];
        if ( v22 )
        {
          v21[5] = 0;
          qfree(v22, v13->m128i_i8, v16);
        }
        v23 = v21[1];
        if ( v23 )
        {
          v21[2] = 0;
          qfree(v23, v13->m128i_i8, v16);
        }
        v18 = v45;
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v46 = 0;
    qfree(v18, v13->m128i_i8, v16);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43, v13->m128i_i8, v16);
  }
  v24 = v41;
  if ( v41 )
  {
    v25 = v42;
    if ( (_QWORD)v42 )
    {
      v26 = 0;
      do
      {
        v27 = (__int64 *)(v24 + 24 * v26);
        v28 = *v27;
        if ( *v27 )
        {
          v27[1] = 0;
          qfree(v28, v13->m128i_i8);
          v24 = v41;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v42 = 0;
    qfree(v24, v13->m128i_i8);
  }
  v29 = v39;
  if ( v39 )
  {
    v30 = v40;
    if ( (_QWORD)v40 )
    {
      v31 = 0;
      do
      {
        v32 = (__int64 *)(v29 + 24 * v31);
        v33 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v33, v13->m128i_i8);
          v29 = v39;
        }
        ++v31;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v29, v13->m128i_i8);
  }
  return v51 - __readfsqword(0x28u);
}
