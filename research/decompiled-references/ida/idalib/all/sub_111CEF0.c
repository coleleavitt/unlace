__int64 *__fastcall sub_111CEF0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __m128i v19; // xmm0
  _BYTE *v20; // rsi
  signed __int64 v21; // r15
  __int64 v22; // r13
  _BYTE *v23; // rax
  _BYTE *v24; // rsi
  __int64 v25; // rdx
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  _BYTE *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r15
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rbx
  __m128i v36; // xmm0
  _BYTE *v37; // rax
  _BYTE *v38; // r13
  signed __int64 v39; // r14
  _BYTE *v40; // rsi
  __int64 v41; // rdx
  _BYTE *v42; // rsi
  __int64 v43; // rdx
  _BYTE *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // r13
  _QWORD *v49; // rax
  _QWORD *v50; // rbx
  __m128i v51; // xmm0
  _BYTE *v52; // rax
  _BYTE *v53; // r13
  signed __int64 v54; // r12
  char **v55; // rbx
  __int64 *v56; // r14
  void **v57; // rdi
  void **v58; // r13
  void **v59; // r12
  char **v60; // rdi
  char **v61; // rdi
  __m128i v63; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 *v64; // [rsp+18h] [rbp-1B0h]
  char *v65[2]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v66; // [rsp+30h] [rbp-198h] BYREF
  __int64 *v67; // [rsp+40h] [rbp-188h] BYREF
  __int64 v68; // [rsp+50h] [rbp-178h] BYREF
  __int64 *v69; // [rsp+60h] [rbp-168h] BYREF
  __int64 v70; // [rsp+70h] [rbp-158h] BYREF
  __m128i v71; // [rsp+80h] [rbp-148h]
  char *v72; // [rsp+90h] [rbp-138h]
  __int64 *v73; // [rsp+98h] [rbp-130h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-120h] BYREF
  __int64 *v75; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-100h] BYREF
  __int64 *v77; // [rsp+D8h] [rbp-F0h] BYREF
  __int64 v78; // [rsp+E8h] [rbp-E0h] BYREF
  __m128i v79; // [rsp+F8h] [rbp-D0h]
  char *v80; // [rsp+108h] [rbp-C0h]
  __int64 *v81; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v82; // [rsp+120h] [rbp-A8h] BYREF
  __int64 *v83; // [rsp+130h] [rbp-98h] BYREF
  __int64 v84; // [rsp+140h] [rbp-88h] BYREF
  __int64 *v85; // [rsp+150h] [rbp-78h] BYREF
  __int64 v86; // [rsp+160h] [rbp-68h] BYREF
  __m128i v87; // [rsp+170h] [rbp-58h]
  char *v88; // [rsp+180h] [rbp-48h]
  __int64 v89; // [rsp+188h] [rbp-40h] BYREF

  v7 = *(_BYTE **)a2;
  v8 = *(_QWORD *)(a2 + 8);
  v64 = a1;
  v65[0] = (char *)&v66;
  sub_1117B80(v65, v7, (__int64)&v7[v8]);
  v9 = *(_BYTE **)(a2 + 32);
  v10 = *(_QWORD *)(a2 + 40);
  v67 = &v68;
  sub_1117B80(&v67, v9, (__int64)&v9[v10]);
  v11 = *(_BYTE **)(a2 + 64);
  v12 = *(_QWORD *)(a2 + 72);
  v69 = &v70;
  sub_1117B80(&v69, v11, (__int64)&v11[v12]);
  v13 = *(_QWORD *)(a2 + 104);
  v14 = *(_QWORD *)(a2 + 96);
  v71 = 0;
  v63.m128i_i64[0] = v13;
  v72 = nullptr;
  v15 = v13 - v14;
  v16 = (v13 - v14) >> 5;
  if ( v16 )
  {
    if ( v16 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_74;
    v17 = (_QWORD *)operator new(v15);
    v14 = *(_QWORD *)(a2 + 96);
    v18 = v17;
    v63.m128i_i64[0] = *(_QWORD *)(a2 + 104);
  }
  else
  {
    v18 = nullptr;
  }
  v63.m128i_i64[1] = (__int64)v18;
  v19 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
  v72 = (char *)v18 + v15;
  v71 = _mm_unpacklo_epi64(v19, v19);
  if ( v63.m128i_i64[0] != v14 )
  {
    *v18 = v18 + 2;
    v20 = *(_BYTE **)v14;
    v21 = *(_QWORD *)(v14 + 8);
    if ( v21 + *(_QWORD *)v14 && !v20 )
LABEL_14:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v22 = v14 + 32;
    while ( (unsigned __int64)v21 <= 0xF )
    {
      v23 = (_BYTE *)*v18;
      if ( v21 == 1 )
      {
        *v23 = *v20;
        v23 = (_BYTE *)*v18;
      }
      else if ( v21 )
      {
        goto LABEL_19;
      }
LABEL_11:
      v18[1] = v21;
      v18 += 4;
      v23[v21] = 0;
      if ( v63.m128i_i64[0] == v22 )
        goto LABEL_20;
      v22 += 32;
      *v18 = v18 + 2;
      v20 = *(_BYTE **)(v22 - 32);
      v21 = *(_QWORD *)(v22 - 24);
      if ( &v20[v21] && !v20 )
        goto LABEL_14;
    }
    if ( v21 < 0 )
LABEL_73:
      std::__throw_length_error("basic_string::_M_create");
    v63.m128i_i64[1] = (__int64)v20;
    v23 = (_BYTE *)operator new(v21 + 1);
    v18[2] = v21;
    v20 = (_BYTE *)v63.m128i_i64[1];
    *v18 = v23;
LABEL_19:
    memcpy(v23, v20, v21);
    v23 = (_BYTE *)*v18;
    goto LABEL_11;
  }
LABEL_20:
  v24 = *(_BYTE **)a3;
  v25 = *(_QWORD *)(a3 + 8);
  v73 = &v74;
  v71.m128i_i64[1] = (__int64)v18;
  sub_1117B80(&v73, v24, (__int64)&v24[v25]);
  v26 = *(_BYTE **)(a3 + 32);
  v27 = *(_QWORD *)(a3 + 40);
  v75 = &v76;
  sub_1117B80(&v75, v26, (__int64)&v26[v27]);
  v28 = *(_BYTE **)(a3 + 64);
  v29 = *(_QWORD *)(a3 + 72);
  v77 = &v78;
  sub_1117B80(&v77, v28, (__int64)&v28[v29]);
  v30 = *(_QWORD *)(a3 + 104);
  v31 = *(_QWORD *)(a3 + 96);
  v79 = 0;
  v63.m128i_i64[0] = v30;
  v80 = nullptr;
  v32 = v30 - v31;
  v33 = (v30 - v31) >> 5;
  if ( v33 )
  {
    if ( v33 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_74;
    v34 = (_QWORD *)operator new(v32);
    v31 = *(_QWORD *)(a3 + 96);
    v35 = v34;
    v63.m128i_i64[0] = *(_QWORD *)(a3 + 104);
  }
  else
  {
    v35 = nullptr;
  }
  v63.m128i_i64[1] = (__int64)v35;
  v36 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
  v80 = (char *)v35 + v32;
  v79 = _mm_unpacklo_epi64(v36, v36);
  if ( v31 != v63.m128i_i64[0] )
  {
    while ( 1 )
    {
      *v35 = v35 + 2;
      v38 = *(_BYTE **)v31;
      v39 = *(_QWORD *)(v31 + 8);
      if ( v39 + *(_QWORD *)v31 && !v38 )
        goto LABEL_14;
      if ( (unsigned __int64)v39 > 0xF )
        break;
      v37 = (_BYTE *)*v35;
      if ( v39 == 1 )
      {
        *v37 = *v38;
        v37 = (_BYTE *)*v35;
      }
      else if ( v39 )
      {
        goto LABEL_35;
      }
LABEL_26:
      v35[1] = v39;
      v31 += 32;
      v35 += 4;
      v37[v39] = 0;
      if ( v31 == v63.m128i_i64[0] )
        goto LABEL_36;
    }
    if ( v39 < 0 )
      goto LABEL_73;
    v37 = (_BYTE *)operator new(v39 + 1);
    v35[2] = v39;
    *v35 = v37;
LABEL_35:
    memcpy(v37, v38, v39);
    v37 = (_BYTE *)*v35;
    goto LABEL_26;
  }
LABEL_36:
  v40 = *(_BYTE **)a4;
  v41 = *(_QWORD *)(a4 + 8);
  v81 = &v82;
  v79.m128i_i64[1] = (__int64)v35;
  sub_1117B80(&v81, v40, (__int64)&v40[v41]);
  v42 = *(_BYTE **)(a4 + 32);
  v43 = *(_QWORD *)(a4 + 40);
  v83 = &v84;
  sub_1117B80(&v83, v42, (__int64)&v42[v43]);
  v44 = *(_BYTE **)(a4 + 64);
  v45 = *(_QWORD *)(a4 + 72);
  v85 = &v86;
  sub_1117B80(&v85, v44, (__int64)&v44[v45]);
  v46 = *(_QWORD *)(a4 + 104);
  v47 = *(_QWORD *)(a4 + 96);
  v87 = 0;
  v88 = nullptr;
  v48 = v46 - v47;
  if ( (v46 - v47) >> 5 )
  {
    if ( (unsigned __int64)((v46 - v47) >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v49 = (_QWORD *)operator new(v46 - v47);
      v46 = *(_QWORD *)(a4 + 104);
      v47 = *(_QWORD *)(a4 + 96);
      v50 = v49;
      goto LABEL_39;
    }
LABEL_74:
    std::__throw_bad_alloc();
  }
  v50 = nullptr;
LABEL_39:
  v63.m128i_i64[0] = (__int64)v50;
  v51 = _mm_loadl_epi64(&v63);
  v88 = (char *)v50 + v48;
  v87 = _mm_unpacklo_epi64(v51, v51);
  if ( v46 != v47 )
  {
    while ( 1 )
    {
      *v50 = v50 + 2;
      v53 = *(_BYTE **)v47;
      v54 = *(_QWORD *)(v47 + 8);
      if ( v54 + *(_QWORD *)v47 && !v53 )
        goto LABEL_14;
      if ( (unsigned __int64)v54 > 0xF )
        break;
      v52 = (_BYTE *)*v50;
      if ( v54 == 1 )
      {
        *v52 = *v53;
        v52 = (_BYTE *)*v50;
      }
      else if ( v54 )
      {
        goto LABEL_51;
      }
LABEL_42:
      v47 += 32;
      v50[1] = v54;
      v50 += 4;
      v52[v54] = 0;
      if ( v47 == v46 )
        goto LABEL_52;
    }
    if ( v54 < 0 )
      goto LABEL_73;
    v52 = (_BYTE *)operator new(v54 + 1);
    v50[2] = v54;
    *v50 = v52;
LABEL_51:
    memcpy(v52, v53, v54);
    v52 = (_BYTE *)*v50;
    goto LABEL_42;
  }
LABEL_52:
  v87.m128i_i64[1] = (__int64)v50;
  v55 = (char **)&v89;
  v56 = sub_111A650(v64, v65, 3);
  do
  {
    while ( 1 )
    {
      v55 -= 15;
      v57 = (void **)v55[12];
      v58 = (void **)v55[13];
      v59 = v57;
      if ( v58 != v57 )
      {
        do
        {
          while ( *v59 != v59 + 2 )
          {
            operator delete(*v59);
            v59 += 4;
            if ( v58 == v59 )
              goto LABEL_56;
          }
          v59 += 4;
        }
        while ( v58 != v59 );
LABEL_56:
        v57 = (void **)v55[12];
      }
      if ( v57 )
        operator delete(v57);
      v60 = (char **)v55[8];
      if ( v60 != v55 + 10 )
        operator delete(v60);
      v61 = (char **)v55[4];
      if ( v61 != v55 + 6 )
        operator delete(v61);
      if ( *v55 == (char *)(v55 + 2) )
        break;
      operator delete(*v55);
      if ( v55 == v65 )
        return v56;
    }
  }
  while ( v55 != v65 );
  return v56;
}
