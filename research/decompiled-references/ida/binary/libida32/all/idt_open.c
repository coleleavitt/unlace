__int64 __fastcall idt_open(
        _QWORD *a1,
        void (__fastcall *a2)(_QWORD *, __int64, __int64 (__fastcall ***)()),
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  void *v15; // rdi
  const char *v16; // rax
  __int64 v17; // rcx
  char v18; // al
  char *v19; // r14
  int v20; // ebx
  int v21; // r13d
  __int64 *v22; // r14
  __int64 v23; // r15
  size_t v24; // rax
  void *v25; // r13
  size_t v26; // rbx
  void *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbx
  const char *v35; // rbx
  const char *file_ext; // rax
  const char *v37; // r14
  int v38; // r15d
  unsigned int v39; // r15d
  const char *v41; // rsi
  char *v42; // rax
  int v43; // r13d
  const char *v44; // rbx
  size_t v45; // rax
  size_t v46; // r14
  size_t v47; // r13
  const char *v48; // rdi
  void *v49; // r13
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  double v53; // xmm4_8
  double v54; // xmm5_8
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  double v58; // xmm4_8
  double v59; // xmm5_8
  __int64 v60; // rax
  const char *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  void *linput; // rbx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r14
  __int64 v69; // rax
  char v70; // [rsp+0h] [rbp-2240h]
  char v71; // [rsp+0h] [rbp-2240h]
  char v72; // [rsp+0h] [rbp-2240h]
  char *v74; // [rsp+10h] [rbp-2230h]
  char *v75; // [rsp+18h] [rbp-2228h]
  _BYTE *v76; // [rsp+20h] [rbp-2220h]
  char *s; // [rsp+28h] [rbp-2218h]
  int v78; // [rsp+30h] [rbp-2210h]
  int v79; // [rsp+34h] [rbp-220Ch]
  __int64 v80; // [rsp+38h] [rbp-2208h]
  __int64 v81; // [rsp+48h] [rbp-21F8h] BYREF
  void *v82; // [rsp+50h] [rbp-21F0h] BYREF
  __int128 v83; // [rsp+58h] [rbp-21E8h]
  void *v84; // [rsp+70h] [rbp-21D0h] BYREF
  __int128 v85; // [rsp+78h] [rbp-21C8h]
  void *v86; // [rsp+90h] [rbp-21B0h] BYREF
  __int128 v87; // [rsp+98h] [rbp-21A8h]
  void *ptr; // [rsp+B0h] [rbp-2190h] BYREF
  void *v89[2]; // [rsp+B8h] [rbp-2188h]
  void *v90[2]; // [rsp+C8h] [rbp-2178h]
  void *v91[2]; // [rsp+D8h] [rbp-2168h]
  void *v92; // [rsp+E8h] [rbp-2158h]
  int v93; // [rsp+F0h] [rbp-2150h]
  char v94; // [rsp+F4h] [rbp-214Ch]
  __int64 v95; // [rsp+F8h] [rbp-2148h]
  __int64 v96; // [rsp+100h] [rbp-2140h]
  void *v97; // [rsp+108h] [rbp-2138h]
  __int128 v98; // [rsp+110h] [rbp-2130h]
  void *v99; // [rsp+120h] [rbp-2120h]
  __int128 v100; // [rsp+128h] [rbp-2118h]
  char v101; // [rsp+138h] [rbp-2108h]
  __int64 (__fastcall **v102)(); // [rsp+140h] [rbp-2100h] BYREF
  void *v103[2]; // [rsp+148h] [rbp-20F8h]
  void *v104[2]; // [rsp+158h] [rbp-20E8h]
  void *v105[2]; // [rsp+168h] [rbp-20D8h]
  void *v106; // [rsp+178h] [rbp-20C8h]
  int v107; // [rsp+180h] [rbp-20C0h]
  char v108; // [rsp+184h] [rbp-20BCh]
  __int64 v109; // [rsp+185h] [rbp-20BBh]
  __int64 v110; // [rsp+190h] [rbp-20B0h]
  void *v111; // [rsp+198h] [rbp-20A8h]
  __int128 v112; // [rsp+1A0h] [rbp-20A0h]
  void *v113; // [rsp+1B0h] [rbp-2090h]
  __int128 v114; // [rsp+1B8h] [rbp-2088h]
  int v115; // [rsp+1C8h] [rbp-2078h]
  char *v116; // [rsp+1D0h] [rbp-2070h]
  __int64 v117; // [rsp+1D8h] [rbp-2068h]
  __m128i v118; // [rsp+1E0h] [rbp-2060h]
  int v119; // [rsp+1F0h] [rbp-2050h]
  int v120; // [rsp+1F8h] [rbp-2048h]
  char v121; // [rsp+1FCh] [rbp-2044h] BYREF
  char v122; // [rsp+5FCh] [rbp-1C44h] BYREF
  char v123; // [rsp+9FCh] [rbp-1844h] BYREF
  char v124[1024]; // [rsp+E00h] [rbp-1440h] BYREF
  _BYTE v125[4104]; // [rsp+1200h] [rbp-1040h] BYREF
  unsigned __int64 v126; // [rsp+2208h] [rbp-38h]

  v15 = (void *)a1[4];
  v126 = __readfsqword(0x28u);
  v81 = 0;
  if ( v15 )
  {
    qfree(v15);
    a1[4] = 0;
  }
  s = (char *)*a1;
  if ( *((_BYTE *)a1 + 40) )
  {
    v60 = qstrdup(*a1);
    a1[4] = v60;
    v35 = (const char *)v60;
    goto LABEL_36;
  }
  v76 = nullptr;
  v75 = (char *)a1[1];
  v16 = &byte_22CD811;
  if ( a1[2] )
    v16 = (const char *)a1[2];
  v74 = (char *)v16;
  if ( !*((_BYTE *)a1 + 42) )
    v76 = (char *)a1 + 41;
  v17 = *a1;
  v18 = *s;
  if ( *s )
  {
    v19 = (char *)*a1;
    while ( 1 )
    {
      v20 = v18;
      if ( (unsigned int)v18 <= 0x7F && isalpha(v18) && isupper(v20) )
        break;
      v18 = *++v19;
      if ( !*v19 )
        goto LABEL_26;
    }
    v21 = 1;
    if ( (_BYTE)byte_2CA23E8 )
      goto LABEL_14;
    goto LABEL_27;
  }
LABEL_26:
  v21 = 0;
  if ( !(_BYTE)byte_2CA23E8 )
  {
LABEL_27:
    if ( __cxa_guard_acquire(&byte_2CA23E8) )
    {
      v33 = operator new(0x58u);
      *(_QWORD *)(v33 + 8) = 0;
      v34 = v33;
      *(_QWORD *)(v33 + 32) = 0;
      *(_QWORD *)(v33 + 56) = 0;
      *(_OWORD *)(v33 + 16) = 0;
      *(_OWORD *)(v33 + 40) = 0;
      *(_OWORD *)(v33 + 64) = 0;
      *(_WORD *)(v33 + 80) = 0;
      *(_QWORD *)v33 = qmutex_create();
      get_ida_subdirs();
      qword_2CA23F0 = v34;
      __cxa_guard_release(&byte_2CA23E8);
    }
  }
LABEL_14:
  ptr = nullptr;
  v78 = v21 + 1;
  v22 = (__int64 *)qword_2CA23F0;
  *(_OWORD *)v89 = 0;
  if ( s )
  {
    v79 = 0;
    v23 = 1;
    goto LABEL_16;
  }
  v79 = 0;
  v27 = nullptr;
  v23 = 1;
  while ( 1 )
  {
    *((_BYTE *)a1 + 41) = 1;
    v81 = 0;
    v125[0] = 0;
    sub_5FF920((__int64)v125, (__int64)v27, (__int64)"idt", v17, a13, a14, v70);
    sub_603260(v22, (__int64)v125, 4096, (__int64)"idt", v76, &v81, v23);
    v28 = sub_6014B0((__int64)v22, (__int64)v124, 1024, v75, (int)v74, (int)v125);
    v32 = ptr;
    if ( v28
      || (*((_BYTE *)a1 + 41) = 1,
          v81 = 0,
          v125[0] = 0,
          sub_5FF920((__int64)v125, (__int64)v32, (__int64)"ids", v29, v30, v31, v71),
          sub_603260(v22, (__int64)v125, 4096, (__int64)"ids", v76, &v81, 0),
          v28 = sub_6014B0((__int64)v22, (__int64)v124, 1024, v75, (int)v74, (int)v125),
          v32 = ptr,
          v28) )
    {
      if ( v32 )
      {
        v80 = v28;
        v89[0] = nullptr;
        qfree(v32);
        v28 = v80;
      }
      goto LABEL_32;
    }
    if ( ptr )
    {
      v89[0] = nullptr;
      qfree(ptr);
    }
    if ( v79 + 1 >= v78 )
      break;
    v23 = 0;
    ptr = nullptr;
    v79 = 1;
    *(_OWORD *)v89 = 0;
    if ( s )
    {
LABEL_16:
      v24 = strlen(s);
      v25 = (void *)(v24 + 1);
      v26 = v24;
      ptr = (void *)qvector_reserve(&ptr, 0, v24 + 1, 1);
      v89[0] = v25;
      memmove(ptr, s, v26);
      *((_BYTE *)ptr + v26) = 0;
      v27 = ptr;
      if ( v79 )
        goto LABEL_24;
    }
    else
    {
      v27 = nullptr;
      v23 = 0;
LABEL_24:
      qstrlwr(v27);
      v79 = 1;
      v27 = ptr;
    }
  }
  sub_601430(v22);
  *((_BYTE *)a1 + 41) = 1;
  v125[0] = 0;
  v81 = 0;
  sub_5FF920((__int64)v125, (__int64)s, (__int64)"idt", v50, v51, v52, v70);
  sub_603260(v22, (__int64)v125, 4096, (__int64)"idt", v76, &v81, 0);
  v28 = (__int64)sub_601950((__int64)v22, v124, 1024, v75, v74, v125, 0.0, a4, a5, a6, v53, v54, a9, a10);
  if ( !v28 )
  {
    *((_BYTE *)a1 + 41) = 1;
    v81 = 0;
    v125[0] = 0;
    sub_5FF920((__int64)v125, (__int64)s, (__int64)"ids", v55, v56, v57, v72);
    sub_603260(v22, (__int64)v125, 4096, (__int64)"ids", v76, &v81, 0);
    v28 = (__int64)sub_601950((__int64)v22, v124, 1024, v75, v74, v125, 0.0, a4, a5, a6, v58, v59, a9, a10);
    if ( !v28 )
    {
      if ( (debug & 0x40) != 0 )
        sub_383DA0();
      return 1;
    }
  }
LABEL_32:
  a1[4] = qstrdup(v28);
  if ( (debug & 0x40) != 0 )
    sub_383DA0();
  if ( v81 )
    ((void (__fastcall *)(_QWORD *, _QWORD))a2)(a1, 0);
  v35 = (const char *)a1[4];
LABEL_36:
  file_ext = (const char *)get_file_ext(v35);
  v37 = file_ext;
  if ( !file_ext )
    return 6;
  if ( !strcasecmp(file_ext, "ids") )
  {
    v38 = 2;
  }
  else
  {
    v38 = 1;
    if ( strcasecmp(v37, "idt") )
      return 6;
  }
  v41 = (_BYTE *)(&qword_20 + 1);
  v42 = strchr(v35, 33);
  if ( !v42 )
  {
    v82 = nullptr;
    v83 = 0;
    goto LABEL_68;
  }
  v82 = nullptr;
  v43 = (_DWORD)v42 - (_DWORD)v35;
  v83 = 0;
  if ( (int)v42 - (int)v35 < 0 )
  {
LABEL_68:
    v62 = fopenRB(v35);
    linput = (void *)make_linput(v62);
    v68 = 0;
    goto LABEL_69;
  }
  v85 = 0;
  v84 = nullptr;
  if ( v43 )
  {
    v61 = v35;
    v84 = (void *)qvector_reserve(&v84, 0, v43 + 1LL, 1);
    *(_QWORD *)&v85 = v43 + 1LL;
    v44 = &v35[v85];
    memmove(v84, v61, v43);
    *((_BYTE *)v84 + v43) = 0;
    v86 = nullptr;
  }
  else
  {
    v86 = nullptr;
    v44 = v35 + 1;
  }
  v87 = 0;
  v45 = strlen(v44);
  v46 = v45 + 1;
  v47 = v45;
  v86 = (void *)qvector_reserve(&v86, 0, v45 + 1, 1);
  *(_QWORD *)&v87 = v46;
  memmove(v86, v44, v47);
  v48 = haystack;
  *((_BYTE *)v86 + v47) = 0;
  if ( (_QWORD)v85 )
    v48 = (const char *)v84;
  v49 = (void *)open_linput(v48, 0);
  if ( !v49 )
  {
    if ( v86 )
    {
      *(_QWORD *)&v87 = 0;
      qfree(v86);
    }
    if ( v84 )
    {
      *(_QWORD *)&v85 = 0;
      qfree(v84);
    }
LABEL_57:
    v39 = 1;
    goto LABEL_58;
  }
  ptr = nullptr;
  v41 = haystack;
  *(_OWORD *)v89 = 0;
  if ( (_QWORD)v87 )
    v41 = (const char *)v86;
  if ( (unsigned int)zip_extract_archive_entry(v49, v41, 0, 0, &v82, sub_5FFFC0, &ptr) )
    sub_365330();
  v68 = operator new(0x20u);
  *(_QWORD *)v68 = &off_2B088D8;
  v69 = v83;
  *(_QWORD *)(v68 + 24) = &v82;
  *(_DWORD *)(v68 + 16) = 1024;
  *(_QWORD *)(v68 + 8) = v69;
  linput = (void *)create_generic_linput(v68);
  if ( ptr )
  {
    v89[0] = nullptr;
    qfree(ptr);
  }
  close_linput(v49);
  if ( v86 )
  {
    *(_QWORD *)&v87 = 0;
    qfree(v86);
  }
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v84);
  }
LABEL_69:
  if ( !linput )
    goto LABEL_57;
  if ( v38 == 2 )
  {
    *(_OWORD *)v103 = 0;
    v102 = &off_2B08940;
    v116 = &v121;
    *(_OWORD *)v104 = 0;
    *(_OWORD *)v105 = 0;
    v112 = 0;
    v114 = 0;
    v106 = linput;
    v107 = 0;
    v108 = 1;
    v109 = 0;
    v110 = 0;
    v111 = nullptr;
    v113 = nullptr;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v120 = 0;
    v118 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v122, (__m128i)(unsigned __int64)&v123);
    if ( (unsigned int)sub_600970((__int64)&v102) )
    {
      v102 = &off_2B08940;
      if ( v113 )
      {
        *(_QWORD *)&v114 = 0;
        qfree(v113);
      }
      if ( v111 )
      {
        *(_QWORD *)&v112 = 0;
        qfree(v111);
      }
      v102 = (__int64 (__fastcall **)())&unk_2BD1430;
      if ( v108 )
      {
        qfree(v103[1]);
        qfree(v104[1]);
        qfree(v105[0]);
      }
      goto LABEL_99;
    }
    a2(a1, 1, &v102);
    v102 = &off_2B08940;
    if ( v113 )
    {
      *(_QWORD *)&v114 = 0;
      qfree(v113);
    }
    if ( v111 )
    {
      *(_QWORD *)&v112 = 0;
      qfree(v111);
    }
    v102 = (__int64 (__fastcall **)())&unk_2BD1430;
    if ( v108 )
    {
      qfree(v103[1]);
      qfree(v104[1]);
      qfree(v105[0]);
    }
LABEL_78:
    v39 = 0;
  }
  else
  {
    *(_OWORD *)v89 = 0;
    ptr = &off_2B08900;
    *(_OWORD *)v90 = 0;
    *(_OWORD *)v91 = 0;
    v92 = linput;
    v93 = 0;
    v95 = 0x100000000LL;
    v96 = v68;
    v97 = nullptr;
    v99 = nullptr;
    v101 = 0;
    v94 = 0;
    v98 = 0;
    v100 = 0;
    if ( !(unsigned int)sub_604B60((__int64)&ptr, (__int64)v41, v63, v64, v66, v67) )
    {
      a2(a1, 1, (__int64 (__fastcall ***)())&ptr);
      ptr = &off_2B08900;
      if ( v99 )
      {
        *(_QWORD *)&v100 = 0;
        qfree(v99);
      }
      if ( v97 )
      {
        *(_QWORD *)&v98 = 0;
        qfree(v97);
      }
      ptr = &unk_2BD1430;
      if ( v94 )
      {
        qfree(v89[1]);
        qfree(v90[1]);
        qfree(v91[0]);
      }
      goto LABEL_78;
    }
    ptr = &off_2B08900;
    if ( v99 )
    {
      *(_QWORD *)&v100 = 0;
      qfree(v99);
    }
    if ( v97 )
    {
      *(_QWORD *)&v98 = 0;
      qfree(v97);
    }
    ptr = &unk_2BD1430;
    if ( v94 )
    {
      qfree(v89[1]);
      qfree(v90[1]);
      qfree(v91[0]);
    }
LABEL_99:
    v39 = 2;
  }
  close_linput(linput);
LABEL_58:
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    qfree(v82);
  }
  return v39;
}

