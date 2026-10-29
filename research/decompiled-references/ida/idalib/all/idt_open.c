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
        double a10)
{
  void *v11; // rdi
  const char *v12; // rax
  char v13; // al
  char *v14; // r14
  int v15; // ebx
  int v16; // r13d
  __int64 *v17; // r14
  __int64 v18; // r15
  size_t v19; // rax
  void *v20; // r13
  size_t v21; // rbx
  void *v22; // rsi
  __int64 v23; // rax
  void *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  const char *v27; // rbx
  const char *file_ext; // rax
  const char *v29; // r14
  int v30; // r15d
  unsigned int v31; // r15d
  const char *v33; // rsi
  char *v34; // rax
  int v35; // r13d
  const char *v36; // rbx
  size_t v37; // rax
  size_t v38; // r14
  size_t v39; // r13
  const char *v40; // rdi
  void *v41; // r13
  double v42; // xmm4_8
  double v43; // xmm5_8
  double v44; // xmm4_8
  double v45; // xmm5_8
  __int64 v46; // rax
  const char *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  void *linput; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r14
  __int64 v55; // rax
  char *v57; // [rsp+10h] [rbp-2230h]
  char *v58; // [rsp+18h] [rbp-2228h]
  _BYTE *v59; // [rsp+20h] [rbp-2220h]
  char *s; // [rsp+28h] [rbp-2218h]
  int v61; // [rsp+30h] [rbp-2210h]
  int v62; // [rsp+34h] [rbp-220Ch]
  __int64 v63; // [rsp+38h] [rbp-2208h]
  __int64 v64; // [rsp+48h] [rbp-21F8h] BYREF
  void *v65; // [rsp+50h] [rbp-21F0h] BYREF
  __int128 v66; // [rsp+58h] [rbp-21E8h]
  void *v67; // [rsp+70h] [rbp-21D0h] BYREF
  __int128 v68; // [rsp+78h] [rbp-21C8h]
  void *v69; // [rsp+90h] [rbp-21B0h] BYREF
  __int128 v70; // [rsp+98h] [rbp-21A8h]
  void *ptr; // [rsp+B0h] [rbp-2190h] BYREF
  void *v72[2]; // [rsp+B8h] [rbp-2188h]
  void *v73[2]; // [rsp+C8h] [rbp-2178h]
  void *v74[2]; // [rsp+D8h] [rbp-2168h]
  void *v75; // [rsp+E8h] [rbp-2158h]
  int v76; // [rsp+F0h] [rbp-2150h]
  char v77; // [rsp+F4h] [rbp-214Ch]
  __int64 v78; // [rsp+F8h] [rbp-2148h]
  __int64 v79; // [rsp+100h] [rbp-2140h]
  void *v80; // [rsp+108h] [rbp-2138h]
  __int128 v81; // [rsp+110h] [rbp-2130h]
  void *v82; // [rsp+120h] [rbp-2120h]
  __int128 v83; // [rsp+128h] [rbp-2118h]
  char v84; // [rsp+138h] [rbp-2108h]
  __int64 (__fastcall **v85)(); // [rsp+140h] [rbp-2100h] BYREF
  void *v86[2]; // [rsp+148h] [rbp-20F8h]
  void *v87[2]; // [rsp+158h] [rbp-20E8h]
  void *v88[2]; // [rsp+168h] [rbp-20D8h]
  void *v89; // [rsp+178h] [rbp-20C8h]
  int v90; // [rsp+180h] [rbp-20C0h]
  char v91; // [rsp+184h] [rbp-20BCh]
  __int64 v92; // [rsp+185h] [rbp-20BBh]
  __int64 v93; // [rsp+190h] [rbp-20B0h]
  void *v94; // [rsp+198h] [rbp-20A8h]
  __int128 v95; // [rsp+1A0h] [rbp-20A0h]
  void *v96; // [rsp+1B0h] [rbp-2090h]
  __int128 v97; // [rsp+1B8h] [rbp-2088h]
  int v98; // [rsp+1C8h] [rbp-2078h]
  char *v99; // [rsp+1D0h] [rbp-2070h]
  __int64 v100; // [rsp+1D8h] [rbp-2068h]
  __m128i v101; // [rsp+1E0h] [rbp-2060h]
  int v102; // [rsp+1F0h] [rbp-2050h]
  int v103; // [rsp+1F8h] [rbp-2048h]
  char v104; // [rsp+1FCh] [rbp-2044h] BYREF
  char v105; // [rsp+5FCh] [rbp-1C44h] BYREF
  char v106; // [rsp+9FCh] [rbp-1844h] BYREF
  char v107[1024]; // [rsp+E00h] [rbp-1440h] BYREF
  _BYTE v108[4104]; // [rsp+1200h] [rbp-1040h] BYREF
  unsigned __int64 v109; // [rsp+2208h] [rbp-38h]

  v11 = (void *)a1[4];
  v109 = __readfsqword(0x28u);
  v64 = 0;
  if ( v11 )
  {
    qfree(v11);
    a1[4] = 0;
  }
  s = (char *)*a1;
  if ( *((_BYTE *)a1 + 40) )
  {
    v46 = qstrdup(*a1);
    a1[4] = v46;
    v27 = (const char *)v46;
    goto LABEL_36;
  }
  v59 = nullptr;
  v58 = (char *)a1[1];
  v12 = &byte_22F0C30;
  if ( a1[2] )
    v12 = (const char *)a1[2];
  v57 = (char *)v12;
  if ( !*((_BYTE *)a1 + 42) )
    v59 = (char *)a1 + 41;
  v13 = *s;
  if ( *s )
  {
    v14 = (char *)*a1;
    while ( 1 )
    {
      v15 = v13;
      if ( (unsigned int)v13 <= 0x7F && isalpha(v13) && isupper(v15) )
        break;
      v13 = *++v14;
      if ( !*v14 )
        goto LABEL_26;
    }
    v16 = 1;
    if ( (_BYTE)byte_2CCC2E8 )
      goto LABEL_14;
    goto LABEL_27;
  }
LABEL_26:
  v16 = 0;
  if ( !(_BYTE)byte_2CCC2E8 )
  {
LABEL_27:
    if ( __cxa_guard_acquire(&byte_2CCC2E8) )
    {
      v25 = operator new(0x58u);
      *(_QWORD *)(v25 + 8) = 0;
      v26 = v25;
      *(_QWORD *)(v25 + 32) = 0;
      *(_QWORD *)(v25 + 56) = 0;
      *(_OWORD *)(v25 + 16) = 0;
      *(_OWORD *)(v25 + 40) = 0;
      *(_OWORD *)(v25 + 64) = 0;
      *(_WORD *)(v25 + 80) = 0;
      *(_QWORD *)v25 = qmutex_create();
      get_ida_subdirs(v26 + 8, "ids", 0);
      qword_2CCC2F0 = v26;
      __cxa_guard_release(&byte_2CCC2E8);
    }
  }
LABEL_14:
  ptr = nullptr;
  v61 = v16 + 1;
  v17 = (__int64 *)qword_2CCC2F0;
  *(_OWORD *)v72 = 0;
  if ( s )
  {
    v62 = 0;
    v18 = 1;
    goto LABEL_16;
  }
  v62 = 0;
  v22 = nullptr;
  v18 = 1;
  while ( 1 )
  {
    *((_BYTE *)a1 + 41) = 1;
    v64 = 0;
    v108[0] = 0;
    sub_61BBB0((__int64)v108, (__int64)v22, (__int64)"idt");
    sub_61F520(v17, (__int64)v108, 4096, (__int64)"idt", v59, &v64, v18);
    v23 = sub_61D770((__int64)v17, (__int64)v107, 1024, v58, (int)v57, (int)v108);
    v24 = ptr;
    if ( v23
      || (*((_BYTE *)a1 + 41) = 1,
          v64 = 0,
          v108[0] = 0,
          sub_61BBB0((__int64)v108, (__int64)v24, (__int64)"ids"),
          sub_61F520(v17, (__int64)v108, 4096, (__int64)"ids", v59, &v64, 0),
          v23 = sub_61D770((__int64)v17, (__int64)v107, 1024, v58, (int)v57, (int)v108),
          v24 = ptr,
          v23) )
    {
      if ( v24 )
      {
        v63 = v23;
        v72[0] = nullptr;
        qfree(v24);
        v23 = v63;
      }
      goto LABEL_32;
    }
    if ( ptr )
    {
      v72[0] = nullptr;
      qfree(ptr);
    }
    if ( v62 + 1 >= v61 )
      break;
    v18 = 0;
    ptr = nullptr;
    v62 = 1;
    *(_OWORD *)v72 = 0;
    if ( s )
    {
LABEL_16:
      v19 = strlen(s);
      v20 = (void *)(v19 + 1);
      v21 = v19;
      ptr = (void *)qvector_reserve(&ptr, 0, v19 + 1, 1);
      v72[0] = v20;
      memmove(ptr, s, v21);
      *((_BYTE *)ptr + v21) = 0;
      v22 = ptr;
      if ( v62 )
        goto LABEL_24;
    }
    else
    {
      v22 = nullptr;
      v18 = 0;
LABEL_24:
      qstrlwr(v22);
      v62 = 1;
      v22 = ptr;
    }
  }
  sub_61D6F0(v17);
  *((_BYTE *)a1 + 41) = 1;
  v108[0] = 0;
  v64 = 0;
  sub_61BBB0((__int64)v108, (__int64)s, (__int64)"idt");
  sub_61F520(v17, (__int64)v108, 4096, (__int64)"idt", v59, &v64, 0);
  v23 = (__int64)sub_61DC10((__int64)v17, v107, 1024, v58, v57, v108, 0.0, a4, a5, a6, v42, v43, a9, a10);
  if ( !v23 )
  {
    *((_BYTE *)a1 + 41) = 1;
    v64 = 0;
    v108[0] = 0;
    sub_61BBB0((__int64)v108, (__int64)s, (__int64)"ids");
    sub_61F520(v17, (__int64)v108, 4096, (__int64)"ids", v59, &v64, 0);
    v23 = (__int64)sub_61DC10((__int64)v17, v107, 1024, v58, v57, v108, 0.0, a4, a5, a6, v44, v45, a9, a10);
    if ( !v23 )
    {
      if ( (debug & 0x40) != 0 )
        sub_3879F0();
      return 1;
    }
  }
LABEL_32:
  a1[4] = qstrdup(v23);
  if ( (debug & 0x40) != 0 )
    sub_3879F0();
  if ( v64 )
    ((void (__fastcall *)(_QWORD *, _QWORD))a2)(a1, 0);
  v27 = (const char *)a1[4];
LABEL_36:
  file_ext = (const char *)get_file_ext(v27);
  v29 = file_ext;
  if ( !file_ext )
    return 6;
  if ( !strcasecmp(file_ext, "ids") )
  {
    v30 = 2;
  }
  else
  {
    v30 = 1;
    if ( strcasecmp(v29, "idt") )
      return 6;
  }
  v33 = (_BYTE *)(&qword_20 + 1);
  v34 = strchr(v27, 33);
  if ( !v34 )
  {
    v65 = nullptr;
    v66 = 0;
    goto LABEL_68;
  }
  v65 = nullptr;
  v35 = (_DWORD)v34 - (_DWORD)v27;
  v66 = 0;
  if ( (int)v34 - (int)v27 < 0 )
  {
LABEL_68:
    v48 = fopenRB(v27);
    linput = (void *)make_linput(v48);
    v54 = 0;
    goto LABEL_69;
  }
  v68 = 0;
  v67 = nullptr;
  if ( v35 )
  {
    v47 = v27;
    v67 = (void *)qvector_reserve(&v67, 0, v35 + 1LL, 1);
    *(_QWORD *)&v68 = v35 + 1LL;
    v36 = &v27[v68];
    memmove(v67, v47, v35);
    *((_BYTE *)v67 + v35) = 0;
    v69 = nullptr;
  }
  else
  {
    v69 = nullptr;
    v36 = v27 + 1;
  }
  v70 = 0;
  v37 = strlen(v36);
  v38 = v37 + 1;
  v39 = v37;
  v69 = (void *)qvector_reserve(&v69, 0, v37 + 1, 1);
  *(_QWORD *)&v70 = v38;
  memmove(v69, v36, v39);
  v40 = haystack;
  *((_BYTE *)v69 + v39) = 0;
  if ( (_QWORD)v68 )
    v40 = (const char *)v67;
  v41 = (void *)open_linput(v40, 0);
  if ( !v41 )
  {
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      qfree(v69);
    }
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
LABEL_57:
    v31 = 1;
    goto LABEL_58;
  }
  ptr = nullptr;
  v33 = haystack;
  *(_OWORD *)v72 = 0;
  if ( (_QWORD)v70 )
    v33 = (const char *)v69;
  if ( (unsigned int)zip_extract_archive_entry(v41, v33, 0, 0, &v65, sub_61C280, &ptr) )
    sub_368890();
  v54 = operator new(0x20u);
  *(_QWORD *)v54 = &off_2B32898;
  v55 = v66;
  *(_QWORD *)(v54 + 24) = &v65;
  *(_DWORD *)(v54 + 16) = 1024;
  *(_QWORD *)(v54 + 8) = v55;
  linput = (void *)create_generic_linput(v54);
  if ( ptr )
  {
    v72[0] = nullptr;
    qfree(ptr);
  }
  close_linput(v41);
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
LABEL_69:
  if ( !linput )
    goto LABEL_57;
  if ( v30 == 2 )
  {
    *(_OWORD *)v86 = 0;
    v85 = &off_2B32900;
    v99 = &v104;
    *(_OWORD *)v87 = 0;
    *(_OWORD *)v88 = 0;
    v95 = 0;
    v97 = 0;
    v89 = linput;
    v90 = 0;
    v91 = 1;
    v92 = 0;
    v93 = 0;
    v94 = nullptr;
    v96 = nullptr;
    v98 = 0;
    v100 = 0;
    v102 = 0;
    v103 = 0;
    v101 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v105, (__m128i)(unsigned __int64)&v106);
    if ( (unsigned int)sub_61CC30((__int64)&v85) )
    {
      v85 = &off_2B32900;
      if ( v96 )
      {
        *(_QWORD *)&v97 = 0;
        qfree(v96);
      }
      if ( v94 )
      {
        *(_QWORD *)&v95 = 0;
        qfree(v94);
      }
      v85 = (__int64 (__fastcall **)())&unk_2BFB430;
      if ( v91 )
      {
        qfree(v86[1]);
        qfree(v87[1]);
        qfree(v88[0]);
      }
      goto LABEL_99;
    }
    a2(a1, 1, &v85);
    v85 = &off_2B32900;
    if ( v96 )
    {
      *(_QWORD *)&v97 = 0;
      qfree(v96);
    }
    if ( v94 )
    {
      *(_QWORD *)&v95 = 0;
      qfree(v94);
    }
    v85 = (__int64 (__fastcall **)())&unk_2BFB430;
    if ( v91 )
    {
      qfree(v86[1]);
      qfree(v87[1]);
      qfree(v88[0]);
    }
LABEL_78:
    v31 = 0;
  }
  else
  {
    *(_OWORD *)v72 = 0;
    ptr = &off_2B328C0;
    *(_OWORD *)v73 = 0;
    *(_OWORD *)v74 = 0;
    v75 = linput;
    v76 = 0;
    v78 = 0x100000000LL;
    v79 = v54;
    v80 = nullptr;
    v82 = nullptr;
    v84 = 0;
    v77 = 0;
    v81 = 0;
    v83 = 0;
    if ( !(unsigned int)sub_620E20((__int64)&ptr, (__int64)v33, v49, v50, v52, v53) )
    {
      a2(a1, 1, (__int64 (__fastcall ***)())&ptr);
      ptr = &off_2B328C0;
      if ( v82 )
      {
        *(_QWORD *)&v83 = 0;
        qfree(v82);
      }
      if ( v80 )
      {
        *(_QWORD *)&v81 = 0;
        qfree(v80);
      }
      ptr = &unk_2BFB430;
      if ( v77 )
      {
        qfree(v72[1]);
        qfree(v73[1]);
        qfree(v74[0]);
      }
      goto LABEL_78;
    }
    ptr = &off_2B328C0;
    if ( v82 )
    {
      *(_QWORD *)&v83 = 0;
      qfree(v82);
    }
    if ( v80 )
    {
      *(_QWORD *)&v81 = 0;
      qfree(v80);
    }
    ptr = &unk_2BFB430;
    if ( v77 )
    {
      qfree(v72[1]);
      qfree(v73[1]);
      qfree(v74[0]);
    }
LABEL_99:
    v31 = 2;
  }
  close_linput(linput);
LABEL_58:
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
  }
  return v31;
}
