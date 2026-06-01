unsigned __int64 __fastcall sub_2C2750(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  const __m128i *v14; // rax
  __m128 v15; // xmm2
  __m128d v16; // xmm3
  const __m128i *v17; // rdi
  __m128 v18; // xmm1
  __m128d v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  __m128i *v29; // r15
  __int64 (__fastcall *v30)(__int64, int); // rax
  char v31; // al
  __m128i *v32; // rdi
  __m128i v33; // xmm0
  __int64 (__fastcall *v34)(__int64); // rax
  int v35; // eax
  double v36; // xmm4_8
  double v37; // xmm5_8
  int v38; // eax
  __int64 v40; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v41; // [rsp+8h] [rbp-70h]
  __m128d v42; // [rsp+10h] [rbp-68h] BYREF
  __m128i v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+30h] [rbp-48h]
  unsigned __int64 v45; // [rsp+38h] [rbp-40h]

  v12 = *(_QWORD *)(a1 + 16);
  v45 = __readfsqword(0x28u);
  v14 = (const __m128i *)sub_1EA6A0(v12 + 384, a2, a3, a4, a5);
  v15 = 0;
  v42 = (__m128d)_mm_loadu_si128(v14);
  *(double *)v15.m128_u64 = (double)*(int *)(a1 + 340);
  v43 = _mm_loadu_si128(v14 + 1);
  v19 = _mm_sub_pd(*(__m128d *)(a1 + 344), v42);
  v44 = v14[2].m128i_i64[0];
  v16 = _mm_unpacklo_pd((__m128d)v15, (__m128d)v15);
  v17 = (const __m128i *)(*(_QWORD *)(a1 + 16) + 384LL);
  v18 = (__m128)v43.m128i_u64[0];
  v42 = _mm_add_pd(_mm_div_pd(v19, v16), v42);
  v19.m128d_f64[0] = (*(double *)(a1 + 360) - *(double *)v43.m128i_i64) / *(double *)v15.m128_u64
                   + *(double *)v43.m128i_i64;
  *(double *)v43.m128i_i64 = v19.m128d_f64[0];
  sub_1F14A0(v17, (const __m128i *)&v42, v20, v21, v22, v23);
  if ( *(_QWORD *)(a1 + 320) )
  {
    v24 = *(_QWORD *)(a1 + 440);
    if ( v24 )
      v24 = *(_QWORD *)(v24 + 8);
    v40 = v24;
    v41 = 0;
    v25 = node_iterator_goup(&v40);
    v26 = *(_QWORD *)v25;
    LODWORD(v25) = *(_DWORD *)(v25 + 8);
    v40 = v26;
    v41 = v25;
    while ( 1 )
    {
      v34 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL);
      v35 = v34 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(v24 + 184) : v34(v24);
      if ( v35 == v41 && v24 == v40 )
        break;
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 152LL))(v24);
      v28 = *(_QWORD *)(a1 + 320);
      v29 = (__m128i *)v27;
      v30 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v28 + 72LL);
      if ( v30 == interactive_graph_t__::vfunc_9 )
        v31 = sub_29AC50(v28, v41);
      else
        v31 = v30(v28, v41);
      v32 = v29;
      if ( v31 )
        v32 = (__m128i *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 152LL))(
                           *(_QWORD *)(a1 + 320),
                           v41);
      v33 = _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(
                ((v32->m128i_i32[0] + v32->m128i_i32[2]) / 2 - (v29->m128i_i32[0] + v29->m128i_i32[2]) / 2)
              / *(_DWORD *)(a1 + 340)),
              _mm_cvtsi32_si128(
                ((v32->m128i_i32[1] + v32->m128i_i32[3]) / 2 - (v29->m128i_i32[1] + v29->m128i_i32[3]) / 2)
              / *(_DWORD *)(a1 + 340)));
      v19 = (__m128d)_mm_add_epi32(_mm_unpacklo_epi64(v33, v33), _mm_loadu_si128(v29));
      *(__m128d *)v29 = v19;
      ++v41;
      node_iterator_goup(&v40);
    }
  }
  sub_1F4880(*(QT::QAbstractScrollArea **)(a1 + 16), 0);
  v38 = *(_DWORD *)(a1 + 340) - 1;
  *(_DWORD *)(a1 + 340) = v38;
  if ( v38 <= 0 )
    sub_2C2100((__m128i *)a1, 0, v19.m128d_f64[0], v18, v15, (__m128)v16, v36, v37, a11, a12);
  return v45 - __readfsqword(0x28u);
}
