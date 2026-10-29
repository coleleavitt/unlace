unsigned __int64 __fastcall sub_295810(
        int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        double a7)
{
  double v7; // xmm1_8
  __int64 (__fastcall *v10)(__int64, int); // rax
  __int64 v11; // r12
  __m128d v12; // xmm0
  double v13; // xmm3_8
  double v14; // xmm0_8
  double v15; // xmm3_8
  __m128i v16; // xmm1
  __int64 v17; // r13
  __int64 (__fastcall *v18)(__int64, int, int); // rax
  int v19; // ebp
  _DWORD *v20; // r8
  __int64 v21; // r9
  int *v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  double v26; // xmm2_8
  double v27; // xmm5_8
  double v28; // xmm2_8
  unsigned int v29; // ecx
  double v30; // xmm2_8
  double v31; // xmm2_8
  unsigned int v32; // r8d
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 (__fastcall *v35)(__int64, unsigned int); // rax
  __int64 (__fastcall *v36)(__int64); // rax
  int v37; // eax
  __m128i *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  double v41; // [rsp+0h] [rbp-B8h]
  __int64 v42; // [rsp+8h] [rbp-B0h]
  double v46; // [rsp+38h] [rbp-80h]
  unsigned int v47; // [rsp+48h] [rbp-70h]
  unsigned int v48; // [rsp+48h] [rbp-70h]
  unsigned __int64 v49; // [rsp+50h] [rbp-68h]
  unsigned __int64 v50; // [rsp+58h] [rbp-60h]
  double cosx; // [rsp+60h] [rbp-58h] BYREF
  double v52; // [rsp+68h] [rbp-50h] BYREF
  int v53; // [rsp+74h] [rbp-44h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-40h]

  v7 = a7;
  v54 = __readfsqword(0x28u);
  v10 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
  if ( v10 == interactive_graph_t__::vfunc_12 )
  {
    v11 = *(int *)(*((_QWORD *)a1 + 22) + 24LL * (int)a2 + 8);
  }
  else
  {
    v7 = a7;
    v11 = ((int (__fastcall *)(int *, _QWORD, double, double))v10)(a1, a2, a7, a7);
  }
  v41 = v7;
  if ( (_DWORD)v11 )
  {
    v12.m128d_f64[0] = (1.0 - 2.0 / (double)(int)v11) * 1.570796326794897;
    v13 = cos(COERCE_DOUBLE(*(_QWORD *)&v12.m128d_f64[0] & *(_QWORD *)&_mm_cmplt_sd((__m128d)0LL, v12).m128d_f64[0]));
    v14 = v13 + 1.0;
    v15 = v13 * v7 / (v13 + 1.0);
    *(double *)v16.m128i_i64 = v7 + v15;
    if ( (int)v11 > 0 )
    {
      v17 = 0;
      v46 = v41 + v15;
      v42 = 24LL * (int)a2;
      do
      {
        v18 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
        if ( v18 == interactive_graph_t__::vfunc_14 )
          v19 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 22) + v42) + 4 * v17);
        else
          v19 = ((__int64 (__fastcall *)(int *, _QWORD, _QWORD, double, double))v18)(
                  a1,
                  a2,
                  (unsigned int)v17,
                  v14,
                  *(double *)v16.m128i_i64);
        v20 = *(_DWORD **)a4;
        v21 = *(_QWORD *)(a4 + 8);
        v53 = v19;
        v22 = &v20[v21];
        if ( v22 == sub_28FB80(v20, (__int64)v22, &v53) )
        {
          if ( *(_QWORD *)(a4 + 16) < (unsigned __int64)(v24 + 1) )
          {
            v39 = qvector_reserve(a4, v23, v24 + 1, 4);
            v40 = *(_QWORD *)(a4 + 8);
            *(_QWORD *)a4 = v39;
            v22 = (int *)(v39 + 4 * v40);
          }
          *v22 = v19;
          ++*(_QWORD *)(a4 + 8);
          sincos((double)(2 * (int)v17) * 3.141592653589793 / (double)(int)v11 + 1000.0, &v52, &cosx);
          v26 = (double)(int)a3;
          v27 = cosx * (v46 + 1000.0);
          if ( (int)a3 < 0 )
            v28 = v26 - v27;
          else
            v28 = v26 + v27;
          v29 = (int)v28;
          v14 = v52 * (v46 + 1000.0);
          v30 = (double)SHIDWORD(a3);
          if ( a3 < 0 )
            v31 = v30 - v14;
          else
            v31 = v30 + v14;
          v32 = (int)v31;
          v33 = v19;
          v34 = ((unsigned __int64)(unsigned int)(int)v31 << 32) | v29;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 13) + v19) & 2) == 0 )
          {
            v35 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
            if ( v35 == interactive_graph_t__::vfunc_19 )
            {
              v36 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
              if ( v36 == interactive_graph_t__::vfunc_7 )
              {
                v37 = a1[46];
              }
              else
              {
                v50 = ((unsigned __int64)(unsigned int)(int)v31 << 32) | v29;
                v48 = v29;
                v37 = ((__int64 (__fastcall *)(int *, double, double))v36)(a1, v14, *(double *)v16.m128i_i64);
                v34 = v50;
                v33 = v19;
                v32 = (int)v31;
                v29 = v48;
              }
              if ( v19 >= v37 )
                sub_16B930((__int64)"nrect(%d) failed", v19);
              v38 = (__m128i *)(*((_QWORD *)a1 + 28) + 16 * v33);
            }
            else
            {
              v49 = ((unsigned __int64)(unsigned int)(int)v31 << 32) | v29;
              v47 = v29;
              v38 = (__m128i *)((__int64 (__fastcall *)(int *, _QWORD, double, double))v35)(
                                 a1,
                                 (unsigned int)v19,
                                 v14,
                                 *(double *)v16.m128i_i64);
              v34 = v49;
              v32 = (int)v31;
              v29 = v47;
            }
            v16 = _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(v29 + v38->m128i_i32[2] - v38->m128i_i32[0]),
                    _mm_cvtsi32_si128(v32 + v38->m128i_i32[3] - v38->m128i_i32[1]));
            *v38 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v32)), v16);
            v14 = v15;
            sub_295810(a1, (unsigned int)v19, v34, a4, a5, a6, v15);
          }
        }
        ++v17;
      }
      while ( v17 != v11 );
    }
  }
  return v54 - __readfsqword(0x28u);
}
