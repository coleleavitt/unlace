_BYTE *__fastcall sub_531A80(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _OWORD *v3; // rax
  __int64 v4; // rax
  int v5; // r8d
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  _QWORD *v8; // r15
  _QWORD *v9; // r13
  __int64 v10; // rbp
  _QWORD *v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  int v14; // edx
  unsigned __int64 *v15; // rcx
  _QWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbp
  unsigned __int64 v22; // rbx
  _QWORD *v23; // rcx
  int v24; // esi
  unsigned __int64 *v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 *v27; // rdx
  unsigned __int64 *v28; // rax
  __int64 v29; // r13
  _QWORD *v30; // rax
  _DWORD *v31; // rbp
  _DWORD **v32; // r12
  unsigned int v33; // r14d
  __int64 v34; // rax
  _DWORD *v35; // rsi
  size_t v36; // rdx
  __int64 v37; // r12
  __int64 *v38; // rax
  size_t v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 *v43; // r14
  __int64 v44; // rax
  _DWORD *v45; // rsi
  __int64 v46; // r15
  unsigned int v47; // r14d
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  _BYTE *v50; // rdi
  char *v51; // rcx
  char *v52; // rax
  __int64 v53; // rdx
  _BYTE *result; // rax
  unsigned int v55; // r13d
  unsigned int v56; // eax
  unsigned int *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  unsigned int v60; // edx
  size_t v61; // rsi
  unsigned int v62; // r15d
  unsigned int *v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r15
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  __int64 v69; // rdx
  char *v70; // rsi
  _QWORD *v71; // r14
  char *v72; // rbx
  _QWORD *v73; // rdx
  int v74; // edi
  __int64 v75; // rdx
  _QWORD *v76; // rsi
  _QWORD *v77; // rdx
  __int64 v78; // rsi
  __int64 v79; // rsi
  char *v80; // r14
  unsigned int v81; // r12d
  char *v82; // rbp
  char *v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rsi
  char **v86; // r13
  char **exception; // rbp
  __int64 v88; // [rsp+0h] [rbp-1A8h]
  unsigned int v89; // [rsp+0h] [rbp-1A8h]
  unsigned int v90; // [rsp+0h] [rbp-1A8h]
  unsigned int v92; // [rsp+18h] [rbp-190h]
  unsigned int v93; // [rsp+18h] [rbp-190h]
  size_t v94; // [rsp+18h] [rbp-190h]
  unsigned int v95; // [rsp+18h] [rbp-190h]
  __int64 v96; // [rsp+20h] [rbp-188h]
  _QWORD *v97; // [rsp+20h] [rbp-188h]
  _QWORD *v98; // [rsp+28h] [rbp-180h]
  _QWORD *v99; // [rsp+28h] [rbp-180h]
  __int64 v100; // [rsp+30h] [rbp-178h]
  __int64 v102; // [rsp+40h] [rbp-168h]
  unsigned int v103; // [rsp+4Ch] [rbp-15Ch]
  __int64 v104; // [rsp+50h] [rbp-158h]
  __int64 v105; // [rsp+68h] [rbp-140h] BYREF
  _DWORD *v106[4]; // [rsp+70h] [rbp-138h] BYREF
  void *v107[2]; // [rsp+90h] [rbp-118h] BYREF
  int v108; // [rsp+A0h] [rbp-108h]
  void *v109; // [rsp+A8h] [rbp-100h]
  __int64 v110; // [rsp+B0h] [rbp-F8h]
  _BYTE v111[128]; // [rsp+B8h] [rbp-F0h] BYREF
  void *ptr; // [rsp+138h] [rbp-70h]
  __int64 v113; // [rsp+140h] [rbp-68h]
  int v114; // [rsp+148h] [rbp-60h]
  __int128 v115; // [rsp+150h] [rbp-58h]
  __int128 v116; // [rsp+160h] [rbp-48h]

  v2 = (_QWORD *)sub_186B270(0x80u);
  v108 = 0;
  *v2 = 0;
  v2[2] = 0;
  v2[4] = 0;
  v2[6] = 0;
  v2[8] = 0;
  v2[10] = 0;
  v2[12] = 0;
  v2[14] = 0;
  v107[0] = v2;
  v109 = v111;
  v107[1] = &byte_8;
  v110 = 0x1000000000LL;
  v3 = (_OWORD *)sub_186B270(0x40u);
  ptr = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v113 = 8;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_6462F0(v107, a2, 1);
  v4 = *(unsigned int *)(a1 + 88);
  v5 = *(_DWORD *)(a1 + 96);
  v6 = 2 * v4;
  if ( 3 * (int)v4 < (unsigned int)(4 * (v5 + *(_DWORD *)(a1 + 92))) )
  {
    v94 = 24LL * v6;
    v88 = v94;
    v67 = (_QWORD *)sub_186B270(v94);
    v8 = v67;
    if ( v6 )
    {
      v68 = &v67[3 * v6];
      do
      {
        *v67 = 0;
        v67 += 3;
        *(v67 - 1) = 0;
      }
      while ( v67 != v68 );
    }
    v7 = v6 - 1;
    v69 = *(unsigned int *)(a1 + 88);
    v70 = *(char **)(a1 + 80);
    v71 = v70 + 16;
    v72 = &v70[24 * v69];
    v9 = &v8[v94 / 8];
    if ( v70 == v72 )
    {
LABEL_132:
      if ( v72 )
      {
        if ( (_DWORD)v69 )
        {
          v95 = v6;
          v80 = v72;
          v81 = v6 - 1;
          v82 = v72;
          v83 = &v72[24 * v69];
          do
          {
            while ( 1 )
            {
              v84 = *((_QWORD *)v80 + 2);
              if ( !v84 )
                break;
              v80 += 24;
              sub_186B220((void *)(v84 - 8));
              if ( v83 == v80 )
                goto LABEL_137;
            }
            v80 += 24;
          }
          while ( v80 != v83 );
LABEL_137:
          v72 = v82;
          v7 = v81;
          v6 = v95;
        }
        sub_186B220(v72);
      }
      v5 = 0;
      *(_QWORD *)(a1 + 80) = v8;
      *(_DWORD *)(a1 + 88) = v6;
      *(_DWORD *)(a1 + 96) = 0;
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( *((_DWORD *)v71 - 3) != 2 )
      {
LABEL_120:
        v73 = v71 + 3;
        if ( v72 == (char *)(v71 + 1) )
          goto LABEL_131;
        goto LABEL_121;
      }
      v74 = *((_DWORD *)v71 - 4);
      v75 = 24LL * (v74 & v7);
      v76 = &v8[(unsigned __int64)v75 / 8];
      if ( v94 == v75 )
      {
LABEL_142:
        if ( v8 == v76 )
        {
LABEL_155:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v77 = v8;
        while ( *((_DWORD *)v77 + 1) )
        {
          v77 += 3;
          if ( v76 == v77 )
            goto LABEL_155;
        }
        v85 = *(v71 - 1);
        *(_DWORD *)v77 = v74;
        *((_DWORD *)v77 + 1) = 2;
        v77[1] = v85;
        if ( v71 == v77 + 2 )
          goto LABEL_120;
        v79 = v77[2];
        if ( v79 )
          goto LABEL_129;
      }
      else
      {
        v77 = &v8[(unsigned __int64)v75 / 8];
        while ( *((_DWORD *)v77 + 1) )
        {
          v77 += 3;
          if ( v9 == v77 )
            goto LABEL_142;
        }
        v78 = *(v71 - 1);
        *(_DWORD *)v77 = v74;
        *((_DWORD *)v77 + 1) = 2;
        v77[1] = v78;
        if ( v71 == v77 + 2 )
          goto LABEL_120;
        v79 = v77[2];
        if ( v79 )
        {
LABEL_129:
          v97 = v77;
          sub_186B220((void *)(v79 - 8));
          v77 = v97;
        }
      }
      v77[2] = 0;
      v77[2] = *v71;
      v73 = v71 + 3;
      *v71 = 0;
      if ( v72 == (char *)(v71 + 1) )
      {
LABEL_131:
        v69 = *(unsigned int *)(a1 + 88);
        v72 = *(char **)(a1 + 80);
        goto LABEL_132;
      }
LABEL_121:
      v71 = v73;
    }
  }
  v7 = v4 - 1;
  v8 = *(_QWORD **)(a1 + 80);
  v88 = 24 * v4;
  v9 = &v8[3 * v4];
LABEL_3:
  v10 = (unsigned int)a2 & v7;
  v11 = &v8[3 * v10];
  if ( 24 * v10 != v88 )
  {
    v12 = &v8[3 * v10];
    v13 = nullptr;
    while ( 1 )
    {
      v14 = *((_DWORD *)v12 + 1);
      if ( v14 == 2 )
      {
        if ( (_DWORD)a2 == *(_DWORD *)v12 && v12[1] == a2 )
        {
          v98 = v12;
          v15 = (unsigned __int64 *)v12[2];
          goto LABEL_72;
        }
      }
      else
      {
        if ( !v14 )
        {
          v98 = v13;
          if ( v13 )
          {
            *(_DWORD *)(a1 + 96) = v5 - 1;
            v12 = v13;
          }
          else
          {
            v98 = v12;
          }
          v12[1] = a2;
          v18 = v12[2];
          if ( v18 )
LABEL_25:
            sub_186B220((void *)(v18 - 8));
LABEL_26:
          v98[2] = 0;
          *(_DWORD *)v98 = a2;
          *((_DWORD *)v98 + 1) = 2;
          ++*(_DWORD *)(a1 + 92);
          v19 = *(unsigned int *)(a2 + 64);
          v15 = nullptr;
          if ( !(_DWORD)v19 )
            goto LABEL_74;
LABEL_27:
          v20 = a2 + 8 * v19;
          v21 = a2;
          v22 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v15 )
            goto LABEL_31;
          v23 = (_QWORD *)sub_186B270(0x18u);
          *v23 = 2;
          v24 = 1;
          v15 = v23 + 1;
          v98[2] = v15;
          v25 = v15;
          while ( 1 )
          {
            v21 += 8;
            *v25 = v22;
            *((_DWORD *)v15 - 1) = v24;
            if ( v20 == v21 )
              goto LABEL_40;
            while ( 1 )
            {
              v22 = *(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_31:
              v26 = *((unsigned int *)v15 - 1);
              v27 = &v15[v26];
              while ( v15 != v27 )
              {
                v28 = v15;
                while ( *v28 != v22 )
                {
                  if ( ++v28 == v27 )
                    goto LABEL_38;
                }
                v21 += 8;
                *(_BYTE *)(a1 + 120) = 1;
                if ( v21 == v20 )
                  goto LABEL_40;
                v22 = *(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFF8LL;
              }
LABEL_38:
              if ( (_DWORD)v26 == *((_DWORD *)v15 - 2) )
                break;
              v21 += 8;
              *v27 = v22;
              *((_DWORD *)v15 - 1) = v26 + 1;
              if ( v20 == v21 )
                goto LABEL_40;
            }
            v55 = (unsigned int)(3 * v26 + 1) >> 1;
            v56 = 8 * v55 + 8;
            if ( 8 * (int)v26 + 8 >= v56 || (unsigned int)v26 >= v55 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v106, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v106);
              sub_233E40((__int64)v106);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v57 = (unsigned int *)sub_186B300(v15 - 1, v56);
            v15 = (unsigned __int64 *)(v57 + 2);
            v98[2] = v57 + 2;
            *v57 = v55;
            v58 = v57[1];
            v25 = &v15[v58];
            v24 = v58 + 1;
          }
        }
        v13 = v12;
      }
      v12 += 3;
      if ( v12 == v9 )
      {
        v99 = v13;
        goto LABEL_13;
      }
    }
  }
  v99 = nullptr;
LABEL_13:
  if ( v11 == v8 )
  {
LABEL_71:
    sub_1872CE0("");
    sub_1873130(114, 461);
  }
  v16 = v99;
  while ( 1 )
  {
    v17 = *((_DWORD *)v8 + 1);
    if ( v17 == 2 )
      break;
    if ( !v17 )
    {
      v98 = v16;
      if ( v16 )
        *(_DWORD *)(a1 + 96) = v5 - 1;
      else
        v98 = v8;
      v98[1] = a2;
      v18 = v98[2];
      if ( v18 )
        goto LABEL_25;
      goto LABEL_26;
    }
    v16 = v8;
LABEL_17:
    v8 += 3;
    if ( v11 == v8 )
      goto LABEL_71;
  }
  if ( (_DWORD)a2 != *(_DWORD *)v8 || v8[1] != a2 )
    goto LABEL_17;
  v98 = v8;
  v15 = (unsigned __int64 *)v8[2];
LABEL_72:
  v19 = *(unsigned int *)(a2 + 64);
  if ( (_DWORD)v19 )
    goto LABEL_27;
  if ( v15 )
  {
LABEL_40:
    v103 = *((_DWORD *)v15 - 1);
    if ( v103 <= 1 )
      goto LABEL_74;
    v104 = *((unsigned int *)v15 - 1);
    v102 = 1;
    while ( 1 )
    {
      v29 = 8 * v102;
      v96 = v15[v102 - 1];
      v30 = (_QWORD *)sub_62B3A0(*(_QWORD *)(a1 + 16), v96);
      v31 = (_DWORD *)*v30;
      v32 = (_DWORD **)v30;
      if ( *v30 )
      {
        v33 = *(v31 - 1);
        v89 = *(v31 - 2);
        v34 = sub_186B270(4LL * v89 + 8);
        v35 = *v32;
        v31 = (_DWORD *)(v34 + 8);
        *(_QWORD *)v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v89), _mm_cvtsi32_si128(v33)).m128i_u64[0];
        if ( v35 )
        {
          v36 = 4LL * (unsigned int)*(v35 - 1);
          if ( v36 <= 4 )
          {
            if ( v36 == 4 )
              *(_DWORD *)(v34 + 8) = *v35;
          }
          else
          {
            memmove((void *)(v34 + 8), v35, v36);
          }
        }
      }
      sub_148BC40(v107, v96, 0xFFFFFFFFLL);
      if ( (unsigned int)v102 < v103 )
        break;
LABEL_67:
      sub_148BC40(v107, v96, 1);
      if ( v31 )
        sub_186B220(v31 - 2);
      if ( v104 == ++v102 )
        goto LABEL_74;
      v15 = (unsigned __int64 *)v98[2];
    }
    v100 = 8 * (v102 + v103 - 1 - (unsigned int)v102 + 1);
    while ( 1 )
    {
      v37 = *(_QWORD *)(v98[2] + v29);
      sub_148BC40(v107, v37, 0xFFFFFFFFLL);
      v38 = (__int64 *)sub_62B3A0(*(_QWORD *)(a1 + 16), v37);
      v42 = *v38;
      v43 = v38;
      if ( *v38 )
      {
        v90 = *(_DWORD *)(v42 - 4);
        v92 = *(_DWORD *)(v42 - 8);
        v44 = sub_186B270(4LL * v92 + 8);
        v45 = (_DWORD *)*v43;
        v46 = v44;
        v42 = v44 + 8;
        *(_QWORD *)v44 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v92), _mm_cvtsi32_si128(v90)).m128i_u64[0];
        if ( v45 )
        {
          v39 = 4LL * (unsigned int)*(v45 - 1);
          if ( v39 <= 4 )
          {
            if ( v39 == 4 )
              *(_DWORD *)(v44 + 8) = *v45;
          }
          else
          {
            memmove((void *)(v44 + 8), v45, v39);
          }
        }
        if ( !v31 )
          goto LABEL_63;
        v47 = *(v31 - 1);
        if ( v90 >= v47 )
        {
          if ( !v47 )
            goto LABEL_63;
LABEL_55:
          if ( v47 <= 3 )
            goto LABEL_107;
          goto LABEL_56;
        }
        v93 = v47 + 1;
        if ( v90 >= v47 + 1 )
        {
          *(_DWORD *)(v46 + 4) = v47 + 1;
          goto LABEL_55;
        }
      }
      else
      {
        if ( !v31 )
          goto LABEL_63;
        v47 = *(v31 - 1);
        if ( !v47 )
          goto LABEL_63;
        v93 = v47 + 1;
        if ( v47 == -1 )
        {
          v47 = -1;
          goto LABEL_56;
        }
        v59 = (_QWORD *)sub_186B270(0x10u);
        v90 = 0;
        v42 = (__int64)(v59 + 1);
        *v59 = 2;
      }
      while ( 1 )
      {
        v64 = *(_DWORD *)(v42 - 8);
        v40 = v93;
        if ( v64 >= v93 )
          break;
        v60 = (3 * v64 + 1) >> 1;
        v61 = 4 * v60 + 8;
        v62 = v60;
        if ( 4 * v64 + 8 >= (unsigned int)v61 || v64 >= v60 )
        {
          v86 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v106, "Overflow encountered when expanding vector");
          *v86 = (char *)off_1C63128;
          sub_2333C0(v86 + 1, v106);
          sub_233E40((__int64)v106);
          __cxa_throw(v86, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v63 = (unsigned int *)sub_186B300((void *)(v42 - 8), v61);
        *v63 = v62;
        v42 = (__int64)(v63 + 2);
      }
      *(_DWORD *)(v42 - 4) = v93;
      v65 = 4LL * v93;
      v66 = 4LL * v90;
      if ( v66 == v65 )
        goto LABEL_55;
      memset((void *)(v42 + v66), 0, v65 - v66);
      if ( v47 <= 3 )
      {
LABEL_107:
        v49 = 0;
        goto LABEL_59;
      }
LABEL_56:
      v48 = 0;
      v39 = 16LL * (v47 >> 2);
      do
      {
        *(__m128i *)(v42 + v48) = _mm_or_si128(
                                    _mm_loadu_si128((const __m128i *)(v42 + v48)),
                                    _mm_loadu_si128((const __m128i *)&v31[v48 / 4]));
        v48 += 16LL;
      }
      while ( v39 != v48 );
      v49 = v47 & 0xFFFFFFFC;
      if ( (v47 & 3) == 0 )
        goto LABEL_63;
LABEL_59:
      v40 = v47 - (unsigned int)v49;
      if ( (_DWORD)v40 == 1 )
        goto LABEL_62;
      v39 = v42 + 4LL * (unsigned int)v49;
      *(_QWORD *)v39 = _mm_or_si128(
                         _mm_loadl_epi64((const __m128i *)&v31[(unsigned int)v49]),
                         _mm_loadl_epi64((const __m128i *)v39)).m128i_u64[0];
      if ( (((_BYTE)v47 - (_BYTE)v49) & 1) != 0 )
      {
        v40 = (unsigned int)v40 & 0xFFFFFFFE;
        v49 = (unsigned int)(v40 + v49);
LABEL_62:
        v39 = (unsigned int)v31[v49];
        *(_DWORD *)(v42 + 4 * v49) |= v39;
      }
LABEL_63:
      v106[0] = nullptr;
      sub_148BFD0(v107, v106, v39, v40, v41);
      sub_148BC40(v107, v37, 1);
      v105 = v42;
      sub_52E800(v106, &v105);
      sub_52EC40((__int64 **)a1, v96, v37, a2, (__int64 *)v106);
      if ( v106[0] )
        sub_186B220(v106[0] - 2);
      if ( v42 )
      {
        v29 += 8;
        sub_186B220((void *)(v42 - 8));
        if ( v100 == v29 )
          goto LABEL_67;
      }
      else
      {
        v29 += 8;
        if ( v29 == v100 )
          goto LABEL_67;
      }
    }
  }
LABEL_74:
  if ( *((_QWORD *)&v116 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v116 + 1) - 8LL));
  if ( (_QWORD)v116 )
    sub_186B220((void *)(v116 - 8));
  if ( *((_QWORD *)&v115 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v115 + 1) - 8LL));
  if ( (_QWORD)v115 )
    sub_186B220((void *)(v115 - 8));
  if ( ptr )
    sub_186B220(ptr);
  v50 = v109;
  v51 = (char *)v109 + 8 * (unsigned int)v110;
  v52 = (char *)v109;
  if ( v109 != v51 )
  {
    do
    {
      v53 = *(_QWORD *)v52;
      v52 += 8;
      *(_BYTE *)(v53 + 6) &= ~1u;
    }
    while ( v52 != v51 );
  }
  LODWORD(v110) = 0;
  result = v111;
  if ( v50 != v111 && v50 )
    result = (_BYTE *)sub_186B220(v50);
  if ( v107[0] )
    return (_BYTE *)sub_186B220(v107[0]);
  return result;
}

