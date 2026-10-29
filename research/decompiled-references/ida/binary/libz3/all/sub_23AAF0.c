__int64 __fastcall sub_23AAF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *i; // rax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // esi
  char *v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // edi
  __int64 v22; // rax
  char v23; // al
  size_t v24; // rbp
  unsigned __int64 v25; // rdx
  size_t v26; // rax
  size_t v27; // r14
  _BYTE *v28; // rcx
  size_t v29; // rbp
  unsigned __int64 v30; // rax
  _BYTE *v31; // r10
  __int64 v32; // rax
  __int64 v33; // rbp
  unsigned int v34; // r8d
  __m128i *v35; // r13
  size_t v36; // r14
  int v37; // esi
  __int64 v38; // r8
  __m128i *v39; // rdi
  __m128i *v40; // rax
  __int64 *v41; // r8
  __int64 v42; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  _BYTE *v46; // rdi
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // r13
  _QWORD *v50; // rax
  __int64 v51; // rax
  unsigned int j; // r14d
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r13
  unsigned int v56; // ecx
  _QWORD *v57; // rdi
  __int64 (*v58)(void); // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  const double *v61; // rcx
  __int64 v62; // r14
  __m128 v63; // xmm0
  _QWORD *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rsi
  int v67; // eax
  __int64 *v68; // rsi
  _QWORD *v69; // r14
  _QWORD *v70; // rax
  int v71; // r8d
  int v72; // r9d
  _QWORD *v73; // rdi
  __int64 (*v74)(void); // rax
  __int64 *v75; // r13
  __int64 v76; // rcx
  int v77; // edx
  __int64 v78; // r14
  __int64 v79; // rax
  __int64 v80; // r15
  __int64 v81; // r12
  _QWORD *v82; // rax
  _QWORD *v83; // rdx
  unsigned int v84; // eax
  __int64 v85; // rcx
  int v86; // eax
  __int64 *v87; // rcx
  _QWORD *v88; // r12
  _QWORD *v89; // rax
  _QWORD *v90; // rdx
  unsigned int v91; // eax
  __int64 v92; // rcx
  int v93; // eax
  __int64 *v94; // rcx
  _QWORD *v95; // rbx
  _QWORD *v96; // rax
  unsigned int v97; // r14d
  unsigned int v98; // ecx
  unsigned int *v99; // rax
  __int64 v100; // rcx
  unsigned int v101; // r8d
  size_t v102; // rsi
  unsigned int *v103; // rax
  __int64 v104; // rsi
  __m128i *v105; // rax
  __m128i *v106; // rdx
  void *v107; // rdi
  unsigned int v108; // ecx
  unsigned int v109; // r14d
  unsigned int v110; // ecx
  unsigned int *v111; // rax
  __int64 v112; // rcx
  _BYTE *v113; // rdi
  _QWORD *v114; // rdx
  _QWORD *v115; // rdx
  _QWORD *v116; // rdx
  char **exception; // rbp
  __int64 v118; // rdx
  char **v119; // rbp
  __int64 v120; // rdx
  char **v121; // rbp
  __int64 v122; // rdx
  int v123; // [rsp+0h] [rbp-1C8h]
  int v124; // [rsp+0h] [rbp-1C8h]
  void *dest; // [rsp+8h] [rbp-1C0h]
  _QWORD *destd; // [rsp+8h] [rbp-1C0h]
  _QWORD *deste; // [rsp+8h] [rbp-1C0h]
  const double *desta; // [rsp+8h] [rbp-1C0h]
  void *destb; // [rsp+8h] [rbp-1C0h]
  unsigned int destc; // [rsp+8h] [rbp-1C0h]
  unsigned int destf; // [rsp+8h] [rbp-1C0h]
  _BYTE *destg; // [rsp+8h] [rbp-1C0h]
  int v133; // [rsp+10h] [rbp-1B8h]
  __int64 *v134; // [rsp+10h] [rbp-1B8h]
  void *v135; // [rsp+18h] [rbp-1B0h]
  _QWORD *v136; // [rsp+18h] [rbp-1B0h]
  _BYTE *v137; // [rsp+18h] [rbp-1B0h]
  int v138; // [rsp+20h] [rbp-1A8h]
  __int64 v139; // [rsp+20h] [rbp-1A8h]
  int v140; // [rsp+28h] [rbp-1A0h]
  char v141; // [rsp+28h] [rbp-1A0h]
  unsigned int v142; // [rsp+2Ch] [rbp-19Ch]
  int v143; // [rsp+2Ch] [rbp-19Ch]
  unsigned int v144; // [rsp+2Ch] [rbp-19Ch]
  int v145; // [rsp+30h] [rbp-198h] BYREF
  __int64 v146; // [rsp+38h] [rbp-190h] BYREF
  __int64 v147; // [rsp+40h] [rbp-188h] BYREF
  void *ptr; // [rsp+48h] [rbp-180h] BYREF
  _QWORD *v149; // [rsp+50h] [rbp-178h] BYREF
  _QWORD *v150; // [rsp+58h] [rbp-170h] BYREF
  char *v151; // [rsp+60h] [rbp-168h] BYREF
  int v152; // [rsp+68h] [rbp-160h]
  int v153; // [rsp+70h] [rbp-158h]
  int v154; // [rsp+78h] [rbp-150h]
  int v155[2]; // [rsp+80h] [rbp-148h] BYREF
  size_t v156; // [rsp+88h] [rbp-140h]
  unsigned __int64 v157; // [rsp+90h] [rbp-138h] BYREF
  int v158; // [rsp+98h] [rbp-130h]
  void *src; // [rsp+A0h] [rbp-128h] BYREF
  size_t n; // [rsp+A8h] [rbp-120h]
  int v161[2]; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v162; // [rsp+B8h] [rbp-110h]
  _OWORD v163[16]; // [rsp+C0h] [rbp-108h] BYREF

  v8 = *(unsigned int *)(a1 + 48);
  v9 = *(__int64 **)(a1 + 40);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = (__int64 *)((char *)v9 + v8);
  v13 = 16LL * (v10 & v11);
  v14 = (__int64 *)((char *)v9 + v13);
  if ( v13 != v8 )
  {
    for ( i = (__int64 *)((char *)v9 + v13); v12 != i; i += 2 )
    {
      v13 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v10 && a2 == v13 )
          return i[1];
      }
      else if ( !v13 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v14 != v9; v9 += 2 )
  {
    v44 = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      if ( *(_DWORD *)(v44 + 12) == v10 && a2 == v44 )
      {
        i = v9;
        return i[1];
      }
    }
    else if ( !v44 )
    {
      break;
    }
  }
LABEL_8:
  v16 = 214013 * *(_DWORD *)(a1 + 112) + 2531011;
  *(_DWORD *)(a1 + 112) = v16;
  v17 = HIWORD(v16) & 0x7FFF;
  if ( v17 <= 9 )
  {
    v19 = (_BYTE *)(&dword_0 + 1);
    src = v161;
    goto LABEL_61;
  }
  if ( v17 <= 0x63 )
  {
    v19 = (_BYTE *)(&dword_0 + 2);
    src = v161;
    strcpy(
      (char *)v163,
      "000102030405060708091011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556"
      "57585960616263646566676869707172737475767778798081828384858687888990919293949596979899");
    LODWORD(v9) = 0;
LABEL_16:
    v22 = 2 * v17;
    v13 = (unsigned int)(v22 + 1);
    v23 = *((_BYTE *)v163 + v22);
    LODWORD(v13) = *((unsigned __int8 *)v163 + v13);
    BYTE1(v161[0]) = v13;
    goto LABEL_17;
  }
  if ( v17 <= 0x3E7 )
  {
    v18 = 2;
    v19 = (_BYTE *)(&dword_0 + 3);
LABEL_117:
    src = v161;
    n = 0;
    goto LABEL_13;
  }
  if ( v17 <= 0x270F )
  {
    v18 = 3;
    v19 = &byte_4;
    goto LABEL_117;
  }
  v18 = 4;
  n = 0;
  v19 = &byte_5;
  src = v161;
LABEL_13:
  LOBYTE(v161[0]) = 45;
  v163[0] = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
  v163[1] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
  v163[2] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
  v163[3] = _mm_load_si128((const __m128i *)&xmmword_18B6400);
  v163[4] = _mm_load_si128((const __m128i *)&xmmword_18B6410);
  v163[5] = _mm_load_si128((const __m128i *)&xmmword_18B6420);
  v163[6] = _mm_load_si128((const __m128i *)&xmmword_18B6430);
  v163[7] = _mm_load_si128((const __m128i *)&xmmword_18B6440);
  v163[8] = _mm_load_si128((const __m128i *)&xmmword_18B6450);
  v163[9] = _mm_load_si128((const __m128i *)&xmmword_18B6460);
  v163[10] = _mm_load_si128((const __m128i *)&xmmword_18B6470);
  v163[11] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
  *(__m128i *)((char *)&v163[11] + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
  do
  {
    v20 = v17 % 0x64;
    v21 = v17;
    v17 /= 0x64u;
    v13 = 2 * v20;
    a6 = *((unsigned __int8 *)v163 + (unsigned int)(v13 + 1));
    *((_BYTE *)v161 + v18) = a6;
    LODWORD(v13) = *((unsigned __int8 *)v163 + v13);
    v9 = (__int64 *)(v18 - 1);
    v18 -= 2;
    *((_BYTE *)v161 + (_QWORD)v9) = v13;
  }
  while ( v21 > 0x270F );
  if ( v21 > 0x3E7 )
    goto LABEL_16;
LABEL_61:
  v23 = v17 + 48;
LABEL_17:
  LOBYTE(v161[0]) = v23;
  n = (size_t)v19;
  v19[(_QWORD)src] = 0;
  sub_180CE20(
    (int)v155,
    a2 + 16,
    v13,
    (int)v9,
    (int)v19,
    a6,
    v123,
    dest,
    v133,
    (__int64)v135,
    v138,
    v140,
    v145,
    v146,
    v147,
    (int)ptr,
    (int)v149,
    (int)v150,
    (int)v151,
    v152,
    v153,
    v154,
    v155[0],
    v156,
    v157,
    v158,
    (int)src,
    (void *)n,
    v161[0],
    v162);
  v24 = v156;
  if ( 0x7FFFFFFFFFFFFFFFLL - v156 <= 5 )
    std::__throw_length_error("basic_string::append");
  if ( *(unsigned __int64 **)v155 == &v157 )
    v25 = 15;
  else
    v25 = v157;
  if ( v25 < v156 + 6 )
  {
    sub_23A830(v155, v156, 0, "_rand_", 6u);
  }
  else
  {
    v26 = v156 + *(_QWORD *)v155;
    *(_DWORD *)v26 = 1851880031;
    *(_WORD *)(v26 + 4) = 24420;
  }
  v156 = v24 + 6;
  *(_BYTE *)(*(_QWORD *)v155 + v24 + 6) = 0;
  sub_2333C0((char **)v163, v155);
  v27 = *((_QWORD *)&v163[0] + 1);
  v28 = *(_BYTE **)&v163[0];
  v29 = *((_QWORD *)&v163[0] + 1) + n;
  if ( *(_OWORD **)&v163[0] != &v163[1] )
  {
    v30 = *(_QWORD *)&v163[1];
    v31 = src;
    if ( *(_QWORD *)&v163[1] < v29 )
    {
      if ( src != v161 )
        goto LABEL_25;
      if ( v29 <= 0xF )
      {
LABEL_127:
        if ( 0x7FFFFFFFFFFFFFFFLL - n < *((_QWORD *)&v163[0] + 1) )
          std::__throw_length_error("basic_string::_M_replace");
        if ( *(_QWORD *)&v163[0] >= (unsigned __int64)v31 && (unsigned __int64)&v31[n] >= *(_QWORD *)&v163[0] )
        {
          std::string::_M_replace_cold();
          v31 = src;
          goto LABEL_136;
        }
        if ( n )
        {
          if ( !*((_QWORD *)&v163[0] + 1) )
          {
LABEL_136:
            n = v29;
            v31[v29] = 0;
            sub_2333C0(&v151, &src);
            goto LABEL_30;
          }
          v113 = &v31[*((_QWORD *)&v163[0] + 1)];
          if ( n == 1 )
          {
            *v113 = *v31;
          }
          else
          {
            v137 = *(_BYTE **)&v163[0];
            destg = v31;
            memmove(v113, v31, n);
            v31 = destg;
            v28 = v137;
          }
        }
        else if ( !*((_QWORD *)&v163[0] + 1) )
        {
          goto LABEL_136;
        }
        if ( v27 == 1 )
          *v31 = *v28;
        else
          memcpy(v31, v28, v27);
        v31 = src;
        goto LABEL_136;
      }
      if ( 0x7FFFFFFFFFFFFFFFLL - *((_QWORD *)&v163[0] + 1) >= n )
        goto LABEL_28;
LABEL_146:
      std::__throw_length_error("basic_string::append");
    }
LABEL_63:
    if ( 0x7FFFFFFFFFFFFFFFLL - *((_QWORD *)&v163[0] + 1) >= n )
    {
LABEL_64:
      if ( n )
      {
        v46 = (_BYTE *)(*(_QWORD *)&v163[0] + *((_QWORD *)&v163[0] + 1));
        if ( n == 1 )
          *v46 = *v31;
        else
          memcpy(v46, v31, n);
        v28 = *(_BYTE **)&v163[0];
      }
      goto LABEL_29;
    }
    goto LABEL_146;
  }
  v31 = src;
  if ( v29 <= 0xF )
    goto LABEL_63;
  if ( src == v161 )
    goto LABEL_28;
  v30 = 15;
LABEL_25:
  if ( *(_QWORD *)v161 >= v29 )
    goto LABEL_127;
  if ( 0x7FFFFFFFFFFFFFFFLL - *((_QWORD *)&v163[0] + 1) < n )
    goto LABEL_146;
  if ( v30 >= v29 )
    goto LABEL_64;
LABEL_28:
  sub_23A830(v163, *((size_t *)&v163[0] + 1), 0, v31, n);
  v28 = *(_BYTE **)&v163[0];
LABEL_29:
  *((_QWORD *)&v163[0] + 1) = v29;
  v28[v29] = 0;
  sub_2333C0(&v151, v163);
LABEL_30:
  sub_233E40((__int64)v163);
  sub_233E40((__int64)v155);
  sub_233E40((__int64)&src);
  sub_180C5A0(&v145, v151);
  v32 = sub_15E3510(*(_QWORD *)(a1 + 32), &v145, *(unsigned int *)(a2 + 32), a2 + 48, *(_QWORD *)(a2 + 40), 0);
  v146 = v32;
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  sub_233E70((_QWORD *)(a1 + 72), &v146);
  ++*(_DWORD *)(a2 + 8);
  v147 = a2;
  sub_233E70((_QWORD *)(a1 + 72), &v147);
  v34 = *(_DWORD *)(a1 + 48);
  if ( 3 * v34 < 4 * (*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 56)) )
  {
    v143 = 2 * v34;
    v36 = 32LL * v34;
    destc = 2 * v34;
    v105 = (__m128i *)sub_186B270(v36);
    v35 = v105;
    v106 = &v105[v36 / 0x10];
    if ( destc )
    {
      if ( (v36 & 0x10) == 0 || (*v105 = 0, ++v105, v106 != v105) )
      {
        do
        {
          *v105 = 0;
          v105 += 2;
          v105[-1] = 0;
        }
        while ( v106 != v105 );
      }
    }
    sub_23AA00(*(const __m128i **)(a1 + 40), *(_DWORD *)(a1 + 48), v35, destc);
    v107 = *(void **)(a1 + 40);
    v108 = destc;
    v34 = v143;
    if ( v107 )
    {
      v144 = destc;
      destf = v34;
      sub_186B220(v107);
      v108 = v144;
      v34 = destf;
    }
    *(_QWORD *)(a1 + 40) = v35;
    *(_DWORD *)(a1 + 48) = v108;
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v35 = *(__m128i **)(a1 + 40);
    v36 = 16LL * v34;
  }
  v37 = *(_DWORD *)(a2 + 12);
  v38 = 16LL * (v37 & (v34 - 1));
  v39 = &v35[(unsigned __int64)v38 / 0x10];
  if ( v38 != v36 )
  {
    v40 = &v35[(unsigned __int64)v38 / 0x10];
    v41 = nullptr;
    while ( 1 )
    {
      v42 = v40->m128i_i64[0];
      if ( v40->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v42 + 12) == v37 && a2 == v42 )
        {
          v40->m128i_i64[0] = a2;
          v40->m128i_i64[1] = v33;
          goto LABEL_69;
        }
      }
      else
      {
        if ( !v42 )
        {
          if ( v41 )
            goto LABEL_114;
          v41 = (__int64 *)v40;
          goto LABEL_115;
        }
        v41 = (__int64 *)v40;
      }
      if ( &v35[v36 / 0x10] == ++v40 )
        goto LABEL_56;
    }
  }
  v41 = nullptr;
  while ( 1 )
  {
LABEL_56:
    if ( v39 == v35 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v45 = v35->m128i_i64[0];
    if ( v35->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v45 + 12) == v37 && a2 == v45 )
    {
      v35->m128i_i64[0] = a2;
      v35->m128i_i64[1] = v33;
      goto LABEL_69;
    }
LABEL_55:
    ++v35;
  }
  if ( v45 )
  {
    v41 = (__int64 *)v35;
    goto LABEL_55;
  }
  if ( v41 )
LABEL_114:
    --*(_DWORD *)(a1 + 56);
  else
    v41 = (__int64 *)v35;
LABEL_115:
  *v41 = a2;
  v41[1] = v33;
  ++*(_DWORD *)(a1 + 52);
LABEL_69:
  destd = *(_QWORD **)(a1 + 24);
  v47 = (_QWORD *)sub_180C100(destd + 2, 16);
  v47[1] = a1 + 64;
  *v47 = off_1C4C490;
  ptr = v47;
  sub_22FEE0(destd, &ptr);
  deste = *(_QWORD **)(a1 + 24);
  v48 = (_QWORD *)sub_180C100(deste + 2, 16);
  *v48 = off_1C4C490;
  v48[1] = a1 + 64;
  v149 = v48;
  sub_22FEE0(deste, &v149);
  v49 = *(_QWORD **)(a1 + 24);
  v50 = (_QWORD *)sub_180C100(v49 + 2, 24);
  v50[1] = a1 + 40;
  *v50 = off_1C4C4B8;
  v50[2] = a2;
  v150 = v50;
  sub_22FEE0(v49, &v150);
  v51 = *(_QWORD *)(a1 + 104);
  if ( v51 )
    *(_DWORD *)(v51 - 4) = 0;
  for ( j = 0; j < *(_DWORD *)(a2 + 32); *(_DWORD *)(v54 - 4) = v56 + 1 )
  {
    v53 = sub_15DB5C0(*(_QWORD *)(a1 + 32), j, *(_QWORD *)(a2 + 8LL * j + 48));
    v54 = *(_QWORD *)(a1 + 104);
    v55 = v53;
    if ( !v54 || (v56 = *(_DWORD *)(v54 - 4), v56 == *(_DWORD *)(v54 - 8)) )
    {
      sub_23A6F0((unsigned int **)(a1 + 104));
      v54 = *(_QWORD *)(a1 + 104);
      v56 = *(_DWORD *)(v54 - 4);
    }
    ++j;
    *(_QWORD *)(v54 + 8LL * v56) = v55;
  }
  v57 = *(_QWORD **)(a1 + 16);
  v58 = *(__int64 (**)(void))(*v57 + 56LL);
  if ( (char *)v58 == (char *)sub_230280 )
    v59 = v57[40];
  else
    v59 = v58();
  desta = (const double *)v59;
  v60 = sub_186B270(0x38u);
  v61 = desta;
  v62 = v60;
  v63 = _mm_loadh_ps(desta);
  *(_DWORD *)v60 = 2;
  *(_OWORD *)(v60 + 8) = 0;
  *(__m128 *)(v60 + 24) = v63;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  v64 = *((_QWORD **)desta + 2);
  *(_QWORD *)(v60 + 40) = 0;
  *(_BYTE *)(v60 + 48) = 1;
  if ( v64 )
  {
    v65 = *((_DWORD *)v64 - 1);
    if ( v65 == *((_DWORD *)v64 - 2) )
    {
      v101 = (3 * v65 + 1) >> 1;
      v102 = 8 * v101 + 8;
      if ( 8 * v65 + 8 >= (unsigned int)v102 || v65 >= v101 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_A3E10((__int64 *)v163, "Overflow encountered when expanding vector", v118);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v163);
        sub_233E40((__int64)v163);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v142 = (3 * v65 + 1) >> 1;
      v103 = (unsigned int *)sub_186B300(v64 - 1, v102);
      v104 = v103[1];
      v61 = desta;
      v64 = v103 + 2;
      *((_QWORD *)desta + 2) = v103 + 2;
      *v103 = v142;
      LODWORD(v103) = v104;
      v68 = &v64[v104];
      v67 = (_DWORD)v103 + 1;
    }
    else
    {
      v66 = v65;
      v67 = v65 + 1;
      v68 = &v64[v66];
    }
  }
  else
  {
    v115 = (_QWORD *)sub_186B270(0x18u);
    v61 = desta;
    *v115 = 2;
    v67 = 1;
    v64 = v115 + 1;
    *((_QWORD *)desta + 2) = v64;
    v68 = v64;
  }
  *v68 = v62;
  v69 = *((_QWORD **)v61 + 1);
  *((_DWORD *)v64 - 1) = v67;
  destb = (void *)(v61 + 2);
  v70 = (_QWORD *)sub_180C100(v69 + 2, 16);
  *v70 = off_1C4C020;
  v70[1] = destb;
  *(_QWORD *)v155 = v70;
  sub_22FEE0(v69, v155);
  v73 = *(_QWORD **)(a1 + 16);
  v74 = *(__int64 (**)(void))(*v73 + 56LL);
  if ( (char *)v74 == (char *)sub_230280 )
    v75 = (__int64 *)v73[40];
  else
    v75 = (__int64 *)v74();
  v76 = *(_QWORD *)(a1 + 104);
  if ( v76 )
    v77 = *(_DWORD *)(v76 - 4);
  else
    v77 = 0;
  v78 = sub_15DC610(
          *(_QWORD *)(a1 + 32),
          v33,
          v77,
          v76,
          v71,
          v72,
          v124,
          (int)destb,
          (int)v163,
          (int)&src,
          (int)&v151,
          v141,
          v145,
          v146,
          v147,
          ptr);
  v79 = sub_186B270(0x38u);
  v80 = *v75;
  ++*(_DWORD *)(a2 + 8);
  v81 = v79;
  *(_DWORD *)v79 = 3;
  *(_QWORD *)(v79 + 24) = 0;
  *(_QWORD *)(v79 + 32) = v80;
  *(_QWORD *)(v79 + 40) = 0;
  *(_BYTE *)(v79 + 48) = 1;
  *(_OWORD *)(v79 + 8) = 0;
  if ( v78 )
    ++*(_DWORD *)(v78 + 8);
  v82 = (_QWORD *)sub_186B270(0x68u);
  v82[2] = v80;
  *(_QWORD *)(v81 + 40) = v82 + 1;
  v82[1] = 0;
  *v82 = 0x100000002LL;
  v82[4] = v80;
  v82[3] = v78;
  v82[6] = v80;
  v82[5] = a2;
  sub_22BCA0(0, v80);
  v83 = (_QWORD *)v75[2];
  if ( v83 )
  {
    v84 = *((_DWORD *)v83 - 1);
    if ( v84 == *((_DWORD *)v83 - 2) )
    {
      v97 = (3 * v84 + 1) >> 1;
      v98 = 8 * v97 + 8;
      if ( 8 * v84 + 8 >= v98 || v84 >= v97 )
      {
        v119 = (char **)__cxa_allocate_exception(0x28u);
        sub_A3E10(v134, "Overflow encountered when expanding vector", v120);
        *v119 = (char *)off_1C63128;
        sub_2333C0(v119 + 1, v134);
        sub_233E40((__int64)v134);
        __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v99 = (unsigned int *)sub_186B300(v83 - 1, v98);
      v100 = v99[1];
      v83 = v99 + 2;
      v75[2] = (__int64)(v99 + 2);
      *v99 = v97;
      LODWORD(v99) = v100;
      v87 = &v83[v100];
      v86 = (_DWORD)v99 + 1;
    }
    else
    {
      v85 = v84;
      v86 = v84 + 1;
      v87 = &v83[v85];
    }
  }
  else
  {
    v114 = (_QWORD *)sub_186B270(0x18u);
    *v114 = 2;
    v86 = 1;
    v83 = v114 + 1;
    v75[2] = (__int64)v83;
    v87 = v83;
  }
  *v87 = v81;
  v88 = (_QWORD *)v75[1];
  *((_DWORD *)v83 - 1) = v86;
  v89 = (_QWORD *)sub_180C100(v88 + 2, 16);
  v89[1] = v75 + 2;
  *v89 = off_1C4C020;
  src = v89;
  sub_22FEE0(v88, v136);
  if ( !(unsigned __int8)sub_15D37A0(v75 + 5, a2) )
  {
    v90 = (_QWORD *)v75[4];
    ++*(_DWORD *)(a2 + 8);
    if ( v90 )
    {
      v91 = *((_DWORD *)v90 - 1);
      if ( v91 == *((_DWORD *)v90 - 2) )
      {
        v109 = (3 * v91 + 1) >> 1;
        v110 = 8 * v109 + 8;
        if ( 8 * v91 + 8 >= v110 || v91 >= v109 )
        {
          v121 = (char **)__cxa_allocate_exception(0x28u);
          sub_A3E10(v134, "Overflow encountered when expanding vector", v122);
          *v121 = (char *)off_1C63128;
          sub_2333C0(v121 + 1, v134);
          sub_233E40((__int64)v134);
          __cxa_throw(v121, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v111 = (unsigned int *)sub_186B300(v90 - 1, v110);
        v112 = v111[1];
        v90 = v111 + 2;
        v75[4] = (__int64)(v111 + 2);
        *v111 = v109;
        LODWORD(v111) = v112;
        v94 = &v90[v112];
        v93 = (_DWORD)v111 + 1;
      }
      else
      {
        v92 = v91;
        v93 = v91 + 1;
        v94 = &v90[v92];
      }
    }
    else
    {
      v116 = (_QWORD *)sub_186B270(0x18u);
      *v116 = 2;
      v93 = 1;
      v90 = v116 + 1;
      v75[4] = (__int64)v90;
      v94 = v90;
    }
    *v94 = a2;
    *((_DWORD *)v90 - 1) = v93;
    sub_15D0A90(v75 + 5, a2, 1);
    v95 = (_QWORD *)v75[1];
    v96 = (_QWORD *)sub_180C100(v95 + 2, 16);
    v96[1] = v75;
    *v96 = off_1C4BFF8;
    *(_QWORD *)&v163[0] = v96;
    sub_22FEE0(v95, v134);
  }
  sub_233E40(v139);
  return v33;
}

