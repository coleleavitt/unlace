_DWORD *__fastcall clang_getSkippedRanges(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rdi
  __int32 v14; // r14d
  unsigned int *v15; // rbp
  __int64 v16; // r9
  char *v17; // r12
  __int64 v18; // r14
  __int64 v19; // r15
  int v20; // r8d
  unsigned int v21; // r13d
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  int v24; // eax
  __int64 v25; // r15
  int v26; // r8d
  unsigned int v27; // r13d
  _DWORD *v28; // rax
  _DWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rax
  char *v32; // rax
  __int64 v33; // r12
  char *v34; // r14
  __int64 v35; // rax
  _DWORD *v36; // r15
  __int64 v37; // rbp
  __m128i *v38; // r13
  _DWORD *v39; // r12
  unsigned __int64 v40; // rbx
  __m128i v41; // xmm0
  __m128 si128; // xmm1
  __int64 v43; // rcx
  int v44; // r14d
  int v45; // eax
  unsigned __int64 v47; // r10
  __int64 v48; // rax
  _QWORD *v49; // r11
  __int64 v50; // rax
  _DWORD *v51; // rax
  unsigned __int64 v52; // r15
  __int64 v53; // rax
  __int64 *v54; // r8
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // rax
  bool v58; // cf
  unsigned __int64 v59; // r13
  unsigned __int64 v60; // r13
  __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rcx
  char v64; // al
  int v65; // eax
  unsigned __int64 v66; // r10
  __int64 v67; // rax
  _DWORD *v68; // rax
  unsigned __int64 v69; // r15
  __int64 v70; // rax
  __int64 *v71; // r8
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rsi
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // r11
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // edx
  char v81; // al
  pthread_mutex_t *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 *v86; // rdi
  __int64 v87; // rdx
  _DWORD *v88; // rax
  _DWORD *v89; // rdx
  __int64 *v90; // rdi
  __int64 v91; // rdx
  _DWORD *v92; // rax
  _DWORD *v93; // rdx
  __int64 *v94; // rdi
  __int64 v95; // rdx
  _DWORD *v96; // rax
  _DWORD *v97; // rdx
  __int64 *v98; // rdi
  __int64 v99; // rdx
  _DWORD *v100; // rax
  _DWORD *v101; // rdx
  __m128 v102; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int *v103; // [rsp+10h] [rbp-98h]
  unsigned __int64 v104; // [rsp+18h] [rbp-90h]
  __m128 v105; // [rsp+20h] [rbp-88h] BYREF
  void *v106; // [rsp+30h] [rbp-78h]
  _DWORD *v107; // [rsp+38h] [rbp-70h]
  _DWORD *v108; // [rsp+40h] [rbp-68h]
  __int64 v109; // [rsp+48h] [rbp-60h]
  _QWORD *v110; // [rsp+50h] [rbp-58h]
  int v111; // [rsp+5Ch] [rbp-4Ch]
  void *v112; // [rsp+60h] [rbp-48h] BYREF
  int v113; // [rsp+68h] [rbp-40h]

  v6 = operator new(0x10u);
  *(_DWORD *)v6 = 0;
  v7 = (_DWORD *)v6;
  *(_QWORD *)(v6 + 8) = 0;
  if ( !a1 )
  {
    v81 = sub_5FF160();
    sub_5FF1E0((__int64 *)&v112, "clang_getSkippedRanges", 0x16u, v81);
    v82 = (pthread_mutex_t *)v112;
    if ( v112 )
    {
      sub_5FF0F0((__int64)v112 + 136, "called with a bad TU: ");
      sub_5FF0F0((__int64)(&v82[3].__align + 2), "<NULL TU>");
      if ( v82->__lock-- == 1 )
      {
        sub_60C330(v82, (__int64 (*)())"<NULL TU>", v83, v84);
        operator delete(v82, 0xC0u);
      }
    }
    return v7;
  }
  if ( !a2 )
    return v7;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 64) + 2880LL);
  if ( !v9 )
    return v7;
  v107 = *(_DWORD **)(v8 + 80);
  v10 = *((_QWORD *)v107 + 269);
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v11 & 4) == 0 || !v12 )
        break;
      v11 = *(_QWORD *)(v12 + 8);
      if ( !v11 )
        goto LABEL_41;
    }
  }
  else
  {
LABEL_41:
    v12 = 0;
  }
  v13 = *((_QWORD *)v107 + 269);
  v102.m128_u64[0] = v8;
  v14 = sub_CAB500(v13, v12);
  v105.m128_i32[0] = *(_DWORD *)(v10 + 448);
  sub_11EDB50(v9);
  v15 = *(unsigned int **)(v9 + 160);
  v103 = *(unsigned int **)(v9 + 168);
  if ( v15 == v103 )
  {
    *((_QWORD *)v7 + 1) = operator new[](0);
    return v7;
  }
  v16 = v102.m128_u64[0];
  v17 = nullptr;
  v102.m128_i32[0] = v14;
  v104 = 0;
  v18 = 0;
  v109 = v16;
  v108 = v7;
  do
  {
    while ( 1 )
    {
      v25 = *(int *)(v10 + 408);
      v26 = v25 + 1;
      v27 = *v15 & 0x7FFFFFFF;
      if ( (unsigned int)(v25 + 1) <= 1 )
      {
        v28 = *(_DWORD **)(v10 + 184);
        if ( v27 < (*v28 & 0x7FFFFFFFu) )
          goto LABEL_47;
        goto LABEL_21;
      }
      if ( (int)v25 >= 0 )
      {
        v28 = *(_DWORD **)(v10 + 184);
        if ( v27 < (v28[6 * v25] & 0x7FFFFFFFu) )
          goto LABEL_47;
LABEL_21:
        if ( *(_DWORD *)(v10 + 192) != v26 )
        {
          v29 = &v28[6 * v26];
          goto LABEL_23;
        }
        goto LABEL_46;
      }
      v47 = (unsigned int)(-2 - v25);
      v48 = *(_QWORD *)(*(_QWORD *)(v10 + 256) + 8LL * ((unsigned int)(-2 - v25) >> 6));
      if ( _bittest64(&v48, v47) )
      {
        v49 = (_QWORD *)(*(_QWORD *)(v10 + 208) + 8 * ((unsigned __int64)(int)v47 >> 5));
        v50 = *v49;
        if ( !*v49 )
        {
          v86 = (__int64 *)(*(_QWORD *)(v10 + 224) & 0xFFFFFFFFFFFFFFF8LL);
          v87 = *v86;
          v86[10] += 768;
          v88 = (_DWORD *)((v87 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v86[1] >= (unsigned __int64)(v88 + 192) && v87 )
          {
            *v86 = (__int64)(v88 + 192);
          }
          else
          {
            v111 = v25 + 1;
            v110 = v49;
            LODWORD(v106) = -2 - v25;
            v88 = (_DWORD *)sub_5F8390((__int64)v86, 768, 3);
            v26 = v25 + 1;
            v49 = v110;
            LOBYTE(v47) = -2 - v25;
          }
          *v49 = v88;
          v89 = v88 + 192;
          do
          {
            *v88 = 0;
            v88 += 6;
            *((_OWORD *)v88 - 1) = 0;
          }
          while ( v88 != v89 );
          v50 = *v49;
        }
        v51 = (_DWORD *)(v50 + 24 * (v47 & 0x1F));
      }
      else
      {
        LODWORD(v106) = v25 + 1;
        v51 = (_DWORD *)sub_CA9380(v10, (unsigned int)v47, 0);
        v26 = v25 + 1;
      }
      if ( v27 < (*v51 & 0x7FFFFFFFu) )
        goto LABEL_47;
      if ( (_DWORD)v25 == -2 )
      {
LABEL_24:
        v30 = *(_DWORD *)(v10 + 408);
        goto LABEL_25;
      }
      if ( *(_DWORD *)(v10 + 192) != v26 )
      {
        v52 = (unsigned int)(-2 - v26);
        v53 = *(_QWORD *)(*(_QWORD *)(v10 + 256) + 8LL * ((unsigned int)(-2 - v26) >> 6));
        if ( _bittest64(&v53, v52) )
        {
          v54 = (__int64 *)(*(_QWORD *)(v10 + 208) + 8 * ((unsigned __int64)(int)v52 >> 5));
          v55 = *v54;
          if ( !*v54 )
          {
            v90 = (__int64 *)(*(_QWORD *)(v10 + 224) & 0xFFFFFFFFFFFFFFF8LL);
            v91 = *v90;
            v90[10] += 768;
            v92 = (_DWORD *)((v91 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v90[1] >= (unsigned __int64)(v92 + 192) && v91 )
            {
              *v90 = (__int64)(v92 + 192);
            }
            else
            {
              v106 = v54;
              v92 = (_DWORD *)sub_5F8390((__int64)v90, 768, 3);
              v54 = (__int64 *)v106;
            }
            *v54 = (__int64)v92;
            v93 = v92 + 192;
            do
            {
              *v92 = 0;
              v92 += 6;
              *((_OWORD *)v92 - 1) = 0;
            }
            while ( v92 != v93 );
            v55 = *v54;
          }
          v29 = (_DWORD *)(v55 + 24 * (v52 & 0x1F));
        }
        else
        {
          v29 = (_DWORD *)sub_CA9380(v10, (unsigned int)v52, 0);
        }
LABEL_23:
        if ( v27 < (*v29 & 0x7FFFFFFFu) )
          goto LABEL_24;
        goto LABEL_47;
      }
LABEL_46:
      if ( v27 < *(_DWORD *)(v10 + 248) )
        goto LABEL_24;
LABEL_47:
      v30 = sub_CA9700(v10, v27);
LABEL_25:
      if ( v30 == v102.m128_i32[0] )
        goto LABEL_26;
      v19 = *(int *)(v10 + 408);
      v20 = v19 + 1;
      v21 = v15[1] & 0x7FFFFFFF;
      if ( (unsigned int)(v19 + 1) <= 1 )
      {
        v22 = *(_DWORD **)(v10 + 184);
        if ( v21 < (*v22 & 0x7FFFFFFFu) )
          goto LABEL_73;
        goto LABEL_11;
      }
      if ( (int)v19 >= 0 )
      {
        v22 = *(_DWORD **)(v10 + 184);
        if ( v21 < (v22[6 * v19] & 0x7FFFFFFFu) )
          goto LABEL_73;
LABEL_11:
        if ( *(_DWORD *)(v10 + 192) != v20 )
        {
          v23 = &v22[6 * v20];
          goto LABEL_13;
        }
        goto LABEL_72;
      }
      v66 = (unsigned int)(-2 - v19);
      v67 = *(_QWORD *)(*(_QWORD *)(v10 + 256) + 8LL * ((unsigned int)(-2 - v19) >> 6));
      if ( _bittest64(&v67, v66) )
      {
        v77 = (_QWORD *)(*(_QWORD *)(v10 + 208) + 8 * ((unsigned __int64)(int)v66 >> 5));
        v78 = *v77;
        if ( !*v77 )
        {
          v94 = (__int64 *)(*(_QWORD *)(v10 + 224) & 0xFFFFFFFFFFFFFFF8LL);
          v95 = *v94;
          v94[10] += 768;
          v96 = (_DWORD *)((v95 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v94[1] >= (unsigned __int64)(v96 + 192) && v95 )
          {
            *v94 = (__int64)(v96 + 192);
          }
          else
          {
            v111 = v19 + 1;
            v110 = v77;
            LODWORD(v106) = -2 - v19;
            v96 = (_DWORD *)sub_5F8390((__int64)v94, 768, 3);
            v20 = v19 + 1;
            v77 = v110;
            LOBYTE(v66) = -2 - v19;
          }
          *v77 = v96;
          v97 = v96 + 192;
          do
          {
            *v96 = 0;
            v96 += 6;
            *((_OWORD *)v96 - 1) = 0;
          }
          while ( v97 != v96 );
          v78 = *v77;
        }
        v68 = (_DWORD *)(v78 + 24 * (v66 & 0x1F));
      }
      else
      {
        LODWORD(v106) = v19 + 1;
        v68 = (_DWORD *)sub_CA9380(v10, (unsigned int)v66, 0);
        v20 = v19 + 1;
      }
      if ( v21 < (*v68 & 0x7FFFFFFFu) )
        goto LABEL_73;
      if ( (_DWORD)v19 == -2 )
      {
LABEL_14:
        v24 = *(_DWORD *)(v10 + 408);
        goto LABEL_15;
      }
      if ( *(_DWORD *)(v10 + 192) != v20 )
      {
        v69 = (unsigned int)(-2 - v20);
        v70 = *(_QWORD *)(*(_QWORD *)(v10 + 256) + 8LL * ((unsigned int)(-2 - v20) >> 6));
        if ( _bittest64(&v70, v69) )
        {
          v71 = (__int64 *)(*(_QWORD *)(v10 + 208) + 8 * ((unsigned __int64)(int)v69 >> 5));
          v72 = *v71;
          if ( !*v71 )
          {
            v98 = (__int64 *)(*(_QWORD *)(v10 + 224) & 0xFFFFFFFFFFFFFFF8LL);
            v99 = *v98;
            v98[10] += 768;
            v100 = (_DWORD *)((v99 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v98[1] >= (unsigned __int64)(v100 + 192) && v99 )
            {
              *v98 = (__int64)(v100 + 192);
            }
            else
            {
              v106 = v71;
              v100 = (_DWORD *)sub_5F8390((__int64)v98, 768, 3);
              v71 = (__int64 *)v106;
            }
            *v71 = (__int64)v100;
            v101 = v100 + 192;
            do
            {
              *v100 = 0;
              v100 += 6;
              *((_OWORD *)v100 - 1) = 0;
            }
            while ( v101 != v100 );
            v72 = *v71;
          }
          v23 = (_DWORD *)(v72 + 24 * (v69 & 0x1F));
        }
        else
        {
          v23 = (_DWORD *)sub_CA9380(v10, (unsigned int)v69, 0);
        }
LABEL_13:
        if ( v21 < (*v23 & 0x7FFFFFFFu) )
          goto LABEL_14;
        goto LABEL_73;
      }
LABEL_72:
      if ( v21 < *(_DWORD *)(v10 + 248) )
        goto LABEL_14;
LABEL_73:
      v24 = sub_CA9700(v10, v21);
LABEL_15:
      if ( v102.m128_i32[0] != v24 )
        break;
LABEL_26:
      if ( v18 != v104 )
        goto LABEL_27;
      v56 = (v18 - (__int64)v17) >> 3;
      if ( v56 == 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_142;
      v57 = 1;
      if ( v56 )
        v57 = (v18 - (__int64)v17) >> 3;
      v58 = __CFADD__(v57, v56);
      v59 = v57 + v56;
      if ( v58 )
      {
        v60 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v59 > 0xFFFFFFFFFFFFFFFLL )
          v59 = 0xFFFFFFFFFFFFFFFLL;
        v60 = 8 * v59;
      }
      v106 = (void *)(v18 - (_QWORD)v17);
      v61 = operator new(v60);
      *(_QWORD *)(v61 + v18 - (_QWORD)v17) = *(_QWORD *)v15;
      if ( v17 == (char *)v18 )
      {
LABEL_110:
        v18 = v61 + 8;
        if ( !v17 )
          goto LABEL_69;
        goto LABEL_68;
      }
      v62 = 0;
      v63 = v18 - (_QWORD)v17;
      do
      {
        *(_QWORD *)(v61 + v62) = *(_QWORD *)&v17[v62];
        v62 += 8;
      }
      while ( v63 != v62 );
LABEL_67:
      v18 = v61 + v63 + 8;
LABEL_68:
      operator delete(v17, v104 - (_QWORD)v17);
LABEL_69:
      v17 = (char *)v61;
      v104 = v61 + v60;
LABEL_17:
      v15 += 2;
      if ( v103 == v15 )
        goto LABEL_28;
    }
    if ( v105.m128_i32[0] != v102.m128_i32[0]
      || !(unsigned __int8)sub_FEE100(v109, *v15) && !(unsigned __int8)sub_FEE100(v109, v15[1]) )
    {
      goto LABEL_17;
    }
    if ( v18 == v104 )
    {
      v73 = (v18 - (__int64)v17) >> 3;
      if ( v73 == 0xFFFFFFFFFFFFFFFLL )
LABEL_142:
        std::__throw_length_error("vector::_M_realloc_append");
      v74 = 1;
      if ( v73 )
        v74 = (v18 - (__int64)v17) >> 3;
      v58 = __CFADD__(v74, v73);
      v75 = v74 + v73;
      if ( v58 )
      {
        v60 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v75 > 0xFFFFFFFFFFFFFFFLL )
          v75 = 0xFFFFFFFFFFFFFFFLL;
        v60 = 8 * v75;
      }
      v106 = (void *)(v18 - (_QWORD)v17);
      v61 = operator new(v60);
      *(_QWORD *)(v61 + v18 - (_QWORD)v17) = *(_QWORD *)v15;
      if ( v17 == (char *)v18 )
        goto LABEL_110;
      v76 = 0;
      v63 = v18 - (_QWORD)v17;
      do
      {
        *(_QWORD *)(v61 + v76) = *(_QWORD *)&v17[v76];
        v76 += 8;
      }
      while ( v63 != v76 );
      goto LABEL_67;
    }
LABEL_27:
    v31 = *(_QWORD *)v15;
    v18 += 8;
    v15 += 2;
    *(_QWORD *)(v18 - 8) = v31;
  }
  while ( v103 != v15 );
LABEL_28:
  v32 = v17;
  v106 = v17;
  v7 = v108;
  v33 = v18 - (_QWORD)v17;
  v34 = v32;
  *v108 = v33 >> 3;
  v35 = operator new[](24LL * (unsigned int)(v33 >> 3));
  *((_QWORD *)v7 + 1) = v35;
  if ( (unsigned int)(v33 >> 3) )
  {
    v36 = v107;
    v37 = (__int64)&v34[8 * (unsigned int)(v33 >> 3) + 4];
    v107 = v7;
    v38 = (__m128i *)v35;
    v39 = v34 + 4;
    while ( 1 )
    {
      LODWORD(v40) = *v39;
      v41 = _mm_cvtsi32_si128(*(v39 - 1));
      si128 = (__m128)_mm_loadu_si128((const __m128i *)(v36 + 538));
      if ( !*v39 )
        break;
      v43 = si128.m128_u64[0];
      v44 = *v39;
      if ( (v40 & 0x80000000) != 0LL )
      {
        v105 = si128;
        LODWORD(v103) = _mm_cvtsi128_si32(v41);
        v102.m128_u64[0] = si128.m128_u64[0];
        v64 = sub_CAC7C0(si128.m128_u64[0], (unsigned int)v40, 0);
        v43 = v102.m128_u64[0];
        v41 = _mm_cvtsi32_si128((unsigned int)v103);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v105);
        if ( v64 )
          goto LABEL_71;
        v79 = sub_CACEA0(v102.m128_u64[0], (unsigned int)v40);
        v41 = _mm_cvtsi32_si128((unsigned int)v103);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v105);
        v112 = (void *)v79;
        v40 = HIDWORD(v79);
        v113 = v80;
        if ( !(_BYTE)v80 )
          goto LABEL_34;
        if ( !HIDWORD(v79) )
          break;
        v43 = v102.m128_u64[0];
        v44 = HIDWORD(v79);
        if ( v79 < 0 )
        {
LABEL_71:
          v102.m128_u64[0] = v43;
          v44 = v40;
          v105 = si128;
          LODWORD(v103) = _mm_cvtsi128_si32(v41);
          v65 = sub_CAB1A0(v43, (unsigned int)v40);
          si128 = (__m128)_mm_load_si128((const __m128i *)&v105);
          v41 = _mm_cvtsi32_si128((unsigned int)v103);
          v43 = v102.m128_u64[0];
          LODWORD(v40) = v65;
        }
      }
      a6 = _mm_movehl_ps(a6, si128);
      LODWORD(v103) = _mm_cvtsi128_si32(v41);
      v102 = si128;
      v45 = sub_1169590((unsigned int)v40, v43, a6.m128_u64[0]);
      v41 = _mm_cvtsi32_si128((unsigned int)v103);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v102);
      LODWORD(v40) = v44 + v45;
LABEL_34:
      v39 += 2;
      *v38 = (__m128i)si128;
      v38 = (__m128i *)((char *)v38 + 24);
      v38[-1].m128i_i64[1] = _mm_unpacklo_epi32(v41, _mm_cvtsi32_si128(v40)).m128i_u64[0];
      if ( (_DWORD *)v37 == v39 )
      {
        v7 = v107;
        goto LABEL_36;
      }
    }
    LODWORD(v40) = 0;
    goto LABEL_34;
  }
LABEL_36:
  if ( v106 )
    operator delete(v106, v104 - (_QWORD)v106);
  return v7;
}

