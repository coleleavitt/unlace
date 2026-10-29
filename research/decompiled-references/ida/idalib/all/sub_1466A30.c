__int64 __fastcall sub_1466A30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, double a6, __m128 a7)
{
  unsigned int v10; // edx
  size_t v11; // rsi
  __m128i si128; // xmm0
  int v13; // eax
  __int64 v14; // rax
  __int16 v15; // cx
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rdx
  size_t v19; // rbx
  void *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  char *v23; // rdi
  unsigned int v24; // r13d
  unsigned int v25; // r15d
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // ebx
  size_t v29; // rax
  __int64 v30; // r10
  unsigned int v31; // r13d
  void *v32; // rsi
  __int64 v33; // rdi
  unsigned int v34; // esi
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // esi
  __int64 v39; // r13
  int v40; // ecx
  const char *v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rbx
  __int64 v45; // rax
  int v46; // esi
  unsigned int v47; // eax
  __int16 v48; // ax
  __int16 v49; // dx
  __int16 v50; // cx
  __int16 v51; // ax
  __int16 v52; // cx
  __int16 v53; // cx
  __int16 v54; // ax
  __int16 v55; // cx
  int v56; // eax
  char v57; // dl
  unsigned __int64 v58; // r10
  __int64 v59; // rax
  _QWORD *v60; // r11
  int v61; // eax
  bool v62; // zf
  __int64 v64; // rdx
  int v65; // esi
  int v66; // ebx
  _DWORD *v67; // r14
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // esi
  int v72; // r13d
  int v73; // ebx
  int v74; // edx
  unsigned int v75; // esi
  int i; // ebx
  int v77; // eax
  unsigned __int64 v78; // rax
  int v79; // edx
  unsigned int v80; // esi
  __int64 *v81; // rdi
  __int64 v82; // rcx
  _DWORD *v83; // rax
  _DWORD *v84; // rdx
  unsigned int v85; // ebx
  int v86; // eax
  __int64 v87; // rdi
  char *v88; // rsi
  int v89; // ecx
  unsigned __int8 *v90; // r13
  signed __int64 v91; // r14
  _BYTE *v92; // rsi
  _QWORD *v93; // rax
  _QWORD *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  void **v98; // r14
  _BYTE *v99; // rdi
  __int64 v100; // rax
  void **v101; // rbx
  unsigned __int64 v102; // rax
  void **v103; // r13
  void **v104; // r14
  void **v105; // rdi
  void **v106; // rdi
  void **v107; // r14
  void **v108; // r13
  size_t v109; // rdx
  unsigned __int64 v110; // rdx
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rcx
  void *v116; // rdi
  int v118; // [rsp+8h] [rbp-2F0h]
  signed __int64 v120; // [rsp+18h] [rbp-2E0h]
  void *v121; // [rsp+18h] [rbp-2E0h]
  void *v122; // [rsp+18h] [rbp-2E0h]
  _BYTE *v123; // [rsp+18h] [rbp-2E0h]
  __int64 v124; // [rsp+20h] [rbp-2D8h]
  __int64 v125; // [rsp+28h] [rbp-2D0h]
  __int64 v126; // [rsp+38h] [rbp-2C0h]
  int v127; // [rsp+38h] [rbp-2C0h]
  __int64 v128; // [rsp+38h] [rbp-2C0h]
  __int64 v129; // [rsp+38h] [rbp-2C0h]
  __int64 v130; // [rsp+40h] [rbp-2B8h]
  char v131; // [rsp+40h] [rbp-2B8h]
  __int64 v132; // [rsp+48h] [rbp-2B0h]
  char v133; // [rsp+5Fh] [rbp-299h]
  int v135; // [rsp+80h] [rbp-278h]
  int v136; // [rsp+84h] [rbp-274h]
  int v137; // [rsp+84h] [rbp-274h]
  _QWORD *v138; // [rsp+88h] [rbp-270h]
  unsigned __int8 v139; // [rsp+96h] [rbp-262h] BYREF
  char v140; // [rsp+97h] [rbp-261h] BYREF
  void *src; // [rsp+98h] [rbp-260h] BYREF
  __int64 v142; // [rsp+A0h] [rbp-258h] BYREF
  __int64 v143; // [rsp+A8h] [rbp-250h]
  int v144; // [rsp+B0h] [rbp-248h]
  __m128i v145; // [rsp+C0h] [rbp-238h] BYREF
  int v146; // [rsp+D0h] [rbp-228h]
  void *v147; // [rsp+E0h] [rbp-218h]
  size_t v148; // [rsp+E8h] [rbp-210h]
  _QWORD v149[2]; // [rsp+F0h] [rbp-208h] BYREF
  void *v150; // [rsp+100h] [rbp-1F8h] BYREF
  unsigned __int64 v151; // [rsp+108h] [rbp-1F0h]
  __int64 v152; // [rsp+110h] [rbp-1E8h]
  void *v153; // [rsp+120h] [rbp-1D8h]
  __int64 v154; // [rsp+130h] [rbp-1C8h] BYREF
  __int16 v155; // [rsp+140h] [rbp-1B8h]
  void *dest; // [rsp+150h] [rbp-1A8h] BYREF
  size_t n[2]; // [rsp+158h] [rbp-1A0h]
  _BYTE v158[136]; // [rsp+168h] [rbp-190h] BYREF
  __int64 (__fastcall **v159)(); // [rsp+1F0h] [rbp-108h] BYREF
  int v160; // [rsp+1F8h] [rbp-100h]
  void *ptr; // [rsp+230h] [rbp-C8h]
  _BYTE v162[40]; // [rsp+240h] [rbp-B8h] BYREF
  __int64 v163; // [rsp+268h] [rbp-90h]
  __int64 v164; // [rsp+288h] [rbp-70h]

  v10 = *a5;
  if ( **(char **)(*(_QWORD *)(a1 + 16) + 56LL) < 0 && v10 > 1 && *(_WORD *)(a3 + 24LL * (v10 - 2) + 16) == 68 )
    *(_WORD *)(a2 + 18) &= ~2u;
  v11 = 0;
  v133 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  dest = v158;
  v13 = *(_DWORD *)a2;
  *(__m128i *)n = si128;
  v136 = v13;
  v14 = v10;
  v15 = *(_WORD *)(a3 + 24LL * v10 + 16);
  v16 = a3;
  while ( 1 )
  {
    v17 = v16 + 24 * v14;
    v135 = *(_DWORD *)v17;
    if ( v15 == 68 )
    {
      v18 = v10 + 1;
      *a5 = v18;
      v17 = v16 + 24 * v18;
    }
    v19 = (unsigned int)(*(_DWORD *)(a2 + 4) + *(_DWORD *)(v17 + 4));
    if ( v19 == v11 )
      goto LABEL_56;
    if ( v19 < v11 )
    {
      n[0] = (unsigned int)(*(_DWORD *)(a2 + 4) + *(_DWORD *)(v17 + 4));
LABEL_56:
      v20 = dest;
      goto LABEL_16;
    }
    if ( v19 > n[1] )
    {
      sub_2236E10(&dest, v158, (unsigned int)(*(_DWORD *)(a2 + 4) + *(_DWORD *)(v17 + 4)), 1);
      v11 = n[0];
    }
    v20 = dest;
    if ( (char *)dest + v11 != (char *)dest + v19 )
    {
      memset((char *)dest + v11, 0, v19 - v11);
      v20 = dest;
    }
    n[0] = v19;
LABEL_16:
    src = v20;
    v21 = *(_QWORD *)(a1 + 16);
    v139 = 0;
    v22 = sub_13D1B40(a2, (__int64 *)&src, *(_QWORD *)(v21 + 88), *(_QWORD *)(v21 + 56), &v139);
    v23 = (char *)dest;
    v24 = v22;
    if ( src != dest )
    {
      memcpy(dest, src, v22);
      v23 = (char *)dest;
    }
    v25 = v139;
    if ( v139 )
      goto LABEL_71;
    v120 = v24;
    v26 = *(_QWORD *)(a1 + 16);
    src = &v23[v24];
    v27 = sub_13D1B40(v17, (__int64 *)&src, *(_QWORD *)(v26 + 88), *(_QWORD *)(v26 + 56), &v139);
    v25 = v139;
    v28 = v27;
    if ( v139 )
      goto LABEL_70;
    if ( v27 && src != (char *)dest + v24 )
      memcpy((char *)dest + v24, src, v27);
    v29 = n[0];
    v31 = v24 + v28;
    v30 = v31;
    if ( v31 == n[0] )
      goto LABEL_58;
    if ( v31 < n[0] )
    {
      n[0] = v31;
LABEL_58:
      v32 = dest;
      goto LABEL_30;
    }
    if ( v31 > n[1] )
    {
      sub_2236E10(&dest, v158, v31, 1);
      v29 = n[0];
      v30 = v31;
    }
    v32 = dest;
    if ( (char *)dest + v29 != (char *)dest + v30 )
    {
      v126 = v30;
      memset((char *)dest + v29, 0, v30 - v29);
      v32 = dest;
      v30 = v126;
    }
    n[0] = v30;
LABEL_30:
    v33 = *(_QWORD *)(a1 + 16);
    v142 = 0;
    v143 = 0;
    v144 = 14;
    sub_145C860(v33, (__int64)v32, v30, (__int64)&v142, 0, 0);
    v34 = v142;
    v35 = v143;
    v36 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int16)(*(_WORD *)(a2 + 16) - 5) <= 1u && (unsigned __int16)(*(_WORD *)(v17 + 16) - 5) <= 1u )
    {
      ++*(_DWORD *)(v36 + 2352);
      v48 = 0;
      LOWORD(v146) = 6;
      v145.m128i_i64[1] = v35;
      v145.m128i_i64[0] = __PAIR64__(v31, v34);
      goto LABEL_48;
    }
    ++*(_DWORD *)(v36 + 2348);
    v37 = *(_QWORD *)(a1 + 16);
    v38 = v34 & 0x7FFFFFFF;
    v39 = *(_QWORD *)(v37 + 88);
    if ( v38 < *(_DWORD *)(v39 + 476) || v38 >= *(_DWORD *)(v39 + 480) )
    {
      v128 = v35;
      v56 = sub_101D590(*(_QWORD *)(v37 + 88), v38);
      v35 = v128;
      v40 = v56;
    }
    else
    {
      v40 = *(_DWORD *)(v39 + 472);
    }
    v130 = v35;
    v127 = v40;
    v140 = 0;
    v41 = sub_10202B0((__int64 *)v39, v40, &v140);
    v42 = v130;
    v132 = (__int64)v41;
    if ( v140 )
      goto LABEL_70;
    v43 = v130 + v120 + v28;
    v44 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
    LOBYTE(v159) = 0;
    if ( (unsigned int)(v127 + 1) <= 1 )
      goto LABEL_61;
    if ( v127 < 0 )
    {
      v58 = (unsigned int)(-2 - v127);
      v59 = *(_QWORD *)(*(_QWORD *)(v39 + 320) + 8LL * ((unsigned int)v58 >> 6));
      if ( _bittest64(&v59, v58) )
      {
        v60 = (_QWORD *)(*(_QWORD *)(v39 + 272) + 8 * ((unsigned __int64)(int)v58 >> 5));
        if ( *v60 )
        {
          v45 = *v60 + 24LL * ((-2 - (_BYTE)v127) & 0x1F);
          goto LABEL_39;
        }
        v81 = (__int64 *)(*(_QWORD *)(v39 + 288) & 0xFFFFFFFFFFFFFFF8LL);
        v82 = *v81;
        v81[10] += 768;
        v83 = (_DWORD *)((v82 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v81[1] >= (unsigned __int64)(v83 + 192) && v82 )
        {
          *v81 = (__int64)(v83 + 192);
        }
        else
        {
          v138 = v60;
          v131 = -2 - v127;
          v129 = v42;
          v122 = (void *)v43;
          v83 = (_DWORD *)sub_986170((__int64)v81, 768, 768, 3, v42, v43);
          LOBYTE(v58) = v131;
          v42 = v129;
          v60 = v138;
          v43 = (__int64)v122;
        }
        *v60 = v83;
        v84 = v83 + 192;
        do
        {
          si128 = 0;
          *v83 = 0;
          v83 += 6;
          *((_OWORD *)v83 - 1) = 0;
          *((_QWORD *)v83 - 1) = 0;
        }
        while ( v83 != v84 );
        v57 = (char)v159;
        v45 = *v60 + 24 * (v58 & 0x1F);
      }
      else
      {
        v121 = (void *)v43;
        v45 = sub_101F930(v39, v58, &v159);
        v43 = (__int64)v121;
        v42 = v130;
        v57 = (char)v159;
      }
      if ( v57 )
        goto LABEL_61;
      goto LABEL_39;
    }
    v45 = *(_QWORD *)(v39 + 184) + 24LL * (unsigned int)v127;
LABEL_39:
    if ( v45 && *(char *)(v45 + 3) >= 0 )
    {
      v46 = *(_DWORD *)v45 & 0x7FFFFFFF;
      goto LABEL_42;
    }
LABEL_61:
    v46 = 0;
LABEL_42:
    sub_13D1080((__int64)&v159, v46, v44, v132, v42, v43, 1);
    sub_13DB5F0(&v159, (__int64)&v145, si128, *(double *)a7.m128_u64);
    v47 = v163;
    if ( v164 != v163 || (_WORD)v146 == 1 )
      break;
    if ( (_WORD)v146 == 68 )
      LOWORD(v146) = 0;
    v159 = &off_2C449F0;
    if ( ptr != v162 )
      free(ptr);
    v48 = HIWORD(v146);
LABEL_48:
    v49 = *(_WORD *)(a2 + 18);
    v50 = v48;
    v51 = v48 & 0xFFFE;
    v52 = v50 | 1;
    if ( (v49 & 1) != 0 )
      v51 = v52;
    v53 = v51;
    v54 = v51 & 0xFFFD;
    v55 = v53 | 2;
    if ( (v49 & 2) != 0 )
      v54 = v55;
    HIWORD(v146) = v54;
    ++*a5;
    if ( (v49 & 0x40) != 0 )
      v133 = 1;
    else
      v133 |= (*(_WORD *)(v17 + 18) & 0x40) != 0;
    a7 = (__m128)_mm_load_si128(&v145);
    *(_DWORD *)(a2 + 16) = v146;
    *(__m128 *)a2 = a7;
    v14 = *a5;
    v10 = *a5;
    if ( v14 == a4 )
      goto LABEL_79;
    v16 = a3;
    v15 = *(_WORD *)(a3 + 24 * v14 + 16);
    if ( v15 != 68 )
      goto LABEL_79;
    v11 = n[0];
  }
  LOBYTE(v47) = v164 != v163 || (_WORD)v146 == 1;
  v85 = v47;
  v86 = sub_10209A0(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL),
          v135,
          *(_DWORD *)(a1 + 40),
          *(_DWORD *)(a1 + 44),
          2,
          1,
          0,
          0);
  v87 = *(_QWORD *)(a1 + 16);
  v88 = *(char **)(v87 + 56);
  if ( *v88 >= 0 )
  {
    if ( (v88[4] & 2) == 0 )
    {
      v89 = 1105;
      goto LABEL_118;
    }
LABEL_76:
    v159 = &off_2C449F0;
    if ( ptr != v162 )
      free(ptr);
    v10 = *a5;
LABEL_79:
    v65 = *(_DWORD *)(a1 + 48);
    v66 = *(_DWORD *)(a3 + 24LL * (v10 - 1));
    v67 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 88LL);
    if ( v136 >= 0 )
    {
      v68 = *(_DWORD *)(a1 + 56) & 0x7FFFFFFF;
      if ( v136 >= v68 + *(_DWORD *)(a1 + 60) || v136 < v68 )
        v136 = *(_DWORD *)(a1 + 48);
      else
        v136 = v65 + v136 - v68;
    }
    if ( v66 >= 0 )
    {
      v69 = *(_DWORD *)(a1 + 56) & 0x7FFFFFFF;
      if ( v66 >= v69 + *(_DWORD *)(a1 + 60) || v66 < v69 )
        v66 = *(_DWORD *)(a1 + 48);
      else
        v66 += v65 - v69;
    }
    v70 = v67[119];
    v71 = v65 & 0x7FFFFFFF;
    if ( v71 >= v70 && v71 < v67[120] )
    {
      v72 = v67[118];
    }
    else
    {
      v72 = sub_101D590((__int64)v67, v71);
      v70 = v67[119];
    }
    v118 = v66;
    v73 = v136;
    while ( 1 )
    {
      v75 = v73 & 0x7FFFFFFF;
      if ( (v73 & 0x7FFFFFFFu) >= v70 && v75 < v67[120] )
      {
        if ( v72 == v67[118] )
          goto LABEL_96;
      }
      else if ( v72 == (unsigned int)sub_101D590((__int64)v67, v75) )
      {
LABEL_96:
        v137 = v73;
        for ( i = v118; ; i = HIDWORD(v78) )
        {
          v80 = i & 0x7FFFFFFF;
          if ( (i & 0x7FFFFFFFu) >= v67[119] && v80 < v67[120] )
            v77 = v67[118];
          else
            v77 = sub_101D590((__int64)v67, v80);
          if ( v72 == v77 )
            break;
          v78 = sub_101FC50((__int64)v67, i);
          v160 = v79;
          v159 = (__int64 (__fastcall **)())v78;
        }
        v61 = sub_10209A0((__int64)v67, *(_DWORD *)a2, v137, i, *(_DWORD *)(a2 + 4), 1, 0, 0);
        v62 = *(_WORD *)(a2 + 16) == 6;
        *(_DWORD *)a2 = v61;
        if ( v62 )
        {
          if ( v133 )
            *(_WORD *)(a2 + 18) |= 0x40u;
          sub_1460F90(*(_QWORD *)(a1 + 16), a2);
        }
        goto LABEL_70;
      }
      v159 = (__int64 (__fastcall **)())sub_101FC50((__int64)v67, v73);
      v73 = (int)v159;
      v160 = v74;
      v70 = v67[119];
    }
  }
  if ( *(_WORD *)(a2 + 16) != 43 || *(_WORD *)(v17 + 16) != 43 )
  {
    v89 = 1234;
    if ( (v88[4] & 2) != 0 )
      goto LABEL_76;
LABEL_118:
    sub_FC70B0((__int64)&v150, *(_QWORD *)(v87 + 48), v86, v89);
    v90 = (unsigned __int8 *)v150;
    v91 = n[0];
    v92 = dest;
    if ( !v150 )
    {
      v110 = v151;
      v111 = *(_DWORD *)(v151 + 14976);
      if ( v111 )
      {
        v112 = (unsigned int)(v111 - 1);
        *(_DWORD *)(v151 + 14976) = v112;
        v90 = *(unsigned __int8 **)(v110 + 8 * v112 + 14848);
        v113 = *((unsigned int *)v90 + 134);
        *v90 = 0;
        v114 = *((_QWORD *)v90 + 66);
        *((_DWORD *)v90 + 106) = 0;
        v115 = v114 + (v113 << 6);
        while ( v114 != v115 )
        {
          while ( 1 )
          {
            v115 -= 64;
            v116 = *(void **)(v115 + 24);
            if ( v116 == (void *)(v115 + 40) )
              break;
            v125 = v115;
            v124 = v114;
            operator delete(v116);
            v114 = v124;
            v115 = v125;
            if ( v124 == v125 )
              goto LABEL_180;
          }
        }
LABEL_180:
        *((_DWORD *)v90 + 134) = 0;
      }
      else
      {
        v123 = dest;
        v90 = (unsigned __int8 *)operator new(0x3A0u);
        *v90 = 0;
        *((_QWORD *)v90 + 12) = v90 + 112;
        *((_QWORD *)v90 + 16) = v90 + 144;
        *((_QWORD *)v90 + 20) = v90 + 176;
        *((_QWORD *)v90 + 24) = v90 + 208;
        *((_QWORD *)v90 + 28) = v90 + 240;
        *((_QWORD *)v90 + 32) = v90 + 272;
        *((_QWORD *)v90 + 36) = v90 + 304;
        *((_QWORD *)v90 + 40) = v90 + 336;
        *((_QWORD *)v90 + 44) = v90 + 368;
        *((_QWORD *)v90 + 48) = v90 + 400;
        *((_QWORD *)v90 + 52) = v90 + 432;
        *((_QWORD *)v90 + 13) = 0;
        v90[112] = 0;
        *((_QWORD *)v90 + 17) = 0;
        v90[144] = 0;
        *((_QWORD *)v90 + 21) = 0;
        v90[176] = 0;
        *((_QWORD *)v90 + 25) = 0;
        v90[208] = 0;
        *((_QWORD *)v90 + 29) = 0;
        v90[240] = 0;
        *((_QWORD *)v90 + 33) = 0;
        v90[272] = 0;
        *((_QWORD *)v90 + 37) = 0;
        v90[304] = 0;
        *((_QWORD *)v90 + 41) = 0;
        v90[336] = 0;
        *((_QWORD *)v90 + 45) = 0;
        v90[368] = 0;
        *((_QWORD *)v90 + 49) = 0;
        v90[400] = 0;
        *((_QWORD *)v90 + 53) = 0x800000000LL;
        v92 = v123;
        *((_QWORD *)v90 + 66) = v90 + 544;
        *((_QWORD *)v90 + 67) = 0x600000000LL;
      }
      v150 = v90;
    }
    v90[*v90 + 1] = 0;
    v147 = v149;
    if ( &v92[v91] && !v92 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v91 > 0xF )
    {
      if ( v91 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v93 = (_QWORD *)operator new(v91 + 1);
      v149[0] = v91;
      v147 = v93;
    }
    else
    {
      if ( v91 == 1 )
      {
        LOBYTE(v149[0]) = *v92;
        v93 = v149;
        goto LABEL_128;
      }
      v93 = v149;
      if ( !v91 )
      {
LABEL_128:
        v148 = v91;
        *((_BYTE *)v93 + v91) = 0;
        v94 = v150;
        v95 = *(unsigned __int8 *)v150;
        *(_BYTE *)v150 = v95 + 1;
        v96 = (unsigned __int8)v95;
        v97 = 4 * (v95 + 3);
        v98 = (void **)&v94[v97];
        v99 = (_BYTE *)v94[v97];
        if ( v147 == v149 )
        {
          v109 = v148;
          if ( v148 )
          {
            if ( v148 == 1 )
              *v99 = v149[0];
            else
              memcpy(v99, v147, v148);
            v109 = v148;
            v99 = *v98;
          }
          v98[1] = (void *)v109;
          v99[v109] = 0;
          v99 = v147;
        }
        else
        {
          if ( v99 == (_BYTE *)&v94[v97 + 2] )
          {
            *v98 = v147;
            v98[1] = (void *)v148;
            v98[2] = (void *)v149[0];
          }
          else
          {
            v100 = v94[4 * v96 + 14];
            *v98 = v147;
            v98[1] = (void *)v148;
            v98[2] = (void *)v149[0];
            if ( v99 )
            {
              v147 = v99;
              v149[0] = v100;
              goto LABEL_132;
            }
          }
          v99 = v149;
          v147 = v149;
        }
LABEL_132:
        v148 = 0;
        *v99 = 0;
        if ( v147 != v149 )
          operator delete(v147);
        if ( (_BYTE)v155 )
        {
          sub_FC7790(v152, (__int64 *)&v150, SHIBYTE(v155));
          v152 = 0;
          v155 = 0;
        }
        if ( v153 != &v154 )
          operator delete(v153);
        v101 = (void **)v150;
        if ( v150 )
        {
          v102 = v151;
          if ( v151 )
          {
            if ( (unsigned __int64)v150 < v151 || (unsigned __int64)v150 > v151 + 14848 )
            {
              v103 = *((void ***)v150 + 66);
              v104 = &v103[8 * (unsigned __int64)*((unsigned int *)v150 + 134)];
              if ( v103 != v104 )
              {
                do
                {
                  while ( 1 )
                  {
                    v104 -= 8;
                    v105 = (void **)v104[3];
                    if ( v105 == v104 + 5 )
                      break;
                    operator delete(v105);
                    if ( v103 == v104 )
                      goto LABEL_144;
                  }
                }
                while ( v103 != v104 );
LABEL_144:
                v104 = (void **)v101[66];
              }
              if ( v104 != v101 + 68 )
                free(v104);
              v106 = (void **)v101[52];
              v107 = v101 + 52;
              if ( v106 != v101 + 54 )
                free(v106);
              v108 = v101 + 12;
              do
              {
                while ( 1 )
                {
                  v107 -= 4;
                  if ( *v107 == v107 + 2 )
                    break;
                  operator delete(*v107);
                  if ( v107 == v108 )
                    goto LABEL_152;
                }
              }
              while ( v107 != v108 );
LABEL_152:
              operator delete(v101, 0x3A0u);
            }
            else
            {
              v64 = *(unsigned int *)(v151 + 14976);
              *(_DWORD *)(v151 + 14976) = v64 + 1;
              *(_QWORD *)(v102 + 8 * v64 + 14848) = v101;
            }
          }
        }
        goto LABEL_76;
      }
    }
    memcpy(v93, v92, v91);
    v93 = v147;
    goto LABEL_128;
  }
  v25 = v85;
  sub_1466860((_QWORD *)a1, a2, v86);
  v159 = &off_2C449F0;
  if ( ptr != v162 )
    free(ptr);
LABEL_70:
  v23 = (char *)dest;
LABEL_71:
  if ( v23 != v158 )
    free(v23);
  return v25;
}
