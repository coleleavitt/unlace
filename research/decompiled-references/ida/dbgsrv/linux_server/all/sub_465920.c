/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465920
// Address: 0x0000000000465920

//----- (0000000000465920) ----------------------------------------------------
__int64 __fastcall sub_465920(
        __int64 (__fastcall ***a1)(_QWORD, void **, __int64, __int64 *, void **, void **),
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        const char *a5,
        int a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  size_t v19; // rax
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  const char *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  const char *v35; // rsi
  __int64 v36; // rbp
  const char *v37; // r8
  size_t v38; // r15
  void *v39; // rax
  const __m128i *v40; // rax
  __int64 v41; // rbp
  __int64 i; // r15
  char *v43; // rax
  __int64 v44; // rax
  _DWORD *v45; // rsi
  unsigned int v46; // eax
  unsigned int v47; // ebx
  char *v48; // rdi
  __int64 v49; // rbp
  __int64 v50; // rbx
  char *v51; // rdx
  void *v52; // rax
  char *v53; // rdi
  __int64 v54; // r14
  __int64 v55; // rbx
  char *v56; // rbp
  void *v57; // rdi
  void *v58; // rdi
  char *v59; // rdi
  __int64 v60; // r14
  __int64 v61; // rbp
  __int64 v62; // rbx
  void *v63; // rax
  unsigned __int64 v64; // rsi
  void *v65; // rdi
  void *v67; // rax
  char *v68; // rdi
  __int64 v69; // r12
  __int64 v70; // rbp
  char *v71; // rdx
  void *v72; // rax
  char *v73; // rdi
  __int64 v74; // r13
  __int64 v75; // rbp
  char *v76; // r12
  void *v77; // rdi
  void *v78; // rdi
  char *v79; // rdi
  __int64 v80; // r13
  __int64 v81; // r12
  __int64 v82; // rbp
  void *v83; // rax
  _QWORD *v84; // [rsp+0h] [rbp-1628h]
  size_t v85; // [rsp+10h] [rbp-1618h]
  const char *srca; // [rsp+18h] [rbp-1610h]
  _BYTE *src; // [rsp+18h] [rbp-1610h]
  void *v88; // [rsp+20h] [rbp-1608h] BYREF
  __int128 v89; // [rsp+28h] [rbp-1600h]
  __int64 v90; // [rsp+40h] [rbp-15E8h] BYREF
  __int128 v91; // [rsp+48h] [rbp-15E0h]
  void *v92; // [rsp+60h] [rbp-15C8h] BYREF
  __int128 v93; // [rsp+68h] [rbp-15C0h]
  void *ptr; // [rsp+80h] [rbp-15A8h] BYREF
  __int128 v95; // [rsp+88h] [rbp-15A0h]
  __int64 v96; // [rsp+A0h] [rbp-1588h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-1580h]
  __m128i v98; // [rsp+B8h] [rbp-1570h]
  __m128i v99; // [rsp+C8h] [rbp-1560h]
  __m128i v100; // [rsp+D8h] [rbp-1550h]
  __m128i v101; // [rsp+E8h] [rbp-1540h]
  __m128i v102; // [rsp+F8h] [rbp-1530h]
  void *v103; // [rsp+108h] [rbp-1520h]
  __int128 v104; // [rsp+110h] [rbp-1518h]
  void *v105; // [rsp+120h] [rbp-1508h]
  __int128 v106; // [rsp+128h] [rbp-1500h]
  __int128 v107; // [rsp+138h] [rbp-14F0h]
  __int16 v108; // [rsp+148h] [rbp-14E0h]
  __int64 v109; // [rsp+14Ch] [rbp-14DCh]
  __int64 v110; // [rsp+158h] [rbp-14D0h]
  void *v111; // [rsp+160h] [rbp-14C8h]
  __int128 v112; // [rsp+168h] [rbp-14C0h]
  void *v113; // [rsp+188h] [rbp-14A0h]
  __int128 v114; // [rsp+190h] [rbp-1498h]
  void *v115; // [rsp+1A0h] [rbp-1488h]
  __int128 v116; // [rsp+1A8h] [rbp-1480h]
  void *v117; // [rsp+1C0h] [rbp-1468h] BYREF
  __int128 v118; // [rsp+1C8h] [rbp-1460h]
  __int64 v119; // [rsp+1D8h] [rbp-1450h]
  _DWORD v120[1282]; // [rsp+1E0h] [rbp-1448h] BYREF
  unsigned __int64 v121; // [rsp+15E8h] [rbp-40h]

  v84 = a3;
  v121 = __readfsqword(0x28u);
  v119 = 0xFFFFFFFFLL;
  v88 = nullptr;
  v117 = nullptr;
  v89 = 0;
  v118 = 0;
  memset(v120, 0, sizeof(v120));
  if ( a5 )
  {
    v19 = strlen(a5);
    if ( v19 )
    {
      src = (_BYTE *)v19;
      v85 = v19 + 1;
      v117 = sub_481540((__int64)&v117, nullptr, v19 + 1, 1u);
      *(_QWORD *)&v118 = v85;
      memmove(v117, a5, (size_t)src);
      src[(_QWORD)v117] = 0;
    }
  }
  LODWORD(v119) = sub_45EF40(a5, 0.0, a8, a9, a10, a11, a12, a13, a14);
  BYTE4(v119) = a15;
  v120[0] = a6;
  if ( !(unsigned __int8)sub_465470((__int64)&v117, (__m128)0LL, a8, a9, a10, v20, v21, a13, a14) )
  {
    sub_45C3F0((_BYTE *)(a2 + 192), "Couldn't retrieve file information.\n");
    v64 = v89;
    if ( (_QWORD)v89 )
      goto LABEL_65;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(a2 + 184) )
  {
    v28 = s1;
    if ( (_QWORD)v118 )
      v28 = (const char *)v117;
    sub_410EA0(
      (int)"dwarf_file_action_t::with_dwarf_file() binary file found at %s\n",
      (__int64)v28,
      v22,
      v23,
      v24,
      v25,
      (__m128)0LL,
      a8,
      a9,
      a10,
      v26,
      v27,
      a13,
      a14,
      (char)v84);
  }
  v91 = 0;
  v90 = 0;
  v92 = nullptr;
  v93 = 0;
  if ( !(unsigned __int8)sub_4657A0(
                           (__int64)&qword_4C8320,
                           &v92,
                           (__int64)&v117,
                           (__int64)&v90,
                           0.0,
                           a8,
                           a9,
                           a10,
                           *(double *)v26.m128_u64,
                           *(double *)v27.m128_u64,
                           a13,
                           a14) )
  {
LABEL_62:
    if ( v92 )
    {
      *(_QWORD *)&v93 = 0;
      j__free(v92);
    }
    v64 = v89;
    if ( (_QWORD)v89 )
    {
LABEL_65:
      *a4 = v64;
      v65 = v88;
      if ( v64 >= *((_QWORD *)&v89 + 1) )
      {
LABEL_66:
        v47 = 0;
        v88 = nullptr;
        v89 = 0;
        *v84 = v65;
        goto LABEL_67;
      }
LABEL_75:
      if ( v65 )
      {
        if ( v64 )
        {
          v65 = sub_481420(v65, v64);
          if ( !v65 )
            v65 = v88;
        }
      }
      goto LABEL_66;
    }
LABEL_72:
    v67 = v88;
    if ( !*((_QWORD *)&v89 + 1) )
    {
      v67 = sub_481540((__int64)&v88, v88, 1u, 1u);
      v88 = v67;
      v64 = v89;
    }
    *((_BYTE *)v67 + v64) = 0;
    v65 = v88;
    v64 = v89 + 1;
    *(_QWORD *)&v89 = v64;
    *a4 = v64;
    if ( v64 >= *((_QWORD *)&v89 + 1) )
      goto LABEL_66;
    goto LABEL_75;
  }
  if ( *(_BYTE *)(a2 + 184) )
  {
    v35 = s1;
    if ( (_QWORD)v93 )
      v35 = (const char *)v92;
    sub_410EA0(
      (int)"dwarf_file_action_t::with_dwarf_file() DWARF file found at %s\n",
      (__int64)v35,
      v29,
      v30,
      v31,
      v32,
      (__m128)0LL,
      a8,
      a9,
      a10,
      v33,
      v34,
      a13,
      a14,
      (char)v84);
  }
  v96 = 0;
  v108 = 0;
  v103 = nullptr;
  v105 = nullptr;
  v109 = -1;
  v110 = -1;
  v111 = nullptr;
  v113 = nullptr;
  v115 = nullptr;
  v104 = 0;
  v106 = 0;
  v107 = 0;
  v112 = 0;
  v114 = 0;
  v116 = 0;
  sub_45DE50(&v96);
  v36 = operator new(0x28u);
  v37 = s1;
  if ( (_QWORD)v93 )
    v37 = (const char *)v92;
  *(_DWORD *)(v36 + 8) = 1;
  *(_QWORD *)v36 = &off_4C3450;
  *(_QWORD *)(v36 + 16) = 0;
  *(_OWORD *)(v36 + 24) = 0;
  if ( v37 )
  {
    srca = v37;
    v38 = strlen(v37);
    v39 = sub_481540(v36 + 16, nullptr, v38 + 1, 1u);
    *(_QWORD *)(v36 + 16) = v39;
    *(_QWORD *)(v36 + 24) = v38 + 1;
    memmove(v39, srca, v38);
    *(_BYTE *)(*(_QWORD *)(v36 + 16) + v38) = 0;
  }
  v96 = v36;
  if ( (_DWORD)v119 == 11 )
  {
    v40 = (const __m128i *)&off_4C3800;
  }
  else
  {
    if ( (_DWORD)v119 != 18 )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(30214);
      BUG();
    }
    v40 = (const __m128i *)&off_4C3740;
  }
  si128 = _mm_load_si128(v40);
  v98 = _mm_load_si128(v40 + 1);
  v99 = _mm_load_si128(v40 + 2);
  v100 = _mm_load_si128(v40 + 3);
  v101 = _mm_load_si128(v40 + 4);
  v102 = _mm_load_si128(v40 + 5);
  if ( !(unsigned __int8)sub_45E000((__int64)&v96) )
  {
    sub_45C3F0((_BYTE *)(a2 + 192), "Couldn't initialize DWARF loading.\n");
LABEL_35:
    sub_45DE50(&v96);
    v48 = (char *)v115;
    if ( v115 )
    {
      v49 = v116;
      if ( (_QWORD)v116 )
      {
        v50 = 0;
        do
        {
          v51 = &v48[24 * v50];
          v52 = *(void **)v51;
          if ( *(_QWORD *)v51 )
          {
            *((_QWORD *)v51 + 1) = 0;
            j__free(v52);
            v48 = (char *)v115;
          }
          ++v50;
        }
        while ( v49 != v50 );
      }
      *(_QWORD *)&v116 = 0;
      j__free(v48);
    }
    v53 = (char *)v113;
    if ( v113 )
    {
      v54 = v114;
      if ( (_QWORD)v114 )
      {
        v55 = 0;
        do
        {
          v56 = &v53[72 * v55];
          v57 = *((void **)v56 + 3);
          if ( v57 )
          {
            *((_QWORD *)v56 + 4) = 0;
            j__free(v57);
          }
          v58 = *(void **)v56;
          if ( *(_QWORD *)v56 )
          {
            *((_QWORD *)v56 + 1) = 0;
            j__free(v58);
          }
          ++v55;
          v53 = (char *)v113;
        }
        while ( v54 != v55 );
      }
      *(_QWORD *)&v114 = 0;
      j__free(v53);
    }
    if ( v111 )
    {
      *(_QWORD *)&v112 = 0;
      j__free(v111);
    }
    if ( v105 )
    {
      *(_QWORD *)&v106 = 0;
      j__free(v105);
    }
    v59 = (char *)v103;
    if ( v103 )
    {
      v60 = v104;
      if ( (_QWORD)v104 )
      {
        v61 = 0;
        v62 = 0;
        do
        {
          v63 = *(void **)&v59[v61 + 16];
          if ( v63 )
          {
            *(_QWORD *)&v59[v61 + 24] = 0;
            j__free(v63);
            v59 = (char *)v103;
          }
          ++v62;
          v61 += 120;
        }
        while ( v60 != v62 );
      }
      *(_QWORD *)&v104 = 0;
      j__free(v59);
    }
    goto LABEL_62;
  }
  ptr = nullptr;
  v95 = 0;
  if ( (int)v104 <= 0 )
  {
    v46 = (**a1)(a1, &v88, a2, &v96, &v117, &ptr);
  }
  else
  {
    v41 = (unsigned int)(v104 - 1);
    for ( i = 0; ; ++i )
    {
      v43 = (char *)v103 + 120 * i;
      if ( *((_QWORD *)v43 + 3) && !strncmp(*((const char **)v43 + 2), ".debug_", 7u) )
      {
        v44 = v95;
        v45 = ptr;
        if ( *((_QWORD *)&v95 + 1) < (unsigned __int64)(v95 + 1) )
        {
          ptr = sub_481540((__int64)&ptr, ptr, v95 + 1, 4u);
          v45 = ptr;
          v44 = v95;
        }
        v45[v44] = i;
        *(_QWORD *)&v95 = v95 + 1;
      }
      if ( v41 == i )
        break;
    }
    v46 = (**a1)(a1, &v88, a2, &v96, &v117, &ptr);
  }
  v47 = v46;
  if ( !v46 )
  {
    if ( ptr )
    {
      *(_QWORD *)&v95 = 0;
      j__free(ptr);
    }
    goto LABEL_35;
  }
  if ( ptr )
  {
    *(_QWORD *)&v95 = 0;
    j__free(ptr);
  }
  sub_45DE50(&v96);
  v68 = (char *)v115;
  if ( v115 )
  {
    v69 = v116;
    if ( (_QWORD)v116 )
    {
      v70 = 0;
      do
      {
        v71 = &v68[24 * v70];
        v72 = *(void **)v71;
        if ( *(_QWORD *)v71 )
        {
          *((_QWORD *)v71 + 1) = 0;
          j__free(v72);
          v68 = (char *)v115;
        }
        ++v70;
      }
      while ( v69 != v70 );
    }
    *(_QWORD *)&v116 = 0;
    j__free(v68);
  }
  v73 = (char *)v113;
  if ( v113 )
  {
    v74 = v114;
    if ( (_QWORD)v114 )
    {
      v75 = 0;
      do
      {
        v76 = &v73[72 * v75];
        v77 = *((void **)v76 + 3);
        if ( v77 )
        {
          *((_QWORD *)v76 + 4) = 0;
          j__free(v77);
        }
        v78 = *(void **)v76;
        if ( *(_QWORD *)v76 )
        {
          *((_QWORD *)v76 + 1) = 0;
          j__free(v78);
        }
        ++v75;
        v73 = (char *)v113;
      }
      while ( v74 != v75 );
    }
    *(_QWORD *)&v114 = 0;
    j__free(v73);
  }
  if ( v111 )
  {
    *(_QWORD *)&v112 = 0;
    j__free(v111);
  }
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    j__free(v105);
  }
  v79 = (char *)v103;
  if ( v103 )
  {
    v80 = v104;
    if ( (_QWORD)v104 )
    {
      v81 = 0;
      v82 = 0;
      do
      {
        v83 = *(void **)&v79[v81 + 16];
        if ( v83 )
        {
          *(_QWORD *)&v79[v81 + 24] = 0;
          j__free(v83);
          v79 = (char *)v103;
        }
        ++v82;
        v81 += 120;
      }
      while ( v80 != v82 );
    }
    *(_QWORD *)&v104 = 0;
    j__free(v79);
  }
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    j__free(v92);
  }
LABEL_67:
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    j__free(v117);
  }
  if ( v88 )
  {
    *(_QWORD *)&v89 = 0;
    j__free(v88);
  }
  return v47;
}
// 4659C8: variable 'a11' is possibly undefined
// 4659C8: variable 'a12' is possibly undefined
// 4659E6: variable 'v20' is possibly undefined
// 4659E6: variable 'v21' is possibly undefined
// 465A1F: variable 'v22' is possibly undefined
// 465A1F: variable 'v23' is possibly undefined
// 465A1F: variable 'v24' is possibly undefined
// 465A1F: variable 'v25' is possibly undefined
// 465A1F: variable 'v26' is possibly undefined
// 465A1F: variable 'v27' is possibly undefined
// 465A8A: variable 'v29' is possibly undefined
// 465A8A: variable 'v30' is possibly undefined
// 465A8A: variable 'v31' is possibly undefined
// 465A8A: variable 'v32' is possibly undefined
// 465A8A: variable 'v33' is possibly undefined
// 465A8A: variable 'v34' is possibly undefined
// 465A8A: variable 'v84' is possibly undefined
// 4C3450: using guessed type _UNKNOWN *off_4C3450;
// 4C3740: using guessed type _UNKNOWN *off_4C3740;
// 4C3800: using guessed type _UNKNOWN *off_4C3800;
// 4C8320: using guessed type __int64 qword_4C8320;
// 4C94E1: using guessed type char byte_4C94E1;
