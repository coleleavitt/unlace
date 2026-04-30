__int64 __fastcall sub_2F1280(
        unsigned int a1,
        __int64 *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  __int64 v14; // rbp
  unsigned int v15; // r13d
  __m128 v17; // xmm1
  void *v18; // r12
  __m128 v19; // xmm2
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned __int8 v22; // al
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __m128i v31; // [rsp+0h] [rbp-D8h] BYREF
  void *v32; // [rsp+10h] [rbp-C8h] BYREF
  __m128 v33; // [rsp+18h] [rbp-C0h]
  __int64 v34; // [rsp+28h] [rbp-B0h]
  void *src; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+38h] [rbp-A0h]
  char v37; // [rsp+48h] [rbp-90h]
  __int64 v38; // [rsp+4Ch] [rbp-8Ch]
  __int64 v39; // [rsp+60h] [rbp-78h] BYREF
  __int128 v40; // [rsp+68h] [rbp-70h]
  __int64 v41; // [rsp+78h] [rbp-60h]
  __int128 v42; // [rsp+80h] [rbp-58h]
  __int64 v43; // [rsp+90h] [rbp-48h]
  __int128 v44; // [rsp+98h] [rbp-40h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-30h]

  v45 = __readfsqword(0x28u);
  v37 = 0;
  src = nullptr;
  v38 = 0;
  v36 = 0;
  sub_17E750((__int64)&src, a2, 1, 0, 0.0, a4, a5, a6, a7, a8, a9, a10, a13, a14);
  v14 = v36;
  v15 = 0;
  if ( (_QWORD)v36 )
  {
    v32 = nullptr;
    v33 = 0;
    v34 = -1;
    v17 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v36, (__m128i)(unsigned __int64)v36);
    v18 = (void *)qalloc_or_throw(8 * v36);
    v31 = (__m128i)v17;
    memcpy(v18, src, 8 * v14);
    v19 = (__m128)_mm_load_si128(&v31);
    a2 = &v39;
    v32 = v18;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v33 = v19;
    v40 = 0;
    v42 = 0;
    v44 = 0;
    v22 = sub_2EF430(a1, &v39, (__int64)&v32, 0.0, v17, v19, a6, v20, v21, a9, a10);
    v23 = v43;
    v15 = v22;
    if ( v43 )
    {
      v24 = v44;
      if ( (_QWORD)v44 )
      {
        v25 = 0;
        v26 = 0;
        do
        {
          v27 = (__int64 *)(v23 + v25);
          v28 = *(_QWORD *)(v23 + v25 + 64);
          if ( v28 )
          {
            v27[9] = 0;
            qfree(v28, (const char *)&v39);
          }
          v29 = v27[4];
          if ( v29 )
          {
            v27[5] = 0;
            qfree(v29, (const char *)&v39);
          }
          v30 = *v27;
          if ( *v27 )
          {
            v27[1] = 0;
            qfree(v30, (const char *)&v39);
          }
          ++v26;
          v23 = v43;
          v25 += 88;
        }
        while ( v24 != v26 );
      }
      *(_QWORD *)&v44 = 0;
      qfree(v23, (const char *)&v39);
    }
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41, (const char *)&v39);
    }
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39, (const char *)&v39);
    }
    if ( v32 )
    {
      v33.m128_u64[0] = 0;
      qfree(v32, (const char *)&v39);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v36 = 0;
    qfree(src, (const char *)a2);
  }
  return v15;
}
