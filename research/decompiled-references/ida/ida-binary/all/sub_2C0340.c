__int64 __fastcall sub_2C0340(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __m128i *v16; // r15
  __int64 v17; // rax
  int *v18; // rbp
  _QWORD *v19; // r12
  bool v20; // al
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  int *v24; // rdx
  int *v25; // r12
  bool v26; // bp
  __m128i *v27; // rax
  __int64 (__fastcall *v28)(__int64, int); // rax
  int v29; // eax
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 (__fastcall *v32)(__int64, int, int); // rcx
  __int64 v33; // rbp
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // r13
  unsigned __int64 v44; // r14
  int *v45; // rsi
  unsigned __int64 v46; // r13
  const char *v47; // rsi
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  int *v50; // r14
  __int64 v51; // rcx
  int v52; // r9d
  char *v53; // rdx
  int *v54; // r8
  int *v55; // r13
  int v56; // r15d
  int v57; // r11d
  char *v58; // rax
  char *v59; // rdi
  char *v60; // rcx
  char *v61; // rsi
  int v62; // r10d
  int v63; // r12d
  int *v64; // rcx
  __int64 (__fastcall *v65)(__int64, int); // rax
  __int64 v66; // rbp
  __int64 v67; // r12
  __int64 v68; // rdi
  int v70; // r10d
  __int64 v71; // rbp
  int *i; // r12
  int *v73; // rdi
  int *v74; // rax
  int v75; // edx
  int v76; // eax
  __m128i si128; // xmm2
  __int64 v78; // r12
  __m128i *v79; // r13
  _DWORD *v80; // r14
  __m128i *v81; // r15
  __m128i *v82; // [rsp+8h] [rbp-160h]
  __int64 v83; // [rsp+10h] [rbp-158h]
  unsigned int v84; // [rsp+30h] [rbp-138h]
  unsigned __int8 v85; // [rsp+37h] [rbp-131h]
  __int64 v86; // [rsp+40h] [rbp-128h]
  unsigned __int64 v88; // [rsp+50h] [rbp-118h] BYREF
  unsigned __int64 v89; // [rsp+58h] [rbp-110h] BYREF
  int *v90; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v91; // [rsp+68h] [rbp-100h]
  __int64 v92; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v93; // [rsp+78h] [rbp-F0h]
  __int64 v94; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v95; // [rsp+98h] [rbp-D0h]
  __int64 v96; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v97; // [rsp+B8h] [rbp-B0h]
  int *v98; // [rsp+D0h] [rbp-98h] BYREF
  __int128 v99; // [rsp+D8h] [rbp-90h]
  __int64 v100; // [rsp+F0h] [rbp-78h] BYREF
  int v101; // [rsp+F8h] [rbp-70h] BYREF
  _QWORD *v102; // [rsp+100h] [rbp-68h]
  int *v103; // [rsp+108h] [rbp-60h]
  int *v104; // [rsp+110h] [rbp-58h]
  __int64 v105; // [rsp+118h] [rbp-50h]
  unsigned __int64 v106; // [rsp+128h] [rbp-40h]

  v106 = __readfsqword(0x28u);
  v85 = byte_8CCA9A;
  if ( !byte_8CCA9A )
    return v85;
  v2 = *(_QWORD *)a2;
  v4 = (__int64)interactive_graph_t__::vfunc_7;
  v92 = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(v2 + 56);
  v93 = 0;
  if ( v5 == interactive_graph_t__::vfunc_7 )
  {
    v6 = a2[46];
    v7 = 0;
  }
  else
  {
    v6 = (int)v5((__int64)a2);
    v7 = *((_QWORD *)&v93 + 1);
  }
  if ( v7 < v6 )
  {
    v4 = v92;
    v92 = qvector_reserve(&v92, v92, v6, 16);
  }
  v8.m128i_i64[0] = 0;
  v101 = 0;
  v103 = &v101;
  v104 = &v101;
  v102 = nullptr;
  v105 = 0;
  v94 = 0;
  v95 = 0;
  if ( (_QWORD)v93 )
  {
    v4 = 0;
    v8.m128i_i64[0] = 0;
    v94 = qvector_reserve(&v94, 0, 3 * v93, 8);
    v96 = 0;
    v97 = 0;
    if ( (_QWORD)v95 )
    {
      v4 = 0;
      v96 = qvector_reserve(&v96, 0, v95, 16);
    }
  }
  else
  {
    v96 = 0;
    v97 = 0;
  }
  v98 = a2;
  LODWORD(v99) = 0;
  v9 = node_iterator_goup(&v98);
  v10 = *(_QWORD *)v9;
  LODWORD(v9) = *(_DWORD *)(v9 + 8);
  v90 = (int *)v10;
  v91 = v9;
  while ( 1 )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    v12 = v11 == interactive_graph_t__::vfunc_7 ? a2[46] : v11((__int64)a2);
    v13 = v91;
    v84 = v91;
    if ( v91 == v12 && a2 == v90 )
      break;
    v14 = v93;
    v15 = v92;
    if ( *((_QWORD *)&v93 + 1) < (unsigned __int64)(v93 + 1) )
    {
      v92 = qvector_reserve(&v92, v92, v93 + 1, 16);
      v14 = v93;
      v15 = v92;
    }
    v16 = (__m128i *)(v15 + 16 * v14);
    *v16 = 0;
    v17 = *(_QWORD *)a2;
    *(_QWORD *)&v93 = v93 + 1;
    v82 = v16;
    v8 = _mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(int *, _QWORD))(v17 + 152))(a2, v84));
    v18 = &v101;
    *v16 = v8;
    v19 = v102;
    if ( v102 )
    {
      do
      {
        while ( 1 )
        {
          v4 = (__int64)v16;
          v20 = sub_2938E0((_DWORD *)v19 + 8, v16);
          v21 = v19[2];
          v22 = v19[3];
          if ( v20 )
            break;
          v18 = (int *)v19;
          v19 = (_QWORD *)v19[2];
          if ( !v21 )
            goto LABEL_19;
        }
        v19 = (_QWORD *)v19[3];
      }
      while ( v22 );
LABEL_19:
      if ( v18 != &v101
        && v18[8] == v16->m128i_i32[0]
        && v18[10] == v16->m128i_i32[2]
        && v18[9] == v16->m128i_i32[1]
        && v18[11] == v16->m128i_i32[3] )
      {
        goto LABEL_72;
      }
    }
    else
    {
      v18 = &v101;
    }
    v23 = sub_2C01F0(&v100, (__int64)v18, v16);
    v25 = v24;
    if ( v24 )
    {
      v26 = v24 == &v101 || v23 != 0;
      if ( !v26 )
        v26 = sub_2938E0(v16, v24 + 8);
      v27 = (__m128i *)operator new(0x30u);
      v8 = _mm_loadu_si128(v16);
      v27[2] = v8;
      std::_Rb_tree_insert_and_rebalance(v26, v27, v25, &v101);
      ++v105;
    }
    v28 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
    if ( v28 == interactive_graph_t__::vfunc_12 )
      v29 = *(_DWORD *)(*((_QWORD *)a2 + 22) + 24LL * (int)v84 + 8);
    else
      v29 = v28((__int64)a2, v84);
    v83 = v29;
    if ( v29 )
    {
      v30 = 0;
      do
      {
        v4 = v84;
        if ( (unsigned __int8)sub_2B29D0((__int64 *)a2, v84, v30, v82, 1) )
          goto LABEL_72;
        v31 = *(_QWORD *)a2;
        v32 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
        if ( v32 == interactive_graph_t__::vfunc_14 )
        {
          v33 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a2 + 22) + 24LL * (int)v84) + 4LL * (int)v30);
        }
        else
        {
          v33 = (unsigned int)v32((__int64)a2, v84, v30);
          v31 = *(_QWORD *)a2;
        }
        v34 = (v33 << 32) | v84;
        if ( (*(__int64 (__fastcall **)(int *, __int64))(v31 + 160))(a2, v34) )
        {
          v35 = v95;
          v36 = v94;
          if ( *((_QWORD *)&v95 + 1) < (unsigned __int64)(v95 + 1) )
          {
            v94 = qvector_reserve(&v94, v94, v95 + 1, 8);
            v36 = v94;
            v35 = v95;
          }
          v8.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v84), _mm_cvtsi32_si128(v33)).m128i_u64[0];
          *(_QWORD *)(v36 + 8 * v35) = v8.m128i_i64[0];
          v37 = v97;
          v38 = v96;
          *(_QWORD *)&v95 = v95 + 1;
          if ( *((_QWORD *)&v97 + 1) < (unsigned __int64)(v97 + 1) )
          {
            v96 = qvector_reserve(&v96, v96, v97 + 1, 16);
            v37 = v97;
            v38 = v96;
          }
          v88 = 0;
          v39 = v38 + 16 * v37;
          *(_OWORD *)v39 = 0;
          v89 = 0;
          *(_QWORD *)&v97 = v97 + 1;
          v40 = sub_298C80((__int64)a2, v34, &v88, &v89);
          v41 = v40;
          if ( v40 )
          {
            v42 = *(_QWORD *)(v40 + 24);
            if ( v42 )
            {
              v43 = 2 * v42;
              v8.m128i_i64[0] = 0;
              v98 = nullptr;
              v99 = 0;
              v98 = (int *)qalloc_or_throw(8 * v42);
              *((_QWORD *)&v99 + 1) = v42;
              memcpy(v98, *(const void **)(v41 + 16), 8 * v42);
              v44 = v88;
              *(_QWORD *)&v99 = v42;
              v45 = v98;
              if ( *((_QWORD *)&v99 + 1) < (unsigned __int64)(v42 + 1) )
              {
                v98 = (int *)qvector_reserve(&v98, v98, v42 + 1, 8);
                v45 = v98;
                v43 = 2 * v99;
              }
              *(_QWORD *)&v45[v43] = v44;
              v46 = v89;
              v47 = (const char *)v98;
              v48 = v99 + 1;
              v49 = v99 + 2;
              *(_QWORD *)&v99 = v99 + 1;
              if ( *((_QWORD *)&v99 + 1) < v49 )
              {
                v98 = (int *)qvector_reserve(&v98, v98, v49, 8);
                v47 = (const char *)v98;
                v48 = v99;
              }
              *(_QWORD *)&v47[8 * v48] = v46;
              v50 = v98;
              *(_QWORD *)&v99 = v99 + 1;
              v51 = 8 * v99;
              v52 = *v98;
              v53 = (char *)&v98[2 * v99];
              if ( v98 == (int *)v53 )
              {
                v54 = v98;
                v64 = v98;
              }
              else if ( v51 == 8 )
              {
                v54 = v98;
                v64 = v98;
                v53 = (char *)v98;
              }
              else
              {
                v54 = v98 + 2;
                v55 = v98 + 2;
                if ( v98[2] < v52 )
                {
                  v52 = v98[2];
                  v55 = v98;
                }
                v56 = v98[1];
                v57 = v98[3];
                v58 = (char *)(v98 + 4);
                if ( v51 == 16 )
                {
                  if ( v56 <= v57 )
                  {
                    v64 = v98;
                  }
                  else
                  {
                    v64 = v98 + 2;
                    v54 = v98;
                  }
LABEL_101:
                  v53 = (char *)v55;
                }
                else
                {
                  v59 = (char *)(v98 + 6);
                  v86 = v30;
                  v60 = (char *)(v98 + 4);
                  v61 = (char *)(v98 + 6);
                  while ( 1 )
                  {
                    v62 = *(_DWORD *)v60;
                    if ( v53 == v61 )
                      break;
                    v63 = *(_DWORD *)v61;
                    if ( *(_DWORD *)v61 < v62 )
                    {
                      if ( v52 > v63 )
                        v52 = *(_DWORD *)v61;
                      if ( *v55 <= v62 )
                        v55 = (int *)v60;
                      v60 += 16;
                      v61 += 16;
                      if ( v53 == v60 )
                      {
LABEL_61:
                        v30 = v86;
                        goto LABEL_86;
                      }
                    }
                    else
                    {
                      if ( v52 > v62 )
                        v52 = *(_DWORD *)v60;
                      if ( v63 >= *v55 )
                        v55 = (int *)v61;
                      v60 += 16;
                      v61 += 16;
                      if ( v53 == v60 )
                        goto LABEL_61;
                    }
                  }
                  v30 = v86;
                  if ( v52 > v62 )
                  {
                    v52 = *(_DWORD *)v60;
                  }
                  else if ( *v55 <= v62 )
                  {
                    v55 = (int *)v60;
                  }
LABEL_86:
                  v64 = v98;
                  if ( v56 > v57 )
                  {
                    v64 = v98 + 2;
                    v56 = v98[3];
                    v54 = v98;
                  }
                  while ( 1 )
                  {
                    v47 = (const char *)*((unsigned int *)v58 + 1);
                    if ( v53 == v59 )
                      break;
                    v70 = *((_DWORD *)v58 + 3);
                    if ( v70 < (int)v47 )
                    {
                      if ( v70 < v56 )
                        v64 = (int *)v59;
                      if ( v54[1] <= (int)v47 )
                        v54 = (int *)v58;
                      v58 += 16;
                      v59 += 16;
                      if ( v53 == v58 )
                        goto LABEL_101;
                    }
                    else
                    {
                      if ( v56 > (int)v47 )
                        v64 = (int *)v58;
                      if ( v70 >= v54[1] )
                        v54 = (int *)v59;
                      v58 += 16;
                      v59 += 16;
                      if ( v53 == v58 )
                        goto LABEL_101;
                    }
                    v56 = v64[1];
                  }
                  if ( v56 > (int)v47 )
                  {
                    v64 = (int *)v58;
                    v53 = (char *)v55;
                  }
                  else
                  {
                    v53 = (char *)v55;
                    if ( v54[1] <= (int)v47 )
                      v54 = (int *)v58;
                  }
                }
              }
              *(_DWORD *)v39 = v52;
              *(_DWORD *)(v39 + 4) = v64[1];
              *(_DWORD *)(v39 + 8) = *(_DWORD *)v53;
              *(_DWORD *)(v39 + 12) = v54[1];
              if ( v50 )
              {
                *(_QWORD *)&v99 = 0;
                *(double *)v8.m128i_i64 = qfree(v50, v47);
              }
            }
          }
        }
      }
      while ( v83 != ++v30 );
    }
    v65 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 104LL);
    if ( v65 == interactive_graph_t__::vfunc_13 )
    {
      v4 = *((_QWORD *)a2 + 25);
      v66 = *(int *)(v4 + 24LL * (int)v84 + 8);
    }
    else
    {
      v4 = v84;
      v66 = (int)v65((__int64)a2, v84);
    }
    v67 = 0;
    if ( v66 )
    {
      do
      {
        v4 = v84;
        if ( (unsigned __int8)sub_2B29D0((__int64 *)a2, v84, v67, v82, 0) )
          goto LABEL_72;
      }
      while ( v66 != ++v67 );
    }
    ++v91;
    node_iterator_goup(&v90);
  }
  v71 = v95;
  if ( (_QWORD)v95 != (_QWORD)v97 )
  {
    if ( !under_debugger )
      interr(41214, v4, v10, v91, *(double *)v8.m128i_i64);
    BUG();
  }
  for ( i = v103; i != &v101; i = (int *)std::_Rb_tree_increment(i) )
  {
    v73 = i;
    while ( 1 )
    {
      v74 = (int *)std::_Rb_tree_increment(v73);
      v73 = v74;
      if ( v74 == &v101 )
        break;
      v75 = v74[9];
      v76 = i[11];
      if ( v75 > v76 )
        break;
      if ( i[8] < v73[10] && i[10] > v73[8] && i[9] < v73[11] && v75 != v76 )
        goto LABEL_72;
    }
  }
  if ( !*(_BYTE *)(a1 + 289) )
    goto LABEL_128;
  if ( !(unsigned __int8)sub_2A0C20((__int64)a2, v4, v10, v13) )
  {
    v71 = v95;
LABEL_128:
    v68 = v96;
    if ( v71 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DCCE0);
      v78 = 0;
      while ( 1 )
      {
        v79 = (__m128i *)v92;
        v80 = (_DWORD *)(v68 + 16 * v78);
        v81 = (__m128i *)(v92 + 16 * v93);
        v98 = *(int **)(v94 + 8 * v78);
        if ( v81 != (__m128i *)v92 )
          break;
LABEL_138:
        if ( ++v78 == v71 )
          goto LABEL_139;
      }
      while ( 1 )
      {
        v8 = _mm_add_epi32(_mm_loadu_si128(v79), si128);
        *v79 = v8;
        if ( _mm_cvtsi128_si32(_mm_unpackhi_epi32(v8, v8)) > *v80
          && _mm_cvtsi128_si32(v8) < v80[2]
          && _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 255)) > v80[1] )
        {
          v8 = _mm_shuffle_epi32(v8, 85);
          if ( _mm_cvtsi128_si32(v8) < v80[3] )
          {
            v4 = (__int64)v79;
            v85 = sub_2B2B40((__int64)a2, v79->m128i_i32, (__int64 *)&v98);
            si128 = _mm_load_si128((const __m128i *)&xmmword_5DCCE0);
            if ( v85 )
              break;
          }
        }
        if ( v81 == ++v79 )
        {
          v68 = v96;
          goto LABEL_138;
        }
      }
LABEL_72:
      v68 = v96;
      goto LABEL_73;
    }
LABEL_139:
    v85 = 0;
    goto LABEL_73;
  }
  v85 = 0;
  v68 = v96;
LABEL_73:
  if ( v68 )
  {
    *(_QWORD *)&v97 = 0;
    *(double *)v8.m128i_i64 = qfree(v68, (const char *)v4);
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    *(double *)v8.m128i_i64 = qfree(v94, (const char *)v4, *(double *)v8.m128i_i64);
  }
  sub_2B3340(v102);
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree(v92, (const char *)v4, *(double *)v8.m128i_i64);
  }
  return v85;
}
