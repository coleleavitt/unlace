__int64 __fastcall sub_8B0470(
        __int64 *a1,
        __int64 a2,
        const char *a3,
        unsigned int a4,
        const char *a5,
        int a6,
        const char *a7,
        __int64 a8)
{
  unsigned __int64 v8; // xmm1_8
  const char *v9; // r15
  const char *v11; // r14
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  const char *v15; // rax
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  char *v18; // rax
  __m128i v19; // xmm1
  char *v20; // r15
  __m128i v21; // xmm1
  int v22; // eax
  unsigned int v23; // r15d
  const char *v24; // rdx
  unsigned int v25; // ecx
  const char *v26; // rdx
  int v28; // eax
  const char *v29; // r13
  const char *v30; // r15
  __int64 v31; // rax
  int v32; // eax
  const char *v33; // rdi
  const char *file_ext; // rax
  const char *v35; // rdi
  const char *v36; // rax
  int v37; // eax
  const char *v38; // r9
  const char *v39; // r8
  unsigned int v40; // r12d
  const char *v41; // rdx
  const char *v42; // rsi
  __int32 v43; // eax
  const char *v44; // rdx
  const char *v45; // rsi
  const char *v46; // rdi
  const char *v47; // rsi
  const char *v48; // rdi
  __m128i v49; // [rsp-250h] [rbp-258h] BYREF
  const char *v50; // [rsp-240h] [rbp-248h]
  unsigned __int64 v51; // [rsp-238h] [rbp-240h]
  const char *v52; // [rsp-230h] [rbp-238h]
  const char *v53; // [rsp-228h] [rbp-230h]
  __m128i v54; // [rsp-220h] [rbp-228h] BYREF
  char *v55; // [rsp-210h] [rbp-218h] BYREF
  __int128 v56; // [rsp-208h] [rbp-210h]
  char *v57; // [rsp-1F0h] [rbp-1F8h] BYREF
  __int64 v58; // [rsp-1E8h] [rbp-1F0h]
  char *v59; // [rsp-1D0h] [rbp-1D8h] BYREF
  __m128i v60; // [rsp-1C8h] [rbp-1D0h] BYREF
  __m128i v61; // [rsp-1B0h] [rbp-1B8h] BYREF
  __m128i v62; // [rsp-1A0h] [rbp-1A8h] BYREF
  __int64 v63; // [rsp-190h] [rbp-198h] BYREF
  __int64 v64; // [rsp-188h] [rbp-190h]
  const char *v65; // [rsp-180h] [rbp-188h]
  char *v66; // [rsp-178h] [rbp-180h]
  __m128i v67; // [rsp-170h] [rbp-178h]
  char *v68; // [rsp-160h] [rbp-168h]
  __int128 v69; // [rsp-158h] [rbp-160h]
  void *v70; // [rsp-148h] [rbp-150h] BYREF
  __int128 v71; // [rsp-140h] [rbp-148h]
  __m128i v72; // [rsp-130h] [rbp-138h] BYREF
  __int64 v73; // [rsp-120h] [rbp-128h]
  __int64 v74; // [rsp-118h] [rbp-120h]
  __int128 v75; // [rsp-110h] [rbp-118h]
  char v76; // [rsp-100h] [rbp-108h]
  unsigned __int64 v77; // [rsp-F8h] [rbp-100h]
  __int16 v78; // [rsp-F0h] [rbp-F8h]
  __int64 v79; // [rsp-E0h] [rbp-E8h] BYREF
  __int64 v80; // [rsp-D8h] [rbp-E0h]
  const char *v81; // [rsp-D0h] [rbp-D8h]
  char *v82; // [rsp-C8h] [rbp-D0h]
  __m128i v83; // [rsp-C0h] [rbp-C8h]
  char *v84; // [rsp-B0h] [rbp-B8h]
  __int128 v85; // [rsp-A8h] [rbp-B0h]
  void *v86; // [rsp-98h] [rbp-A0h] BYREF
  __int128 v87; // [rsp-90h] [rbp-98h]
  __m128i v88; // [rsp-80h] [rbp-88h] BYREF
  __int64 v89; // [rsp-70h] [rbp-78h]
  __int64 v90; // [rsp-68h] [rbp-70h]
  __int128 v91; // [rsp-60h] [rbp-68h]
  char v92; // [rsp-50h] [rbp-58h]
  unsigned __int64 v93; // [rsp-48h] [rbp-50h]
  __int16 v94; // [rsp-40h] [rbp-48h]
  unsigned __int64 v95; // [rsp-38h] [rbp-40h]
  __int64 v96; // [rsp+0h] [rbp-8h] BYREF

  v8 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 224).m128i_u64[0];
  v9 = a5;
  v54.m128i_i64[0] = (__int64)a1;
  LODWORD(v52) = a4;
  v11 = a7;
  LODWORD(v53) = a6;
  v95 = __readfsqword(0x28u);
  v56 = 0;
  v55 = nullptr;
  if ( !a7 )
  {
    v31 = *a1;
    v50 = a3;
    v51 = v8;
    (*(void (__fastcall **)(__int64 *, char **))(v31 + 440))(a1, &v55);
    a3 = v50;
    v11 = haystack;
    if ( (_QWORD)v56 )
      v11 = v55;
  }
  v67 = 0;
  if ( !v9 )
    v9 = a3;
  v69 = 0;
  v71 = 0;
  v63 = v54.m128i_i64[0];
  v72 = 0;
  v64 = a2;
  v65 = a3;
  v66 = nullptr;
  v68 = nullptr;
  v70 = nullptr;
  v73 = 0;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v75 = 0;
  v77 = v8;
  sub_8DA120((unsigned int)&v59, a2 + 32, (_DWORD)a3, a4, (_DWORD)a5, a6);
  v15 = v59;
  v16 = _mm_loadu_si128(&v60);
  v59 = nullptr;
  v60 = 0;
  v51 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)v53), 224).m128i_u64[0];
  if ( v66 )
  {
    v50 = v15;
    v49 = v16;
    v67.m128i_i64[0] = 0;
    qfree(v66);
    v17 = _mm_load_si128(&v49);
    v66 = (char *)v50;
    v67 = v17;
    if ( v59 )
    {
      v60.m128i_i64[0] = 0;
      qfree(v59);
    }
  }
  else
  {
    v66 = (char *)v15;
    v67 = v16;
  }
  v92 = 0;
  v79 = v54.m128i_i64[0];
  v83 = 0;
  v85 = 0;
  v87 = 0;
  v93 = v51;
  v88 = 0;
  v80 = a2;
  v81 = v9;
  v82 = nullptr;
  v84 = nullptr;
  v86 = nullptr;
  v89 = 0;
  v90 = 0;
  v94 = 0;
  v91 = 0;
  sub_8DA120((unsigned int)&v96 - 464, a2 + 32, (_DWORD)v9, v12, v13, v14);
  v18 = v59;
  v59 = nullptr;
  v19 = _mm_loadu_si128(&v60);
  v60 = 0;
  v20 = v18;
  if ( v82 )
  {
    v54 = v19;
    v83.m128i_i64[0] = 0;
    qfree(v82);
    v21 = _mm_load_si128(&v54);
    v82 = v20;
    v83 = v21;
    if ( v59 )
    {
      v60.m128i_i64[0] = 0;
      qfree(v59);
    }
  }
  else
  {
    v82 = v18;
    v83 = v19;
  }
  v22 = HIDWORD(v77);
  v23 = v77;
  if ( (_DWORD)v77 != -4 )
  {
    v24 = v65;
    if ( HIDWORD(v93) == HIDWORD(v77) )
    {
      v54.m128i_i64[0] = (__int64)v65;
      v28 = strcmp(v65, v81);
      v24 = (const char *)v54.m128i_i64[0];
      if ( !v28 )
        goto LABEL_47;
    }
    v54.m128i_i32[0] = sub_8AE730((__int64)&v70, v63, v24, v23, 2 * (unsigned int)(v23 == -1));
    if ( v54.m128i_i32[0] )
      goto LABEL_31;
    v22 = v77;
    LOBYTE(v78) = 1;
    if ( (_DWORD)v77 == -3 )
    {
      v22 = DWORD1(v75);
    }
    else if ( (_DWORD)v77 == -1 )
    {
      v22 = DWORD2(v75);
    }
    HIDWORD(v77) = v22;
  }
  if ( HIDWORD(v93) == v22 )
  {
    v29 = v65;
    v54.m128i_i64[0] = (__int64)v81;
    v30 = v81;
    if ( !strcmp(v65, v81) )
      goto LABEL_47;
    if ( (_DWORD)v93 == -4 )
    {
LABEL_64:
      if ( strcmp(v30, v29) )
        goto LABEL_19;
LABEL_47:
      sub_7A4810();
      v54.m128i_i32[0] = 0;
      goto LABEL_31;
    }
    LODWORD(v51) = v93;
    if ( !strcmp((const char *)v54.m128i_i64[0], v29) )
      goto LABEL_47;
    v25 = v51;
  }
  else
  {
    v25 = v93;
    if ( (_DWORD)v93 == -4 )
      goto LABEL_19;
    v54.m128i_i64[0] = (__int64)v81;
  }
  v54.m128i_i32[0] = sub_8AE730((__int64)&v86, v79, (const char *)v54.m128i_i64[0], v25, 2 * (unsigned int)(v25 == -1));
  if ( v54.m128i_i32[0] )
    goto LABEL_31;
  v32 = v93;
  LOBYTE(v94) = 1;
  if ( (_DWORD)v93 == -3 )
  {
    v32 = DWORD1(v91);
  }
  else if ( (_DWORD)v93 == -1 )
  {
    v32 = DWORD2(v91);
  }
  HIDWORD(v93) = v32;
  if ( v32 == HIDWORD(v77) )
  {
    v29 = v65;
    v30 = v81;
    goto LABEL_64;
  }
LABEL_19:
  v61 = 0;
  v62 = 0;
  if ( (_DWORD)v77 == -4 )
  {
    v26 = haystack;
    if ( v67.m128i_i64[0] )
      v26 = v66;
    if ( (unsigned int)sub_8DA4A0(*(_QWORD *)(v64 + 56), &v61, v26, 0, 0) )
      goto LABEL_30;
  }
  else
  {
    if ( !(_BYTE)v78 )
      goto LABEL_30;
    v61 = _mm_load_si128(&v72);
  }
  if ( (_DWORD)v93 != -4 )
  {
    if ( !(_BYTE)v94 )
      goto LABEL_30;
    v62 = _mm_load_si128(&v88);
    goto LABEL_25;
  }
  v44 = haystack;
  if ( v83.m128i_i64[0] )
    v44 = v82;
  if ( !(unsigned int)sub_8DA4A0(*(_QWORD *)(v80 + 56), &v62, v44, 0, 0) )
  {
LABEL_25:
    if ( *(_OWORD *)&v62 - *(_OWORD *)&v61 == 0 )
    {
      sub_8AE490((__int64)&v59, (__int64)&v79);
      sub_8AE490((__int64)&v57, (__int64)&v63);
      sub_365330();
    }
  }
LABEL_30:
  v54.m128i_i32[0] = sub_8AFE90(&v63, (int)v53, 1);
  if ( v54.m128i_i32[0] )
    goto LABEL_31;
  v54.m128i_i32[0] = sub_8AFE90(&v79, (int)v52, 0);
  if ( v54.m128i_i32[0] )
    goto LABEL_31;
  if ( !a8 )
    goto LABEL_72;
  (**(void (__fastcall ***)(void **))a8)((void **)&v59);
  if ( (_DWORD)v77 != -4 )
    goto LABEL_69;
  if ( (_QWORD)v69 )
  {
    v45 = v68;
    v46 = haystack;
    if ( !v60.m128i_i64[0] )
      goto LABEL_105;
  }
  else
  {
    v45 = haystack;
    if ( !v60.m128i_i64[0] )
      goto LABEL_106;
  }
  v46 = v59;
LABEL_105:
  if ( !strcmp(v46, v45) )
    goto LABEL_106;
LABEL_69:
  if ( (_DWORD)v93 != -4 )
    goto LABEL_70;
  if ( (_QWORD)v85 )
  {
    v47 = v84;
    v48 = haystack;
    if ( !v60.m128i_i64[0] )
      goto LABEL_113;
  }
  else
  {
    v47 = haystack;
    if ( !v60.m128i_i64[0] )
      goto LABEL_106;
  }
  v48 = v59;
LABEL_113:
  if ( strcmp(v48, v47) )
  {
LABEL_70:
    if ( v59 )
    {
      v60.m128i_i64[0] = 0;
      qfree(v59);
    }
LABEL_72:
    v33 = haystack;
    v54.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    if ( v67.m128i_i64[0] )
      v33 = v66;
    file_ext = (const char *)get_file_ext(v33);
    if ( !file_ext )
      goto LABEL_101;
    v53 = file_ext;
    if ( strcasecmp(file_ext, "idb") )
    {
      if ( strcasecmp(v53, "i64") )
        goto LABEL_101;
    }
    v35 = haystack;
    if ( v83.m128i_i64[0] )
      v35 = v82;
    v36 = (const char *)get_file_ext(v35);
    if ( v36 )
    {
      v53 = v36;
      v37 = strcasecmp(v36, "idb");
      LODWORD(v50) = 1;
      if ( v37 )
        LODWORD(v50) = strcasecmp(v53, "i64") == 0;
    }
    else
    {
LABEL_101:
      LODWORD(v50) = 0;
    }
    LODWORD(v53) = HIBYTE(v94);
    sub_8AE490((__int64)&v59, (__int64)&v79);
    v38 = haystack;
    if ( v60.m128i_i64[0] )
      v38 = v59;
    v39 = haystack;
    if ( (_QWORD)v85 )
      v39 = v84;
    v51 = (unsigned __int64)v38;
    v40 = HIBYTE(v78);
    v52 = v39;
    sub_8AE490((__int64)&v57, (__int64)&v63);
    v41 = haystack;
    if ( v58 )
      v41 = v57;
    v42 = haystack;
    if ( (_QWORD)v69 )
      v42 = v68;
    if ( (__int64 (__fastcall *)(int, int, int, unsigned __int8, int, int, unsigned __int8, unsigned __int8))v54.m128i_i64[0] == sub_8AC1A0 )
      v43 = lsite_perform_diff(a2, (int)v42, (int)v41, v40, (int)v52, v51, (int)v53, (int)v50);
    else
      v43 = ((__int64 (__fastcall *)(__int64, const char *, const char *, _QWORD, const char *, unsigned __int64, _QWORD, _QWORD, const char *, __int64))v54.m128i_i64[0])(
              a2,
              v42,
              v41,
              v40,
              v52,
              v51,
              (unsigned int)v53,
              (unsigned int)v50,
              v11,
              a8);
    v54.m128i_i32[0] = v43;
    if ( v57 )
    {
      v58 = 0;
      qfree(v57);
    }
    if ( v59 )
    {
      v60.m128i_i64[0] = 0;
      qfree(v59);
    }
    goto LABEL_31;
  }
LABEL_106:
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a8 + 16LL))(a8) )
    goto LABEL_70;
  if ( v59 )
  {
    v60.m128i_i64[0] = 0;
    qfree(v59);
  }
  v54.m128i_i32[0] = 1;
LABEL_31:
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
  if ( v82 )
  {
    v83.m128i_i64[0] = 0;
    qfree(v82);
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v70);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  if ( v66 )
  {
    v67.m128i_i64[0] = 0;
    qfree(v66);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  return v54.m128i_u32[0];
}

