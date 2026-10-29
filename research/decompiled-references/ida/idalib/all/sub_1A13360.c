__int64 __fastcall sub_1A13360(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5, __m128 a6, __m128 a7)
{
  unsigned int v8; // esi
  _BYTE *v9; // rcx
  __int64 v10; // r13
  unsigned int v11; // r14d
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  const __m128i *v16; // rbx
  _BYTE *v17; // rbp
  unsigned __int64 v18; // rdx
  __m128 *v19; // rax
  __int64 v20; // rdx
  char v21; // r15
  __int64 v22; // rbx
  _DWORD *v24; // rsi
  int v25; // eax
  unsigned int v26; // edx
  unsigned __int64 v27; // rbp
  const __m128i *v28; // rbx
  _BYTE *v29; // r12
  unsigned __int64 v30; // rdx
  __m128 *v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  void *v36; // rdi
  _DWORD *v37; // r8
  _DWORD *v38; // rbx
  int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  const __m128i *v43; // rbp
  unsigned __int64 v44; // rdx
  __m128i *v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  int v53; // r12d
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rbp
  _DWORD *v56; // r8
  unsigned __int8 v57; // r12
  int v58; // eax
  bool v59; // r12
  unsigned __int8 v60; // r12
  unsigned int v61; // eax
  void *v62; // rdx
  int v63; // eax
  void *v64; // rsi
  void *v65; // r15
  _QWORD *v66; // rax
  void *v67; // rsi
  void *v68; // r8
  _QWORD *v69; // rax
  __int64 v70; // rbp
  unsigned int v71; // eax
  void *v72; // rdx
  signed __int64 v73; // rbp
  char v74; // [rsp+0h] [rbp-638h]
  _DWORD *v77; // [rsp+28h] [rbp-610h]
  unsigned __int64 v78; // [rsp+28h] [rbp-610h]
  _DWORD *v79; // [rsp+28h] [rbp-610h]
  _DWORD *v80; // [rsp+28h] [rbp-610h]
  __int64 v83; // [rsp+50h] [rbp-5E8h]
  _DWORD *v84; // [rsp+50h] [rbp-5E8h]
  void *v85; // [rsp+50h] [rbp-5E8h]
  size_t v86; // [rsp+50h] [rbp-5E8h]
  bool v87; // [rsp+58h] [rbp-5E0h]
  _DWORD *v88; // [rsp+58h] [rbp-5E0h]
  _DWORD *v89; // [rsp+58h] [rbp-5E0h]
  __int64 v90; // [rsp+58h] [rbp-5E0h]
  unsigned int v91; // [rsp+58h] [rbp-5E0h]
  void *v92; // [rsp+58h] [rbp-5E0h]
  unsigned int v93; // [rsp+60h] [rbp-5D8h]
  void *v94; // [rsp+60h] [rbp-5D8h]
  void *v95; // [rsp+60h] [rbp-5D8h]
  void *v96; // [rsp+68h] [rbp-5D0h]
  void *v97; // [rsp+70h] [rbp-5C8h] BYREF
  unsigned int v98; // [rsp+78h] [rbp-5C0h]
  unsigned __int8 v99; // [rsp+7Ch] [rbp-5BCh]
  void *v100; // [rsp+80h] [rbp-5B8h] BYREF
  unsigned int v101; // [rsp+88h] [rbp-5B0h]
  unsigned __int8 v102; // [rsp+8Ch] [rbp-5ACh]
  void *v103[2]; // [rsp+90h] [rbp-5A8h] BYREF
  _QWORD v104[2]; // [rsp+A0h] [rbp-598h] BYREF
  void *v105[2]; // [rsp+B0h] [rbp-588h] BYREF
  _QWORD v106[2]; // [rsp+C0h] [rbp-578h] BYREF
  void *v107; // [rsp+D0h] [rbp-568h] BYREF
  size_t v108[2]; // [rsp+D8h] [rbp-560h]
  _BYTE v109[40]; // [rsp+E8h] [rbp-550h] BYREF
  void *src; // [rsp+110h] [rbp-528h] BYREF
  size_t n[2]; // [rsp+118h] [rbp-520h]
  _BYTE v112[40]; // [rsp+128h] [rbp-510h] BYREF
  void *v113; // [rsp+150h] [rbp-4E8h] BYREF
  __int64 v114; // [rsp+158h] [rbp-4E0h]
  unsigned __int64 v115; // [rsp+160h] [rbp-4D8h]
  void *ptr; // [rsp+1E0h] [rbp-458h] BYREF
  __int64 v117; // [rsp+1E8h] [rbp-450h]
  _BYTE v118[256]; // [rsp+1F0h] [rbp-448h] BYREF
  void *v119; // [rsp+2F0h] [rbp-348h] BYREF
  __int64 v120; // [rsp+2F8h] [rbp-340h]
  _BYTE v121[824]; // [rsp+300h] [rbp-338h] BYREF

  v8 = *(_DWORD *)(a2 + 8);
  v9 = v118;
  v119 = v121;
  v120 = 0x2000000000LL;
  ptr = v118;
  v117 = 0x2000000000LL;
  if ( !v8 )
  {
    v21 = 0;
    goto LABEL_10;
  }
  v10 = a2;
  v11 = 0;
  v74 = 0;
  do
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)v10 + 40LL * v11;
      v13 = *(_DWORD *)v12;
      if ( !*(_DWORD *)v12 )
        break;
      if ( v13 == 1 )
      {
        v24 = *(_DWORD **)(v12 + 8);
        BYTE4(n[0]) = 0;
        LODWORD(n[0]) = 1;
        src = nullptr;
        if ( ((*v24 >> 14) & 0xC) != 0 )
          goto LABEL_19;
        v27 = sub_1A130B0((__int64 *)a1, (unsigned __int64)v24, (__int64)&src, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
        v24 = (_DWORD *)v27;
        if ( !v27 )
        {
          v74 = 1;
          goto LABEL_24;
        }
        if ( *(_DWORD *)v12 == 1 )
        {
LABEL_19:
          v25 = *(_DWORD *)(v12 + 20);
          v26 = *(_DWORD *)(v12 + 16);
          v27 = (unsigned __int64)v24;
        }
        else
        {
          v25 = *(_DWORD *)(v12 + 32);
          v26 = *(_DWORD *)(v12 + 24);
        }
        v28 = (const __m128i *)&v113;
        HIDWORD(v115) = v25;
        v29 = v119;
        v114 = __PAIR64__(v26, v117);
        LODWORD(v113) = 1;
        v30 = (unsigned int)v120 + 1LL;
        LODWORD(v115) = 0;
        v31 = (__m128 *)((char *)v119 + 24 * (unsigned int)v120);
        if ( v30 > HIDWORD(v120) )
        {
          if ( v119 > &v113 || v31 <= (__m128 *)&v113 )
          {
            sub_2237220(&v119, v121, v30, 24);
            v28 = (const __m128i *)&v113;
            v31 = (__m128 *)((char *)v119 + 24 * (unsigned int)v120);
          }
          else
          {
            sub_2237220(&v119, v121, v30, 24);
            v28 = (const __m128i *)((char *)v119 + (char *)&v113 - v29);
            v31 = (__m128 *)((char *)v119 + 24 * (unsigned int)v120);
          }
        }
        a7 = (__m128)_mm_loadu_si128(v28);
        *v31 = a7;
        v32 = v28[1].m128i_i64[0];
        v33 = HIDWORD(v117);
        LODWORD(v120) = v120 + 1;
        v31[1].m128_u64[0] = v32;
        v34 = (unsigned int)v117;
        v35 = (unsigned int)v117 + 1LL;
        if ( v35 > v33 )
        {
          sub_2237220(&ptr, v118, v35, 8);
          v34 = (unsigned int)v117;
        }
        *((_QWORD *)ptr + v34) = v27;
        LODWORD(v117) = v117 + 1;
LABEL_24:
        if ( LODWORD(n[0]) <= 0x40 )
          goto LABEL_27;
        v36 = src;
        if ( !src )
          goto LABEL_27;
        goto LABEL_26;
      }
      if ( v13 == 2 )
      {
        v37 = *(_DWORD **)(v12 + 8);
        v38 = *(_DWORD **)(v12 + 16);
        v98 = 1;
        v97 = nullptr;
        v99 = 0;
        v101 = 1;
        v100 = nullptr;
        v102 = 0;
        if ( ((*v37 >> 14) & 0xC) != 0 )
        {
          v39 = *v38 >> 14;
          if ( (v39 & 4) != 0 )
          {
            v40 = *(_DWORD *)(v12 + 28);
            goto LABEL_31;
          }
          if ( (v39 & 8) != 0 )
            goto LABEL_65;
          v77 = v37;
          v51 = sub_1A130B0((__int64 *)a1, (unsigned __int64)v38, (__int64)&v100, a6, a7);
          v37 = v77;
          v38 = (_DWORD *)(v51 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v51 & 0xFFFFFFFFFFFFFFFELL) == 0 )
          {
LABEL_50:
            v74 = 1;
            goto LABEL_38;
          }
LABEL_64:
          v13 = *(_DWORD *)v12;
LABEL_65:
          v40 = *(_DWORD *)(v12 + 28);
LABEL_61:
          if ( v13 == 1 )
          {
            v41 = *(_DWORD *)(v12 + 20);
            v42 = *(_DWORD *)(v12 + 16);
            goto LABEL_32;
          }
LABEL_31:
          v41 = *(_DWORD *)(v12 + 32);
          v42 = *(_DWORD *)(v12 + 24);
LABEL_32:
          v43 = (const __m128i *)&v113;
          v115 = __PAIR64__(v41, v40);
          v44 = (unsigned int)v120 + 1LL;
          LODWORD(v113) = 2;
          v114 = __PAIR64__(v42, v117);
          v45 = (__m128i *)((char *)v119 + 24 * (unsigned int)v120);
          if ( v44 > HIDWORD(v120) )
          {
            if ( v119 > &v113 || v45 <= (__m128i *)&v113 )
            {
              v84 = v37;
              sub_2237220(&v119, v121, v44, 24);
              v43 = (const __m128i *)&v113;
              v37 = v84;
              v45 = (__m128i *)((char *)v119 + 24 * (unsigned int)v120);
            }
            else
            {
              v80 = v37;
              v73 = (char *)&v113 - (_BYTE *)v119;
              sub_2237220(&v119, v121, v44, 24);
              v37 = v80;
              v43 = (const __m128i *)((char *)v119 + v73);
              v45 = (__m128i *)((char *)v119 + 24 * (unsigned int)v120);
            }
          }
          *v45 = _mm_loadu_si128(v43);
          v46 = v43[1].m128i_i64[0];
          v47 = HIDWORD(v117);
          LODWORD(v120) = v120 + 1;
          v45[1].m128i_i64[0] = v46;
          v48 = (unsigned int)v117;
          v49 = (unsigned int)v117 + 1LL;
          if ( v49 > v47 )
          {
            v79 = v37;
            sub_2237220(&ptr, v118, v49, 8);
            v48 = (unsigned int)v117;
            v37 = v79;
          }
          *((_QWORD *)ptr + v48) = v37;
          LODWORD(v117) = v117 + 1;
          v50 = (unsigned int)v117;
          if ( (unsigned __int64)(unsigned int)v117 + 1 > HIDWORD(v117) )
          {
            sub_2237220(&ptr, v118, (unsigned int)v117 + 1LL, 8);
            v50 = (unsigned int)v117;
          }
          *((_QWORD *)ptr + v50) = v38;
          LODWORD(v117) = v117 + 1;
          goto LABEL_38;
        }
        v53 = *v38 >> 14;
        v54 = sub_1A130B0((__int64 *)a1, (unsigned __int64)v37, (__int64)&v97, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
        v55 = v54;
        v37 = (_DWORD *)v54;
        if ( (v53 & 0xC) != 0 )
        {
          if ( !v54 )
            goto LABEL_50;
          goto LABEL_64;
        }
        v78 = v54;
        v87 = v54 == 0;
        v38 = (_DWORD *)(sub_1A130B0((__int64 *)a1, (unsigned __int64)v38, (__int64)&v100, a6, a7) & 0xFFFFFFFFFFFFFFFELL);
        if ( !v38 )
          goto LABEL_50;
        v56 = (_DWORD *)v78;
        if ( v87 )
          goto LABEL_50;
        if ( v98 > v101 )
        {
          v57 = v102;
          if ( v102 )
            sub_2206CD0(&v113, &v100, v98);
          else
            sub_2206B70(&v113, &v100, v98);
          v71 = v114;
          v56 = (_DWORD *)v78;
          v72 = v113;
          if ( v101 > 0x40 && v100 )
          {
            v94 = v113;
            v91 = v114;
            operator delete[](v100);
            v56 = (_DWORD *)v78;
            v72 = v94;
            v71 = v91;
          }
          v100 = v72;
          v101 = v71;
          v102 = v57;
        }
        else if ( v98 < v101 )
        {
          v60 = v99;
          if ( v99 )
            sub_2206CD0(&v113, &v97, v101);
          else
            sub_2206B70(&v113, &v97, v101);
          v61 = v114;
          v56 = (_DWORD *)v78;
          v62 = v113;
          if ( v98 > 0x40 && v97 )
          {
            v96 = v113;
            v93 = v114;
            operator delete[](v97);
            v62 = v96;
            v61 = v93;
            v56 = (_DWORD *)v78;
          }
          v99 = v60;
          v57 = v102;
          v97 = v62;
          v98 = v61;
        }
        else
        {
          v57 = v102;
        }
        if ( v57 )
        {
          v88 = v56;
          v58 = sub_2205DB0(&v100, &v97);
          v37 = v88;
          v40 = *(_DWORD *)(v12 + 28);
          v59 = v58 < 0;
          if ( v58 >= 0 )
          {
LABEL_60:
            v13 = *(_DWORD *)v12;
            goto LABEL_61;
          }
        }
        else
        {
          v89 = v56;
          v63 = sub_2205E20(&v100, &v97);
          v37 = v89;
          v40 = *(_DWORD *)(v12 + 28);
          v59 = v63 < 0;
          if ( v63 >= 0 )
            goto LABEL_60;
        }
        sub_168B9F0((__int64)&v113, (__int64 *)(a1 + 8), v40, 0xBF9u, 0);
        src = v112;
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        sub_220BA90((unsigned int)&v97, (unsigned int)&src, 10, v99 ^ 1, 0, 1, 0);
        v64 = src;
        v65 = (void *)n[0];
        v103[0] = v104;
        if ( (char *)src + n[0] && !src )
          goto LABEL_121;
        if ( n[0] > 0xF )
        {
          if ( (n[0] & 0x8000000000000000LL) != 0LL )
LABEL_122:
            std::__throw_length_error("basic_string::_M_create");
          v92 = src;
          v66 = (_QWORD *)operator new(n[0] + 1);
          v104[0] = v65;
          v64 = v92;
          v103[0] = v66;
        }
        else
        {
          if ( n[0] == 1 )
          {
            LOBYTE(v104[0]) = *(_BYTE *)src;
            v66 = v104;
            goto LABEL_82;
          }
          v66 = v104;
          if ( !n[0] )
          {
LABEL_82:
            v103[1] = v65;
            *((_BYTE *)v65 + (_QWORD)v66) = 0;
            if ( src != v112 )
              free(src);
            v90 = sub_1682AF0((__int64)&v113, (__int64)v103);
            v107 = v109;
            *(__m128i *)v108 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
            sub_220BA90((unsigned int)&v100, (unsigned int)&v107, 10, v102 ^ 1, 0, 1, 0);
            v67 = v107;
            v68 = (void *)v108[0];
            v105[0] = v106;
            if ( (char *)v107 + v108[0] && !v107 )
LABEL_121:
              std::__throw_logic_error("basic_string::_M_construct null not valid");
            if ( v108[0] > 0xF )
            {
              v95 = v107;
              if ( (v108[0] & 0x8000000000000000LL) != 0LL )
                goto LABEL_122;
              v86 = v108[0];
              v69 = (_QWORD *)operator new(v108[0] + 1);
              v68 = (void *)v86;
              v67 = v95;
              v105[0] = v69;
              v106[0] = v86;
            }
            else
            {
              if ( v108[0] == 1 )
              {
                LOBYTE(v106[0]) = *(_BYTE *)v107;
                v69 = v106;
LABEL_89:
                v105[1] = v68;
                *((_BYTE *)v68 + (_QWORD)v69) = 0;
                if ( v107 != v109 )
                  free(v107);
                v83 = sub_1682AF0(v90, (__int64)v105);
                v107 = (void *)sub_EEC8C0(v55, (__int64)v105, *(double *)a6.m128_u64);
                v70 = sub_1587DB0(v83, (__int64 *)&v107);
                src = (void *)sub_EEC8C0((unsigned __int64)v38, (__int64)&v107, *(double *)a6.m128_u64);
                sub_1587DB0(v70, (__int64 *)&src);
                if ( v105[0] != v106 )
                  operator delete(v105[0]);
                if ( v103[0] != v104 )
                  operator delete(v103[0]);
                sub_15F7200(&v113);
                v74 = v59;
LABEL_38:
                if ( v101 > 0x40 && v100 )
                  operator delete[](v100);
                if ( v98 <= 0x40 )
                  goto LABEL_27;
                v36 = v97;
                if ( !v97 )
                  goto LABEL_27;
LABEL_26:
                operator delete[](v36);
LABEL_27:
                v8 = *(_DWORD *)(v10 + 8);
                goto LABEL_5;
              }
              v69 = v106;
              if ( !v108[0] )
                goto LABEL_89;
            }
            v85 = v68;
            memcpy(v69, v67, (size_t)v68);
            v68 = v85;
            v69 = v105[0];
            goto LABEL_89;
          }
        }
        memcpy(v66, v64, (size_t)v65);
        v66 = v103[0];
        goto LABEL_82;
      }
LABEL_5:
      if ( ++v11 >= v8 )
        goto LABEL_9;
    }
    v14 = *(_QWORD *)(v12 + 8);
    v15 = *(_QWORD *)(v12 + 16);
    v16 = (const __m128i *)&v113;
    LODWORD(v113) = 0;
    v17 = v119;
    v115 = v15;
    v114 = v14 | 1;
    v18 = (unsigned int)v120 + 1LL;
    v19 = (__m128 *)((char *)v119 + 24 * (unsigned int)v120);
    if ( v18 > HIDWORD(v120) )
    {
      if ( v119 > &v113 || v19 <= (__m128 *)&v113 )
      {
        sub_2237220(&v119, v121, v18, 24);
        v19 = (__m128 *)((char *)v119 + 24 * (unsigned int)v120);
      }
      else
      {
        sub_2237220(&v119, v121, v18, 24);
        v16 = (const __m128i *)((char *)v119 + (char *)&v113 - v17);
        v19 = (__m128 *)((char *)v119 + 24 * (unsigned int)v120);
      }
    }
    a6 = (__m128)_mm_loadu_si128(v16);
    ++v11;
    *v19 = a6;
    v20 = v16[1].m128i_i64[0];
    LODWORD(v120) = v120 + 1;
    v19[1].m128_u64[0] = v20;
    v8 = *(_DWORD *)(v10 + 8);
  }
  while ( v11 < v8 );
LABEL_9:
  v21 = v74;
  v9 = ptr;
LABEL_10:
  if ( a5 == 1 || v21 )
  {
    v22 = 1;
  }
  else
  {
    v52 = sub_C0D0A0(
            *(_QWORD **)(a1 + 248),
            (__int64)v119,
            v120,
            (__int64)v9,
            (unsigned int)v117,
            a3,
            a4,
            a5 & 0xFFFFFFFFFFFFFFFELL);
    v9 = ptr;
    v22 = v52;
  }
  if ( v9 != v118 )
    free(v9);
  if ( v119 != v121 )
    free(v119);
  return v22;
}
