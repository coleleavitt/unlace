__int64 __fastcall sub_72F4C0(__int64 *a1, void *a2, _QWORD *a3, void *a4, __int64 *a5, __int64 a6, const __m128i *a7)
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
  __int64 v25; // rax
  void *v26; // rbx
  __int64 v27; // rbx
  char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  __m128i v31; // xmm0
  char *v32; // rsi
  __int64 v33; // rax
  unsigned __int8 v34; // bl
  void *v35; // rax
  void *v36; // rdi
  void *v37; // rdi
  unsigned int v38; // ebp
  const char *v39; // rdi
  const char *v40; // rax
  const char *v41; // r13
  size_t v42; // rax
  size_t v43; // r14
  const char *v44; // rsi
  char **v45; // rbx
  const char *v46; // rdi
  char *v47; // rdi
  size_t v48; // rdx
  const char *v49; // rsi
  __int64 v50; // rax
  char **v51; // rbx
  __int64 v52; // [rsp+8h] [rbp-210h]
  size_t v53; // [rsp+8h] [rbp-210h]
  __m128i v56; // [rsp+20h] [rbp-1F8h] BYREF
  __m128i v57; // [rsp+30h] [rbp-1E8h]
  __int64 v58; // [rsp+40h] [rbp-1D8h] BYREF
  __m128i v59; // [rsp+48h] [rbp-1D0h] BYREF
  __m128i v60; // [rsp+58h] [rbp-1C0h] BYREF
  __m128i v61; // [rsp+68h] [rbp-1B0h] BYREF
  __m128i v62; // [rsp+80h] [rbp-198h] BYREF
  __m128i v63; // [rsp+90h] [rbp-188h] BYREF
  char **v64; // [rsp+A0h] [rbp-178h]
  void *v65; // [rsp+A8h] [rbp-170h]
  __int64 *v66; // [rsp+B0h] [rbp-168h]
  void *v67; // [rsp+B8h] [rbp-160h] BYREF
  __int128 v68; // [rsp+C0h] [rbp-158h]
  __int64 v69; // [rsp+D0h] [rbp-148h] BYREF
  __m128i v70; // [rsp+D8h] [rbp-140h]
  char **v71; // [rsp+E8h] [rbp-130h]
  void *v72; // [rsp+F0h] [rbp-128h]
  __int128 v73; // [rsp+F8h] [rbp-120h]
  void *v74; // [rsp+108h] [rbp-110h]
  __int128 v75; // [rsp+110h] [rbp-108h]
  __int128 v76; // [rsp+120h] [rbp-F8h]
  __int128 v77; // [rsp+130h] [rbp-E8h]
  __m128i si128; // [rsp+140h] [rbp-D8h]
  __int64 v79; // [rsp+150h] [rbp-C8h]
  __int64 v80; // [rsp+158h] [rbp-C0h]
  void *ptr; // [rsp+160h] [rbp-B8h]
  __int128 v82; // [rsp+168h] [rbp-B0h]
  __m128i v83; // [rsp+178h] [rbp-A0h]
  const char *v84; // [rsp+188h] [rbp-90h]
  int v85; // [rsp+190h] [rbp-88h]
  __int16 v86; // [rsp+194h] [rbp-84h]
  __int64 v87; // [rsp+196h] [rbp-82h]
  __int64 v88; // [rsp+19Eh] [rbp-7Ah]
  _BYTE v89[18]; // [rsp+1A6h] [rbp-72h] BYREF
  __int64 v90; // [rsp+1B8h] [rbp-60h]
  __m128i v91; // [rsp+1C0h] [rbp-58h] BYREF
  int v92; // [rsp+1D0h] [rbp-48h]
  unsigned __int8 v93; // [rsp+1D4h] [rbp-44h]
  unsigned __int64 v94; // [rsp+1D8h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_72B9C0((__int64)a1, a2) || !(unsigned __int8)sub_72CCF0((__int64)a1, 0) )
    return 0;
  v12 = a3[1];
  if ( !v12 )
  {
    if ( !under_debugger )
      interr(3337);
    BUG();
  }
  v58 = 0;
  if ( !(unsigned __int8)sub_72BD60((__int64)a1, &v58) )
    return 0;
  v64 = (char **)a1;
  v62 = 0;
  v63 = 0u;
  v65 = nullptr;
  v66 = a5;
  v67 = nullptr;
  v68 = 0;
  if ( a2 )
  {
    v13 = strlen((const char *)a2);
    v67 = (void *)qvector_reserve(&v67, 0, v13 + 1, 1);
    *(_QWORD *)&v68 = v13 + 1;
    memmove(v67, a2, v13);
    *((_BYTE *)v67 + v13) = 0;
    v14 = v64;
  }
  else
  {
    v14 = (char **)a1;
  }
  v71 = v14;
  v73 = 0;
  *((_QWORD *)&v77 + 1) = 0x300000001LL;
  v75 = 0;
  v76 = 0;
  v82 = 0;
  v84 = "[output stream]";
  v86 = 0;
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B38588), (__m128i)(unsigned __int64)"[input stream]");
  memset(v89, 0, sizeof(v89));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8290);
  v16 = 0;
  v69 = 0;
  v72 = nullptr;
  v74 = nullptr;
  *(_QWORD *)&v77 = 2;
  v79 = 0x4000000;
  v80 = 0x40000;
  ptr = nullptr;
  v85 = 4473686;
  v87 = 0x100010044LL;
  v88 = 0;
  v90 = 0;
  v92 = 0;
  v93 = 0;
  v57 = 0u;
  v70 = 0;
  v83 = v15;
  v91 = 0;
  v56 = 0;
  v17 = (void (__fastcall *)(__m128i *, const __m128i *, __int64, double, double, double))a7[1].m128i_i64[0];
  if ( v17 )
  {
    v17(&v56, a7, 2, 0.0, *(double *)v15.m128i_i64, 0.0);
    v16 = _mm_loadu_si128(a7 + 1);
  }
  v18 = _mm_load_si128(&v62);
  v62 = _mm_load_si128(&v56);
  v19 = _mm_load_si128(&v63);
  v56 = v18;
  v57 = v19;
  v63 = v16;
  if ( v19.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v19.m128i_i64[0])(&v56, &v56, 3);
  v20 = _mm_loadu_si128(&v59);
  v21 = _mm_loadu_si128(&v60);
  v79 = 0x4000000;
  v22 = _mm_loadu_si128(&v61);
  *(_QWORD *)((char *)&v77 + 4) = 0x100000000LL;
  v23 = _mm_add_epi64(_mm_add_epi64(v20, v21), v22);
  v24 = _mm_add_epi64(v23, _mm_srli_si128(v23, 8)).m128i_u64[0];
  if ( v24 > 0x4000000 )
    v25 = sub_837EB0(v58, v24);
  else
    v25 = sub_837C40(v58, -1, v24);
  v26 = (void *)v25;
  if ( !v25 )
  {
    v40 = (const char *)qstrerror(0xFFFFFFFFLL);
    v41 = v40;
    if ( v40 && (v42 = strlen(v40), (v43 = v42) != 0) )
    {
      v47 = (char *)*a1;
      v48 = v42 + 1;
      if ( a1[2] < v42 + 1 )
      {
        v53 = v42 + 1;
        v50 = qvector_reserve(a1, *a1, v48, 1);
        *a1 = v50;
        v48 = v53;
        v47 = (char *)v50;
      }
      a1[1] = v48;
      memmove(v47, v41, v43);
      *(_BYTE *)(*a1 + v43) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  v65 = v26;
  v27 = 0;
  v52 = v12 - 1;
  if ( v12 != 1 )
  {
    do
    {
      v28 = (char *)haystack;
      v29 = *a3 + 24 * v27;
      if ( *(_QWORD *)(v29 + 8) )
        v28 = *(char **)v29;
      v10 = sub_72E850((__int64)&v62, v28, nullptr);
      if ( !(_BYTE)v10 )
        goto LABEL_34;
      close_linput(v65);
      v30 = v76;
      *(_QWORD *)&v76 = 0;
      v65 = (void *)sub_837360(v30);
      ++v27;
      v31 = _mm_load_si128(&v91);
      v69 = v90;
      v66 = &v69;
      v70 = v31;
    }
    while ( v27 != v52 );
  }
  v32 = (char *)haystack;
  v33 = *a3 + 24LL * a3[1] - 24;
  if ( *(_QWORD *)(v33 + 8) )
    v32 = *(char **)v33;
  v10 = sub_72E850((__int64)&v62, v32, a4);
  if ( !(_BYTE)v10 )
  {
LABEL_34:
    v34 = v93;
    goto LABEL_35;
  }
  if ( !a6 || *(_QWORD *)a6 == v90 && *(_OWORD *)&v91 - *(_OWORD *)(a6 + 8) == 0 )
  {
    close_linput((void *)a1[82]);
    v35 = (void *)a1[81];
    v36 = (void *)a1[80];
    a1[82] = 0;
    if ( v35 != v36 )
    {
      close_linput(v35);
      v36 = (void *)a1[80];
    }
    a1[81] = 0;
    close_linput(v36);
    a1[80] = 0;
    v37 = v65;
    a1[6] = 0;
    v38 = v93;
    a1[1] = 0;
    *((_BYTE *)a1 + 464) = 0;
    a1[75] = 0;
    a1[84] = 0;
    close_linput(v37);
    v65 = nullptr;
    if ( *((_QWORD *)&v76 + 1) )
    {
      qfclose(*((_QWORD *)&v76 + 1));
      *((_QWORD *)&v76 + 1) = 0;
    }
    if ( (_QWORD)v76 )
    {
      qfclose(v76);
      *(_QWORD *)&v76 = 0;
      if ( (unsigned __int64)v75 > 1 )
      {
        if ( !(_BYTE)v38 )
          goto LABEL_68;
        v49 = haystack;
        if ( (_QWORD)v73 )
          v49 = (const char *)v72;
        if ( !(unsigned int)qrename(v74, v49) )
        {
          v34 = v93;
          v10 = v38;
          goto LABEL_35;
        }
        v51 = v71;
        qstrerror(0xFFFFFFFFLL);
        sub_35A790(v51);
        v10 = 0;
        if ( (_QWORD)v75 )
LABEL_68:
          v46 = (const char *)v74;
        else
          v46 = haystack;
        qunlink(v46);
      }
    }
    goto LABEL_34;
  }
  sub_35A790(v64);
  v93 = 0;
  v34 = 0;
  v10 = 0;
LABEL_35:
  close_linput(v65);
  v65 = nullptr;
  if ( *((_QWORD *)&v76 + 1) )
  {
    qfclose(*((_QWORD *)&v76 + 1));
    *((_QWORD *)&v76 + 1) = 0;
  }
  if ( !(_QWORD)v76 )
    goto LABEL_42;
  qfclose(v76);
  *(_QWORD *)&v76 = 0;
  if ( (unsigned __int64)v75 <= 1 )
    goto LABEL_42;
  if ( !v34 )
    goto LABEL_40;
  v44 = haystack;
  if ( (_QWORD)v73 )
    v44 = (const char *)v72;
  if ( !(unsigned int)qrename(v74, v44) )
    goto LABEL_42;
  v45 = v71;
  qstrerror(0xFFFFFFFFLL);
  sub_35A790(v45);
  if ( (_QWORD)v75 )
LABEL_40:
    v39 = (const char *)v74;
  else
    v39 = haystack;
  qunlink(v39);
LABEL_42:
  v64 = nullptr;
  v66 = nullptr;
  if ( ptr )
  {
    *(_QWORD *)&v82 = 0;
    qfree(ptr);
  }
  if ( *((_QWORD *)&v76 + 1) )
  {
    qfclose(*((_QWORD *)&v76 + 1));
    *((_QWORD *)&v76 + 1) = 0;
  }
  if ( (_QWORD)v76 )
  {
    qfclose(v76);
    *(_QWORD *)&v76 = 0;
    if ( (unsigned __int64)v75 > 1 )
      qunlink(v74);
  }
  v71 = nullptr;
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v72);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  if ( v63.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v63.m128i_i64[0])(&v62, &v62, 3);
  return v10;
}
