__int64 *__fastcall sub_10F89B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r15
  __m128i v21; // xmm0
  _BYTE *v22; // rax
  _BYTE *v23; // rsi
  signed __int64 v24; // r14
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // r15
  __m128i v37; // xmm0
  _BYTE *v38; // rax
  _BYTE *v39; // rsi
  signed __int64 v40; // r12
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  _BYTE *v43; // rsi
  __int64 v44; // rdx
  _BYTE *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rcx
  unsigned __int64 v49; // r15
  __int64 v50; // rax
  _QWORD *v51; // r12
  __m128i v52; // xmm0
  _BYTE *v53; // rsi
  signed __int64 v54; // rbx
  __int64 v55; // r15
  _BYTE *v56; // rax
  _BYTE *v57; // rsi
  __int64 v58; // rdx
  _BYTE *v59; // rsi
  __int64 v60; // rdx
  _BYTE *v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // r14
  __int64 v64; // r15
  __int64 v65; // r12
  __int64 v66; // rax
  _QWORD *v67; // rbx
  __m128i v68; // xmm0
  _BYTE *v69; // rax
  _BYTE *v70; // r13
  signed __int64 v71; // r12
  char **v72; // rbx
  __int64 *v73; // r14
  void **v74; // rdi
  void **v75; // r13
  void **v76; // r12
  char **v77; // rdi
  char **v78; // rdi
  __m128i v80; // [rsp+0h] [rbp-238h] BYREF
  __int64 v81; // [rsp+10h] [rbp-228h]
  __int64 *v82; // [rsp+18h] [rbp-220h]
  char *v83[2]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v84; // [rsp+30h] [rbp-208h] BYREF
  __int64 *v85; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v86; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 *v87; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v88; // [rsp+70h] [rbp-1C8h] BYREF
  __m128i v89; // [rsp+80h] [rbp-1B8h]
  char *v90; // [rsp+90h] [rbp-1A8h]
  __int64 *v91; // [rsp+98h] [rbp-1A0h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-190h] BYREF
  __int64 *v93; // [rsp+B8h] [rbp-180h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-170h] BYREF
  __int64 *v95; // [rsp+D8h] [rbp-160h] BYREF
  __int64 v96; // [rsp+E8h] [rbp-150h] BYREF
  __m128i v97; // [rsp+F8h] [rbp-140h]
  char *v98; // [rsp+108h] [rbp-130h]
  __int64 *v99; // [rsp+110h] [rbp-128h] BYREF
  __int64 v100; // [rsp+120h] [rbp-118h] BYREF
  __int64 *v101; // [rsp+130h] [rbp-108h] BYREF
  __int64 v102; // [rsp+140h] [rbp-F8h] BYREF
  __int64 *v103; // [rsp+150h] [rbp-E8h] BYREF
  __int64 v104; // [rsp+160h] [rbp-D8h] BYREF
  __m128i v105; // [rsp+170h] [rbp-C8h]
  char *v106; // [rsp+180h] [rbp-B8h]
  __int64 *v107; // [rsp+188h] [rbp-B0h] BYREF
  __int64 v108; // [rsp+198h] [rbp-A0h] BYREF
  __int64 *v109; // [rsp+1A8h] [rbp-90h] BYREF
  __int64 v110; // [rsp+1B8h] [rbp-80h] BYREF
  __int64 *v111; // [rsp+1C8h] [rbp-70h] BYREF
  __int64 v112; // [rsp+1D8h] [rbp-60h] BYREF
  __m128i v113; // [rsp+1E8h] [rbp-50h]
  char *v114; // [rsp+1F8h] [rbp-40h]
  char v115; // [rsp+200h] [rbp-38h] BYREF

  v9 = *(_BYTE **)a2;
  v10 = *(_QWORD *)(a2 + 8);
  v82 = a1;
  v83[0] = (char *)&v84;
  sub_10F3E40(v83, v9, (__int64)&v9[v10]);
  v11 = *(_BYTE **)(a2 + 32);
  v12 = *(_QWORD *)(a2 + 40);
  v85 = &v86;
  sub_10F3E40(&v85, v11, (__int64)&v11[v12]);
  v13 = *(_BYTE **)(a2 + 64);
  v14 = *(_QWORD *)(a2 + 72);
  v87 = &v88;
  sub_10F3E40(&v87, v13, (__int64)&v13[v14]);
  v15 = *(_QWORD *)(a2 + 104);
  v16 = *(_QWORD *)(a2 + 96);
  v89 = 0;
  v80.m128i_i64[0] = v15;
  v90 = nullptr;
  v17 = v15 - v16;
  v18 = (v15 - v16) >> 5;
  if ( v18 )
  {
    if ( v18 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_91;
    v80.m128i_i64[1] = v17;
    v19 = operator new(v17);
    v16 = *(_QWORD *)(a2 + 96);
    v17 = v80.m128i_u64[1];
    v20 = (_QWORD *)v19;
    v80.m128i_i64[0] = *(_QWORD *)(a2 + 104);
  }
  else
  {
    v20 = nullptr;
  }
  v80.m128i_i64[1] = (__int64)v20;
  v21 = _mm_loadl_epi64((const __m128i *)&v80.m128i_u64[1]);
  v90 = (char *)v20 + v17;
  v89 = _mm_unpacklo_epi64(v21, v21);
  if ( v16 != v80.m128i_i64[0] )
  {
    while ( 1 )
    {
      *v20 = v20 + 2;
      v23 = *(_BYTE **)v16;
      v24 = *(_QWORD *)(v16 + 8);
      if ( v24 + *(_QWORD *)v16 && !v23 )
        goto LABEL_46;
      if ( (unsigned __int64)v24 > 0xF )
        break;
      v22 = (_BYTE *)*v20;
      if ( v24 == 1 )
      {
        *v22 = *v23;
        v22 = (_BYTE *)*v20;
      }
      else if ( v24 )
      {
        goto LABEL_16;
      }
LABEL_7:
      v20[1] = v24;
      v16 += 32;
      v20 += 4;
      v22[v24] = 0;
      if ( v16 == v80.m128i_i64[0] )
        goto LABEL_17;
    }
    if ( v24 < 0 )
LABEL_90:
      std::__throw_length_error("basic_string::_M_create");
    v81 = v16;
    v80.m128i_i64[1] = (__int64)v23;
    v22 = (_BYTE *)operator new(v24 + 1);
    v20[2] = v24;
    v23 = (_BYTE *)v80.m128i_i64[1];
    *v20 = v22;
    v16 = v81;
LABEL_16:
    v80.m128i_i64[1] = v16;
    memcpy(v22, v23, v24);
    v22 = (_BYTE *)*v20;
    v16 = v80.m128i_i64[1];
    goto LABEL_7;
  }
LABEL_17:
  v25 = *(_BYTE **)a3;
  v26 = *(_QWORD *)(a3 + 8);
  v91 = &v92;
  v89.m128i_i64[1] = (__int64)v20;
  sub_10F3E40(&v91, v25, (__int64)&v25[v26]);
  v27 = *(_BYTE **)(a3 + 32);
  v28 = *(_QWORD *)(a3 + 40);
  v93 = &v94;
  sub_10F3E40(&v93, v27, (__int64)&v27[v28]);
  v29 = *(_BYTE **)(a3 + 64);
  v30 = *(_QWORD *)(a3 + 72);
  v95 = &v96;
  sub_10F3E40(&v95, v29, (__int64)&v29[v30]);
  v31 = *(_QWORD *)(a3 + 104);
  v32 = *(_QWORD *)(a3 + 96);
  v97 = 0;
  v80.m128i_i64[0] = v31;
  v98 = nullptr;
  v33 = v31 - v32;
  v34 = (v31 - v32) >> 5;
  if ( v34 )
  {
    if ( v34 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_91;
    v80.m128i_i64[1] = v33;
    v35 = operator new(v33);
    v32 = *(_QWORD *)(a3 + 96);
    v33 = v80.m128i_u64[1];
    v36 = (_QWORD *)v35;
    v80.m128i_i64[0] = *(_QWORD *)(a3 + 104);
  }
  else
  {
    v36 = nullptr;
  }
  v80.m128i_i64[1] = (__int64)v36;
  v37 = _mm_loadl_epi64((const __m128i *)&v80.m128i_u64[1]);
  v98 = (char *)v36 + v33;
  v97 = _mm_unpacklo_epi64(v37, v37);
  if ( v80.m128i_i64[0] != v32 )
  {
    while ( 1 )
    {
      *v36 = v36 + 2;
      v39 = *(_BYTE **)v32;
      v40 = *(_QWORD *)(v32 + 8);
      if ( v40 + *(_QWORD *)v32 && !v39 )
        goto LABEL_46;
      if ( (unsigned __int64)v40 > 0xF )
        break;
      v38 = (_BYTE *)*v36;
      if ( v40 == 1 )
      {
        *v38 = *v39;
        v38 = (_BYTE *)*v36;
      }
      else if ( v40 )
      {
        goto LABEL_32;
      }
LABEL_23:
      v36[1] = v40;
      v32 += 32;
      v36 += 4;
      v38[v40] = 0;
      if ( v32 == v80.m128i_i64[0] )
        goto LABEL_33;
    }
    v80.m128i_i64[1] = *(_QWORD *)v32;
    if ( v40 < 0 )
      goto LABEL_90;
    v38 = (_BYTE *)operator new(v40 + 1);
    v36[2] = v40;
    v39 = (_BYTE *)v80.m128i_i64[1];
    *v36 = v38;
LABEL_32:
    memcpy(v38, v39, v40);
    v38 = (_BYTE *)*v36;
    goto LABEL_23;
  }
LABEL_33:
  v41 = *(_BYTE **)a4;
  v42 = *(_QWORD *)(a4 + 8);
  v97.m128i_i64[1] = (__int64)v36;
  v99 = &v100;
  sub_10F3E40(&v99, v41, (__int64)&v41[v42]);
  v43 = *(_BYTE **)(a4 + 32);
  v44 = *(_QWORD *)(a4 + 40);
  v101 = &v102;
  sub_10F3E40(&v101, v43, (__int64)&v43[v44]);
  v45 = *(_BYTE **)(a4 + 64);
  v46 = *(_QWORD *)(a4 + 72);
  v103 = &v104;
  sub_10F3E40(&v103, v45, (__int64)&v45[v46]);
  v47 = *(_QWORD *)(a4 + 104);
  v48 = *(_QWORD *)(a4 + 96);
  v105 = 0;
  v106 = nullptr;
  v49 = v47 - v48;
  if ( (v47 - v48) >> 5 )
  {
    if ( (unsigned __int64)((v47 - v48) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_91;
    v50 = operator new(v49);
    v47 = *(_QWORD *)(a4 + 104);
    v48 = *(_QWORD *)(a4 + 96);
    v51 = (_QWORD *)v50;
  }
  else
  {
    v51 = nullptr;
  }
  v80.m128i_i64[0] = (__int64)v51;
  v52 = _mm_loadl_epi64(&v80);
  v106 = (char *)v51 + v49;
  v105 = _mm_unpacklo_epi64(v52, v52);
  if ( v47 != v48 )
  {
    *v51 = v51 + 2;
    v53 = *(_BYTE **)v48;
    v54 = *(_QWORD *)(v48 + 8);
    if ( v54 + *(_QWORD *)v48 && !v53 )
LABEL_46:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v55 = v48 + 32;
    while ( (unsigned __int64)v54 <= 0xF )
    {
      v56 = (_BYTE *)*v51;
      if ( v54 == 1 )
      {
        *v56 = *v53;
        v56 = (_BYTE *)*v51;
      }
      else if ( v54 )
      {
        goto LABEL_51;
      }
LABEL_43:
      v51[1] = v54;
      v51 += 4;
      v56[v54] = 0;
      if ( v47 == v55 )
        goto LABEL_52;
      v55 += 32;
      *v51 = v51 + 2;
      v53 = *(_BYTE **)(v55 - 32);
      v54 = *(_QWORD *)(v55 - 24);
      if ( &v53[v54] && !v53 )
        goto LABEL_46;
    }
    v80.m128i_i64[0] = (__int64)v53;
    if ( v54 < 0 )
      goto LABEL_90;
    v56 = (_BYTE *)operator new(v54 + 1);
    v51[2] = v54;
    v53 = (_BYTE *)v80.m128i_i64[0];
    *v51 = v56;
LABEL_51:
    memcpy(v56, v53, v54);
    v56 = (_BYTE *)*v51;
    goto LABEL_43;
  }
LABEL_52:
  v57 = *(_BYTE **)a5;
  v58 = *(_QWORD *)(a5 + 8);
  v105.m128i_i64[1] = (__int64)v51;
  v107 = &v108;
  sub_10F3E40(&v107, v57, (__int64)&v57[v58]);
  v59 = *(_BYTE **)(a5 + 32);
  v60 = *(_QWORD *)(a5 + 40);
  v109 = &v110;
  sub_10F3E40(&v109, v59, (__int64)&v59[v60]);
  v61 = *(_BYTE **)(a5 + 64);
  v62 = *(_QWORD *)(a5 + 72);
  v111 = &v112;
  sub_10F3E40(&v111, v61, (__int64)&v61[v62]);
  v63 = *(_QWORD *)(a5 + 104);
  v64 = *(_QWORD *)(a5 + 96);
  v113 = 0;
  v114 = nullptr;
  v65 = v63 - v64;
  if ( (v63 - v64) >> 5 )
  {
    if ( (unsigned __int64)((v63 - v64) >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v66 = operator new(v63 - v64);
      v63 = *(_QWORD *)(a5 + 104);
      v64 = *(_QWORD *)(a5 + 96);
      v67 = (_QWORD *)v66;
      goto LABEL_55;
    }
LABEL_91:
    std::__throw_bad_alloc();
  }
  v67 = nullptr;
LABEL_55:
  v80.m128i_i64[0] = (__int64)v67;
  v68 = _mm_loadl_epi64(&v80);
  v114 = (char *)v67 + v65;
  v113 = _mm_unpacklo_epi64(v68, v68);
  if ( v63 != v64 )
  {
    while ( 1 )
    {
      *v67 = v67 + 2;
      v70 = *(_BYTE **)v64;
      v71 = *(_QWORD *)(v64 + 8);
      if ( v71 + *(_QWORD *)v64 && !v70 )
        goto LABEL_46;
      if ( (unsigned __int64)v71 > 0xF )
        break;
      v69 = (_BYTE *)*v67;
      if ( v71 == 1 )
      {
        *v69 = *v70;
        v69 = (_BYTE *)*v67;
      }
      else if ( v71 )
      {
        goto LABEL_67;
      }
LABEL_58:
      v64 += 32;
      v67[1] = v71;
      v67 += 4;
      v69[v71] = 0;
      if ( v64 == v63 )
        goto LABEL_68;
    }
    if ( v71 < 0 )
      goto LABEL_90;
    v69 = (_BYTE *)operator new(v71 + 1);
    v67[2] = v71;
    *v67 = v69;
LABEL_67:
    memcpy(v69, v70, v71);
    v69 = (_BYTE *)*v67;
    goto LABEL_58;
  }
LABEL_68:
  v113.m128i_i64[1] = (__int64)v67;
  v72 = (char **)&v115;
  v73 = sub_10F6910(v82, v83, 4);
  do
  {
    while ( 1 )
    {
      v72 -= 15;
      v74 = (void **)v72[12];
      v75 = (void **)v72[13];
      v76 = v74;
      if ( v75 != v74 )
      {
        do
        {
          while ( *v76 != v76 + 2 )
          {
            operator delete(*v76);
            v76 += 4;
            if ( v75 == v76 )
              goto LABEL_72;
          }
          v76 += 4;
        }
        while ( v75 != v76 );
LABEL_72:
        v74 = (void **)v72[12];
      }
      if ( v74 )
        operator delete(v74);
      v77 = (char **)v72[8];
      if ( v77 != v72 + 10 )
        operator delete(v77);
      v78 = (char **)v72[4];
      if ( v78 != v72 + 6 )
        operator delete(v78);
      if ( *v72 == (char *)(v72 + 2) )
        break;
      operator delete(*v72);
      if ( v72 == v83 )
        return v73;
    }
  }
  while ( v72 != v83 );
  return v73;
}

