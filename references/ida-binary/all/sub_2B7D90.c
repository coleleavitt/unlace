unsigned __int64 __fastcall sub_2B7D90(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  _QWORD *v11; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  unsigned __int64 *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // r12
  unsigned __int64 *v30; // rax
  __m128i v31; // xmm0
  __m128d v32; // xmm1
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r12
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-68h]
  __int64 v39; // [rsp+0h] [rbp-68h]
  __int64 v40; // [rsp+8h] [rbp-60h] BYREF
  int v41; // [rsp+10h] [rbp-58h]
  int v42; // [rsp+18h] [rbp-50h]
  int v43; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v44[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v45; // [rsp+30h] [rbp-38h]
  unsigned __int64 v46; // [rsp+38h] [rbp-30h]
  int v47; // [rsp+40h] [rbp-28h]
  int v48; // [rsp+48h] [rbp-20h]
  int v49; // [rsp+50h] [rbp-18h]
  int v50; // [rsp+58h] [rbp-10h]
  __int64 v51; // [rsp+60h] [rbp-8h]

  v11 = *(_QWORD **)(a1 + 440);
  v40 = a2;
  v46 = __readfsqword(0x28u);
  v43 = -1;
  if ( v11 )
    v11 = (_QWORD *)v11[1];
  v13 = sub_2B4EB0(a1);
  v20 = (unsigned __int64 *)sub_1EA6C0(
                              *(_QWORD *)(a1 + 16) + 384LL,
                              a2,
                              v14,
                              v15,
                              v16,
                              v17,
                              a4,
                              a5,
                              a6,
                              a7,
                              v18,
                              v19,
                              a10,
                              a11,
                              v38,
                              v40,
                              v41,
                              v42,
                              v13,
                              v14,
                              v45,
                              v46,
                              v47,
                              v48,
                              v49,
                              v50,
                              v51);
  sub_2B6340(a1, (__int64)v11, v20, (int *)v44, a3->m128i_i64, &v40, &v43);
  v21 = v40;
  v24 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64))(*v11 + 160LL))(v11, v40);
  if ( v24 )
  {
    v29 = v43;
    if ( v43 >= 0 )
    {
      v30 = (unsigned __int64 *)sub_1EA6C0(
                                  *(_QWORD *)(a1 + 16) + 384LL,
                                  v21,
                                  v22,
                                  v23,
                                  v25,
                                  v26,
                                  a4,
                                  a5,
                                  a6,
                                  a7,
                                  v27,
                                  v28,
                                  a10,
                                  a11,
                                  v39,
                                  v40,
                                  v41,
                                  v42,
                                  v44[0],
                                  v44[1],
                                  v45,
                                  v46,
                                  v47,
                                  v48,
                                  v49,
                                  v50,
                                  v51);
      v31 = _mm_loadl_epi64(a3);
      v32 = (__m128d)*v30;
      if ( v32.m128d_f64[0] > 0.0 )
        v31.m128i_i64[0] = _mm_cvttpd_epi32(
                             _mm_add_pd(
                               _mm_div_pd(_mm_cvtepi32_pd(v31), _mm_unpacklo_pd(v32, v32)),
                               *(__m128d *)(v30 + 1))).m128i_u64[0];
      v33 = v24[3];
      v34 = v24[2];
      v35 = 8 * v29;
      if ( v24[4] < (unsigned __int64)(v33 + 1) )
      {
        v37 = qvector_reserve(v24 + 2, v34, v33 + 1, 8);
        v33 = v24[3];
        v24[2] = v37;
        v34 = v37;
      }
      memmove((void *)(v34 + v35 + 8), (const void *)(v34 + v35), 8 * v33 - v35);
      *(_QWORD *)(v34 + v35) = v31.m128i_i64[0];
      ++v24[3];
    }
  }
  return v46 - __readfsqword(0x28u);
}
