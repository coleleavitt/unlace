void __fastcall sub_1FE8680(__int64 a1)
{
  size_t v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  size_t v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  char v9; // al
  char *v10; // r14
  _QWORD *v11; // rdx
  __m128i *v12; // rax
  size_t v13; // rcx
  unsigned __int64 v14; // rcx
  _BYTE *v15; // rsi
  _BYTE *v16; // rdi
  size_t v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __m128i *v20; // rax
  size_t v21; // rcx
  __m128i *v22; // rdi
  size_t v23; // r10
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __m128i *v26; // rax
  size_t v27; // rax
  size_t v28; // r11
  unsigned __int64 v29; // rcx
  _BYTE *v30; // rcx
  size_t v31; // r8
  size_t v32; // rsi
  __int64 v33; // rdi
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rax
  _BYTE *v36; // rdi
  void *v37; // rdi
  size_t v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // rbp
  unsigned __int64 v41; // rdx
  size_t v42; // rax
  __int64 v43; // rax
  unsigned int v44; // esi
  char v45; // al
  char *v46; // r13
  _QWORD *v47; // rax
  __m128i *v48; // rax
  size_t v49; // rcx
  size_t v50; // rbx
  size_t v51; // rdx
  _BYTE *v52; // rcx
  size_t v53; // r8
  size_t v54; // rsi
  __int64 v55; // rdi
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // rax
  size_t v58; // rbx
  __int64 v59; // rax
  unsigned __int64 v60; // rbp
  unsigned __int64 v61; // rdx
  size_t v62; // rax
  __int64 v63; // rax
  size_t v64; // rbx
  __int64 v65; // rax
  unsigned __int64 v66; // rbp
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  __int8 *v69; // rdi
  _BYTE *v70; // rdi
  char *v71; // rbp
  char *v72; // r12
  _QWORD *v73; // rax
  char *v74; // rbx
  unsigned __int64 i; // rcx
  char *v76; // r12
  _BYTE *v77; // rdi
  __int64 v78; // [rsp+0h] [rbp-188h]
  size_t v79; // [rsp+0h] [rbp-188h]
  char v80; // [rsp+Fh] [rbp-179h]
  __int64 v81; // [rsp+10h] [rbp-178h]
  size_t v82; // [rsp+10h] [rbp-178h]
  size_t v83; // [rsp+18h] [rbp-170h]
  size_t v84; // [rsp+18h] [rbp-170h]
  size_t v85; // [rsp+20h] [rbp-168h]
  size_t v86; // [rsp+28h] [rbp-160h]
  _QWORD v87[2]; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v88[2]; // [rsp+40h] [rbp-148h] BYREF
  void *v89; // [rsp+50h] [rbp-138h] BYREF
  size_t v90; // [rsp+58h] [rbp-130h]
  __m128i v91; // [rsp+60h] [rbp-128h] BYREF
  void *v92; // [rsp+70h] [rbp-118h] BYREF
  size_t v93; // [rsp+78h] [rbp-110h]
  _QWORD v94[2]; // [rsp+80h] [rbp-108h] BYREF
  __m128i v95; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v96[2]; // [rsp+A0h] [rbp-E8h] BYREF
  void *v97; // [rsp+B0h] [rbp-D8h] BYREF
  size_t v98; // [rsp+B8h] [rbp-D0h]
  __m128i v99; // [rsp+C0h] [rbp-C8h] BYREF
  void *v100[2]; // [rsp+D0h] [rbp-B8h] BYREF
  _QWORD v101[2]; // [rsp+E0h] [rbp-A8h] BYREF
  void *v102; // [rsp+F0h] [rbp-98h] BYREF
  size_t v103; // [rsp+F8h] [rbp-90h]
  __m128i v104; // [rsp+100h] [rbp-88h] BYREF
  void *src; // [rsp+110h] [rbp-78h] BYREF
  size_t n; // [rsp+118h] [rbp-70h]
  __m128i v107; // [rsp+120h] [rbp-68h] BYREF
  void *v108; // [rsp+130h] [rbp-58h]
  size_t v109; // [rsp+138h] [rbp-50h]
  _OWORD v110[4]; // [rsp+140h] [rbp-48h] BYREF

  v78 = a1 + 64;
  sub_99BDC0((_QWORD *)(a1 + 64), 0, *(_QWORD *)(a1 + 72), "__rvv_", 6u);
  switch ( *(_BYTE *)(a1 + 1) )
  {
    case 5:
      v44 = *(_DWORD *)(a1 + 16);
      if ( v44 > 0x40 )
      {
        v87[0] = v88;
        v45 = 48;
LABEL_75:
        LOBYTE(v88[0]) = v45;
        v46 = (_BYTE *)(&dword_0 + 1);
        v47 = v88;
        goto LABEL_76;
      }
      v74 = &v107.m128i_i8[5];
      for ( i = 0x40 / v44; ; i /= 0xAu )
      {
        --v74;
        v45 = i % 0xA + 48;
        *v74 = v45;
        if ( i <= 9 )
          break;
      }
      v76 = (char *)(&v107.m128i_u8[5] - (unsigned __int8 *)v74);
      v87[0] = v88;
      v46 = (char *)(&v107.m128i_u8[5] - (unsigned __int8 *)v74);
      if ( (unsigned __int64)(&v107.m128i_u8[5] - (unsigned __int8 *)v74) <= 0xF )
      {
        if ( v76 == (_BYTE *)&dword_0 + 1 )
          goto LABEL_75;
        v47 = v88;
        if ( !v76 )
        {
LABEL_76:
          v87[1] = v46;
          v46[(_QWORD)v47] = 0;
          v48 = (__m128i *)sub_99BDC0(v87, 0, 0, "bool", 4u);
          v89 = &v91;
          if ( (__m128i *)v48->m128i_i64[0] == &v48[1] )
          {
            v91 = _mm_loadu_si128(v48 + 1);
          }
          else
          {
            v89 = (void *)v48->m128i_i64[0];
            v91.m128i_i64[0] = v48[1].m128i_i64[0];
          }
          v49 = v48->m128i_u64[1];
          v48[1].m128i_i8[0] = 0;
          v90 = v49;
          v48->m128i_i64[0] = (__int64)v48[1].m128i_i64;
          v48->m128i_i64[1] = 0;
          v50 = v90;
          if ( v90 != 0x7FFFFFFFFFFFFFFFLL && v90 != 9223372036854775806LL )
          {
            if ( v89 == &v91 )
              v51 = 15;
            else
              v51 = v91.m128i_i64[0];
            if ( v90 + 2 > v51 )
              sub_998B30((__int64)&v89, v90, 0, "_t", 2u);
            else
              *(_WORD *)((char *)v89 + v90) = 29791;
            v90 = v50 + 2;
            *((_BYTE *)v89 + v50 + 2) = 0;
            v52 = v89;
            v108 = v110;
            if ( v89 == &v91 )
            {
              v52 = v110;
              v110[0] = _mm_load_si128(&v91);
            }
            else
            {
              v108 = v89;
              *(_QWORD *)&v110[0] = v91.m128i_i64[0];
            }
            v53 = v90;
            v54 = *(_QWORD *)(a1 + 72);
            v90 = 0;
            v55 = *(_QWORD *)(a1 + 64);
            v89 = &v91;
            v109 = v53;
            v56 = v54 + v53;
            v91.m128i_i8[0] = 0;
            if ( v55 == a1 + 80 )
              v57 = 15;
            else
              v57 = *(_QWORD *)(a1 + 80);
            if ( v56 > v57 )
            {
              sub_998B30(v78, v54, 0, v52, v53);
              v55 = *(_QWORD *)(a1 + 64);
            }
            else if ( v53 )
            {
              v77 = (_BYTE *)(v54 + v55);
              if ( v53 == 1 )
                *v77 = *v52;
              else
                memcpy(v77, v52, v53);
              v55 = *(_QWORD *)(a1 + 64);
            }
            *(_QWORD *)(a1 + 72) = v56;
            *(_BYTE *)(v55 + v56) = 0;
            if ( v108 != v110 )
              operator delete(v108);
            if ( v89 != &v91 )
              operator delete(v89);
            v37 = (void *)v87[0];
            if ( (_QWORD *)v87[0] == v88 )
              return;
LABEL_64:
            operator delete(v37);
            return;
          }
LABEL_170:
          std::__throw_length_error("basic_string::append");
        }
LABEL_142:
        memcpy(v47, v74, (size_t)v76);
        v47 = (_QWORD *)v87[0];
        goto LABEL_76;
      }
      if ( (__int64)v76 >= 0 )
      {
        v47 = (_QWORD *)operator new((unsigned __int64)(v76 + 1));
        v88[0] = &v107.m128i_u8[5] - (unsigned __int8 *)v74;
        v87[0] = v47;
        goto LABEL_142;
      }
      goto LABEL_171;
    case 6:
      v58 = *(_QWORD *)(a1 + 72);
      if ( 0x7FFFFFFFFFFFFFFFLL - v58 <= 2 )
        goto LABEL_170;
      v59 = *(_QWORD *)(a1 + 64);
      v60 = v58 + 3;
      v81 = a1 + 80;
      if ( v59 == a1 + 80 )
        v61 = 15;
      else
        v61 = *(_QWORD *)(a1 + 80);
      if ( v60 > v61 )
      {
        sub_998B30(v78, v58, 0, "int", 3u);
      }
      else
      {
        v62 = v58 + v59;
        *(_WORD *)v62 = 28265;
        *(_BYTE *)(v62 + 2) = 116;
      }
      v63 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 72) = v60;
      *(_BYTE *)(v63 + v58 + 3) = 0;
      goto LABEL_8;
    case 7:
      v64 = *(_QWORD *)(a1 + 72);
      if ( 0x7FFFFFFFFFFFFFFFLL - v64 <= 3 )
        goto LABEL_170;
      v65 = *(_QWORD *)(a1 + 64);
      v66 = v64 + 4;
      v81 = a1 + 80;
      if ( v65 == a1 + 80 )
        v67 = 15;
      else
        v67 = *(_QWORD *)(a1 + 80);
      if ( v66 > v67 )
        sub_998B30(v78, v64, 0, "uint", 4u);
      else
        *(_DWORD *)(v65 + v64) = 1953393013;
      v68 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 72) = v66;
      *(_BYTE *)(v68 + v64 + 4) = 0;
      goto LABEL_8;
    case 8:
      v2 = *(_QWORD *)(a1 + 72);
      if ( 0x7FFFFFFFFFFFFFFFLL - v2 <= 4 )
        goto LABEL_170;
      v3 = *(_QWORD *)(a1 + 64);
      v4 = v2 + 5;
      v81 = a1 + 80;
      if ( v3 == a1 + 80 )
        v5 = 15;
      else
        v5 = *(_QWORD *)(a1 + 80);
      if ( v4 > v5 )
      {
        sub_998B30(v78, v2, 0, "float", 5u);
      }
      else
      {
        v6 = v2 + v3;
        *(_DWORD *)v6 = 1634692198;
        *(_BYTE *)(v6 + 4) = 116;
      }
      v7 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 72) = v4;
      *(_BYTE *)(v7 + v2 + 5) = 0;
LABEL_8:
      v80 = *(_BYTE *)(a1 + 25);
      if ( v80 )
        goto LABEL_9;
      goto LABEL_72;
    case 9:
      v38 = *(_QWORD *)(a1 + 72);
      if ( 0x7FFFFFFFFFFFFFFFLL - v38 <= 5 )
        goto LABEL_170;
      v39 = *(_QWORD *)(a1 + 64);
      v40 = v38 + 6;
      v81 = a1 + 80;
      if ( v39 == a1 + 80 )
        v41 = 15;
      else
        v41 = *(_QWORD *)(a1 + 80);
      if ( v40 > v41 )
      {
        sub_998B30(v78, v38, 0, "bfloat", 6u);
      }
      else
      {
        v42 = v38 + v39;
        *(_DWORD *)v42 = 1869375074;
        *(_WORD *)(v42 + 4) = 29793;
      }
      v43 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 72) = v40;
      *(_BYTE *)(v43 + v38 + 6) = 0;
      v80 = *(_BYTE *)(a1 + 25);
      if ( !v80 )
      {
LABEL_72:
        v104.m128i_i8[0] = 0;
        v103 = 0;
        v102 = &v104;
        goto LABEL_15;
      }
LABEL_9:
      v8 = *(unsigned int *)(a1 + 28);
      if ( !*(_DWORD *)(a1 + 28) )
      {
        v100[0] = v101;
        v9 = 48;
LABEL_11:
        LOBYTE(v101[0]) = v9;
        v10 = (_BYTE *)(&dword_0 + 1);
        v11 = v101;
        goto LABEL_12;
      }
      v71 = (char *)v110 + 5;
      while ( 1 )
      {
        --v71;
        v9 = v8 % 0xA + 48;
        *v71 = v9;
        if ( v8 <= 9 )
          break;
        v8 /= 0xAu;
      }
      v72 = (char *)((char *)v110 + 5 - v71);
      v11 = v101;
      v10 = (char *)((char *)v110 + 5 - v71);
      v100[0] = v101;
      if ( (unsigned __int64)((char *)v110 + 5 - v71) > 0xF )
      {
        if ( (__int64)v72 < 0 )
LABEL_171:
          std::__throw_length_error("basic_string::_M_create");
        v73 = (_QWORD *)operator new((unsigned __int64)(v72 + 1));
        v101[0] = (char *)v110 + 5 - v71;
        v100[0] = v73;
        goto LABEL_145;
      }
      if ( v72 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_11;
      if ( v72 )
      {
        v73 = v101;
LABEL_145:
        memcpy(v73, v71, (char *)v110 + 5 - v71);
        v11 = v100[0];
      }
LABEL_12:
      v100[1] = v10;
      v10[(_QWORD)v11] = 0;
      v12 = (__m128i *)sub_99BDC0(v100, 0, 0, "x", 1u);
      v102 = &v104;
      if ( (__m128i *)v12->m128i_i64[0] == &v12[1] )
      {
        v104 = _mm_loadu_si128(v12 + 1);
      }
      else
      {
        v102 = (void *)v12->m128i_i64[0];
        v104.m128i_i64[0] = v12[1].m128i_i64[0];
      }
      v13 = v12->m128i_u64[1];
      v12[1].m128i_i8[0] = 0;
      v103 = v13;
      v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
      v12->m128i_i64[1] = 0;
LABEL_15:
      sub_1FE76E0(&v95, (int *)(a1 + 4));
      v14 = *(unsigned int *)(a1 + 12);
      if ( *(_DWORD *)(a1 + 12) )
      {
        v15 = (char *)v110 + 5;
        while ( 1 )
        {
          *--v15 = v14 % 0xA + 48;
          if ( v14 <= 9 )
            break;
          v14 /= 0xAu;
        }
      }
      else
      {
        BYTE4(v110[0]) = 48;
        v15 = (char *)v110 + 4;
      }
      v92 = v94;
      sub_1FE43F0(&v92, v15, (__int64)v110 + 5);
      v16 = v92;
      v17 = v93 + v95.m128i_i64[1];
      if ( v92 == v94 )
        v18 = 15;
      else
        v18 = v94[0];
      if ( v17 <= v18 )
      {
        if ( v95.m128i_i64[1] )
        {
          v70 = (char *)v92 + v93;
          if ( v95.m128i_i64[1] == 1 )
            *v70 = *(_BYTE *)v95.m128i_i64[0];
          else
            memcpy(v70, (const void *)v95.m128i_i64[0], v95.m128i_u64[1]);
          v16 = v92;
        }
        goto LABEL_24;
      }
      if ( (_QWORD *)v95.m128i_i64[0] == v96 )
        v19 = 15;
      else
        v19 = v96[0];
      if ( v17 > v19 )
      {
        sub_998B30((__int64)&v92, v93, 0, v95.m128i_i64[0], v95.m128i_u64[1]);
        v16 = v92;
LABEL_24:
        v93 = v17;
        v20 = (__m128i *)&v92;
        v16[v17] = 0;
        goto LABEL_25;
      }
      v20 = (__m128i *)sub_99BDC0(&v95, 0, 0, v92, v93);
LABEL_25:
      v97 = &v99;
      if ( (__m128i *)v20->m128i_i64[0] == &v20[1] )
      {
        v99 = _mm_loadu_si128(v20 + 1);
      }
      else
      {
        v97 = (void *)v20->m128i_i64[0];
        v99.m128i_i64[0] = v20[1].m128i_i64[0];
      }
      v21 = v20->m128i_u64[1];
      v20[1].m128i_i8[0] = 0;
      v98 = v21;
      v20->m128i_i64[0] = (__int64)v20[1].m128i_i64;
      v22 = (__m128i *)v97;
      v20->m128i_i64[1] = 0;
      v23 = v98 + v103;
      if ( v22 == &v99 )
        v24 = 15;
      else
        v24 = v99.m128i_i64[0];
      if ( v23 <= v24 )
      {
        if ( v103 )
        {
          v69 = &v22->m128i_i8[v98];
          if ( v103 == 1 )
          {
            *v69 = *(_BYTE *)v102;
            v22 = (__m128i *)v97;
          }
          else
          {
            v84 = v98 + v103;
            memcpy(v69, v102, v103);
            v22 = (__m128i *)v97;
            v23 = v84;
          }
        }
        goto LABEL_34;
      }
      if ( v102 == &v104 )
        v25 = 15;
      else
        v25 = v104.m128i_i64[0];
      if ( v23 > v25 )
      {
        v83 = v98 + v103;
        sub_998B30((__int64)&v97, v98, 0, v102, v103);
        v22 = (__m128i *)v97;
        v23 = v83;
LABEL_34:
        v98 = v23;
        v26 = (__m128i *)&v97;
        v22->m128i_i8[v23] = 0;
        goto LABEL_35;
      }
      v26 = (__m128i *)sub_99BDC0(&v102, 0, 0, v22, v98);
LABEL_35:
      src = &v107;
      if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
      {
        v107 = _mm_loadu_si128(v26 + 1);
      }
      else
      {
        src = (void *)v26->m128i_i64[0];
        v107.m128i_i64[0] = v26[1].m128i_i64[0];
      }
      n = v26->m128i_u64[1];
      v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
      v26->m128i_i64[1] = 0;
      v26[1].m128i_i8[0] = 0;
      v27 = n;
      if ( n == 0x7FFFFFFFFFFFFFFFLL || n == 9223372036854775806LL )
        goto LABEL_170;
      v28 = n + 2;
      if ( src == &v107 )
        v29 = 15;
      else
        v29 = v107.m128i_i64[0];
      if ( v28 > v29 )
      {
        v86 = n + 2;
        v85 = n;
        sub_998B30((__int64)&src, n, 0, "_t", 2u);
        v28 = v86;
        v27 = v85;
      }
      else
      {
        *(_WORD *)((char *)src + n) = 29791;
      }
      n = v28;
      *((_BYTE *)src + v27 + 2) = 0;
      v30 = src;
      v108 = v110;
      if ( src == &v107 )
      {
        v30 = v110;
        v110[0] = _mm_load_si128(&v107);
      }
      else
      {
        v108 = src;
        *(_QWORD *)&v110[0] = v107.m128i_i64[0];
      }
      v31 = n;
      v32 = *(_QWORD *)(a1 + 72);
      n = 0;
      src = &v107;
      v33 = *(_QWORD *)(a1 + 64);
      v109 = v31;
      v34 = v32 + v31;
      v107.m128i_i8[0] = 0;
      if ( v33 == v81 )
        v35 = 15;
      else
        v35 = *(_QWORD *)(a1 + 80);
      if ( v34 > v35 )
      {
        v82 = v32 + v31;
        sub_998B30(v78, v32, 0, v30, v31);
        v33 = *(_QWORD *)(a1 + 64);
        v34 = v82;
      }
      else if ( v31 )
      {
        v36 = (_BYTE *)(v32 + v33);
        if ( v31 == 1 )
        {
          *v36 = *v30;
          v33 = *(_QWORD *)(a1 + 64);
        }
        else
        {
          v79 = v32 + v31;
          memcpy(v36, v30, v31);
          v33 = *(_QWORD *)(a1 + 64);
          v34 = v79;
        }
      }
      *(_QWORD *)(a1 + 72) = v34;
      *(_BYTE *)(v33 + v34) = 0;
      if ( v108 != v110 )
        operator delete(v108);
      if ( src != &v107 )
        operator delete(src);
      if ( v97 != &v99 )
        operator delete(v97);
      if ( v92 != v94 )
        operator delete(v92);
      if ( (_QWORD *)v95.m128i_i64[0] != v96 )
        operator delete((void *)v95.m128i_i64[0]);
      if ( v102 != &v104 )
        operator delete(v102);
      if ( v80 )
      {
        v37 = v100[0];
        if ( v100[0] != v101 )
          goto LABEL_64;
      }
      return;
  }
}
