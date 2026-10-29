__int64 __fastcall sub_3A620(
        __int64 *a1,
        __int64 a2,
        const char *a3,
        unsigned int a4,
        const char *a5,
        int a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        char *a15,
        __int64 a16)
{
  __m128i v16; // xmm2
  unsigned __int64 v17; // xmm1_8
  const char *v18; // r15
  char *v20; // r14
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  const char *v24; // rax
  __m128i v25; // xmm1
  __m128 v26; // xmm3
  __m128i v27; // xmm1
  char *v28; // rax
  __m128 si128; // xmm1
  char *v30; // r15
  int v31; // eax
  unsigned int v32; // r15d
  const char *v33; // rdx
  unsigned int v34; // ecx
  __m128 v35; // xmm0
  const char *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  const char *v42; // rsi
  const char *v43; // rdx
  int v45; // esi
  int v46; // eax
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  const char *v50; // r13
  const char *v51; // r15
  __int64 v52; // rax
  int v53; // eax
  const char *v54; // rdi
  const char *v55; // rax
  const char *v56; // rdi
  const char *v57; // rax
  int v58; // eax
  const char *v59; // r9
  const char *v60; // r8
  unsigned int v61; // r12d
  const char *v62; // rdx
  const char *v63; // rsi
  __int32 v64; // eax
  const char *v65; // rdx
  const char *v66; // rsi
  const char *v67; // rdi
  const char *v68; // rsi
  const char *v69; // rdi
  char v70; // [rsp-260h] [rbp-268h]
  __m128i v71; // [rsp-250h] [rbp-258h] BYREF
  const char *v72; // [rsp-240h] [rbp-248h]
  unsigned __int64 v73; // [rsp-238h] [rbp-240h]
  const char *v74; // [rsp-230h] [rbp-238h]
  const char *v75; // [rsp-228h] [rbp-230h]
  __m128 v76; // [rsp-220h] [rbp-228h] BYREF
  char *v77; // [rsp-210h] [rbp-218h] BYREF
  __int128 v78; // [rsp-208h] [rbp-210h]
  char *v79; // [rsp-1F0h] [rbp-1F8h] BYREF
  __int64 v80; // [rsp-1E8h] [rbp-1F0h]
  char *v81; // [rsp-1D0h] [rbp-1D8h] BYREF
  __m128i v82; // [rsp-1C8h] [rbp-1D0h] BYREF
  __m128 v83; // [rsp-1B0h] [rbp-1B8h] BYREF
  __m128 v84; // [rsp-1A0h] [rbp-1A8h] BYREF
  __int64 v85; // [rsp-190h] [rbp-198h] BYREF
  __int64 v86; // [rsp-188h] [rbp-190h]
  const char *v87; // [rsp-180h] [rbp-188h]
  char *v88; // [rsp-178h] [rbp-180h]
  __m128i v89; // [rsp-170h] [rbp-178h]
  char *v90; // [rsp-160h] [rbp-168h]
  __int128 v91; // [rsp-158h] [rbp-160h]
  void *v92; // [rsp-148h] [rbp-150h] BYREF
  __int128 v93; // [rsp-140h] [rbp-148h]
  __m128i v94; // [rsp-130h] [rbp-138h] BYREF
  __int64 v95; // [rsp-120h] [rbp-128h]
  __int64 v96; // [rsp-118h] [rbp-120h]
  __int128 v97; // [rsp-110h] [rbp-118h]
  char v98; // [rsp-100h] [rbp-108h]
  unsigned __int64 v99; // [rsp-F8h] [rbp-100h]
  __int16 v100; // [rsp-F0h] [rbp-F8h]
  __int64 v101; // [rsp-E0h] [rbp-E8h] BYREF
  __int64 v102; // [rsp-D8h] [rbp-E0h]
  const char *v103; // [rsp-D0h] [rbp-D8h]
  char *v104; // [rsp-C8h] [rbp-D0h]
  __m128 v105; // [rsp-C0h] [rbp-C8h]
  char *v106; // [rsp-B0h] [rbp-B8h]
  __int128 v107; // [rsp-A8h] [rbp-B0h]
  void *v108; // [rsp-98h] [rbp-A0h] BYREF
  __int128 v109; // [rsp-90h] [rbp-98h]
  __m128i v110; // [rsp-80h] [rbp-88h] BYREF
  __int64 v111; // [rsp-70h] [rbp-78h]
  __int64 v112; // [rsp-68h] [rbp-70h]
  __int128 v113; // [rsp-60h] [rbp-68h]
  char v114; // [rsp-50h] [rbp-58h]
  __int64 v115; // [rsp-48h] [rbp-50h]
  __int16 v116; // [rsp-40h] [rbp-48h]
  unsigned __int64 v117; // [rsp-38h] [rbp-40h]
  __int64 v118; // [rsp+0h] [rbp-8h] BYREF

  v16 = _mm_cvtsi32_si128(a4);
  v17 = _mm_shuffle_epi32(v16, 224).m128i_u64[0];
  v18 = a5;
  v76.m128_u64[0] = (unsigned __int64)a1;
  LODWORD(v74) = a4;
  v20 = a15;
  LODWORD(v75) = a6;
  v117 = __readfsqword(0x28u);
  v78 = 0;
  v77 = nullptr;
  if ( !a15 )
  {
    v52 = *a1;
    v72 = a3;
    v73 = v17;
    (*(void (__fastcall **)(__int64 *, char **))(v52 + 440))(a1, &v77);
    a3 = v72;
    v20 = (char *)haystack;
    if ( (_QWORD)v78 )
      v20 = v77;
  }
  v89 = 0;
  if ( !v18 )
    v18 = a3;
  v91 = 0;
  v93 = 0;
  v85 = v76.m128_u64[0];
  v94 = 0;
  v86 = a2;
  v87 = a3;
  v88 = nullptr;
  v90 = nullptr;
  v92 = nullptr;
  v95 = 0;
  v96 = 0;
  v98 = 0;
  v100 = 0;
  v97 = 0;
  v99 = v17;
  sub_64590((unsigned int)&v81, a2 + 32, (_DWORD)a3, a4, (_DWORD)a5, a6);
  v24 = v81;
  v25 = _mm_loadu_si128(&v82);
  v81 = nullptr;
  v26 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)v75), 224);
  v82 = 0;
  v73 = v26.m128_u64[0];
  if ( v88 )
  {
    v72 = v24;
    v71 = v25;
    v89.m128i_i64[0] = 0;
    j__free(v88);
    v27 = _mm_load_si128(&v71);
    v88 = (char *)v72;
    v89 = v27;
    if ( v81 )
    {
      v82.m128i_i64[0] = 0;
      j__free(v81);
    }
  }
  else
  {
    v88 = (char *)v24;
    v89 = v25;
  }
  v114 = 0;
  v101 = v76.m128_u64[0];
  v105 = 0;
  v107 = 0;
  v109 = 0;
  v115 = v73;
  v110 = 0;
  v102 = a2;
  v103 = v18;
  v104 = nullptr;
  v106 = nullptr;
  v108 = nullptr;
  v111 = 0;
  v112 = 0;
  v116 = 0;
  v113 = 0;
  sub_64590((unsigned int)&v118 - 464, a2 + 32, (_DWORD)v18, v21, v22, v23);
  v28 = v81;
  v81 = nullptr;
  si128 = (__m128)_mm_loadu_si128(&v82);
  v82 = 0;
  v30 = v28;
  if ( v104 )
  {
    v76 = si128;
    v105.m128_u64[0] = 0;
    j__free(v104);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v76);
    v104 = v30;
    v105 = si128;
    if ( v81 )
    {
      v82.m128i_i64[0] = 0;
      j__free(v81);
    }
  }
  else
  {
    v104 = v28;
    v105 = si128;
  }
  v31 = HIDWORD(v99);
  v32 = v99;
  if ( (_DWORD)v99 != -4 )
  {
    v33 = v87;
    if ( HIDWORD(v115) == HIDWORD(v99) )
    {
      v45 = (int)v103;
      v76.m128_u64[0] = (unsigned __int64)v87;
      v46 = strcmp(v87, v103);
      v33 = (const char *)v76.m128_u64[0];
      if ( !v46 )
        goto LABEL_54;
    }
    v76.m128_i32[0] = sub_388E0((__int64)&v92, v85, v33, v32, 2 * (unsigned int)(v32 == -1));
    if ( v76.m128_i32[0] )
      goto LABEL_38;
    v31 = v99;
    LOBYTE(v100) = 1;
    if ( (_DWORD)v99 == -3 )
    {
      v31 = DWORD1(v97);
    }
    else if ( (_DWORD)v99 == -1 )
    {
      v31 = DWORD2(v97);
    }
    HIDWORD(v99) = v31;
  }
  if ( HIDWORD(v115) == v31 )
  {
    v50 = v87;
    v45 = (int)v103;
    v76.m128_u64[0] = (unsigned __int64)v103;
    v51 = v103;
    if ( !strcmp(v87, v103) )
      goto LABEL_54;
    if ( (_DWORD)v115 == -4 )
    {
LABEL_72:
      v45 = (int)v50;
      if ( strcmp(v51, v50) )
        goto LABEL_19;
LABEL_54:
      sub_708D0((unsigned int)"cowardly refusing to compare a file against itself\n", v45, (_DWORD)v33, v47, v48, v49);
LABEL_55:
      v76.m128_i32[0] = 0;
      goto LABEL_38;
    }
    v45 = (int)v50;
    LODWORD(v73) = v115;
    if ( !strcmp((const char *)v76.m128_u64[0], v50) )
      goto LABEL_54;
    v34 = v73;
  }
  else
  {
    v34 = v115;
    if ( (_DWORD)v115 == -4 )
      goto LABEL_19;
    v76.m128_u64[0] = (unsigned __int64)v103;
  }
  v76.m128_i32[0] = sub_388E0((__int64)&v108, v101, (const char *)v76.m128_u64[0], v34, 2 * (unsigned int)(v34 == -1));
  if ( v76.m128_i32[0] )
    goto LABEL_38;
  v53 = v115;
  LOBYTE(v116) = 1;
  if ( (_DWORD)v115 == -3 )
  {
    v53 = DWORD1(v113);
  }
  else if ( (_DWORD)v115 == -1 )
  {
    v53 = DWORD2(v113);
  }
  HIDWORD(v115) = v53;
  if ( v53 == HIDWORD(v99) )
  {
    v50 = v87;
    v51 = v103;
    goto LABEL_72;
  }
LABEL_19:
  v35 = 0;
  v83 = 0;
  v84 = 0;
  if ( (_DWORD)v99 == -4 )
  {
    v43 = haystack;
    if ( v89.m128i_i64[0] )
      v43 = v88;
    if ( (unsigned int)sub_64910(*(_QWORD *)(v86 + 56), &v83, v43, 0, 0) )
      goto LABEL_37;
  }
  else
  {
    if ( !(_BYTE)v100 )
      goto LABEL_37;
    v35 = (__m128)_mm_load_si128(&v94);
    v83 = v35;
  }
  if ( (_DWORD)v115 == -4 )
  {
    v65 = haystack;
    if ( v105.m128_u64[0] )
      v65 = v104;
    if ( (unsigned int)sub_64910(*(_QWORD *)(v102 + 56), &v84, v65, 0, 0) )
      goto LABEL_37;
  }
  else
  {
    if ( !(_BYTE)v116 )
      goto LABEL_37;
    v35 = (__m128)_mm_load_si128(&v110);
    v84 = v35;
  }
  if ( *(_OWORD *)&v84 - *(_OWORD *)&v83 == 0 )
  {
    sub_38640((__int64)&v81, (__int64)&v101);
    v36 = haystack;
    if ( v82.m128i_i64[0] )
      v36 = v81;
    sub_38640((__int64)&v79, (__int64)&v85);
    v42 = haystack;
    if ( v80 )
      v42 = v79;
    sub_16B60(
      (int)"files %s and %s are identical\n",
      (__int64)v42,
      (__int64)v36,
      v37,
      v38,
      v39,
      v35,
      si128,
      (__m128)v16,
      v26,
      v40,
      v41,
      a13,
      a14,
      v70);
    if ( v79 )
    {
      v80 = 0;
      j__free(v79);
    }
    if ( v81 )
    {
      v82.m128i_i64[0] = 0;
      j__free(v81);
    }
    goto LABEL_55;
  }
LABEL_37:
  v76.m128_i32[0] = sub_3A040(&v85, (int)v75, 1);
  if ( v76.m128_i32[0] )
    goto LABEL_38;
  v76.m128_i32[0] = sub_3A040(&v101, (int)v74, 0);
  if ( v76.m128_i32[0] )
    goto LABEL_38;
  if ( !a16 )
    goto LABEL_80;
  (**(void (__fastcall ***)(void **))a16)((void **)&v81);
  if ( (_DWORD)v99 != -4 )
    goto LABEL_77;
  if ( (_QWORD)v91 )
  {
    v66 = v90;
    v67 = haystack;
    if ( !v82.m128i_i64[0] )
      goto LABEL_113;
  }
  else
  {
    v66 = haystack;
    if ( !v82.m128i_i64[0] )
      goto LABEL_114;
  }
  v67 = v81;
LABEL_113:
  if ( !strcmp(v67, v66) )
    goto LABEL_114;
LABEL_77:
  if ( (_DWORD)v115 != -4 )
    goto LABEL_78;
  if ( (_QWORD)v107 )
  {
    v68 = v106;
    v69 = haystack;
    if ( !v82.m128i_i64[0] )
      goto LABEL_121;
  }
  else
  {
    v68 = haystack;
    if ( !v82.m128i_i64[0] )
      goto LABEL_114;
  }
  v69 = v81;
LABEL_121:
  if ( strcmp(v69, v68) )
  {
LABEL_78:
    if ( v81 )
    {
      v82.m128i_i64[0] = 0;
      j__free(v81);
    }
LABEL_80:
    v54 = haystack;
    v76.m128_u64[0] = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    if ( v89.m128i_i64[0] )
      v54 = v88;
    v55 = (const char *)sub_910F0(v54);
    if ( !v55 )
      goto LABEL_109;
    v75 = v55;
    if ( strcasecmp(v55, "idb") )
    {
      if ( strcasecmp(v75, "i64") )
        goto LABEL_109;
    }
    v56 = haystack;
    if ( v105.m128_u64[0] )
      v56 = v104;
    v57 = (const char *)sub_910F0(v56);
    if ( v57 )
    {
      v75 = v57;
      v58 = strcasecmp(v57, "idb");
      LODWORD(v72) = 1;
      if ( v58 )
        LODWORD(v72) = strcasecmp(v75, "i64") == 0;
    }
    else
    {
LABEL_109:
      LODWORD(v72) = 0;
    }
    LODWORD(v75) = HIBYTE(v116);
    sub_38640((__int64)&v81, (__int64)&v101);
    v59 = haystack;
    if ( v82.m128i_i64[0] )
      v59 = v81;
    v60 = haystack;
    if ( (_QWORD)v107 )
      v60 = v106;
    v73 = (unsigned __int64)v59;
    v61 = HIBYTE(v100);
    v74 = v60;
    sub_38640((__int64)&v79, (__int64)&v85);
    v62 = haystack;
    if ( v80 )
      v62 = v79;
    v63 = haystack;
    if ( (_QWORD)v91 )
      v63 = v90;
    if ( (__int64 (__fastcall *)(int, int, int, unsigned __int8, int, int, unsigned __int8, unsigned __int8))v76.m128_u64[0] == sub_17FC0 )
      v64 = sub_36440(a2, (__int64)v63, (__int64)v62, v61, (__int64)v74, v73, (char)v75, (char)v72, v20, a16);
    else
      v64 = ((__int64 (__fastcall *)(__int64, const char *, const char *, _QWORD, const char *, unsigned __int64, _QWORD, _QWORD, char *, __int64))v76.m128_u64[0])(
              a2,
              v63,
              v62,
              v61,
              v74,
              v73,
              (unsigned int)v75,
              (unsigned int)v72,
              v20,
              a16);
    v76.m128_i32[0] = v64;
    if ( v79 )
    {
      v80 = 0;
      j__free(v79);
    }
    if ( v81 )
    {
      v82.m128i_i64[0] = 0;
      j__free(v81);
    }
    goto LABEL_38;
  }
LABEL_114:
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a16 + 16LL))(a16) )
    goto LABEL_78;
  if ( v81 )
  {
    v82.m128i_i64[0] = 0;
    j__free(v81);
  }
  v76.m128_i32[0] = 1;
LABEL_38:
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    j__free(v108);
  }
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    j__free(v106);
  }
  if ( v104 )
  {
    v105.m128_u64[0] = 0;
    j__free(v104);
  }
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    j__free(v92);
  }
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    j__free(v90);
  }
  if ( v88 )
  {
    v89.m128i_i64[0] = 0;
    j__free(v88);
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    j__free(v77);
  }
  return v76.m128_u32[0];
}

