__int64 __fastcall sub_3ABF10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char **a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __m128 v14; // xmm0
  char v17; // r14
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // r9
  const char *v21; // rsi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 result; // rax
  __int64 v31; // rdx
  const char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm0
  _BYTE *v36; // r14
  __m128i v37; // xmm0
  __int64 v38; // r14
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  char v42; // [rsp-8h] [rbp-188h]
  unsigned int v44; // [rsp+0h] [rbp-180h]
  unsigned int v45; // [rsp+0h] [rbp-180h]
  __m128i v46; // [rsp+8h] [rbp-178h] BYREF
  __m128i v47; // [rsp+18h] [rbp-168h] BYREF
  _BYTE *v48; // [rsp+28h] [rbp-158h] BYREF
  __m128i v49; // [rsp+30h] [rbp-150h]
  __int64 v50; // [rsp+40h] [rbp-140h]
  __m128i v51; // [rsp+48h] [rbp-138h]
  _QWORD v52[5]; // [rsp+58h] [rbp-128h] BYREF
  __m128 v53; // [rsp+80h] [rbp-100h]
  int v54; // [rsp+90h] [rbp-F0h]
  __int64 v55; // [rsp+98h] [rbp-E8h]
  char v56; // [rsp+A0h] [rbp-E0h]
  __m128i v57; // [rsp+A8h] [rbp-D8h] BYREF
  _BYTE *v58; // [rsp+B8h] [rbp-C8h] BYREF
  __m128i v59; // [rsp+C0h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-B0h]
  __m128i v61; // [rsp+D8h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-98h] BYREF
  __m128i v63; // [rsp+F0h] [rbp-90h] BYREF
  __m128i v64; // [rsp+100h] [rbp-80h] BYREF
  __m128i v65; // [rsp+110h] [rbp-70h] BYREF
  int v66; // [rsp+120h] [rbp-60h]
  __int64 v67; // [rsp+128h] [rbp-58h]
  char v68; // [rsp+130h] [rbp-50h]
  unsigned __int64 v69; // [rsp+140h] [rbp-40h]

  v14 = 0;
  v69 = __readfsqword(0x28u);
  v53.m128_u64[1] = 1;
  v48 = nullptr;
  v50 = 0;
  v54 = -1;
  v55 = 0;
  v56 = 0;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  *(_OWORD *)v52 = 0;
  if ( a3 == -1 )
  {
    v57 = (__m128i)a5;
    v58 = nullptr;
    v59 = 0;
    v58 = (_BYTE *)qvector_reserve(&v58, 0, 1, 1);
    v59.m128i_i64[0] = 1;
    *v58 = 0;
    v60 = 0;
    v62 = 0;
    v61 = 0;
    copy_tinfo_t(&v62, a4, v31);
    v32 = *a4;
    v65.m128i_i64[1] = 1;
    v63.m128i_i64[0] = 0;
    v66 = -1;
    v67 = 0;
    v68 = 0;
    v33 = 8 * get_tinfo_size(0, v32, 0);
    v35 = _mm_loadl_epi64(&v57);
    a9 = (__m128)(unsigned __int64)v33;
    v36 = v58;
    v57.m128i_i64[1] = v33;
    v58 = nullptr;
    v47 = _mm_unpacklo_epi64(v35, (__m128i)(unsigned __int64)v33);
    v37 = _mm_loadu_si128(&v59);
    v59 = 0;
    if ( v48 )
    {
      v46 = v37;
      v49.m128i_i64[0] = 0;
      qfree(v48, v32);
      v37 = _mm_load_si128(&v46);
    }
    a8 = 0;
    v48 = v36;
    v49 = v37;
    v38 = v60;
    v39 = _mm_load_si128(&v61);
    v60 = 0;
    v61 = 0;
    if ( v50 )
    {
      v46 = v39;
      v51.m128i_i64[0] = 0;
      qfree(v50, v32);
      v39 = _mm_load_si128(&v46);
    }
    v50 = v38;
    v51 = v39;
    copy_tinfo_t(v52, &v62, v34);
    v40 = _mm_loadu_si128(&v63);
    v54 = v66;
    *(__m128i *)&v52[1] = v40;
    v41 = _mm_loadu_si128(&v64);
    v55 = v67;
    *(__m128i *)&v52[3] = v41;
    v14 = (__m128)_mm_loadu_si128(&v65);
    v56 = v68;
    v53 = v14;
    clear_tinfo_t(&v62);
    if ( v60 )
    {
      v61.m128i_i64[0] = 0;
      *(double *)v14.m128_u64 = qfree(v60, (const char *)&v62);
    }
    if ( v58 )
    {
      v59.m128i_i64[0] = 0;
      *(double *)v14.m128_u64 = qfree(v58, (const char *)&v62, *(double *)v14.m128_u64);
    }
    if ( a6 )
      v47.m128i_i64[1] = 1;
  }
  v17 = 1;
  v18 = 320;
  v19 = *(_QWORD *)(a1 + 208) + 8LL;
  do
  {
    v20 = v18;
    if ( a3 != -1 )
    {
LABEL_4:
      v21 = byte_9 + 3;
      v22 = set_tinfo_property4(v19, 12, a3, a4, 0, v20);
      if ( v22 != -13 )
        goto LABEL_9;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v21 = byte_9;
      v22 = set_tinfo_property4(v19, 9, &v47, 1, -1, v20);
      if ( v22 != -13 )
        break;
LABEL_5:
      if ( !v17 )
        break;
      if ( (unsigned int)sub_330780(a2) != 1 )
        goto LABEL_11;
      v18 = 324;
      v17 = 0;
      v20 = 324;
      if ( a3 != -1 )
        goto LABEL_4;
    }
LABEL_9:
    if ( v22 != -21 )
      goto LABEL_12;
    v21 = "Please enter a unique field name";
  }
  while ( (unsigned __int8)sub_3AB6E0(
                             (int)&v48,
                             (int)"Please enter a unique field name",
                             v23,
                             v24,
                             v25,
                             v26,
                             v14,
                             a8,
                             a9,
                             a10,
                             v27,
                             v28,
                             a13,
                             a14,
                             v42) );
LABEL_11:
  v22 = 1;
LABEL_12:
  v44 = v22;
  clear_tinfo_t(v52);
  result = v44;
  if ( v50 )
  {
    v51.m128i_i64[0] = 0;
    qfree(v50, v21);
    result = v44;
  }
  if ( v48 )
  {
    v45 = result;
    v49.m128i_i64[0] = 0;
    qfree(v48, v21);
    return v45;
  }
  return result;
}
