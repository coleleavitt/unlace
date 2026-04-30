unsigned __int64 __fastcall sub_2C5600(
        __int64 a1,
        __int64 a2,
        __m128i a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // r8d
  __int64 v12; // rcx
  bool v13; // zf
  __m128 v14; // xmm2
  __m128d v15; // xmm1
  __m128 v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __m128 si128; // xmm0
  _QWORD *v25; // r12
  double *v26; // rax
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // rax
  unsigned int v30; // r13d
  int v31; // ebp
  __int64 (*v32)(); // rax
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  __int64 v35; // rcx
  double v36; // xmm4_8
  double v37; // xmm5_8
  _DWORD *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // kr00_4
  int v47; // r12d
  double *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // edx
  __int64 v52; // [rsp+0h] [rbp-138h]
  double v53; // [rsp+8h] [rbp-130h]
  int v54; // [rsp+10h] [rbp-128h]
  int v55[2]; // [rsp+18h] [rbp-120h] BYREF
  int v56[4]; // [rsp+20h] [rbp-118h] BYREF
  int v57[4]; // [rsp+30h] [rbp-108h] BYREF
  int v58[2]; // [rsp+40h] [rbp-F8h]
  int v59; // [rsp+48h] [rbp-F0h]
  int v60[4]; // [rsp+50h] [rbp-E8h] BYREF
  int v61[4]; // [rsp+60h] [rbp-D8h]
  int v62[2]; // [rsp+70h] [rbp-C8h]
  int v63; // [rsp+80h] [rbp-B8h] BYREF
  int v64[2]; // [rsp+84h] [rbp-B4h]
  int v65; // [rsp+8Ch] [rbp-ACh]
  unsigned int v66; // [rsp+90h] [rbp-A8h]
  int v67[4]; // [rsp+94h] [rbp-A4h]
  int v68; // [rsp+A4h] [rbp-94h]
  int v69[4]; // [rsp+B0h] [rbp-88h] BYREF
  int v70[4]; // [rsp+C0h] [rbp-78h]
  int v71[4]; // [rsp+D0h] [rbp-68h]
  __int64 v72[2]; // [rsp+E0h] [rbp-58h]
  __int128 v73; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v74; // [rsp+108h] [rbp-30h]

  v10 = *(_DWORD *)(a1 + 384);
  v74 = __readfsqword(0x28u);
  if ( !v10 )
  {
    sub_1764F0(a1, a2, a3, a4);
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v13 = *(_DWORD *)(a2 + 64) == 1;
    v14 = (__m128)_mm_unpacklo_epi64(a3, a4);
    v15 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), (__m128d)v14);
    *(_QWORD *)v55 = _mm_cvttpd_epi32(
                       _mm_add_pd(
                         _mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), v15),
                         (__m128d)v14)).m128i_u64[0];
    if ( v13 )
    {
      v13 = *(_DWORD *)(a1 + 224) == -1;
      *(_QWORD *)v58 = 0;
      *(_OWORD *)v57 = 0;
      if ( !v13 )
      {
        if ( (~*(_DWORD *)(a2 + 32) & 0x6000000) == 0 )
        {
          v38 = *(_DWORD **)(QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 16)) + 32LL);
          v43 = v38[8];
          v44 = (unsigned int)(v43 + 1 - v38[6]);
          if ( v43 + 1 - v38[6] > 0 && *(_DWORD *)(a1 + 236) - *(_DWORD *)(a1 + 228) > 0 )
          {
            a6 = 0;
            v46 = v38[7] + 1 - v38[5];
            v45 = (unsigned int)(v46 >> 31);
            LODWORD(v45) = v46 % (int)v44;
            *(double *)a6.m128_u64 = (double)(v46 / (int)v44);
            v47 = v46 / (int)v44;
            v48 = (double *)sub_1EA6C0(
                              *(_QWORD *)(a1 + 16) + 384LL,
                              a2,
                              v45,
                              v44,
                              v39,
                              v40,
                              (__m128)0LL,
                              (__m128)v15,
                              v14,
                              a6,
                              v41,
                              v42,
                              a9,
                              a10,
                              v52,
                              a6.m128_i32[0],
                              v54,
                              v55[0],
                              *(__int64 *)v56,
                              *(__int64 *)&v56[2],
                              *(__int64 *)v57,
                              v57[2],
                              v58[0],
                              v59,
                              v60[0],
                              v60[2],
                              *(__int64 *)v61);
            v49 = sub_2B3240(
                    v48,
                    *(_DWORD *)(a1 + 224),
                    *(_DWORD *)(a1 + 228),
                    *(_DWORD *)(a1 + 232) - 1,
                    *(_DWORD *)(a1 + 236) - 1);
            *(_QWORD *)&v69[2] = v50;
            *(_QWORD *)v69 = v49;
            if ( v47 >= ((int)v50 - (int)v49) / (HIDWORD(v50) - HIDWORD(v49)) )
            {
              LODWORD(v49) = ((int)v49 + (int)v50) / 2;
              v51 = (int)((double)(HIDWORD(v50) - HIDWORD(v49)) * v53) / -2;
              v69[0] = v51 + v49;
              v69[2] = v49 - v51;
            }
            else
            {
              LODWORD(v50) = (int)((double)((int)v50 - (int)v49) * v53) / -2;
              v69[1] = v50 + (HIDWORD(v49) + HIDWORD(v50)) / 2;
              v69[3] = (HIDWORD(v49) + HIDWORD(v50)) / 2 - v50;
            }
            sub_2B9200(a1, (__m128d *)v57, byte_8CCA9B, v69);
          }
        }
        *(_DWORD *)(a1 + 224) = -1;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 760LL))(*(_QWORD *)(a1 + 16));
      }
      if ( *(_QWORD *)(a1 + 304) )
        sub_2B41C0((_QWORD *)a1, (char *)a2);
      if ( *(_BYTE *)(a1 + 288) )
      {
        sub_2B79C0(a1);
        *(_BYTE *)(a1 + 288) = 0;
      }
      v16 = (__m128)*(unsigned __int64 *)v57;
      if ( *(double *)v57 > 0.0 )
      {
        sub_2B4480((__int64)v69, a1, (__int64)v57, v12);
        sub_2C29E0(a1, (__int64)v69, 0, v35, 0.0, v16, v14, a6, v36, v37, a9, a10);
      }
      else
      {
        sub_466DD0(a1);
        v17 = _mm_loadu_si128((const __m128i *)(a1 + 88));
        *(_QWORD *)v62 = *(_QWORD *)(a1 + 120);
        *(__m128i *)v60 = v17;
        *(__m128i *)v61 = _mm_loadu_si128((const __m128i *)(a1 + 104));
        sub_175DB0(a1 + 72, (__int64 *)v55);
        if ( v60[0] == 3 )
        {
          si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
          v25 = *(_QWORD **)(a1 + 440);
          *(_QWORD *)v64 = 0;
          v68 = -1;
          *(__m128 *)v67 = si128;
          if ( v25 )
            v25 = (_QWORD *)v25[1];
          v26 = (double *)sub_1EA6C0(
                            *(_QWORD *)(a1 + 16) + 384LL,
                            (__int64)v55,
                            v18,
                            v19,
                            v20,
                            v21,
                            si128,
                            v16,
                            v14,
                            a6,
                            v22,
                            v23,
                            a9,
                            a10,
                            v52,
                            SLODWORD(v53),
                            v54,
                            v55[0],
                            *(__int64 *)v56,
                            *(__int64 *)&v56[2],
                            *(__int64 *)v57,
                            v57[2],
                            v58[0],
                            v59,
                            v60[0],
                            v60[2],
                            *(__int64 *)v61);
          if ( (unsigned __int8)sub_2BC760(
                                  (_QWORD *)a1,
                                  (__int64)&v63,
                                  0,
                                  0,
                                  (__int64)v25,
                                  v26,
                                  *(double *)si128.m128_u64,
                                  v16,
                                  v14,
                                  a6,
                                  v27,
                                  v28,
                                  a9,
                                  a10,
                                  (__m128i *)v55,
                                  1u)
            && (unsigned __int8)sub_2BC6B0(&v63, v60) )
          {
            v29 = *(_QWORD *)a1;
            v30 = 0;
            *(_OWORD *)v69 = 0;
            v31 = v65;
            *(_OWORD *)v70 = 0;
            *(_OWORD *)v71 = 0;
            *(_OWORD *)v72 = 0;
            v73 = 0;
            v32 = *(__int64 (**)())(v29 + 640);
            if ( v32 != sub_2B2460 )
              v30 = ((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD))v32)(a1, v25, (unsigned int)v65);
            if ( v31 >= 0 )
            {
              if ( v25 )
              {
                *(__m128i *)v56 = _mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v25 + 152LL))(
                                                                     v25,
                                                                     (unsigned int)v31));
                if ( (unsigned __int8)sub_2B9380(
                                        a1,
                                        (__int64)v69,
                                        (const __m128i *)v56,
                                        (unsigned int)v31,
                                        1,
                                        v30,
                                        *(double *)v56,
                                        v16,
                                        v14,
                                        a6,
                                        v33,
                                        v34,
                                        a9,
                                        a10) )
                {
                  if ( v71[0] < v71[2] && v71[1] < v71[3] )
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 728LL))(
                      a1,
                      (unsigned int)v65,
                      v66);
                }
              }
            }
          }
        }
      }
    }
  }
  return v74 - __readfsqword(0x28u);
}
