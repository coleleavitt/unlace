_QWORD *__fastcall sub_2214C50(_QWORD *a1, __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // r13d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rdi
  _BYTE *v25; // rcx
  __int64 v26; // r13
  unsigned __int64 v27; // r13
  char v28; // al
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // rbx
  __int64 v32; // rdx
  const char **v33; // r13
  _BYTE *v34; // r14
  size_t v35; // rbp
  size_t v36; // rax
  size_t v37; // r12
  size_t v38; // rax
  char *v39; // rbx
  __int64 v40; // rbp
  const char *v41; // rbx
  bool v42; // zf
  __int64 v43; // rbp
  unsigned __int64 v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rdx
  _BYTE *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbx
  size_t v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp-10h] [rbp-338h]
  std::_V2 *v54; // [rsp+8h] [rbp-320h]
  std::_V2 *v55; // [rsp+8h] [rbp-320h]
  std::_V2 *v56; // [rsp+10h] [rbp-318h]
  _BYTE *v57; // [rsp+18h] [rbp-310h]
  __int64 v58; // [rsp+18h] [rbp-310h]
  __int64 v59; // [rsp+38h] [rbp-2F0h]
  __int64 v61; // [rsp+48h] [rbp-2E0h]
  __int64 v62; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v63; // [rsp+68h] [rbp-2C0h]
  char v64; // [rsp+70h] [rbp-2B8h]
  void *v65[2]; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v66; // [rsp+90h] [rbp-298h] BYREF
  void *v67[2]; // [rsp+A0h] [rbp-288h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-278h] BYREF
  __m128i v69[2]; // [rsp+C0h] [rbp-268h] BYREF
  __int16 v70; // [rsp+E0h] [rbp-248h]
  __m128i v71; // [rsp+F0h] [rbp-238h] BYREF
  _BYTE v72[16]; // [rsp+100h] [rbp-228h] BYREF
  __int16 v73; // [rsp+110h] [rbp-218h]
  __m128i v74[2]; // [rsp+120h] [rbp-208h] BYREF
  __int16 v75; // [rsp+140h] [rbp-1E8h]
  __m128i v76[2]; // [rsp+150h] [rbp-1D8h] BYREF
  __int16 v77; // [rsp+170h] [rbp-1B8h]
  __m128i v78; // [rsp+180h] [rbp-1A8h] BYREF
  char *v79; // [rsp+190h] [rbp-198h]
  __int64 v80; // [rsp+198h] [rbp-190h]
  __int16 v81; // [rsp+1A0h] [rbp-188h]
  void *ptr; // [rsp+1B0h] [rbp-178h] BYREF
  __m128i v83; // [rsp+1B8h] [rbp-170h]
  __int64 v84; // [rsp+1C8h] [rbp-160h] BYREF
  __int16 v85; // [rsp+1D0h] [rbp-158h]
  void *v86; // [rsp+250h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+258h] [rbp-D0h] BYREF
  __int64 v88; // [rsp+268h] [rbp-C0h] BYREF
  __int16 v89; // [rsp+270h] [rbp-B8h]

  v9 = *(_QWORD *)(a2 + 16);
  v89 = 261;
  v86 = a3;
  si128.m128i_i64[0] = a4;
  sub_225D6F0((unsigned int)&v62, v9, (unsigned int)&v86, -1, 1, 0, 1);
  if ( (v64 & 1) == 0 )
  {
    v25 = *(_BYTE **)(v62 + 8);
    v26 = *(_QWORD *)(v62 + 16);
    v71.m128i_i64[1] = 0;
    v27 = v26 - (_QWORD)v25;
    v57 = v25;
    v54 = (std::_V2 *)v25;
    v71.m128i_i64[0] = (__int64)v72;
    v72[0] = 0;
    v28 = ((__int64 (__fastcall *)(_BYTE *, unsigned __int64, __int64, _BYTE *, __int64))sub_22191F0)(
            v25,
            v27,
            v10,
            v25,
            v53);
    v29 = v27;
    v30 = (__int64)v57;
    if ( v28 )
    {
      if ( !(unsigned __int8)sub_2219280(v54, v27) )
      {
        v50 = std::_V2::generic_category(v54);
        v86 = &si128.m128i_u64[1];
        v51 = j__strlen("Could not convert UTF16 to UTF8");
        sub_2210320(&v86, "Could not convert UTF16 to UTF8", (__int64)&aCouldNotConver[v51]);
        sub_22205D0(a1, &v86, 84, v50);
        if ( v86 != &si128.m128i_u64[1] )
          operator delete(v86);
LABEL_53:
        v23 = (void *)v71.m128i_i64[0];
        if ( (_BYTE *)v71.m128i_i64[0] != v72 )
          goto LABEL_5;
        goto LABEL_6;
      }
      v29 = v71.m128i_i64[1];
      v30 = v71.m128i_i64[0];
    }
    else if ( v27 > 2 && *v57 == 0xEF && v57[1] == 0xBB && v57[2] == 0xBF )
    {
      v30 = (__int64)(v57 + 3);
      v29 = v27 - 3;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(a2 + 8))(
      v30,
      v29,
      a2,
      a5,
      *(unsigned __int8 *)(a2 + 57));
    if ( !*(_BYTE *)(a2 + 56) && !*(_BYTE *)(a2 + 58)
      || (v31 = sub_228A4B0(a3, a4, 0),
          v61 = v32,
          v33 = *(const char ***)a5,
          v59 = *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8),
          *(_QWORD *)a5 == v59) )
    {
LABEL_52:
      *a1 = 0;
      goto LABEL_53;
    }
    v56 = (std::_V2 *)a2;
    v34 = (_BYTE *)v31;
    while ( 1 )
    {
      v41 = *v33;
      if ( !*v33 )
        goto LABEL_23;
      v42 = *((_BYTE *)v56 + 58) == 0;
      v69[0].m128i_i64[0] = (__int64)*v33;
      if ( v42 )
        goto LABEL_14;
      v69[0].m128i_i64[1] = j__strlen(v41);
      v86 = &v88;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v43 = sub_2246AB0(v69, "<CFGDIR>", 8, 0);
      if ( v43 == -1 )
      {
        if ( si128.m128i_i64[0] )
        {
          v49 = v69[0].m128i_i64[1];
          v44 = 0;
          goto LABEL_41;
        }
      }
      else
      {
        v44 = 0;
        do
        {
          v45 = v44;
          if ( v69[0].m128i_i64[1] <= v44 )
            v45 = v69[0].m128i_i64[1];
          v46 = v69[0].m128i_i64[1] - v45;
          if ( v43 - v44 <= v69[0].m128i_i64[1] - v45 )
            v46 = v43 - v44;
          v47 = (_BYTE *)(v69[0].m128i_i64[0] + v45);
          if ( si128.m128i_i64[0] )
          {
            v74[0].m128i_i64[0] = (__int64)v47;
            v81 = 257;
            v74[0].m128i_i64[1] = v46;
            v77 = 257;
            v85 = 257;
            v75 = 261;
            sub_228A3B0(&v86, v74, v76, &v78, &ptr);
          }
          else
          {
            sub_A1FE50(&v86, v47, &v47[v46]);
          }
          v44 = v43 + 8;
          sub_A1FE50(&v86, v34, &v34[v61]);
          v43 = sub_2246AB0(v69, "<CFGDIR>", 8, v43 + 8);
        }
        while ( v43 != -1 );
        v48 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] )
        {
          if ( v69[0].m128i_i64[1] >= v44 )
          {
            v49 = v69[0].m128i_i64[1] - v44;
LABEL_41:
            if ( v49 == -1 || v49 )
            {
              v85 = 257;
              v81 = 257;
              v74[0].m128i_i64[0] = v44 + v69[0].m128i_i64[0];
              v77 = 257;
              v75 = 261;
              v74[0].m128i_i64[1] = v49;
              sub_228A3B0(&v86, v74, v76, &v78, &ptr);
            }
            v48 = si128.m128i_i64[0];
          }
          *v33 = (const char *)sub_2245280(v56, v86, v48);
        }
      }
      if ( v86 != &v88 )
        free(v86);
      v41 = *v33;
      v69[0].m128i_i64[0] = (__int64)v41;
      if ( !v41 )
      {
        v35 = 0;
        goto LABEL_15;
      }
LABEL_14:
      v35 = j__strlen(v41);
LABEL_15:
      v69[0].m128i_i64[1] = v35;
      v36 = j__strlen("@");
      v37 = v36;
      if ( v36 <= v35 && (!v36 || !memcmp(v41, "@", v36)) )
      {
        v40 = v35 - v37;
        v39 = (char *)&v41[v37];
        v69[0].m128i_i64[0] = (__int64)v39;
        v69[0].m128i_i64[1] = v40;
        v89 = 261;
        v86 = v39;
        si128.m128i_i64[0] = v40;
        if ( (unsigned __int8)sub_228B190(&v86, 0) )
        {
          ptr = &v84;
          v83 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          sub_FC8050(&ptr, 64);
LABEL_20:
          sub_A1FE50(&ptr, v34, &v34[v61]);
          v89 = 257;
          v81 = 257;
          v77 = 257;
          v75 = 261;
          v74[0].m128i_i64[0] = (__int64)v39;
          v74[0].m128i_i64[1] = v40;
          sub_228A3B0(&ptr, v74, v76, &v78, &v86);
LABEL_21:
          *v33 = (const char *)sub_2245280(v56, ptr, v83.m128i_i64[0]);
          if ( ptr != &v84 )
            free(ptr);
        }
      }
      else
      {
        v38 = j__strlen("--config=");
        if ( (unsigned __int8)sub_11899B0((const void **)v69, "--config=", v38) )
        {
          v39 = (char *)v69[0].m128i_i64[0];
          v83.m128i_i64[0] = 0;
          v55 = (std::_V2 *)v69[0].m128i_i64[0];
          v83.m128i_i64[1] = 128;
          v58 = v69[0].m128i_i64[1];
          v40 = v69[0].m128i_i64[1];
          ptr = &v84;
          sub_FC8050(&ptr, 64);
          v89 = 261;
          v86 = v39;
          si128.m128i_i64[0] = v40;
          if ( (unsigned __int8)sub_228ACE0(&v86, 0) )
            goto LABEL_20;
          v86 = &v88;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          if ( !(unsigned __int8)sub_2214730(v56, v55, v58, &v86) )
          {
            v79 = v39;
            v81 = 1283;
            v78.m128i_i64[0] = (__int64)"cannot not find configuration file: ";
            v80 = v40;
            v52 = std::_V2::generic_category(v56);
            sub_111DF60((__int64)a1, 2u, v52, (__int64)&v78);
            if ( v86 != &v88 )
              free(v86);
            if ( ptr != &v84 )
              free(ptr);
            goto LABEL_53;
          }
          sub_A1FE50(&ptr, v86, (_BYTE *)v86 + si128.m128i_i64[0]);
          if ( v86 != &v88 )
            free(v86);
          goto LABEL_21;
        }
      }
LABEL_23:
      if ( (const char **)v59 == ++v33 )
        goto LABEL_52;
    }
  }
  v12 = v63;
  v13 = v62;
  (*(void (__fastcall **)(void **, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v63 + 32LL))(
    v65,
    v63,
    (unsigned int)v62,
    v11,
    v53);
  v71.m128i_i64[0] = (__int64)a3;
  v85 = 260;
  v76[0].m128i_i64[0] = (__int64)"': ";
  v77 = 259;
  v73 = 261;
  v71.m128i_i64[1] = a4;
  v70 = 259;
  v69[0].m128i_i64[0] = (__int64)"cannot not open file '";
  ptr = v65;
  sub_A41580(v74, v69, &v71, v14, v15, v16);
  sub_A41580(&v78, v74, v76, v17, v18, v19);
  sub_A41580((__m128i *)&v86, &v78, (const __m128i *)&ptr, v20, v21, v22);
  sub_2253560(v67, &v86);
  sub_22205D0(a1, v67, v13, v12);
  if ( v67[0] != &v68 )
    operator delete(v67[0]);
  v23 = v65[0];
  if ( v65[0] != &v66 )
LABEL_5:
    operator delete(v23);
LABEL_6:
  sub_FC2AF0(&v62);
  return a1;
}
