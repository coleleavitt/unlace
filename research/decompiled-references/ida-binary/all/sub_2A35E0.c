__int64 __fastcall sub_2A35E0(__int64 a1, __int64 a2, int a3, double a4)
{
  unsigned int v5; // r12d
  __int64 v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // r13
  double v10; // xmm0_8
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64); // rax
  int v18; // eax
  int v19; // edx
  int *v20; // r14
  __int64 v21; // r13
  unsigned __int64 v22; // rdx
  unsigned int *v23; // r15
  __int64 v24; // rbp
  __int64 (__fastcall *v25)(__int64, int); // rax
  __int64 v26; // rax
  int v27; // r8d
  int v28; // eax
  unsigned int v29; // eax
  int v30; // r13d
  __int64 (__fastcall *v31)(__int64, int); // rax
  __int64 v32; // rax
  int v33; // r8d
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  double v37; // rbp
  __int64 v38; // rsi
  double v39; // xmm1_8
  unsigned int v40; // r15d
  __int64 (__fastcall *v41)(__int64, unsigned int); // rcx
  double v42; // xmm0_8
  unsigned int v43; // r8d
  __int64 (__fastcall *v44)(__int64); // rax
  int v45; // eax
  __m128i *v46; // rax
  __int64 (__fastcall *v47)(__int64); // rax
  int v48; // eax
  int v49; // r15d
  char *v50; // rdi
  __int64 (__fastcall *v51)(__int64, int); // rax
  int v52; // eax
  int v53; // eax
  __int64 (__fastcall *v54)(__int64, int); // rax
  unsigned int *v55; // [rsp+8h] [rbp-140h]
  unsigned int v57; // [rsp+18h] [rbp-130h]
  double v59; // [rsp+20h] [rbp-128h]
  unsigned int *v60; // [rsp+28h] [rbp-120h]
  int v61; // [rsp+30h] [rbp-118h]
  int v62; // [rsp+30h] [rbp-118h]
  int v63; // [rsp+30h] [rbp-118h]
  int v64; // [rsp+34h] [rbp-114h]
  int v65; // [rsp+34h] [rbp-114h]
  double cosx; // [rsp+40h] [rbp-108h] BYREF
  double sinx; // [rsp+48h] [rbp-100h] BYREF
  __int64 v68; // [rsp+50h] [rbp-F8h] BYREF
  int v69; // [rsp+58h] [rbp-F0h]
  __int64 v70; // [rsp+60h] [rbp-E8h] BYREF
  int v71; // [rsp+68h] [rbp-E0h]
  char *v72; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v73; // [rsp+78h] [rbp-D0h]
  __int64 (__fastcall **v74)(); // [rsp+90h] [rbp-B8h] BYREF
  __int128 v75; // [rsp+98h] [rbp-B0h]
  int v76; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD *v77; // [rsp+B8h] [rbp-90h]
  int *v78; // [rsp+C0h] [rbp-88h]
  int *v79; // [rsp+C8h] [rbp-80h]
  __int64 v80; // [rsp+D0h] [rbp-78h]
  int v81; // [rsp+E0h] [rbp-68h] BYREF
  _QWORD *v82; // [rsp+E8h] [rbp-60h]
  int *v83; // [rsp+F0h] [rbp-58h]
  int *v84; // [rsp+F8h] [rbp-50h]
  __int64 v85; // [rsp+100h] [rbp-48h]
  unsigned __int64 v86; // [rsp+108h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  if ( !(_BYTE)v5 )
  {
    v74 = drawable_graph_t::clear_layout_info;
    v7 = (__int64)&v74;
    sub_298EA0(a1, &v74, 1, a4);
    *(_BYTE *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    v75 = 0;
    v76 = 0;
    v77 = nullptr;
    v78 = &v76;
    v79 = &v76;
    v80 = 0;
    v81 = 0;
    v82 = nullptr;
    v83 = &v81;
    v84 = &v81;
    v85 = 0;
    v74 = (__int64 (__fastcall **)())a1;
    sub_2920A0(nullptr);
    v82 = nullptr;
    v83 = &v81;
    v84 = &v81;
    v85 = 0;
    sub_2920A0(v77);
    v77 = nullptr;
    v78 = &v76;
    v79 = &v76;
    v80 = 0;
    sub_294EA0((__int64 **)&v74);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    v9 = v8;
    if ( v8 != 1 )
    {
      if ( v8 < 0LL )
        v10 = (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1)) + (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1));
      else
        v10 = (double)v8;
      v72 = nullptr;
      v73 = 0;
      v59 = 6.283185307179586 / v10;
      if ( v8 )
      {
        v7 = 0;
        v72 = (char *)qvector_reserve(&v72, 0, v8, 4);
        v11 = v73;
        if ( (unsigned __int64)v73 < v9 )
        {
          *(_DWORD *)&v72[4 * v73] = 0;
          v12 = v11 + 1;
          if ( v12 < v9 )
          {
            do
              *(_DWORD *)&v72[4 * v12++] = 0;
            while ( v9 != v12 );
          }
        }
        *(_QWORD *)&v73 = v9;
      }
      v68 = a1;
      v69 = 0;
      v13 = node_iterator_goup(&v68);
      v16 = *(_QWORD *)v13;
      LODWORD(v13) = *(_DWORD *)(v13 + 8);
      v70 = v16;
      v71 = v13;
      while ( 1 )
      {
        v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        v18 = v17 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v17(a1);
        v19 = v71;
        if ( v18 == v71 && a1 == v70 )
          break;
        *(_DWORD *)&v72[4 * v71] = v71;
        v71 = v19 + 1;
        node_iterator_goup(&v70);
      }
      v20 = (int *)v72;
      v21 = 4 * v73;
      v60 = (unsigned int *)&v72[4 * v73];
      if ( v72 != (char *)v60 )
      {
        if ( v21 >> 2 )
        {
          _BitScanReverse64(&v22, v21 >> 2);
          sub_2A2B00(v72, v60, 2LL * (int)v22, (_QWORD *)a1, v14, v15);
          if ( v21 > 64 )
          {
            v7 = (__int64)(v20 + 16);
            v55 = (unsigned int *)(v20 + 16);
            sub_2A18C0(v20, v20 + 16, (_QWORD *)a1);
            while ( 1 )
            {
              v23 = v55;
              v57 = *v55;
              v24 = 24LL * (int)*v55;
              while ( 1 )
              {
                v30 = *(v23 - 1);
                v31 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
                if ( v31 == interactive_graph_t__::vfunc_12 )
                {
                  v32 = *(_QWORD *)(a1 + 176);
                  v33 = *(_DWORD *)(v32 + v24 + 8);
LABEL_29:
                  v34 = *(_DWORD *)(v32 + 24LL * v30 + 8);
                  goto LABEL_30;
                }
                v7 = v57;
                v33 = v31(a1, v57);
                v51 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
                if ( v51 == interactive_graph_t__::vfunc_12 )
                {
                  v32 = *(_QWORD *)(a1 + 176);
                  goto LABEL_29;
                }
                v61 = v33;
                v7 = (unsigned int)v30;
                v52 = v51(a1, v30);
                v33 = v61;
                v34 = v52;
LABEL_30:
                if ( v34 > v33 )
                  goto LABEL_26;
                if ( v34 < v33 )
                  break;
                v25 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
                if ( v25 == interactive_graph_t__::vfunc_13 )
                {
                  v26 = *(_QWORD *)(a1 + 200);
                  v27 = *(_DWORD *)(v26 + v24 + 8) + v33;
LABEL_24:
                  v7 = 3LL * v30;
                  v28 = *(_DWORD *)(v26 + 24LL * v30 + 8);
                  goto LABEL_25;
                }
                v64 = v33;
                v62 = v34;
                v53 = v25(a1, v57);
                v34 = v62;
                v27 = v53 + v64;
                v54 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
                if ( v54 == interactive_graph_t__::vfunc_13 )
                {
                  v26 = *(_QWORD *)(a1 + 200);
                  goto LABEL_24;
                }
                v65 = v62;
                v7 = (unsigned int)v30;
                v63 = v27;
                v28 = v54(a1, v30);
                v34 = v65;
                v27 = v63;
LABEL_25:
                if ( v27 >= v28 + v34 )
                  break;
LABEL_26:
                v29 = *--v23;
                v23[1] = v29;
              }
              ++v55;
              *v23 = v57;
              if ( v60 == v55 )
                goto LABEL_33;
            }
          }
        }
        else
        {
          sub_2A2B00(v72, v60, -2, (_QWORD *)a1, v14, v15);
        }
        v7 = (__int64)v60;
        sub_2A18C0(v20, (int *)v60, (_QWORD *)a1);
      }
LABEL_33:
      v70 = a1;
      v71 = 0;
      v35 = node_iterator_goup(&v70);
      v36 = *(_QWORD *)v35;
      LODWORD(v35) = *(_DWORD *)(v35 + 8);
      v37 = 0.0;
      v70 = v36;
      v71 = v35;
      while ( 1 )
      {
        v47 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        v48 = v47 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v47(a1);
        v49 = v71;
        if ( v48 == v71 && a1 == v70 )
          break;
        sincos(v37, &sinx, &cosx);
        v38 = *(unsigned int *)&v72[4 * v49];
        v39 = (double)(a3 + (int)v75 + DWORD1(v75));
        v40 = (int)((double)(int)a2 + cosx * v39);
        v41 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
        v42 = (double)SHIDWORD(a2) + v39 * sinx;
        v43 = (int)v42;
        if ( v41 == interactive_graph_t__::vfunc_19 )
        {
          v44 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
          if ( v44 == interactive_graph_t__::vfunc_7 )
          {
            v45 = *(_DWORD *)(a1 + 184);
          }
          else
          {
            v45 = v44(a1);
            v43 = (int)v42;
          }
          if ( (int)v38 >= v45 )
            sub_16B930((__int64)"nrect(%d) failed", v38);
          v46 = (__m128i *)(*(_QWORD *)(a1 + 224) + 16LL * (int)v38);
        }
        else
        {
          v46 = (__m128i *)v41(a1, v38);
          v43 = (int)v42;
        }
        v7 = v43 + v46->m128i_i32[3] - v46->m128i_i32[1];
        v37 = v37 + v59;
        *v46 = _mm_unpacklo_epi64(
                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v43)),
                 _mm_unpacklo_epi32(
                   _mm_cvtsi32_si128(v40 + v46->m128i_i32[2] - v46->m128i_i32[0]),
                   _mm_cvtsi32_si128(v7)));
        ++v71;
        node_iterator_goup(&v70);
      }
      v50 = v72;
      *(_DWORD *)(a1 + 36) = 3;
      *(_QWORD *)(a1 + 40) = a2;
      *(_DWORD *)(a1 + 48) = a3;
      if ( v50 )
      {
        *(_QWORD *)&v73 = 0;
        qfree(v50, (const char *)v7);
      }
      v5 = 1;
    }
    sub_2920A0(v82);
    sub_2920A0(v77);
  }
  return v5;
}
