__int64 __fastcall sub_70EF50(__int64 *a1, void *a2, _QWORD *a3, void *a4, __int64 *a5, __int64 a6, const __m128i *a7)
{
  unsigned int v10; // r15d
  __int64 v12; // r15
  size_t v13; // r13
  char **v14; // rax
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  void (__fastcall *v17)(__m128i *, const __m128i *, __int64, double, double, double); // rax
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm4
  __m128i v22; // xmm5
  __m128i v23; // xmm0
  unsigned __int64 v24; // xmm0_8
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rbx
  __int64 v30; // rbx
  char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  __m128i v34; // xmm0
  char *v35; // rsi
  __int64 v36; // rax
  unsigned __int8 v37; // bl
  void *v38; // rax
  void *v39; // rdi
  void *v40; // rdi
  unsigned int v41; // ebp
  const char *v42; // rdi
  const char *v43; // rax
  const char *v44; // r13
  size_t v45; // rax
  size_t v46; // r14
  const char *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  char **v50; // rbx
  const char *v51; // rdi
  char *v52; // rdi
  size_t v53; // rdx
  const char *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  char **v58; // rbx
  __int64 v59; // [rsp+8h] [rbp-210h]
  size_t v60; // [rsp+8h] [rbp-210h]
  __m128i v63; // [rsp+20h] [rbp-1F8h] BYREF
  __m128i v64; // [rsp+30h] [rbp-1E8h]
  __int64 v65; // [rsp+40h] [rbp-1D8h] BYREF
  __m128i v66; // [rsp+48h] [rbp-1D0h] BYREF
  __m128i v67; // [rsp+58h] [rbp-1C0h] BYREF
  __m128i v68; // [rsp+68h] [rbp-1B0h] BYREF
  __m128i v69; // [rsp+80h] [rbp-198h] BYREF
  __m128i v70; // [rsp+90h] [rbp-188h] BYREF
  char **v71; // [rsp+A0h] [rbp-178h]
  void *v72; // [rsp+A8h] [rbp-170h]
  __int64 *v73; // [rsp+B0h] [rbp-168h]
  void *v74; // [rsp+B8h] [rbp-160h] BYREF
  __int128 v75; // [rsp+C0h] [rbp-158h]
  __int64 v76; // [rsp+D0h] [rbp-148h] BYREF
  __m128i v77; // [rsp+D8h] [rbp-140h]
  char **v78; // [rsp+E8h] [rbp-130h]
  void *v79; // [rsp+F0h] [rbp-128h]
  __int128 v80; // [rsp+F8h] [rbp-120h]
  void *v81; // [rsp+108h] [rbp-110h]
  __int128 v82; // [rsp+110h] [rbp-108h]
  __int128 v83; // [rsp+120h] [rbp-F8h]
  __int128 v84; // [rsp+130h] [rbp-E8h]
  __m128i si128; // [rsp+140h] [rbp-D8h]
  __int64 v86; // [rsp+150h] [rbp-C8h]
  Elf64_Rela *v87; // [rsp+158h] [rbp-C0h]
  void *ptr; // [rsp+160h] [rbp-B8h]
  __int128 v89; // [rsp+168h] [rbp-B0h]
  __m128i v90; // [rsp+178h] [rbp-A0h]
  const char *v91; // [rsp+188h] [rbp-90h]
  int v92; // [rsp+190h] [rbp-88h]
  __int16 v93; // [rsp+194h] [rbp-84h]
  __int64 v94; // [rsp+196h] [rbp-82h]
  __int64 v95; // [rsp+19Eh] [rbp-7Ah]
  _BYTE v96[18]; // [rsp+1A6h] [rbp-72h] BYREF
  __int64 v97; // [rsp+1B8h] [rbp-60h]
  __m128i v98; // [rsp+1C0h] [rbp-58h] BYREF
  int v99; // [rsp+1D0h] [rbp-48h]
  unsigned __int8 v100; // [rsp+1D4h] [rbp-44h]
  unsigned __int64 v101; // [rsp+1D8h] [rbp-40h]

  v101 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_70B3E0((__int64)a1, a2) || !(unsigned __int8)sub_70C7A0((__int64)a1, 0) )
    return 0;
  v12 = a3[1];
  if ( !v12 )
  {
    if ( !under_debugger )
      interr(3337);
    BUG();
  }
  v65 = 0;
  if ( !(unsigned __int8)sub_70B780((__int64)a1, &v65) )
    return 0;
  v71 = (char **)a1;
  v69 = 0;
  v70 = 0u;
  v72 = nullptr;
  v73 = a5;
  v74 = nullptr;
  v75 = 0;
  if ( a2 )
  {
    v13 = strlen((const char *)a2);
    v74 = (void *)qvector_reserve(&v74, 0, v13 + 1, 1);
    *(_QWORD *)&v75 = v13 + 1;
    memmove(v74, a2, v13);
    *((_BYTE *)v74 + v13) = 0;
    v14 = v71;
  }
  else
  {
    v14 = (char **)a1;
  }
  v78 = v14;
  v80 = 0;
  *((_QWORD *)&v84 + 1) = 0x300000001LL;
  v82 = 0;
  v83 = 0;
  v89 = 0;
  v91 = "[output stream]";
  v93 = 0;
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B0E5E8), (__m128i)(unsigned __int64)"[input stream]");
  memset(v96, 0, sizeof(v96));
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384260);
  v16 = 0;
  v76 = 0;
  v79 = nullptr;
  v81 = nullptr;
  *(_QWORD *)&v84 = 2;
  v86 = 0x4000000;
  v87 = &stru_40000;
  ptr = nullptr;
  v92 = (int)&loc_444356;
  v94 = 0x100010044LL;
  v95 = 0;
  v97 = 0;
  v99 = 0;
  v100 = 0;
  v64 = 0u;
  v77 = 0;
  v90 = v15;
  v98 = 0;
  v63 = 0;
  v17 = (void (__fastcall *)(__m128i *, const __m128i *, __int64, double, double, double))a7[1].m128i_i64[0];
  if ( v17 )
  {
    v17(&v63, a7, 2, 0.0, *(double *)v15.m128i_i64, 0.0);
    v16 = _mm_loadu_si128(a7 + 1);
  }
  v18 = _mm_load_si128(&v69);
  v69 = _mm_load_si128(&v63);
  v19 = _mm_load_si128(&v70);
  v63 = v18;
  v64 = v19;
  v70 = v16;
  if ( v19.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v19.m128i_i64[0])(&v63, &v63, 3);
  v20 = _mm_loadu_si128(&v66);
  v21 = _mm_loadu_si128(&v67);
  v86 = 0x4000000;
  v22 = _mm_loadu_si128(&v68);
  *(_QWORD *)((char *)&v84 + 4) = 0x100000000LL;
  v23 = _mm_add_epi64(_mm_add_epi64(v20, v21), v22);
  v24 = _mm_add_epi64(v23, _mm_srli_si128(v23, 8)).m128i_u64[0];
  if ( v24 > 0x4000000 )
  {
    v25 = v24;
    v26 = sub_814AF0(v65, v24);
  }
  else
  {
    v25 = -1;
    v26 = sub_814880(v65, -1, v24);
  }
  v29 = (void *)v26;
  if ( !v26 )
  {
    v43 = (const char *)qstrerror(0xFFFFFFFFLL, v25, v27, v28);
    v44 = v43;
    if ( v43 && (v45 = strlen(v43), (v46 = v45) != 0) )
    {
      v52 = (char *)*a1;
      v53 = v45 + 1;
      if ( a1[2] < v45 + 1 )
      {
        v60 = v45 + 1;
        v57 = qvector_reserve(a1, *a1, v53, 1);
        *a1 = v57;
        v53 = v60;
        v52 = (char *)v57;
      }
      a1[1] = v53;
      memmove(v52, v44, v46);
      *(_BYTE *)(*a1 + v46) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  v72 = v29;
  v30 = 0;
  v59 = v12 - 1;
  if ( v12 != 1 )
  {
    do
    {
      v31 = (char *)haystack;
      v32 = *a3 + 24 * v30;
      if ( *(_QWORD *)(v32 + 8) )
        v31 = *(char **)v32;
      v10 = sub_70E2E0((__int64)&v69, v31, nullptr);
      if ( !(_BYTE)v10 )
        goto LABEL_34;
      close_linput(v72);
      v33 = v83;
      *(_QWORD *)&v83 = 0;
      v72 = (void *)sub_813FA0(v33);
      ++v30;
      v34 = _mm_load_si128(&v98);
      v76 = v97;
      v73 = &v76;
      v77 = v34;
    }
    while ( v30 != v59 );
  }
  v35 = (char *)haystack;
  v36 = *a3 + 24LL * a3[1] - 24;
  if ( *(_QWORD *)(v36 + 8) )
    v35 = *(char **)v36;
  v10 = sub_70E2E0((__int64)&v69, v35, a4);
  if ( !(_BYTE)v10 )
  {
LABEL_34:
    v37 = v100;
    goto LABEL_35;
  }
  if ( !a6 || *(_QWORD *)a6 == v97 && *(_OWORD *)&v98 - *(_OWORD *)(a6 + 8) == 0 )
  {
    close_linput((void *)a1[82]);
    v38 = (void *)a1[81];
    v39 = (void *)a1[80];
    a1[82] = 0;
    if ( v38 != v39 )
    {
      close_linput(v38);
      v39 = (void *)a1[80];
    }
    a1[81] = 0;
    close_linput(v39);
    a1[80] = 0;
    v40 = v72;
    a1[6] = 0;
    v41 = v100;
    a1[1] = 0;
    *((_BYTE *)a1 + 464) = 0;
    a1[75] = 0;
    a1[84] = 0;
    close_linput(v40);
    v72 = nullptr;
    if ( *((_QWORD *)&v83 + 1) )
    {
      qfclose(*((_QWORD *)&v83 + 1));
      *((_QWORD *)&v83 + 1) = 0;
    }
    if ( (_QWORD)v83 )
    {
      qfclose(v83);
      *(_QWORD *)&v83 = 0;
      if ( (unsigned __int64)v82 > 1 )
      {
        if ( !(_BYTE)v41 )
          goto LABEL_68;
        v54 = haystack;
        if ( (_QWORD)v80 )
          v54 = (const char *)v79;
        if ( !(unsigned int)qrename(v81, v54) )
        {
          v37 = v100;
          v10 = v41;
          goto LABEL_35;
        }
        v58 = v78;
        qstrerror(0xFFFFFFFFLL, v54, v55, v56);
        sub_3573A0(v58);
        v10 = 0;
        if ( (_QWORD)v82 )
LABEL_68:
          v51 = (const char *)v81;
        else
          v51 = haystack;
        qunlink(v51);
      }
    }
    goto LABEL_34;
  }
  sub_3573A0(v71);
  v100 = 0;
  v37 = 0;
  v10 = 0;
LABEL_35:
  close_linput(v72);
  v72 = nullptr;
  if ( *((_QWORD *)&v83 + 1) )
  {
    qfclose(*((_QWORD *)&v83 + 1));
    *((_QWORD *)&v83 + 1) = 0;
  }
  if ( !(_QWORD)v83 )
    goto LABEL_42;
  qfclose(v83);
  *(_QWORD *)&v83 = 0;
  if ( (unsigned __int64)v82 <= 1 )
    goto LABEL_42;
  if ( !v37 )
    goto LABEL_40;
  v47 = haystack;
  if ( (_QWORD)v80 )
    v47 = (const char *)v79;
  if ( !(unsigned int)qrename(v81, v47) )
    goto LABEL_42;
  v50 = v78;
  qstrerror(0xFFFFFFFFLL, v47, v48, v49);
  sub_3573A0(v50);
  if ( (_QWORD)v82 )
LABEL_40:
    v42 = (const char *)v81;
  else
    v42 = haystack;
  qunlink(v42);
LABEL_42:
  v71 = nullptr;
  v73 = nullptr;
  if ( ptr )
  {
    *(_QWORD *)&v89 = 0;
    qfree(ptr);
  }
  if ( *((_QWORD *)&v83 + 1) )
  {
    qfclose(*((_QWORD *)&v83 + 1));
    *((_QWORD *)&v83 + 1) = 0;
  }
  if ( (_QWORD)v83 )
  {
    qfclose(v83);
    *(_QWORD *)&v83 = 0;
    if ( (unsigned __int64)v82 > 1 )
      qunlink(v81);
  }
  v78 = nullptr;
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( v70.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v70.m128i_i64[0])(&v69, &v69, 3);
  return v10;
}

