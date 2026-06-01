__int64 __fastcall sub_8D41B0(
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
  const char *v28; // rsi
  int v29; // eax
  const char *v30; // r13
  const char *v31; // r15
  __int64 v32; // rax
  int v33; // eax
  const char *v34; // rdi
  const char *file_ext; // rax
  const char *v36; // rdi
  const char *v37; // rax
  int v38; // eax
  const char *v39; // r9
  const char *v40; // r8
  unsigned int v41; // r12d
  const char *v42; // rdx
  const char *v43; // rsi
  __int32 v44; // eax
  const char *v45; // rdx
  const char *v46; // rsi
  const char *v47; // rdi
  const char *v48; // rsi
  const char *v49; // rdi
  __m128i v50; // [rsp-250h] [rbp-258h] BYREF
  const char *v51; // [rsp-240h] [rbp-248h]
  unsigned __int64 v52; // [rsp-238h] [rbp-240h]
  const char *v53; // [rsp-230h] [rbp-238h]
  const char *v54; // [rsp-228h] [rbp-230h]
  __m128i v55; // [rsp-220h] [rbp-228h] BYREF
  char *v56; // [rsp-210h] [rbp-218h] BYREF
  __int128 v57; // [rsp-208h] [rbp-210h]
  char *v58; // [rsp-1F0h] [rbp-1F8h] BYREF
  __int64 v59; // [rsp-1E8h] [rbp-1F0h]
  char *v60; // [rsp-1D0h] [rbp-1D8h] BYREF
  __m128i v61; // [rsp-1C8h] [rbp-1D0h] BYREF
  __m128i v62; // [rsp-1B0h] [rbp-1B8h] BYREF
  __m128i v63; // [rsp-1A0h] [rbp-1A8h] BYREF
  __int64 v64; // [rsp-190h] [rbp-198h] BYREF
  __int64 v65; // [rsp-188h] [rbp-190h]
  const char *v66; // [rsp-180h] [rbp-188h]
  char *v67; // [rsp-178h] [rbp-180h]
  __m128i v68; // [rsp-170h] [rbp-178h]
  char *v69; // [rsp-160h] [rbp-168h]
  __int128 v70; // [rsp-158h] [rbp-160h]
  void *v71; // [rsp-148h] [rbp-150h] BYREF
  __int128 v72; // [rsp-140h] [rbp-148h]
  __m128i v73; // [rsp-130h] [rbp-138h] BYREF
  __int64 v74; // [rsp-120h] [rbp-128h]
  __int64 v75; // [rsp-118h] [rbp-120h]
  __int128 v76; // [rsp-110h] [rbp-118h]
  char v77; // [rsp-100h] [rbp-108h]
  unsigned __int64 v78; // [rsp-F8h] [rbp-100h]
  __int16 v79; // [rsp-F0h] [rbp-F8h]
  __int64 v80; // [rsp-E0h] [rbp-E8h] BYREF
  __int64 v81; // [rsp-D8h] [rbp-E0h]
  const char *v82; // [rsp-D0h] [rbp-D8h]
  char *v83; // [rsp-C8h] [rbp-D0h]
  __m128i v84; // [rsp-C0h] [rbp-C8h]
  char *v85; // [rsp-B0h] [rbp-B8h]
  __int128 v86; // [rsp-A8h] [rbp-B0h]
  void *v87; // [rsp-98h] [rbp-A0h] BYREF
  __int128 v88; // [rsp-90h] [rbp-98h]
  __m128i v89; // [rsp-80h] [rbp-88h] BYREF
  __int64 v90; // [rsp-70h] [rbp-78h]
  __int64 v91; // [rsp-68h] [rbp-70h]
  __int128 v92; // [rsp-60h] [rbp-68h]
  char v93; // [rsp-50h] [rbp-58h]
  __int64 v94; // [rsp-48h] [rbp-50h]
  __int16 v95; // [rsp-40h] [rbp-48h]
  unsigned __int64 v96; // [rsp-38h] [rbp-40h]
  __int64 v97; // [rsp+0h] [rbp-8h] BYREF

  v8 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 224).m128i_u64[0];
  v9 = a5;
  v55.m128i_i64[0] = (__int64)a1;
  LODWORD(v53) = a4;
  v11 = a7;
  LODWORD(v54) = a6;
  v96 = __readfsqword(0x28u);
  v57 = 0;
  v56 = nullptr;
  if ( !a7 )
  {
    v32 = *a1;
    v51 = a3;
    v52 = v8;
    (*(void (__fastcall **)(__int64 *, char **))(v32 + 440))(a1, &v56);
    a3 = v51;
    v11 = haystack;
    if ( (_QWORD)v57 )
      v11 = v56;
  }
  v68 = 0;
  if ( !v9 )
    v9 = a3;
  v70 = 0;
  v72 = 0;
  v64 = v55.m128i_i64[0];
  v73 = 0;
  v65 = a2;
  v66 = a3;
  v67 = nullptr;
  v69 = nullptr;
  v71 = nullptr;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v76 = 0;
  v78 = v8;
  sub_8FDE60((unsigned int)&v60, a2 + 32, (_DWORD)a3, a4, (_DWORD)a5, a6);
  v15 = v60;
  v16 = _mm_loadu_si128(&v61);
  v60 = nullptr;
  v61 = 0;
  v52 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)v54), 224).m128i_u64[0];
  if ( v67 )
  {
    v51 = v15;
    v50 = v16;
    v68.m128i_i64[0] = 0;
    qfree(v67);
    v17 = _mm_load_si128(&v50);
    v67 = (char *)v51;
    v68 = v17;
    if ( v60 )
    {
      v61.m128i_i64[0] = 0;
      qfree(v60);
    }
  }
  else
  {
    v67 = (char *)v15;
    v68 = v16;
  }
  v93 = 0;
  v80 = v55.m128i_i64[0];
  v84 = 0;
  v86 = 0;
  v88 = 0;
  v94 = v52;
  v89 = 0;
  v81 = a2;
  v82 = v9;
  v83 = nullptr;
  v85 = nullptr;
  v87 = nullptr;
  v90 = 0;
  v91 = 0;
  v95 = 0;
  v92 = 0;
  sub_8FDE60((unsigned int)&v97 - 464, a2 + 32, (_DWORD)v9, v12, v13, v14);
  v18 = v60;
  v60 = nullptr;
  v19 = _mm_loadu_si128(&v61);
  v61 = 0;
  v20 = v18;
  if ( v83 )
  {
    v55 = v19;
    v84.m128i_i64[0] = 0;
    qfree(v83);
    v21 = _mm_load_si128(&v55);
    v83 = v20;
    v84 = v21;
    if ( v60 )
    {
      v61.m128i_i64[0] = 0;
      qfree(v60);
    }
  }
  else
  {
    v83 = v18;
    v84 = v19;
  }
  v22 = HIDWORD(v78);
  v23 = v78;
  if ( (_DWORD)v78 != -4 )
  {
    v24 = v66;
    if ( HIDWORD(v94) == HIDWORD(v78) )
    {
      v28 = v82;
      v55.m128i_i64[0] = (__int64)v66;
      v29 = strcmp(v66, v82);
      v24 = (const char *)v55.m128i_i64[0];
      if ( !v29 )
        goto LABEL_47;
    }
    v55.m128i_i32[0] = sub_8D2470((__int64)&v71, v64, v24, v23, 2 * (unsigned int)(v23 == -1));
    if ( v55.m128i_i32[0] )
      goto LABEL_31;
    v22 = v78;
    LOBYTE(v79) = 1;
    if ( (_DWORD)v78 == -3 )
    {
      v22 = DWORD1(v76);
    }
    else if ( (_DWORD)v78 == -1 )
    {
      v22 = DWORD2(v76);
    }
    HIDWORD(v78) = v22;
  }
  if ( HIDWORD(v94) == v22 )
  {
    v30 = v66;
    v28 = v82;
    v55.m128i_i64[0] = (__int64)v82;
    v31 = v82;
    if ( !strcmp(v66, v82) )
      goto LABEL_47;
    if ( (_DWORD)v94 == -4 )
    {
LABEL_64:
      v28 = v30;
      if ( strcmp(v31, v30) )
        goto LABEL_19;
LABEL_47:
      sub_7C7C70((__int64)"cowardly refusing to compare a file against itself\n", v28, v24);
      v55.m128i_i32[0] = 0;
      goto LABEL_31;
    }
    v28 = v30;
    LODWORD(v52) = v94;
    if ( !strcmp((const char *)v55.m128i_i64[0], v30) )
      goto LABEL_47;
    v25 = v52;
  }
  else
  {
    v25 = v94;
    if ( (_DWORD)v94 == -4 )
      goto LABEL_19;
    v55.m128i_i64[0] = (__int64)v82;
  }
  v55.m128i_i32[0] = sub_8D2470((__int64)&v87, v80, (const char *)v55.m128i_i64[0], v25, 2 * (unsigned int)(v25 == -1));
  if ( v55.m128i_i32[0] )
    goto LABEL_31;
  v33 = v94;
  LOBYTE(v95) = 1;
  if ( (_DWORD)v94 == -3 )
  {
    v33 = DWORD1(v92);
  }
  else if ( (_DWORD)v94 == -1 )
  {
    v33 = DWORD2(v92);
  }
  HIDWORD(v94) = v33;
  if ( v33 == HIDWORD(v78) )
  {
    v30 = v66;
    v31 = v82;
    goto LABEL_64;
  }
LABEL_19:
  v62 = 0;
  v63 = 0;
  if ( (_DWORD)v78 == -4 )
  {
    v26 = haystack;
    if ( v68.m128i_i64[0] )
      v26 = v67;
    if ( (unsigned int)sub_8FE1E0(*(_QWORD *)(v65 + 56), &v62, v26, 0, 0) )
      goto LABEL_30;
  }
  else
  {
    if ( !(_BYTE)v79 )
      goto LABEL_30;
    v62 = _mm_load_si128(&v73);
  }
  if ( (_DWORD)v94 != -4 )
  {
    if ( !(_BYTE)v95 )
      goto LABEL_30;
    v63 = _mm_load_si128(&v89);
    goto LABEL_25;
  }
  v45 = haystack;
  if ( v84.m128i_i64[0] )
    v45 = v83;
  if ( !(unsigned int)sub_8FE1E0(*(_QWORD *)(v81 + 56), &v63, v45, 0, 0) )
  {
LABEL_25:
    if ( *(_OWORD *)&v63 - *(_OWORD *)&v62 == 0 )
    {
      sub_8D21D0((__int64)&v60, (__int64)&v80);
      sub_8D21D0((__int64)&v58, (__int64)&v64);
      sub_368890();
    }
  }
LABEL_30:
  v55.m128i_i32[0] = sub_8D3BD0(&v64, (int)v54, 1);
  if ( v55.m128i_i32[0] )
    goto LABEL_31;
  v55.m128i_i32[0] = sub_8D3BD0(&v80, (int)v53, 0);
  if ( v55.m128i_i32[0] )
    goto LABEL_31;
  if ( !a8 )
    goto LABEL_72;
  (**(void (__fastcall ***)(void **))a8)((void **)&v60);
  if ( (_DWORD)v78 != -4 )
    goto LABEL_69;
  if ( (_QWORD)v70 )
  {
    v46 = v69;
    v47 = haystack;
    if ( !v61.m128i_i64[0] )
      goto LABEL_105;
  }
  else
  {
    v46 = haystack;
    if ( !v61.m128i_i64[0] )
      goto LABEL_106;
  }
  v47 = v60;
LABEL_105:
  if ( !strcmp(v47, v46) )
    goto LABEL_106;
LABEL_69:
  if ( (_DWORD)v94 != -4 )
    goto LABEL_70;
  if ( (_QWORD)v86 )
  {
    v48 = v85;
    v49 = haystack;
    if ( !v61.m128i_i64[0] )
      goto LABEL_113;
  }
  else
  {
    v48 = haystack;
    if ( !v61.m128i_i64[0] )
      goto LABEL_106;
  }
  v49 = v60;
LABEL_113:
  if ( strcmp(v49, v48) )
  {
LABEL_70:
    if ( v60 )
    {
      v61.m128i_i64[0] = 0;
      qfree(v60);
    }
LABEL_72:
    v34 = haystack;
    v55.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    if ( v68.m128i_i64[0] )
      v34 = v67;
    file_ext = (const char *)get_file_ext(v34);
    if ( !file_ext )
      goto LABEL_101;
    v54 = file_ext;
    if ( strcasecmp(file_ext, "idb") )
    {
      if ( strcasecmp(v54, "i64") )
        goto LABEL_101;
    }
    v36 = haystack;
    if ( v84.m128i_i64[0] )
      v36 = v83;
    v37 = (const char *)get_file_ext(v36);
    if ( v37 )
    {
      v54 = v37;
      v38 = strcasecmp(v37, "idb");
      LODWORD(v51) = 1;
      if ( v38 )
        LODWORD(v51) = strcasecmp(v54, "i64") == 0;
    }
    else
    {
LABEL_101:
      LODWORD(v51) = 0;
    }
    LODWORD(v54) = HIBYTE(v95);
    sub_8D21D0((__int64)&v60, (__int64)&v80);
    v39 = haystack;
    if ( v61.m128i_i64[0] )
      v39 = v60;
    v40 = haystack;
    if ( (_QWORD)v86 )
      v40 = v85;
    v52 = (unsigned __int64)v39;
    v41 = HIBYTE(v79);
    v53 = v40;
    sub_8D21D0((__int64)&v58, (__int64)&v64);
    v42 = haystack;
    if ( v59 )
      v42 = v58;
    v43 = haystack;
    if ( (_QWORD)v70 )
      v43 = v69;
    if ( (__int64 (__fastcall *)(__int64, __int64, __int64, char, __int64, __int64, char, char, const char *, __int64))v55.m128i_i64[0] == sub_8CFEE0 )
      v44 = lsite_perform_diff(a2, (__int64)v43, (__int64)v42, v41, (__int64)v53, v52, (char)v54, (char)v51, v11, a8);
    else
      v44 = ((__int64 (__fastcall *)(__int64, const char *, const char *, _QWORD, const char *, unsigned __int64, _QWORD, _QWORD, const char *, __int64))v55.m128i_i64[0])(
              a2,
              v43,
              v42,
              v41,
              v53,
              v52,
              (unsigned int)v54,
              (unsigned int)v51,
              v11,
              a8);
    v55.m128i_i32[0] = v44;
    if ( v58 )
    {
      v59 = 0;
      qfree(v58);
    }
    if ( v60 )
    {
      v61.m128i_i64[0] = 0;
      qfree(v60);
    }
    goto LABEL_31;
  }
LABEL_106:
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a8 + 16LL))(a8) )
    goto LABEL_70;
  if ( v60 )
  {
    v61.m128i_i64[0] = 0;
    qfree(v60);
  }
  v55.m128i_i32[0] = 1;
LABEL_31:
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v87);
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  if ( v83 )
  {
    v84.m128i_i64[0] = 0;
    qfree(v83);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  if ( v67 )
  {
    v68.m128i_i64[0] = 0;
    qfree(v67);
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
  return v55.m128i_u32[0];
}
