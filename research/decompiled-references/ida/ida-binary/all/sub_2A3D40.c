__int64 __fastcall sub_2A3D40(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64); // rax
  int v10; // eax
  int v11; // edx
  int *v12; // r13
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  _DWORD *v15; // r15
  __int64 v16; // r13
  __int64 (__fastcall *v17)(__int64, int); // rax
  __int64 v18; // rax
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // r12d
  __int64 (__fastcall *v23)(__int64, int); // rax
  __int64 v24; // rax
  int v25; // r8d
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 (__fastcall *v32)(__int64); // rax
  int v33; // eax
  double v34; // xmm0_8
  signed int *v35; // r12
  double v36; // xmm2_8
  double v37; // xmm1_8
  double v38; // r15
  __int64 (__fastcall *v39)(__int64); // rax
  signed int v40; // eax
  __m128i *v41; // rax
  double v42; // xmm3_8
  signed int v43; // r14d
  double v44; // xmm0_8
  __int64 (__fastcall *v45)(__int64, unsigned int); // r8
  double v46; // xmm1_8
  double v47; // xmm0_8
  unsigned int v48; // edx
  __int64 v49; // rcx
  __int64 (__fastcall *v50)(__int64, int); // rax
  int v51; // eax
  int v52; // eax
  __int64 (__fastcall *v53)(__int64, int); // rax
  unsigned __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 (__fastcall *v57)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v58)(__int64); // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 *v61; // rax
  __int64 (__fastcall *v62)(__int64); // rax
  int v63; // eax
  int v64; // r12d
  unsigned int v65; // ebx
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned int *v69; // [rsp+0h] [rbp-180h]
  double v70; // [rsp+0h] [rbp-180h]
  int v71; // [rsp+18h] [rbp-168h]
  int v72; // [rsp+1Ch] [rbp-164h]
  int v73; // [rsp+1Ch] [rbp-164h]
  int v74; // [rsp+1Ch] [rbp-164h]
  unsigned int *v75; // [rsp+28h] [rbp-158h]
  int v77; // [rsp+34h] [rbp-14Ch]
  int v78; // [rsp+34h] [rbp-14Ch]
  double cosx; // [rsp+38h] [rbp-148h] BYREF
  double sinx; // [rsp+40h] [rbp-140h] BYREF
  __int64 v81; // [rsp+48h] [rbp-138h] BYREF
  int v82; // [rsp+50h] [rbp-130h]
  __int64 v83; // [rsp+58h] [rbp-128h] BYREF
  unsigned int v84; // [rsp+60h] [rbp-120h]
  __int64 v85; // [rsp+68h] [rbp-118h] BYREF
  __int128 v86; // [rsp+70h] [rbp-110h]
  char *v87; // [rsp+88h] [rbp-F8h] BYREF
  __int128 v88; // [rsp+90h] [rbp-F0h]
  __int64 v89; // [rsp+A8h] [rbp-D8h] BYREF
  __int128 v90; // [rsp+B0h] [rbp-D0h]
  __int64 *v91; // [rsp+C8h] [rbp-B8h] BYREF
  __int128 v92; // [rsp+D0h] [rbp-B0h]
  int v93; // [rsp+E8h] [rbp-98h] BYREF
  _QWORD *v94; // [rsp+F0h] [rbp-90h]
  int *v95; // [rsp+F8h] [rbp-88h]
  int *v96; // [rsp+100h] [rbp-80h]
  __int64 v97; // [rsp+108h] [rbp-78h]
  int v98; // [rsp+118h] [rbp-68h] BYREF
  _QWORD *v99; // [rsp+120h] [rbp-60h]
  int *v100; // [rsp+128h] [rbp-58h]
  int *v101; // [rsp+130h] [rbp-50h]
  __int64 v102; // [rsp+138h] [rbp-48h]
  unsigned __int64 v103; // [rsp+140h] [rbp-40h]

  v103 = __readfsqword(0x28u);
  v91 = (__int64 *)a1;
  v92 = 0;
  v93 = 0;
  v94 = nullptr;
  v95 = &v93;
  v96 = &v93;
  v97 = 0;
  v98 = 0;
  v99 = nullptr;
  v100 = &v98;
  v101 = &v98;
  v102 = 0;
  sub_2920A0(nullptr);
  v99 = nullptr;
  v100 = &v98;
  v101 = &v98;
  v102 = 0;
  sub_2920A0(v94);
  v94 = nullptr;
  v95 = &v93;
  v96 = &v93;
  v97 = 0;
  sub_294EA0(&v91);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  v4 = v3;
  if ( v3 == 1 )
  {
    v65 = 0;
  }
  else
  {
    v85 = 0;
    v86 = 0;
    v85 = qvector_reserve(&v85, 0, 1, 4);
    *(_DWORD *)(v85 + 4 * v86) = 0;
    v87 = nullptr;
    *(_QWORD *)&v86 = v86 + 1;
    v88 = 0;
    if ( v4 )
    {
      v87 = (char *)qvector_reserve(&v87, 0, v4, 4);
      v67 = v88;
      if ( (unsigned __int64)v88 < v4 )
      {
        *(_DWORD *)&v87[4 * v88] = 0;
        v68 = v67 + 1;
        if ( v68 < v4 )
        {
          do
            *(_DWORD *)&v87[4 * v68++] = 0;
          while ( v4 != v68 );
        }
      }
      *(_QWORD *)&v88 = v4;
    }
    v89 = a1;
    LODWORD(v90) = 0;
    v5 = node_iterator_goup(&v89);
    v8 = *(_QWORD *)v5;
    LODWORD(v5) = *(_DWORD *)(v5 + 8);
    v89 = v8;
    LODWORD(v90) = v5;
    while ( 1 )
    {
      v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      v10 = v9 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v9(a1);
      v11 = v90;
      if ( (_DWORD)v90 == v10 && a1 == v89 )
        break;
      *(_DWORD *)&v87[4 * (int)v90] = v90;
      LODWORD(v90) = v11 + 1;
      node_iterator_goup(&v89);
    }
    v12 = (int *)v87;
    v13 = 4 * v88;
    v75 = (unsigned int *)&v87[4 * v88];
    if ( v87 != (char *)v75 )
    {
      if ( v13 >> 2 )
      {
        _BitScanReverse64(&v14, v13 >> 2);
        sub_2A2B00(v87, v75, 2LL * (int)v14, (_QWORD *)a1, v6, v7);
        if ( v13 > 64 )
        {
          v69 = (unsigned int *)(v12 + 16);
          sub_2A18C0(v12, v12 + 16, (_QWORD *)a1);
          while ( 1 )
          {
            v15 = v69;
            v71 = *v69;
            v16 = 24LL * (int)*v69;
            while ( 1 )
            {
              v22 = *(v15 - 1);
              v23 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
              if ( v23 == interactive_graph_t__::vfunc_12 )
              {
                v24 = *(_QWORD *)(a1 + 176);
                v25 = *(_DWORD *)(v24 + v16 + 8);
LABEL_21:
                v26 = *(_DWORD *)(v24 + 24LL * v22 + 8);
                goto LABEL_22;
              }
              v25 = v23(a1, v71);
              v50 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
              if ( v50 == interactive_graph_t__::vfunc_12 )
              {
                v24 = *(_QWORD *)(a1 + 176);
                goto LABEL_21;
              }
              v72 = v25;
              v51 = v50(a1, v22);
              v25 = v72;
              v26 = v51;
LABEL_22:
              if ( v26 > v25 )
                goto LABEL_18;
              if ( v26 < v25 )
                break;
              v17 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
              if ( v17 == interactive_graph_t__::vfunc_13 )
              {
                v18 = *(_QWORD *)(a1 + 200);
                v19 = *(_DWORD *)(v18 + v16 + 8) + v25;
LABEL_16:
                v20 = *(_DWORD *)(v18 + 24LL * v22 + 8);
                goto LABEL_17;
              }
              v77 = v25;
              v73 = v26;
              v52 = v17(a1, v71);
              v26 = v73;
              v19 = v52 + v77;
              v53 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
              if ( v53 == interactive_graph_t__::vfunc_13 )
              {
                v18 = *(_QWORD *)(a1 + 200);
                goto LABEL_16;
              }
              v78 = v73;
              v74 = v19;
              v20 = v53(a1, v22);
              v26 = v78;
              v19 = v74;
LABEL_17:
              if ( v19 >= v20 + v26 )
                break;
LABEL_18:
              v21 = *--v15;
              v15[1] = v21;
            }
            ++v69;
            *v15 = v71;
            if ( v75 == v69 )
              goto LABEL_25;
          }
        }
      }
      else
      {
        sub_2A2B00(v87, v75, -2, (_QWORD *)a1, v6, v7);
      }
      sub_2A18C0(v12, (int *)v75, (_QWORD *)a1);
    }
LABEL_25:
    v89 = 0;
    v81 = a1;
    v82 = 0;
    v90 = 0;
    v27 = node_iterator_goup(&v81);
    v28 = *(_QWORD *)v27;
    LODWORD(v27) = *(_DWORD *)(v27 + 8);
    v83 = v28;
    v84 = v27;
    while ( 1 )
    {
      v32 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      v33 = v32 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v32(a1);
      if ( v33 == v84 && a1 == v83 )
        break;
      v29 = *(_DWORD *)&v87[4 * v84];
      if ( !(unsigned int)sub_2949D0((__int64 *)&v91, v29) )
      {
        v30 = v90;
        v31 = v89;
        if ( *((_QWORD *)&v90 + 1) < (unsigned __int64)(v90 + 1) )
        {
          v89 = qvector_reserve(&v89, v89, v90 + 1, 4);
          v31 = v89;
          v30 = v90;
        }
        *(_DWORD *)(v31 + 4 * v30) = v29;
        *(_QWORD *)&v90 = v90 + 1;
      }
      ++v84;
      node_iterator_goup(&v83);
    }
    if ( (__int64)v90 < 0 )
      v34 = (double)(int)(v90 & 1 | ((unsigned __int64)v90 >> 1))
          + (double)(int)(v90 & 1 | ((unsigned __int64)v90 >> 1));
    else
      v34 = (double)(int)v90;
    v35 = (signed int *)v89;
    v70 = 6.283185307179586 / v34;
    if ( 4LL * (_QWORD)v90 )
    {
      v36 = 0.0;
      v37 = 1.0;
      v38 = 0.0;
      while ( 1 )
      {
        v43 = *v35;
        v44 = (double)((int)v92 + DWORD1(v92) + 500);
        v45 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
        v46 = v37 * v44;
        v47 = v44 * v36;
        v48 = (int)v46;
        v49 = (unsigned int)(int)v47;
        if ( v45 == interactive_graph_t__::vfunc_19 )
        {
          v39 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
          if ( v39 == interactive_graph_t__::vfunc_7 )
          {
            v40 = *(_DWORD *)(a1 + 184);
          }
          else
          {
            v40 = v39(a1);
            v49 = (unsigned int)(int)v47;
            v48 = (int)v46;
          }
          if ( v43 >= v40 )
            sub_16B930((__int64)"nrect(%d) failed", v43);
          v41 = (__m128i *)(*(_QWORD *)(a1 + 224) + 16LL * v43);
        }
        else
        {
          v41 = (__m128i *)v45(a1, v43);
          v49 = (unsigned int)(int)v47;
          v48 = (int)v46;
        }
        *v41 = _mm_unpacklo_epi64(
                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(v48), _mm_cvtsi32_si128(v49)),
                 _mm_unpacklo_epi32(
                   _mm_cvtsi32_si128(v48 + v41->m128i_i32[2] - v41->m128i_i32[0]),
                   _mm_cvtsi32_si128((int)v49 + v41->m128i_i32[3] - v41->m128i_i32[1])));
        sub_295810((int *)a1, v43, (v49 << 32) | v48, (__int64)&v85, v92, DWORD1(v92), (double)a3);
        v42 = v38 + v70;
        ++v35;
        v38 = v38 + v70;
        if ( v35 == (signed int *)(v89 + 4 * v90) )
          break;
        sincos(v42, &sinx, &cosx);
        v37 = cosx;
        v36 = sinx;
      }
    }
    v54 = 0;
    sub_295810((int *)a1, 0, 0, (__int64)&v85, v92, DWORD1(v92), 500.0);
    v83 = a1;
    v84 = 0;
    v55 = node_iterator_goup(&v83);
    v56 = *(_QWORD *)v55;
    LODWORD(v55) = *(_DWORD *)(v55 + 8);
    v83 = v56;
    v84 = v55;
    while ( 1 )
    {
      v62 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      v63 = v62 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v62(a1);
      v64 = v84;
      if ( v63 == v84 && a1 == v83 )
        break;
      v57 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
      if ( v57 == interactive_graph_t__::vfunc_19 )
      {
        v58 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        if ( v58 == interactive_graph_t__::vfunc_7 )
          v59 = *(_DWORD *)(a1 + 184);
        else
          v59 = v58(a1);
        if ( v64 >= v59 )
          sub_16B930((__int64)"nrect(%d) failed", v64);
        v60 = v64;
        v61 = (__int64 *)(*(_QWORD *)(a1 + 224) + 16LL * v64);
      }
      else
      {
        v54 = v84;
        v61 = (__int64 *)v57(a1, v84);
        v60 = v64;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + v60) & 2) == 0 )
      {
        v54 = (unsigned int)v64;
        sub_295540(a1, v64, *v61);
      }
      ++v84;
      node_iterator_goup(&v83);
    }
    if ( v89 )
    {
      *(_QWORD *)&v90 = 0;
      qfree(v89, (const char *)v54);
    }
    if ( v87 )
    {
      *(_QWORD *)&v88 = 0;
      qfree(v87, (const char *)v54);
    }
    if ( v85 )
    {
      *(_QWORD *)&v86 = 0;
      qfree(v85, (const char *)v54);
    }
    v65 = 1;
  }
  sub_2920A0(v99);
  sub_2920A0(v94);
  return v65;
}
