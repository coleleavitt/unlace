void __fastcall sub_223CE0(__int64 a1, unsigned __int64 a2, double a3, __m128i a4)
{
  __m128i v4; // xmm5
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  _BOOL8 v9; // r12
  __m128i v10; // xmm6
  unsigned __int64 v11; // r11
  __int64 v12; // r15
  int v13; // r8d
  int v14; // eax
  __int64 v15; // r13
  const __m128i *v16; // r12
  __m128 v17; // xmm2
  __m128i v18; // xmm3
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __m128i v21; // xmm4
  double v22; // xmm5_8
  __int64 v23; // rsi
  __m128 v24; // xmm7
  __m128i v25; // xmm4
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // r13
  __int64 *v29; // r10
  __int64 v30; // r11
  unsigned __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 *v33; // r14
  __int64 v34; // r15
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rdx
  bool v38; // sf
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rax
  __m128i v43; // xmm3
  __m128i v44; // xmm2
  int v45; // r8d
  const double *v46; // r9
  __int64 v47; // rcx
  __m128i v48; // xmm0
  __int64 v49; // rcx
  double v50; // xmm5_8
  __m128i v51; // xmm4
  __m128i v52; // xmm3
  __m128 v53; // xmm2
  __m128i v54; // xmm1
  __m128 v55; // xmm7
  __m128i v56; // xmm3
  __m128i v57; // xmm4
  __m128i v58; // xmm0
  __m128i v59; // xmm4
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rax
  double v63; // xmm5_8
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rdx
  unsigned __int64 v68; // r13
  __m128i v69; // xmm1
  unsigned __int64 v70; // rax
  __m128i v71; // xmm0
  __m128i v72; // kr50_16
  __m128 v73; // xmm0
  __m128 v74; // xmm2
  __m128 v75; // xmm3
  int v76; // eax
  __m128i v77; // xmm2
  __m128i v78; // xmm3
  __m128i v79; // xmm1
  __m128i v80; // xmm0
  void **v81; // rax
  unsigned __int64 v82; // rbx
  void **v83; // r14
  __int64 v84; // [rsp+8h] [rbp-228h]
  __m128i v85; // [rsp+10h] [rbp-220h] BYREF
  unsigned __int64 v86; // [rsp+20h] [rbp-210h]
  __int64 v87; // [rsp+28h] [rbp-208h]
  __int64 v88; // [rsp+30h] [rbp-200h]
  __int64 v89; // [rsp+38h] [rbp-1F8h] BYREF
  void *v90; // [rsp+40h] [rbp-1F0h]
  __int64 v91; // [rsp+48h] [rbp-1E8h]
  __int64 v92; // [rsp+50h] [rbp-1E0h]
  __int64 v93; // [rsp+58h] [rbp-1D8h]
  __int64 v94; // [rsp+60h] [rbp-1D0h] BYREF
  unsigned __int64 v95; // [rsp+68h] [rbp-1C8h] BYREF
  __m128 v96; // [rsp+70h] [rbp-1C0h] BYREF
  __m128i v97; // [rsp+80h] [rbp-1B0h] BYREF
  __m128i v98; // [rsp+90h] [rbp-1A0h] BYREF
  __m128i v99; // [rsp+A0h] [rbp-190h] BYREF
  unsigned __int64 v100; // [rsp+B0h] [rbp-180h] BYREF
  __m128 *v101; // [rsp+B8h] [rbp-178h]
  __m128i v102; // [rsp+C0h] [rbp-170h] BYREF
  __m128i v103; // [rsp+D0h] [rbp-160h] BYREF
  __m128 v104; // [rsp+E0h] [rbp-150h] BYREF
  __m128i v105; // [rsp+F0h] [rbp-140h] BYREF
  __m128i si128; // [rsp+100h] [rbp-130h] BYREF
  __m128i v107; // [rsp+110h] [rbp-120h]
  __m128i v108; // [rsp+120h] [rbp-110h] BYREF
  __m128 v109; // [rsp+130h] [rbp-100h]
  __m128 v110; // [rsp+140h] [rbp-F0h] BYREF
  __m128i v111; // [rsp+150h] [rbp-E0h]
  __m128i v112; // [rsp+160h] [rbp-D0h] BYREF
  __m128i v113; // [rsp+170h] [rbp-C0h]
  __m128 v114; // [rsp+180h] [rbp-B0h] BYREF
  __m128i v115; // [rsp+190h] [rbp-A0h]
  __m128 v116; // [rsp+1A0h] [rbp-90h] BYREF
  __m128i v117; // [rsp+1B0h] [rbp-80h]
  __int128 v118; // [rsp+1C0h] [rbp-70h]
  __int128 v119; // [rsp+1D0h] [rbp-60h]
  __int128 v120; // [rsp+1E0h] [rbp-50h]
  unsigned __int64 v121; // [rsp+1F8h] [rbp-38h]

  a2 = (int)a2;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 120);
  v121 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 88);
  v7 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 352) = -1;
  v8 = *(_QWORD *)(a1 + 64);
  v9 = v5 != 0;
  v99 = v4;
  v10 = _mm_srli_si128(v4, 8);
  v11 = 16 * (((__int64)(v5 - v6) >> 3) - v9) + (_mm_sub_epi64(v4, v10).m128i_i64[0] >> 5) + ((__int64)(v7 - v8) >> 5);
  v12 = v11;
  if ( !(_DWORD)a2 )
    a2 = 1000000;
  *(_QWORD *)(a1 + 128) = a2;
  if ( a2 < v11 )
  {
    sub_21AB60((_QWORD *)a1, a2);
    v13 = *(_DWORD *)(a1 + 136);
    v14 = v12 - 1;
    v15 = v13 + 1 - *(_QWORD *)(a1 + 128);
    if ( v15 <= 0 )
    {
      if ( v13 >= v14 )
        return;
      v42 = v12;
      if ( v15 )
      {
        v42 = v15 + v12;
        v12 += v15;
      }
      if ( v42 == -1 )
        return;
      v15 = -1;
    }
    else if ( v13 >= v14 || v12 == -1 )
    {
      v98.m128i_i64[0] = (__int64)&v110;
      v16 = (const __m128i *)(a1 + 48);
      v101 = &v114;
      v96.m128_u64[0] = (unsigned __int64)&v116;
      goto LABEL_11;
    }
    v43 = _mm_loadu_si128((const __m128i *)(a1 + 64));
    v44 = _mm_loadu_si128((const __m128i *)(a1 + 80));
    v98.m128i_i64[0] = (__int64)&v110;
    v16 = (const __m128i *)(a1 + 48);
    v110 = (__m128)v43;
    v111 = v44;
    sub_20AD50(&v110, v12);
    v102 = v43;
    v103 = v44;
    sub_20AD50(&v102, v45);
    v108 = _mm_load_si128(&v102);
    a4 = _mm_load_si128(&v103);
    v109 = (__m128)a4;
    sub_20AD50(&v108, 1);
    v47 = *(_QWORD *)v46 + 512LL;
    v114 = _mm_loadh_ps(v46);
    v48 = (__m128i)(unsigned __int64)v47;
    v49 = *(_QWORD *)v109.m128_u64[1];
    v115 = _mm_unpacklo_epi64(v48, (__m128i)(unsigned __int64)v46);
    v116 = _mm_loadh_ps((const double *)v109.m128_u64[1]);
    v101 = &v114;
    v96.m128_u64[0] = (unsigned __int64)&v116;
    v117 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v49 + 512), (__m128i)v109.m128_u64[1]);
    sub_2230A0(
      (__m128 *)&v112,
      (const __m128i *)(a1 + 48),
      (__int64)&v116,
      (__int64)&v114,
      *(double *)v117.m128i_i64,
      *(double *)a4.m128i_i64,
      *(double *)v44.m128i_i64,
      *(double *)v43.m128i_i64,
      (__m128i)(unsigned __int64)v46,
      v50,
      (__m128)v10,
      (__m128)v109.m128_u64[1]);
    if ( v15 == -1 )
      return;
LABEL_11:
    v17 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 80));
    v18 = _mm_loadl_epi64((const __m128i *)(a1 + 64));
    v110 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 64));
    v111 = (__m128i)v17;
    sub_20AD50(v98.m128i_i64[0], v15);
    v19 = *(_QWORD *)v111.m128i_i64[1] + 512LL;
    v114 = _mm_loadh_ps((const double *)v111.m128i_i64[1]);
    v115 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)v111.m128i_u64[1]);
    v20 = *(_QWORD *)_mm_movehl_ps((__m128)v111.m128i_u64[1], v17).m128_u64[0];
    v116 = (__m128)_mm_unpacklo_epi64(v18, (__m128i)v20);
    v117 = _mm_unpacklo_epi64((__m128i)(v20 + 512), v21);
    sub_2230A0(
      (__m128 *)&v112,
      v16,
      v96.m128_i64[0],
      (__int64)v101,
      *(double *)v117.m128i_i64,
      *(double *)a4.m128i_i64,
      *(double *)v17.m128_u64,
      *(double *)v18.m128i_i64,
      v21,
      v22,
      (__m128)v10,
      (__m128)v20);
    *(_DWORD *)(a1 + 136) -= v15;
    return;
  }
  if ( v11 < a2 )
  {
    if ( v11 )
    {
      v23 = *(int *)(a1 + 136);
      if ( (int)v23 < (int)v11 - 1 )
      {
        v24 = (__m128)v5;
        v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 112)), (__m128i)v5);
        v104 = _mm_loadh_ps((const double *)(a1 + 72));
        v85 = v25;
        v87 = v11 - v23 - 1;
        v105 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v6);
        sub_20AD50(&v104, v23);
        si128 = _mm_load_si128((const __m128i *)&v104);
        v107 = _mm_load_si128(&v105);
        sub_20AD50(&si128, 1);
        if ( (unsigned __int64)(((v107.m128i_i64[0] - si128.m128i_i64[0]) >> 5)
                              + v26
                              + 16 * (((v27 - v107.m128i_i64[1]) >> 3) - v9)) >> 58 )
          std::__throw_length_error("cannot create std::deque larger than max_size()");
        v86 = si128.m128i_u64[1];
        v97.m128i_i64[0] = si128.m128i_i64[0];
        v101 = (__m128 *)v107.m128i_i64[1];
        v98.m128i_i64[0] = v107.m128i_i64[0];
        v116 = 0u;
        v96.m128_u64[0] = (unsigned __int64)&v116;
        v117 = 0;
        v118 = 0;
        v119 = 0;
        v120 = 0;
        sub_2191A0(
          (__m128i *)&v116,
          ((v107.m128i_i64[0] - si128.m128i_i64[0]) >> 5) + v26 + 16 * (((v27 - v107.m128i_i64[1]) >> 3) - v9));
        v28 = *((__int64 **)&v118 + 1);
        v29 = (__int64 *)v101;
        v30 = v98.m128i_i64[0];
        v90 = (void *)v116.m128_u64[0];
        v95 = *((_QWORD *)&v118 + 1);
        v31 = v86;
        v84 = v116.m128_i64[1];
        v89 = v117.m128i_i64[1];
        v93 = v117.m128i_i64[0];
        v92 = v118;
        v94 = *((_QWORD *)&v119 + 1);
        v91 = v119;
        v100 = *((_QWORD *)&v120 + 1);
        v88 = v120;
        v32 = (__int64 *)v97.m128i_i64[0];
        if ( *((_QWORD *)&v118 + 1) < *((_QWORD *)&v120 + 1) )
        {
          v98.m128i_i64[0] = (__int64)&v110;
          v97.m128i_i64[0] = (__int64)&v108;
          while ( 1 )
          {
            v37 = (__int64)((__int64)v32 - v31) >> 5;
            v38 = v37 + 16 < 0;
            v39 = v37 + 16;
            v40 = v39;
            if ( v38 )
            {
              v41 = ~((unsigned __int64)~v39 >> 4);
            }
            else
            {
              if ( v39 <= 15 )
              {
                v33 = v29;
                v34 = v30;
                v35 = v31;
                v101 = (__m128 *)(v32 + 64);
                goto LABEL_18;
              }
              v41 = v39 >> 4;
            }
            v33 = &v29[v41];
            v35 = *v33;
            v34 = *v33 + 512;
            v101 = (__m128 *)(*v33 + 32 * (v40 - 16 * v41));
LABEL_18:
            v36 = *v28;
            v108.m128i_i64[1] = v35;
            v109.m128_u64[0] = v34;
            v108.m128i_i64[0] = (__int64)v101;
            v109.m128_u64[1] = (unsigned __int64)v33;
            v110.m128_u64[0] = (unsigned __int64)v32;
            v110.m128_u64[1] = v31;
            v111.m128i_i64[0] = v30;
            v111.m128i_i64[1] = (__int64)v29;
            sub_20E350((__int64 *)v98.m128i_i64[0], v97.m128i_i64[0], v36);
            if ( (unsigned __int64)++v28 >= v100 )
              goto LABEL_31;
            v32 = (__int64 *)v101;
            v29 = v33;
            v30 = v34;
            v31 = v35;
          }
        }
        v101 = (__m128 *)v97.m128i_i64[0];
        v33 = v29;
        v34 = v98.m128i_i64[0];
        v35 = v86;
LABEL_31:
        v115.m128i_i64[0] = v34;
        v115.m128i_i64[1] = (__int64)v33;
        v51 = _mm_load_si128(&v99);
        v52 = _mm_load_si128(&v85);
        v114.m128_u64[0] = (unsigned __int64)v101;
        v114.m128_u64[1] = v35;
        v101 = &v114;
        v112 = v51;
        v113 = v52;
        sub_20E350((__int64 *)&v114, &v112, v94);
        v53 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 112));
        v54 = _mm_loadu_si128((const __m128i *)(a1 + 96));
        v55 = _mm_movehl_ps(v24, v53);
        v56 = _mm_loadl_epi64((const __m128i *)(a1 + 120));
        v108 = v54;
        v109 = v53;
        sub_20AD50(&v108, -v87);
        v58 = v57;
        v59 = (__m128i)*(unsigned __int64 *)v55.m128_u64[0];
        v60 = *(_QWORD *)v55.m128_u64[0] + 512LL;
        v112 = _mm_unpacklo_epi64(v58, v59);
        v61 = (__m128i)(unsigned __int64)v60;
        v62 = *(_QWORD *)v109.m128_u64[1];
        v113 = _mm_unpacklo_epi64(v61, v56);
        v114 = _mm_loadh_ps((const double *)v109.m128_u64[1]);
        v98.m128i_i64[0] = (__int64)&v110;
        v115 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v62 + 512), (__m128i)v109.m128_u64[1]);
        sub_2230A0(
          &v110,
          (const __m128i *)(a1 + 48),
          (__int64)&v114,
          (__int64)&v112,
          *(double *)v115.m128i_i64,
          *(double *)v54.m128i_i64,
          *(double *)v53.m128_u64,
          *(double *)&v109.m128_u64[1],
          v59,
          v63,
          (__m128)v10,
          v55);
        v66 = (v92 - v93) >> 5;
        v67 = v66 + ((v91 - v94) >> 5);
        v68 = v67 + 16 * ((v100 == 0) + ((__int64)(v100 - v95) >> 3) - 1);
        if ( v68 )
        {
          v69 = _mm_loadu_si128((const __m128i *)(a1 + 64));
          v70 = _mm_sub_epi64(v69, _mm_srli_si128(v69, 8)).m128i_i64[0] >> 5;
          if ( v70 < v68 )
          {
            sub_21DED0((_QWORD *)(a1 + 48), v68 - v70, v67, v66, v64, v65);
            v69 = _mm_loadu_si128((const __m128i *)(a1 + 64));
          }
          v71 = _mm_loadu_si128((const __m128i *)(a1 + 80));
          v110 = (__m128)v69;
          v111 = v71;
          sub_20AD50(v98.m128i_i64[0], -(__int64)v68);
          v72 = v111;
          v99.m128i_i64[0] = v110.m128_i64[1];
          sub_20E290(
            (__int64 *)v101,
            v93,
            v89,
            v92,
            v95,
            v91,
            v94,
            v88,
            v100,
            v110.m128_i64[0],
            v110.m128_i64[1],
            v111.m128i_i64[0],
            v111.m128i_i64[1]);
          *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)v99.m128i_i64);
          *(__m128i *)(a1 + 80) = _mm_unpacklo_epi64((__m128i)v72.m128i_u64[0], (__m128i)v72.m128i_u64[1]);
        }
        v73 = _mm_loadh_ps((const double *)&v95);
        v74 = _mm_loadh_ps((const double *)&v94);
        v75 = _mm_loadh_ps((const double *)&v100);
        v96 = _mm_loadh_ps((const double *)&v89);
        v97 = (__m128i)v73;
        v98 = (__m128i)v74;
        v99 = (__m128i)v75;
        v76 = sub_219300((_QWORD *)(a1 + 96), (_QWORD *)(a1 + 64));
        v77 = _mm_load_si128(&v98);
        v78 = _mm_load_si128(&v99);
        v79 = _mm_load_si128((const __m128i *)&v96);
        v80 = _mm_load_si128(&v97);
        *(_DWORD *)(a1 + 136) = v76 - 1;
        v112 = v77;
        v113 = v78;
        v114 = (__m128)v79;
        v115 = v80;
        sub_20DC70((__int64 *)v101, v112.m128i_i8);
        if ( v90 )
        {
          v81 = (void **)v95;
          v82 = v100 + 8;
          if ( v95 < v100 + 8 )
          {
            do
            {
              v83 = v81 + 1;
              operator delete(*v81, 0x200u);
              v81 = v83;
            }
            while ( (unsigned __int64)v83 < v82 );
          }
          operator delete(v90, 8 * v84);
        }
      }
    }
  }
}
