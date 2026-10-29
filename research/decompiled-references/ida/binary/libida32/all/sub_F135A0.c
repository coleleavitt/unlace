void __fastcall sub_F135A0(__int64 a1, unsigned int *a2)
{
  __m128i v3; // xmm1
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __m128i *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm6
  __m128i *v11; // rdx
  __m128i v12; // xmm0
  void *v13; // rax
  void *v14; // rdx
  __m128i *v15; // rdi
  __m128i v16; // xmm2
  __m128i v17; // xmm5
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm6
  __m128i *v21; // rdx
  void *v22; // rax
  __m128i *v23; // rdi
  __m128i v24; // xmm3
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm4
  __m128i *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __m128i *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36; // xmm3
  __m128i *v37; // rdx
  __m128i v38; // xmm0
  void *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rdi
  void (__fastcall *v46)(__int64, __int64, __int64); // rax
  __int64 v47; // rax
  _BYTE *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rdi
  void (__fastcall *v55)(__int64, __int64, __int64); // rax
  __int64 v56; // rax
  _BYTE *v57; // rax
  __m128i v58; // [rsp+0h] [rbp-128h] BYREF
  void (__fastcall *v59[2])(__int64 ***, char *); // [rsp+18h] [rbp-110h] BYREF
  char v60; // [rsp+2Dh] [rbp-FBh] BYREF
  char v61; // [rsp+2Eh] [rbp-FAh] BYREF
  char v62; // [rsp+2Fh] [rbp-F9h] BYREF
  __m128i v63; // [rsp+30h] [rbp-F8h] BYREF
  void *v64[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-D8h]
  __m128i v66; // [rsp+58h] [rbp-D0h] BYREF
  __m128i v67; // [rsp+70h] [rbp-B8h] BYREF
  void *v68[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+90h] [rbp-98h]
  __m128i v70; // [rsp+98h] [rbp-90h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v72; // [rsp+B8h] [rbp-70h] BYREF
  void *v73; // [rsp+C8h] [rbp-60h]
  __int64 v74; // [rsp+D0h] [rbp-58h]
  __m128i v75[5]; // [rsp+D8h] [rbp-50h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_2257BD0(*(_QWORD *)(a1 + 1096), a2[12]);
    v40 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v40 )
    {
      v41 = *(_QWORD *)(a1 + 16);
      LOBYTE(v71) = 1;
      v42 = v41 + 32 * v40 - 32;
      if ( !*(_QWORD *)(v42 + 16) )
        goto LABEL_64;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v42 + 24))(v42, &v71);
        v44 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v44;
        v45 = *(_QWORD *)(a1 + 16) + 32 * v44;
        v46 = *(void (__fastcall **)(__int64, __int64, __int64))(v45 + 16);
        if ( v46 )
          v46(v45, v45, 3);
        v47 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v47 )
          break;
        v43 = *(_QWORD *)(a1 + 16);
        LOBYTE(v71) = 1;
        v42 = v43 + 32 * v47 - 32;
        if ( !*(_QWORD *)(v42 + 16) )
          goto LABEL_64;
      }
    }
    v48 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v48 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
LABEL_48:
    *(_BYTE *)(a1 + 1056) = 0;
    sub_2257BD0(*(_QWORD *)(a1 + 1096), a2[13]);
    v49 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v49 )
    {
      v50 = *(_QWORD *)(a1 + 16);
      v61 = 1;
      v51 = v50 + 32 * v49 - 32;
      if ( !*(_QWORD *)(v51 + 16) )
        goto LABEL_64;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v51 + 24))(v51, &v61);
        v53 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v53;
        v54 = *(_QWORD *)(a1 + 16) + 32 * v53;
        v55 = *(void (__fastcall **)(__int64, __int64, __int64))(v54 + 16);
        if ( v55 )
          v55(v54, v54, 3);
        v56 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v56 )
          break;
        v52 = *(_QWORD *)(a1 + 16);
        v61 = 1;
        v51 = v52 + 32 * v56 - 32;
        if ( !*(_QWORD *)(v51 + 16) )
          goto LABEL_64;
      }
    }
    v57 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v57 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v58.m128i_i64[0] = a1;
  v3 = _mm_loadl_epi64(&v58);
  v68[0] = a2;
  v68[1] = &v70;
  v58 = _mm_unpacklo_epi64(v3, v3);
  v67 = v58;
  sub_F009D0(&v68[1], "begin", (__int64)"");
  if ( *(_BYTE *)(a1 + 1057) )
  {
    v24 = _mm_loadu_si128((const __m128i *)&v67.m128i_u64[1]);
    v71 = v67.m128i_i64[0];
    v73 = v75;
    v72 = v24;
    if ( v68[1] == &v70 )
    {
      v75[0] = _mm_loadu_si128(&v70);
    }
    else
    {
      v73 = v68[1];
      v75[0].m128i_i64[0] = v70.m128i_i64[0];
    }
    v25 = v69;
    v69 = 0;
    v70.m128i_i8[0] = 0;
    v74 = v25;
    v68[1] = &v70;
    v64[0] = nullptr;
    v26 = operator new(0x38u);
    v27 = _mm_loadu_si128(&v72);
    *(_QWORD *)v26 = v71;
    *(_QWORD *)(v26 + 24) = v26 + 40;
    v28 = (__m128i *)v73;
    *(__m128i *)(v26 + 8) = v27;
    if ( v28 == v75 )
    {
      *(__m128i *)(v26 + 40) = _mm_loadu_si128(v75);
    }
    else
    {
      *(_QWORD *)(v26 + 24) = v28;
      *(_QWORD *)(v26 + 40) = v75[0].m128i_i64[0];
    }
    v29 = v74;
    v63.m128i_i64[0] = v26;
    v74 = 0;
    *(_QWORD *)(v26 + 32) = v29;
    v59[0] = sub_F0CE30;
    v73 = v75;
    v75[0].m128i_i8[0] = 0;
    *(__m128 *)v64 = _mm_loadh_ps((const double *)v59);
    sub_AA95F0(a1 + 16, &v63);
    if ( v64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v64[0])(&v63, &v63, 3);
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 24);
    v5 = *(_QWORD *)(a1 + 16);
    v62 = 0;
    v6 = v5 + 32 * v4 - 32;
    if ( !*(_QWORD *)(v6 + 16) )
      goto LABEL_64;
    (*(void (__fastcall **)(__int64, char *))(v6 + 24))(v6, &v62);
    v7 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
    v72 = _mm_loadu_si128((const __m128i *)&v67.m128i_u64[1]);
    v71 = v67.m128i_i64[0];
    v73 = v75;
    if ( v68[1] == &v70 )
    {
      v75[0] = _mm_loadu_si128(&v70);
    }
    else
    {
      v73 = v68[1];
      v75[0].m128i_i64[0] = v70.m128i_i64[0];
    }
    v8 = v69;
    v69 = 0;
    v70.m128i_i8[0] = 0;
    v74 = v8;
    v68[1] = &v70;
    v64[0] = nullptr;
    v9 = operator new(0x38u);
    v10 = _mm_loadu_si128(&v72);
    *(_QWORD *)v9 = v71;
    *(_QWORD *)(v9 + 24) = v9 + 40;
    v11 = (__m128i *)v73;
    *(__m128i *)(v9 + 8) = v10;
    if ( v11 == v75 )
    {
      *(__m128i *)(v9 + 40) = _mm_loadu_si128(v75);
    }
    else
    {
      *(_QWORD *)(v9 + 24) = v11;
      *(_QWORD *)(v9 + 40) = v75[0].m128i_i64[0];
    }
    v63.m128i_i64[0] = v9;
    v75[0].m128i_i8[0] = 0;
    v12 = _mm_load_si128(&v63);
    *(_QWORD *)(v9 + 32) = v74;
    v73 = v75;
    v74 = 0;
    v63 = _mm_loadu_si128(v7);
    v13 = (void *)v7[1].m128i_i64[0];
    v14 = (void *)v7[1].m128i_i64[1];
    *v7 = v12;
    v64[0] = v13;
    v7[1].m128i_i64[0] = (__int64)sub_F00C00;
    v64[1] = v14;
    v7[1].m128i_i64[1] = (__int64)sub_F0CE30;
    if ( v13 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v13)(&v63, &v63, 3);
  }
  if ( v73 != v75 )
    operator delete(v73);
  v15 = (__m128i *)v68[1];
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v15 != &v70 )
    operator delete(v15);
  if ( *(_BYTE *)(a1 + 1056) )
    goto LABEL_48;
  v16 = _mm_load_si128(&v58);
  v64[0] = a2;
  v63 = v16;
  v64[1] = &v66;
  sub_F009D0(&v64[1], "number of elements", (__int64)"");
  if ( !*(_BYTE *)(a1 + 1057) )
  {
    v30 = *(unsigned int *)(a1 + 24);
    v31 = *(_QWORD *)(a1 + 16);
    v60 = 0;
    v32 = v31 + 32 * v30 - 32;
    if ( *(_QWORD *)(v32 + 16) )
    {
      (*(void (__fastcall **)(__int64, char *))(v32 + 24))(v32, &v60);
      v33 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v72 = _mm_loadu_si128((const __m128i *)&v63.m128i_u64[1]);
      v71 = v63.m128i_i64[0];
      v73 = v75;
      if ( v64[1] == &v66 )
      {
        v75[0] = _mm_loadu_si128(&v66);
      }
      else
      {
        v73 = v64[1];
        v75[0].m128i_i64[0] = v66.m128i_i64[0];
      }
      v34 = v65;
      v65 = 0;
      v66.m128i_i8[0] = 0;
      v74 = v34;
      v64[1] = &v66;
      v68[0] = nullptr;
      v35 = operator new(0x38u);
      v36 = _mm_loadu_si128(&v72);
      *(_QWORD *)v35 = v71;
      *(_QWORD *)(v35 + 24) = v35 + 40;
      v37 = (__m128i *)v73;
      *(__m128i *)(v35 + 8) = v36;
      if ( v37 == v75 )
      {
        *(__m128i *)(v35 + 40) = _mm_loadu_si128(v75);
      }
      else
      {
        *(_QWORD *)(v35 + 24) = v37;
        *(_QWORD *)(v35 + 40) = v75[0].m128i_i64[0];
      }
      v67.m128i_i64[0] = v35;
      v75[0].m128i_i8[0] = 0;
      v38 = _mm_load_si128(&v67);
      *(_QWORD *)(v35 + 32) = v74;
      v73 = v75;
      v74 = 0;
      v67 = _mm_loadu_si128(v33);
      v22 = (void *)v33[1].m128i_i64[0];
      v39 = (void *)v33[1].m128i_i64[1];
      *v33 = v38;
      v68[0] = v22;
      v33[1].m128i_i64[0] = (__int64)sub_F00B50;
      v68[1] = v39;
      v33[1].m128i_i64[1] = (__int64)sub_F0DC90;
      if ( v22 )
        goto LABEL_21;
      goto LABEL_22;
    }
LABEL_64:
    std::__throw_bad_function_call();
  }
  v17 = _mm_loadu_si128((const __m128i *)&v63.m128i_u64[1]);
  v71 = v63.m128i_i64[0];
  v73 = v75;
  v72 = v17;
  if ( v64[1] == &v66 )
  {
    v75[0] = _mm_loadu_si128(&v66);
  }
  else
  {
    v73 = v64[1];
    v75[0].m128i_i64[0] = v66.m128i_i64[0];
  }
  v18 = v65;
  v65 = 0;
  v66.m128i_i8[0] = 0;
  v74 = v18;
  v64[1] = &v66;
  v68[0] = nullptr;
  v19 = operator new(0x38u);
  v20 = _mm_loadu_si128(&v72);
  *(_QWORD *)v19 = v71;
  *(_QWORD *)(v19 + 24) = v19 + 40;
  v21 = (__m128i *)v73;
  *(__m128i *)(v19 + 8) = v20;
  if ( v21 == v75 )
  {
    *(__m128i *)(v19 + 40) = _mm_loadu_si128(v75);
  }
  else
  {
    *(_QWORD *)(v19 + 24) = v21;
    *(_QWORD *)(v19 + 40) = v75[0].m128i_i64[0];
  }
  v67.m128i_i64[0] = v19;
  v75[0].m128i_i8[0] = 0;
  *(_QWORD *)(v19 + 32) = v74;
  v58.m128i_i64[0] = (__int64)sub_F0DC90;
  v73 = v75;
  v74 = 0;
  *(__m128 *)v68 = _mm_loadh_ps((const double *)v58.m128i_i64);
  sub_AA95F0(a1 + 16, &v67);
  v22 = v68[0];
  if ( v68[0] )
LABEL_21:
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v22)(&v67, &v67, 3);
LABEL_22:
  if ( v73 != v75 )
    operator delete(v73);
  v23 = (__m128i *)v64[1];
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v23 != &v66 )
    operator delete(v23);
}

