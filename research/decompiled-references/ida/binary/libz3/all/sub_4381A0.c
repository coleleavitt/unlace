__int64 *__fastcall sub_4381A0(__int64 *a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  _BYTE *v11; // rdi
  size_t v12; // r14
  _BYTE *v13; // r11
  char *v14; // r8
  char *v15; // r8
  __int64 v16; // r15
  unsigned int v17; // r15d
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rdi
  size_t *v24; // rdi
  unsigned int v26; // ecx
  unsigned int v27; // esi
  unsigned int v28; // r14d
  size_t v29; // r10
  _BYTE *v30; // r8
  unsigned __int64 v31; // rdi
  _BYTE *v32; // rax
  __int64 *v33; // r11
  _BYTE *v34; // rax
  unsigned int v35; // r14d
  unsigned int v36; // eax
  unsigned int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int8 v40; // cl
  _BYTE *v41; // rdi
  unsigned __int64 v42; // rdi
  char *v43; // rax
  size_t v44; // rdx
  char *v45; // r10
  size_t v46; // r9
  char *v47; // rax
  char *v48; // rdi
  __int64 v49; // rcx
  unsigned __int64 v50; // rdi
  char *v51; // rax
  size_t v52; // rdx
  char *v53; // r11
  size_t v54; // r10
  char *v55; // rax
  char *v56; // rdi
  int v57; // [rsp+0h] [rbp-198h]
  void *v58; // [rsp+8h] [rbp-190h]
  __int64 v59; // [rsp+8h] [rbp-190h]
  __int64 v60; // [rsp+8h] [rbp-190h]
  size_t v61; // [rsp+8h] [rbp-190h]
  int v62; // [rsp+10h] [rbp-188h]
  void *v63; // [rsp+10h] [rbp-188h]
  __int64 *v64; // [rsp+10h] [rbp-188h]
  void *v65; // [rsp+10h] [rbp-188h]
  char *v66; // [rsp+10h] [rbp-188h]
  void *v67; // [rsp+10h] [rbp-188h]
  char *v68; // [rsp+10h] [rbp-188h]
  char *v69; // [rsp+10h] [rbp-188h]
  char *v70; // [rsp+10h] [rbp-188h]
  void *v71; // [rsp+10h] [rbp-188h]
  char *v72; // [rsp+10h] [rbp-188h]
  char *v73; // [rsp+10h] [rbp-188h]
  int v74; // [rsp+20h] [rbp-178h]
  unsigned int v75; // [rsp+20h] [rbp-178h]
  unsigned int v76; // [rsp+20h] [rbp-178h]
  size_t v77; // [rsp+20h] [rbp-178h]
  size_t v78; // [rsp+20h] [rbp-178h]
  size_t v79; // [rsp+20h] [rbp-178h]
  size_t v80; // [rsp+20h] [rbp-178h]
  int v81; // [rsp+28h] [rbp-170h]
  size_t v82; // [rsp+28h] [rbp-170h]
  size_t v83; // [rsp+28h] [rbp-170h]
  size_t v84; // [rsp+28h] [rbp-170h]
  size_t v85; // [rsp+28h] [rbp-170h]
  size_t v86; // [rsp+28h] [rbp-170h]
  void *v87; // [rsp+30h] [rbp-168h] BYREF
  __int64 v88; // [rsp+38h] [rbp-160h]
  unsigned __int64 v89; // [rsp+40h] [rbp-158h] BYREF
  int v90; // [rsp+48h] [rbp-150h]
  void *v91; // [rsp+50h] [rbp-148h]
  size_t v92; // [rsp+58h] [rbp-140h]
  size_t v93; // [rsp+60h] [rbp-138h] BYREF
  int v94; // [rsp+68h] [rbp-130h]
  void *src; // [rsp+70h] [rbp-128h]
  size_t n; // [rsp+78h] [rbp-120h]
  __int64 v97; // [rsp+80h] [rbp-118h] BYREF
  int v98; // [rsp+88h] [rbp-110h]
  __m128i si128; // [rsp+90h] [rbp-108h] BYREF
  __m128i v100; // [rsp+A0h] [rbp-F8h]
  __m128i v101; // [rsp+B0h] [rbp-E8h]
  __m128i v102; // [rsp+C0h] [rbp-D8h]
  __m128i v103; // [rsp+D0h] [rbp-C8h]
  __m128i v104; // [rsp+E0h] [rbp-B8h]
  __m128i v105; // [rsp+F0h] [rbp-A8h]
  __m128i v106; // [rsp+100h] [rbp-98h]
  __m128i v107; // [rsp+110h] [rbp-88h]
  __m128i v108; // [rsp+120h] [rbp-78h]
  __m128i v109; // [rsp+130h] [rbp-68h]
  __m128i v110[5]; // [rsp+140h] [rbp-58h]

  v10 = *a2;
  *a1 = 0;
  a1[1] = v10;
  sub_180CE20(
    (int)&v87,
    a3 + 16,
    a3,
    a4,
    a5,
    a6,
    v57,
    v58,
    v62,
    (__int64)&v87,
    v74,
    v81,
    (int)v87,
    v88,
    v89,
    v90,
    (int)v91,
    v92,
    v93,
    v94,
    (int)src,
    n,
    v97,
    v98,
    si128.m128i_i32[0],
    si128.m128i_i32[2],
    v100.m128i_i32[0],
    (void *)v100.m128i_i64[1],
    v101.m128i_i32[0],
    v101.m128i_i64[1]);
  v92 = 1;
  v91 = &v93;
  LOWORD(v93) = 95;
  if ( !a4 )
  {
    v11 = (char *)&v93 + 1;
    n = 1;
    src = &v97;
    v12 = 2;
    v13 = &v97;
    LOWORD(v97) = 110;
LABEL_3:
    *v11 = *v13;
    v14 = (char *)v91;
    goto LABEL_4;
  }
  v26 = a4 - 1;
  if ( (unsigned int)(a4 - 1) <= 9 )
  {
    LOBYTE(v97) = 0;
    v29 = 1;
    src = &v97;
    v30 = &v97;
LABEL_39:
    v40 = v26 + 48;
    goto LABEL_40;
  }
  v27 = a4 - 1;
  v28 = 1;
  while ( 1 )
  {
    if ( v27 <= 0x63 )
    {
      ++v28;
      goto LABEL_28;
    }
    if ( v27 <= 0x3E7 )
    {
      v28 += 2;
      goto LABEL_28;
    }
    if ( v27 <= 0x270F )
      break;
    v28 += 4;
    if ( v27 <= 0x1869F )
      goto LABEL_28;
    v27 /= 0x2710u;
  }
  v28 += 3;
LABEL_28:
  LOBYTE(v97) = 0;
  v29 = v28;
  src = &v97;
  v30 = &v97;
  n = 0;
  if ( v28 > 0xF )
  {
    if ( v28 <= 0x1DuLL )
    {
      v59 = 30;
      v31 = 31;
    }
    else
    {
      v59 = v28;
      v31 = v28 + 1LL;
    }
    v75 = v26;
    v32 = (_BYTE *)operator new(v31);
    v33 = (__int64 *)src;
    v29 = v28;
    v30 = v32;
    v26 = v75;
    if ( n )
    {
      if ( n != -1 )
      {
        v64 = (__int64 *)src;
        v34 = memcpy(v32, src, n + 1);
        v33 = v64;
        v29 = v28;
        v26 = v75;
        v30 = v34;
        if ( v64 == &v97 )
          goto LABEL_35;
      }
    }
    else
    {
      *v32 = *(_BYTE *)src;
      if ( v33 == &v97 )
        goto LABEL_35;
    }
    v82 = (size_t)v30;
    v76 = v26;
    v65 = (void *)v29;
    operator delete(v33, v97 + 1);
    v30 = (_BYTE *)v82;
    v26 = v76;
    v29 = (size_t)v65;
LABEL_35:
    src = v30;
    v97 = v59;
  }
  v35 = v28 - 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
  v100 = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
  v101 = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
  v102 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
  v103 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
  v104 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
  v105 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
  v106 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
  v107 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
  v108 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
  v109 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
  v110[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
  *(__m128i *)((char *)v110 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
  if ( v26 > 0x63 )
  {
    do
    {
      v36 = v26 % 0x64;
      v37 = v26;
      v26 /= 0x64u;
      v38 = 2 * v36;
      v30[v35] = si128.m128i_i8[(unsigned int)(v38 + 1)];
      v39 = v35 - 1;
      v35 -= 2;
      v30[v39] = si128.m128i_i8[v38];
    }
    while ( v37 > 0x270F );
    if ( v37 <= 0x3E7 )
      goto LABEL_39;
  }
  v49 = 2 * v26;
  v30[1] = si128.m128i_i8[(unsigned int)(v49 + 1)];
  v40 = si128.m128i_i8[v49];
LABEL_40:
  *v30 = v40;
  n = v29;
  *((_BYTE *)src + v29) = 0;
  v13 = src;
  if ( 0x7FFFFFFFFFFFFFFFLL - v92 < n )
    std::__throw_length_error("basic_string::append");
  v14 = (char *)v91;
  v12 = n + v92;
  if ( v91 != &v93 )
  {
    if ( v93 >= v12 )
      goto LABEL_43;
    if ( (v12 & 0x8000000000000000LL) == 0LL )
    {
      v61 = 2 * v93;
      if ( v12 < 2 * v93 )
      {
        v50 = 2 * v93 + 1;
        if ( (v93 & 0x4000000000000000LL) != 0 )
          goto LABEL_71;
        goto LABEL_76;
      }
LABEL_75:
      v61 = n + v92;
      v50 = v12 + 1;
      if ( (__int64)(v12 + 1) < 0 )
LABEL_71:
        std::__throw_bad_alloc();
LABEL_76:
      v85 = v92;
      v79 = n;
      v70 = (char *)src;
      v51 = (char *)operator new(v50);
      v52 = v85;
      v53 = v70;
      v14 = v51;
      v54 = v79;
      if ( v85 )
      {
        if ( v85 == 1 )
        {
          *v51 = *(_BYTE *)v91;
        }
        else
        {
          v86 = v79;
          v80 = (size_t)v70;
          v71 = (void *)v52;
          v55 = (char *)memcpy(v51, v91, v52);
          v54 = v86;
          v53 = (char *)v80;
          v52 = (size_t)v71;
          v14 = v55;
        }
      }
      if ( v53 && v54 )
      {
        v56 = &v14[v52];
        if ( v54 == 1 )
        {
          *v56 = *v53;
        }
        else
        {
          v72 = v14;
          memcpy(v56, v53, v54);
          v14 = v72;
        }
      }
      if ( v91 != &v93 )
      {
        v73 = v14;
        operator delete(v91, v93 + 1);
        v14 = v73;
      }
      v91 = v14;
      v93 = v61;
      goto LABEL_4;
    }
    goto LABEL_101;
  }
  if ( v12 > 0xF )
  {
    if ( (v12 & 0x8000000000000000LL) == 0LL )
    {
      if ( v12 <= 0x1D )
      {
        v61 = 30;
        v50 = 31;
        goto LABEL_76;
      }
      goto LABEL_75;
    }
LABEL_101:
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_43:
  if ( n )
  {
    v11 = (char *)v91 + v92;
    if ( n == 1 )
      goto LABEL_3;
    memcpy(v11, src, n);
    v14 = (char *)v91;
  }
LABEL_4:
  v92 = v12;
  v14[v12] = 0;
  if ( src != &v97 )
    operator delete(src, v97 + 1);
  if ( 0x7FFFFFFFFFFFFFFFLL - v88 < v92 )
    std::__throw_length_error("basic_string::append");
  v15 = (char *)v87;
  v16 = v92 + v88;
  if ( v87 == &v89 )
  {
    if ( (unsigned __int64)v16 <= 0xF )
    {
LABEL_9:
      if ( v92 )
      {
        v41 = (char *)v87 + v88;
        if ( v92 == 1 )
          *v41 = *(_BYTE *)v91;
        else
          memcpy(v41, v91, v92);
        v15 = (char *)v87;
      }
      goto LABEL_10;
    }
    if ( v16 >= 0 )
    {
      if ( (unsigned __int64)v16 <= 0x1D )
      {
        v60 = 30;
        v42 = 31;
        goto LABEL_52;
      }
      goto LABEL_51;
    }
LABEL_102:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v89 >= v16 )
    goto LABEL_9;
  if ( v16 < 0 )
    goto LABEL_102;
  v60 = 2 * v89;
  if ( v16 < 2 * v89 )
  {
    v42 = 2 * v89 + 1;
    if ( (v89 & 0x4000000000000000LL) == 0 )
      goto LABEL_52;
LABEL_92:
    std::__throw_bad_alloc();
  }
LABEL_51:
  v60 = v92 + v88;
  v42 = v16 + 1;
  if ( v16 + 1 < 0 )
    goto LABEL_92;
LABEL_52:
  v83 = v88;
  v77 = v92;
  v66 = (char *)v91;
  v43 = (char *)operator new(v42);
  v44 = v83;
  v45 = v66;
  v15 = v43;
  v46 = v77;
  if ( v83 )
  {
    if ( v83 == 1 )
    {
      *v43 = *(_BYTE *)v87;
    }
    else
    {
      v84 = v77;
      v78 = (size_t)v66;
      v67 = (void *)v44;
      v47 = (char *)memcpy(v43, v87, v44);
      v46 = v84;
      v45 = (char *)v78;
      v44 = (size_t)v67;
      v15 = v47;
    }
  }
  if ( v45 && v46 )
  {
    v48 = &v15[v44];
    if ( v46 == 1 )
    {
      *v48 = *v45;
    }
    else
    {
      v68 = v15;
      memcpy(v48, v45, v46);
      v15 = v68;
    }
  }
  if ( v87 != &v89 )
  {
    v69 = v15;
    operator delete(v87, v89 + 1);
    v15 = v69;
  }
  v87 = v15;
  v89 = v60;
LABEL_10:
  v88 = v16;
  v15[v16] = 0;
  v17 = *(_DWORD *)(a3 + 32);
  v63 = *(void **)(a3 + 40);
  v18 = *a2;
  sub_180C5A0(&si128, v87);
  v19 = sub_15E3510(v18, &si128, v17, a3 + 48, v63, 0);
  v20 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v21 = *a1;
  if ( *a1 )
  {
    v22 = a1[1];
    if ( (*(_DWORD *)(v21 + 8))-- == 1 )
      sub_15D7BC0(v22, v21);
  }
  v24 = (size_t *)v91;
  *a1 = v20;
  if ( v24 != &v93 )
    operator delete(v24, v93 + 1);
  if ( v87 != &v89 )
    operator delete(v87, v89 + 1);
  return a1;
}

