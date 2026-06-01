__int64 __fastcall sub_2005DF0(__int64 a1, void **a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r15
  int v16; // eax
  void *v17; // rbx
  void *v18; // rdx
  void *v19; // rbp
  void *v20; // rax
  char *v21; // rdx
  size_t v22; // r8
  __int64 v23; // rbx
  const void *v24; // rsi
  void *v25; // rax
  signed __int64 v26; // rbx
  char *v27; // rax
  char *v28; // rcx
  size_t v29; // rbp
  __m128i v30; // xmm0
  char *v31; // rcx
  size_t v32; // rbx
  void *v33; // rbp
  __int64 v34; // r14
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // r8
  __int64 *v39; // rax
  __int64 v40; // rbp
  _QWORD *v41; // rbx
  void *v42; // rax
  signed __int64 v43; // r14
  char *v44; // rcx
  __m128i v45; // xmm0
  signed __int64 v46; // r14
  __int64 *v47; // rax
  _QWORD *v48; // rbx
  void *v49; // rax
  signed __int64 v50; // rbp
  char *v51; // rcx
  _QWORD *v52; // r14
  __m128i v53; // xmm0
  signed __int64 v54; // rbp
  __int64 *v55; // rax
  __int64 v56; // rbx
  size_t v57; // rdx
  _BYTE *v58; // rdi
  void *v59; // rax
  _DWORD *v60; // rax
  char *v61; // rsi
  unsigned __int64 v62; // rdx
  void *v63; // rdi
  __int64 *v64; // rax
  bool v65; // zf
  size_t v66; // rdx
  __int64 v67; // rax
  unsigned __int32 v68; // r9d
  __int64 *v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rbx
  unsigned int v72; // eax
  void *v73; // rdi
  char **v74; // rdi
  __m128i v75; // [rsp+8h] [rbp-2E0h] BYREF
  __m128i v76; // [rsp+18h] [rbp-2D0h] BYREF
  __int64 *v77; // [rsp+28h] [rbp-2C0h]
  __int64 v78; // [rsp+30h] [rbp-2B8h]
  void *v79; // [rsp+38h] [rbp-2B0h]
  __int64 v80; // [rsp+40h] [rbp-2A8h]
  void *v81; // [rsp+48h] [rbp-2A0h]
  void *src[2]; // [rsp+50h] [rbp-298h] BYREF
  __int128 v83; // [rsp+60h] [rbp-288h]
  void *v84; // [rsp+70h] [rbp-278h] BYREF
  __m128i v85; // [rsp+78h] [rbp-270h]
  __int64 v86; // [rsp+88h] [rbp-260h] BYREF
  void *v87; // [rsp+90h] [rbp-258h] BYREF
  __m128i v88; // [rsp+98h] [rbp-250h]
  __int64 v89; // [rsp+A8h] [rbp-240h] BYREF
  _QWORD v90[4]; // [rsp+B0h] [rbp-238h] BYREF
  __int16 v91; // [rsp+D0h] [rbp-218h]
  char v92[32]; // [rsp+E0h] [rbp-208h] BYREF
  __int16 v93; // [rsp+100h] [rbp-1E8h]
  void *v94; // [rsp+110h] [rbp-1D8h] BYREF
  size_t n; // [rsp+118h] [rbp-1D0h]
  _QWORD v96[2]; // [rsp+120h] [rbp-1C8h] BYREF
  __int16 v97; // [rsp+130h] [rbp-1B8h]
  void *ptr; // [rsp+140h] [rbp-1A8h] BYREF
  __m128i si128; // [rsp+148h] [rbp-1A0h]
  char v100; // [rsp+158h] [rbp-190h] BYREF
  __int16 v101; // [rsp+160h] [rbp-188h]
  void *v102; // [rsp+170h] [rbp-178h] BYREF
  size_t v103[2]; // [rsp+178h] [rbp-170h]
  __int64 v104; // [rsp+188h] [rbp-160h] BYREF
  __int16 v105; // [rsp+190h] [rbp-158h]
  void *v106; // [rsp+210h] [rbp-D8h] BYREF
  void *v107[2]; // [rsp+218h] [rbp-D0h]
  char *v108; // [rsp+228h] [rbp-C0h] BYREF
  __int64 *v109; // [rsp+230h] [rbp-B8h]
  __int64 v110; // [rsp+238h] [rbp-B0h]

  v3 = (__int64 *)sub_2276B50(a1 + 152);
  v4 = (__int64 *)sub_226EF90(a1 + 152);
  if ( v3 && (v5 = *v3) != 0 )
  {
    if ( v4 && *v4 && v3 == v4 )
      goto LABEL_6;
  }
  else
  {
    if ( !v4 || !*v4 )
      goto LABEL_6;
    v5 = *v3;
  }
  v7 = *(_QWORD *)(v5 + 104);
  if ( !v7 )
  {
    v7 = sub_2273F00(v5);
    *(_QWORD *)(v5 + 104) = v7;
    if ( !v7 )
    {
LABEL_6:
      sub_99BDC0(a2, 0, (unsigned __int64)a2[1], "Error while parsing YAML.", 0x19u);
      return 0;
    }
  }
  if ( *(_DWORD *)(v7 + 32) != 5 )
  {
    sub_99BDC0(a2, 0, (unsigned __int64)a2[1], "Expected array.", 0xFu);
    return 0;
  }
  *(_BYTE *)(v7 + 76) = 0;
  sub_2274D70(v7);
  v8 = *(_QWORD *)(v7 + 80);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 32) != 4 )
    {
LABEL_72:
      sub_99BDC0(a2, 0, (unsigned __int64)a2[1], "Expected object.", 0x10u);
      return 0;
    }
    v80 = v7;
    v76.m128i_i64[1] = a1;
    while ( 1 )
    {
      *(_BYTE *)(v8 + 76) = 0;
      *(_OWORD *)src = 0;
      v83 = 0;
      sub_22754C0(v8);
      v9 = *(_QWORD *)(v8 + 80);
      if ( !v9 )
        goto LABEL_91;
      v79 = nullptr;
      v77 = nullptr;
      v78 = 0;
      v75.m128i_i64[0] = (__int64)&ptr;
      do
      {
        v10 = sub_22751E0(v9);
        v11 = v10;
        if ( *(_DWORD *)(v10 + 32) != 1 )
        {
          sub_99BDC0(a2, 0, (unsigned __int64)a2[1], "Expected strings as key.", 0x18u);
          goto LABEL_82;
        }
        ptr = &v100;
        si128 = _mm_load_si128(xmmword_23A8F10);
        v12 = sub_2270420(v10, v75.m128i_i64[0]);
        v75.m128i_i64[1] = v13;
        v76.m128i_i64[0] = v12;
        v14 = sub_2275440(v9);
        v15 = v14;
        if ( !v14 )
        {
          sub_99BDC0(a2, 0, (unsigned __int64)a2[1], "Expected value.", 0xFu);
          goto LABEL_89;
        }
        v16 = *(_DWORD *)(v14 + 32);
        if ( v16 == 1 )
        {
          switch ( v75.m128i_i64[1] )
          {
            case 9LL:
              if ( *(_QWORD *)v76.m128i_i64[0] == 0x746E656D75677261LL && *(_BYTE *)(v76.m128i_i64[0] + 8) == 115 )
                goto LABEL_118;
              if ( !v15 )
                goto LABEL_88;
              if ( *(_QWORD *)v76.m128i_i64[0] != 0x726F746365726964LL || *(_BYTE *)(v76.m128i_i64[0] + 8) != 121 )
              {
LABEL_93:
                v57 = *(_QWORD *)(v11 + 72);
                v104 = *(_QWORD *)(v11 + 80);
                v106 = &v102;
                v107[1] = "\"";
                v105 = 1283;
                v102 = "Unknown key: \"";
                v103[1] = v57;
                LOWORD(v109) = 770;
                sub_2253560(&v94, &v106);
                v58 = *a2;
                if ( v94 != v96 )
                {
                  if ( v58 == (_BYTE *)(a2 + 2) )
                  {
                    v75.m128i_i64[1] = v96[0];
                    *a2 = v94;
                    *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v75.m128i_i64[1]);
                  }
                  else
                  {
                    v75.m128i_i64[1] = v96[0];
                    v59 = a2[2];
                    *a2 = v94;
                    *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v75.m128i_i64[1]);
                    if ( v58 )
                    {
                      v94 = v58;
                      v96[0] = v59;
                      goto LABEL_97;
                    }
                  }
                  v58 = v96;
                  v94 = v96;
                  goto LABEL_97;
                }
                v66 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *v58 = v96[0];
                  else
                    memcpy(v58, v94, n);
                  v66 = n;
                  v58 = *a2;
                }
                a2[1] = (void *)v66;
                v58[v66] = 0;
                v58 = v94;
LABEL_97:
                n = 0;
                *v58 = 0;
                if ( v94 != v96 )
                  operator delete(v94);
LABEL_89:
                if ( ptr != (void *)(v75.m128i_i64[0] + 24) )
                  free(ptr);
LABEL_82:
                if ( BYTE8(v83) && src[0] )
                {
                  operator delete(src[0]);
                  return 0;
                }
                return 0;
              }
              v78 = v15;
              break;
            case 7LL:
              if ( *(_DWORD *)v76.m128i_i64[0] != 1835888483
                || *(_WORD *)(v76.m128i_i64[0] + 4) != 28257
                || *(_BYTE *)(v76.m128i_i64[0] + 6) != 100 )
              {
                goto LABEL_93;
              }
              if ( !BYTE8(v83) )
              {
                v64 = (__int64 *)operator new(8u);
                v65 = BYTE8(v83) == 0;
                *v64 = v15;
                if ( v65 )
                {
                  v75.m128i_i64[1] = (__int64)(v64 + 1);
                  *(_QWORD *)&v83 = v64 + 1;
                  BYTE8(v83) = 1;
                  *(__m128 *)src = _mm_loadh_ps((const double *)&v75.m128i_i64[1]);
                }
                else
                {
                  v75.m128i_i64[1] = (__int64)(v64 + 1);
                  v73 = src[0];
                  *(_QWORD *)&v83 = v64 + 1;
                  *(__m128 *)src = _mm_loadh_ps((const double *)&v75.m128i_i64[1]);
                  if ( v73 )
                    operator delete(v73);
                }
              }
              break;
            case 4LL:
              if ( *(_DWORD *)v76.m128i_i64[0] != 1701603686 )
                goto LABEL_93;
              v77 = (__int64 *)v15;
              break;
            default:
              if ( v75.m128i_i64[1] != 6
                || *(_DWORD *)v76.m128i_i64[0] != 1886680431
                || *(_WORD *)(v76.m128i_i64[0] + 4) != 29813 )
              {
                goto LABEL_93;
              }
              v79 = (void *)v15;
              break;
          }
        }
        else
        {
          if ( v16 != 5 )
          {
            if ( v75.m128i_i64[1] == 9 && !memcmp((const void *)v76.m128i_i64[0], "arguments", 9u) )
LABEL_118:
              sub_99BDC0(a2, 0, (unsigned __int64)a2[1], "Expected sequence as value.", 0x1Bu);
            else
LABEL_88:
              sub_99BDC0(a2, 0, (unsigned __int64)a2[1], "Expected string as value.", 0x19u);
            goto LABEL_89;
          }
          if ( v75.m128i_i64[1] != 9
            || *(_QWORD *)v76.m128i_i64[0] != 0x746E656D75677261LL
            || *(_BYTE *)(v76.m128i_i64[0] + 8) != 115 )
          {
            goto LABEL_88;
          }
          if ( BYTE8(v83) )
          {
            v63 = src[0];
            *(_QWORD *)&v83 = 0;
            *(_OWORD *)src = 0;
            if ( v63 )
              operator delete(v63);
          }
          else
          {
            *(_QWORD *)&v83 = 0;
            BYTE8(v83) = 1;
            *(_OWORD *)src = 0;
          }
          *(_BYTE *)(v15 + 76) = 0;
          sub_2274D70(v15);
          v60 = *(_DWORD **)(v15 + 80);
          if ( v60 )
          {
            if ( v60[8] != 1 )
            {
LABEL_113:
              v62 = (unsigned __int64)a2[1];
              v106 = nullptr;
              sub_99BDC0(a2, 0, v62, "Only strings are allowed in 'arguments'.", 0x28u);
              goto LABEL_89;
            }
            while ( 1 )
            {
              v106 = v60;
              v61 = (char *)src[1];
              if ( src[1] == (void *)v83 )
              {
                sub_20040F0((__int64)src, src[1], (__int64 *)&v106);
              }
              else
              {
                *(_QWORD *)src[1] = v60;
                src[1] = v61 + 8;
              }
              sub_2274D70(v15);
              v60 = *(_DWORD **)(v15 + 80);
              if ( !v60 )
                break;
              if ( v60[8] != 1 )
                goto LABEL_113;
            }
          }
        }
        if ( ptr != &v100 )
          free(ptr);
        sub_22754C0(v8);
        v9 = *(_QWORD *)(v8 + 80);
      }
      while ( v9 );
      if ( !v77 )
      {
LABEL_91:
        sub_E3D120(a2, "Missing key: \"file\".");
        goto LABEL_82;
      }
      if ( !BYTE8(v83) )
      {
        sub_E3D120(a2, "Missing key: \"command\" or \"arguments\".");
        goto LABEL_82;
      }
      if ( !v78 )
      {
        sub_E3D120(a2, "Missing key: \"directory\".");
        goto LABEL_82;
      }
      v75.m128i_i64[1] = (__int64)&v84;
      v84 = &v86;
      v85 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
      v17 = (void *)sub_2270420(v77, &v84);
      v19 = v18;
      v102 = &v104;
      *(__m128i *)v103 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      LOWORD(v109) = 261;
      v106 = v17;
      v107[0] = v18;
      if ( !(unsigned __int8)sub_228B190(&v106, 0) )
      {
        LOWORD(v109) = 261;
        v106 = v17;
        v107[0] = v19;
        sub_228FF50(&v106, &v102, 0);
        goto LABEL_39;
      }
      v87 = &v89;
      v88 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
      v20 = (void *)sub_2270420(v78, &v87);
      v22 = (size_t)v21;
      v106 = &v108;
      *(__m128i *)v107 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( (unsigned __int64)v21 > 0x80 )
        break;
      if ( v21 )
      {
        v74 = &v108;
        goto LABEL_145;
      }
LABEL_35:
      v90[0] = v17;
      v23 = v75.m128i_i64[0];
      v107[0] = v21;
      v101 = 257;
      v97 = 257;
      v93 = 257;
      v91 = 261;
      v90[1] = v19;
      sub_228A3B0(&v106, v90, v92, &v94, v75.m128i_i64[0]);
      v101 = 261;
      ptr = v106;
      si128.m128i_i64[0] = (__int64)v107[0];
      sub_228FF50(v23, &v102, 0);
      if ( v106 != &v108 )
        free(v106);
      if ( v87 != &v89 )
        free(v87);
LABEL_39:
      sub_228F0B0(&v102, 1, 0);
      v24 = src[0];
      v107[0] = nullptr;
      v107[1] = nullptr;
      v106 = v79;
      v25 = src[1];
      v108 = nullptr;
      v26 = (char *)src[1] - (char *)src[0];
      if ( ((char *)src[1] - (char *)src[0]) >> 3 )
      {
        if ( (unsigned __int64)(((char *)src[1] - (char *)src[0]) >> 3) > 0x1FFFFFFFFFFFFFFFLL )
          goto LABEL_150;
        v27 = (char *)operator new((char *)src[1] - (char *)src[0]);
        v24 = src[0];
        v28 = v27;
        v25 = src[1];
        v29 = (char *)src[1] - (char *)src[0];
      }
      else
      {
        v29 = (char *)src[1] - (char *)src[0];
        v28 = nullptr;
      }
      v76.m128i_i64[0] = (__int64)v28;
      v30 = _mm_loadl_epi64(&v76);
      v108 = &v28[v26];
      *(__m128i *)v107 = _mm_unpacklo_epi64(v30, v30);
      if ( v25 != v24 )
        v28 = (char *)memmove(v28, v24, v29);
      v31 = &v28[v29];
      v32 = v103[0];
      v33 = v102;
      v107[1] = v31;
      v109 = v77;
      v110 = v78;
      v34 = v76.m128i_i64[1] + 8;
      v35 = sub_2244B30(v102, v103[0]);
      v36 = (unsigned int)sub_2244CB0(v34, v33, v32, v35);
      v38 = (__int64 *)(*(_QWORD *)(v76.m128i_i64[1] + 8) + 8 * v36);
      if ( *v38 )
      {
        if ( *v38 != -8 )
        {
          sub_2005DB0((__int64 **)v75.m128i_i64[0], v38, 0);
          v39 = (__int64 *)ptr;
          goto LABEL_47;
        }
        --*(_DWORD *)(v76.m128i_i64[1] + 24);
      }
      v77 = v38;
      v76.m128i_i32[0] = v36;
      v67 = sub_22300B0(v32 + 33, 8, v36, v37, v38, v36);
      v68 = v76.m128i_i32[0];
      v69 = v77;
      v70 = v67;
      if ( v32 )
      {
        v78 = v67;
        memcpy((void *)(v67 + 32), v33, v32);
        v70 = v78;
        v69 = v77;
        v68 = v76.m128i_i32[0];
      }
      *(_BYTE *)(v70 + v32 + 32) = 0;
      *(_QWORD *)v70 = v32;
      v71 = v76.m128i_i64[1];
      *(_OWORD *)(v70 + 8) = 0;
      *(_QWORD *)(v70 + 24) = 0;
      *v69 = v70;
      ++*(_DWORD *)(v71 + 20);
      v72 = sub_22450D0(v34, v68);
      sub_2005DB0((__int64 **)v75.m128i_i64[0], (__int64 *)(*(_QWORD *)(v71 + 8) + 8LL * v72), 0);
      v39 = (__int64 *)ptr;
LABEL_47:
      v40 = *v39;
      v41 = *(_QWORD **)(*v39 + 16);
      if ( v41 == *(_QWORD **)(*v39 + 24) )
      {
        sub_2004240(v40 + 8, *(char **)(*v39 + 16), (__int64)&v106);
      }
      else
      {
        v42 = v106;
        v43 = (char *)v107[1] - (char *)v107[0];
        v41[1] = 0;
        *v41 = v42;
        v41[2] = 0;
        v41[3] = 0;
        if ( v43 >> 3 )
        {
          if ( (unsigned __int64)(v43 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
            goto LABEL_150;
          v44 = (char *)operator new(v43);
        }
        else
        {
          v44 = nullptr;
        }
        v75.m128i_i64[0] = (__int64)v44;
        v45 = _mm_loadl_epi64(&v75);
        v41[3] = &v44[v43];
        *(__m128i *)(v41 + 1) = _mm_unpacklo_epi64(v45, v45);
        v46 = (char *)v107[1] - (char *)v107[0];
        if ( v107[1] != v107[0] )
          v44 = (char *)memmove(v44, v107[0], (char *)v107[1] - (char *)v107[0]);
        v47 = v109;
        v41[2] = &v44[v46];
        v41[4] = v47;
        v41[5] = v110;
        *(_QWORD *)(v40 + 16) += 48LL;
      }
      v48 = *(_QWORD **)(v76.m128i_i64[1] + 40);
      if ( v48 == *(_QWORD **)(v76.m128i_i64[1] + 48) )
      {
        sub_2004240(v76.m128i_i64[1] + 32, *(char **)(v76.m128i_i64[1] + 40), (__int64)&v106);
      }
      else
      {
        v49 = v106;
        v50 = (char *)v107[1] - (char *)v107[0];
        v48[1] = 0;
        *v48 = v49;
        v48[2] = 0;
        v48[3] = 0;
        if ( v50 >> 3 )
        {
          if ( (unsigned __int64)(v50 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
LABEL_150:
            std::__throw_bad_alloc();
          v51 = (char *)operator new(v50);
          v52 = *(_QWORD **)(v76.m128i_i64[1] + 40);
        }
        else
        {
          v52 = v48;
          v51 = nullptr;
        }
        v75.m128i_i64[0] = (__int64)v51;
        v53 = _mm_loadl_epi64(&v75);
        v48[3] = &v51[v50];
        *(__m128i *)(v48 + 1) = _mm_unpacklo_epi64(v53, v53);
        v54 = (char *)v107[1] - (char *)v107[0];
        if ( v107[1] != v107[0] )
          v51 = (char *)memmove(v51, v107[0], (char *)v107[1] - (char *)v107[0]);
        v55 = v109;
        v48[2] = &v51[v54];
        v48[4] = v55;
        v48[5] = v110;
        *(_QWORD *)(v76.m128i_i64[1] + 40) = v52 + 6;
      }
      sub_1FF8A70((__int64 *)(v76.m128i_i64[1] + 56), v102, v103[0]);
      if ( v107[0] )
        operator delete(v107[0]);
      if ( v102 != &v104 )
        free(v102);
      if ( v84 != (void *)(v75.m128i_i64[1] + 24) )
        free(v84);
      if ( BYTE8(v83) )
      {
        if ( src[0] )
          operator delete(src[0]);
      }
      v56 = v80;
      sub_2274D70(v80);
      v8 = *(_QWORD *)(v56 + 80);
      if ( !v8 )
        return 1;
      if ( *(_DWORD *)(v8 + 32) != 4 )
        goto LABEL_72;
    }
    v81 = v20;
    v76.m128i_i64[0] = (__int64)v21;
    sub_2236E10(&v106, &v108, v21, 1);
    v22 = v76.m128i_i64[0];
    v20 = v81;
    v74 = (char **)((char *)v106 + (unsigned __int64)v107[0]);
LABEL_145:
    v76.m128i_i64[0] = v22;
    memcpy(v74, v20, v22);
    v21 = (char *)v107[0] + v76.m128i_i64[0];
    goto LABEL_35;
  }
  return 1;
}
