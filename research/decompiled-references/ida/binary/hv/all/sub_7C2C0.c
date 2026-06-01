__int64 __fastcall sub_7C2C0(
        __int64 *a1,
        void *a2,
        _QWORD *a3,
        void *a4,
        __int64 *a5,
        __int64 a6,
        double a7,
        const __m128i *a8)
{
  unsigned int v11; // r15d
  __int64 v13; // r15
  size_t v14; // r13
  char **v15; // rax
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  void (__fastcall *v18)(__m128i *, const __m128i *, __int64, double, double, double); // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm4
  __m128i v23; // xmm5
  __m128i v24; // xmm0
  unsigned __int64 v25; // xmm0_8
  __int64 v26; // rax
  void *v27; // rbx
  __int64 v28; // rbx
  char *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdi
  __m128i v32; // xmm0
  char *v33; // rsi
  __int64 v34; // rax
  unsigned __int8 v35; // bl
  void *v36; // rax
  void *v37; // rdi
  void *v38; // rdi
  unsigned int v39; // ebp
  const char *v40; // rdi
  const char *v41; // rax
  const char *v42; // r13
  size_t v43; // rax
  size_t v44; // r14
  const char *v45; // rsi
  char **v46; // rbx
  const char *v47; // rdi
  char *v48; // rdi
  size_t v49; // rdx
  const char *v50; // rsi
  __int64 v51; // rax
  char **v52; // rbx
  __int64 v53; // [rsp+8h] [rbp-210h]
  size_t v54; // [rsp+8h] [rbp-210h]
  __m128i v57; // [rsp+20h] [rbp-1F8h] BYREF
  __m128i v58; // [rsp+30h] [rbp-1E8h]
  __int64 v59; // [rsp+40h] [rbp-1D8h] BYREF
  __m128i v60; // [rsp+48h] [rbp-1D0h] BYREF
  __m128i v61; // [rsp+58h] [rbp-1C0h] BYREF
  __m128i v62; // [rsp+68h] [rbp-1B0h] BYREF
  __m128i v63; // [rsp+80h] [rbp-198h] BYREF
  __m128i v64; // [rsp+90h] [rbp-188h] BYREF
  char **v65; // [rsp+A0h] [rbp-178h]
  void *v66; // [rsp+A8h] [rbp-170h]
  __int64 *v67; // [rsp+B0h] [rbp-168h]
  void *v68; // [rsp+B8h] [rbp-160h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-158h]
  __int64 v70; // [rsp+D0h] [rbp-148h] BYREF
  __m128i v71; // [rsp+D8h] [rbp-140h]
  char **v72; // [rsp+E8h] [rbp-130h]
  void *v73; // [rsp+F0h] [rbp-128h]
  __int128 v74; // [rsp+F8h] [rbp-120h]
  void *v75; // [rsp+108h] [rbp-110h]
  __int128 v76; // [rsp+110h] [rbp-108h]
  __int128 v77; // [rsp+120h] [rbp-F8h]
  __int128 v78; // [rsp+130h] [rbp-E8h]
  __m128i si128; // [rsp+140h] [rbp-D8h]
  __int64 v80; // [rsp+150h] [rbp-C8h]
  void *v81; // [rsp+158h] [rbp-C0h]
  void *ptr; // [rsp+160h] [rbp-B8h]
  __int128 v83; // [rsp+168h] [rbp-B0h]
  __m128i v84; // [rsp+178h] [rbp-A0h]
  const char *v85; // [rsp+188h] [rbp-90h]
  int v86; // [rsp+190h] [rbp-88h]
  __int16 v87; // [rsp+194h] [rbp-84h]
  __int64 v88; // [rsp+196h] [rbp-82h]
  __int64 v89; // [rsp+19Eh] [rbp-7Ah]
  _BYTE v90[18]; // [rsp+1A6h] [rbp-72h] BYREF
  __int64 v91; // [rsp+1B8h] [rbp-60h]
  __m128i v92; // [rsp+1C0h] [rbp-58h] BYREF
  int v93; // [rsp+1D0h] [rbp-48h]
  unsigned __int8 v94; // [rsp+1D4h] [rbp-44h]
  unsigned __int64 v95; // [rsp+1D8h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_795C0((__int64)a1, a2) || !(unsigned __int8)sub_7A8F0((__int64)a1, 0, a7) )
    return 0;
  v13 = a3[1];
  if ( !v13 )
  {
    if ( !byte_1671A1 )
      sub_96F80(3337);
    BUG();
  }
  v59 = 0;
  if ( !(unsigned __int8)sub_79960((__int64)a1, &v59) )
    return 0;
  v65 = (char **)a1;
  v63 = 0;
  v64 = 0u;
  v66 = nullptr;
  v67 = a5;
  v68 = nullptr;
  v69 = 0;
  if ( a2 )
  {
    v14 = strlen((const char *)a2);
    v68 = (void *)sub_96080(&v68, 0, v14 + 1, 1);
    *(_QWORD *)&v69 = v14 + 1;
    memmove(v68, a2, v14);
    *((_BYTE *)v68 + v14) = 0;
    v15 = v65;
  }
  else
  {
    v15 = (char **)a1;
  }
  v72 = v15;
  v74 = 0;
  *((_QWORD *)&v78 + 1) = 0x300000001LL;
  v76 = 0;
  v77 = 0;
  v83 = 0;
  v85 = "[output stream]";
  v87 = 0;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_163CE8), (__m128i)(unsigned __int64)"[input stream]");
  memset(v90, 0, sizeof(v90));
  si128 = _mm_load_si128((const __m128i *)&xmmword_1303A0);
  v17 = 0;
  v70 = 0;
  v73 = nullptr;
  v75 = nullptr;
  *(_QWORD *)&v78 = 2;
  v80 = 0x4000000;
  v81 = &loc_40000;
  ptr = nullptr;
  v86 = 4473686;
  v88 = 0x100010044LL;
  v89 = 0;
  v91 = 0;
  v93 = 0;
  v94 = 0;
  v58 = 0u;
  v71 = 0;
  v84 = v16;
  v92 = 0;
  v57 = 0;
  v18 = (void (__fastcall *)(__m128i *, const __m128i *, __int64, double, double, double))a8[1].m128i_i64[0];
  if ( v18 )
  {
    v18(&v57, a8, 2, 0.0, *(double *)v16.m128i_i64, 0.0);
    v17 = _mm_loadu_si128(a8 + 1);
  }
  v19 = _mm_load_si128(&v63);
  v63 = _mm_load_si128(&v57);
  v20 = _mm_load_si128(&v64);
  v57 = v19;
  v58 = v20;
  v64 = v17;
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v20.m128i_i64[0])(&v57, &v57, 3);
  v21 = _mm_loadu_si128(&v60);
  v22 = _mm_loadu_si128(&v61);
  v80 = 0x4000000;
  v23 = _mm_loadu_si128(&v62);
  *(_QWORD *)((char *)&v78 + 4) = 0x100000000LL;
  v24 = _mm_add_epi64(_mm_add_epi64(v21, v22), v23);
  v25 = _mm_add_epi64(v24, _mm_srli_si128(v24, 8)).m128i_u64[0];
  if ( v25 > 0x4000000 )
    v26 = sub_92B00(v59, v25);
  else
    v26 = sub_92890(v59, -1, v25);
  v27 = (void *)v26;
  if ( !v26 )
  {
    v41 = (const char *)sub_978C0(0xFFFFFFFFLL);
    v42 = v41;
    if ( v41 && (v43 = strlen(v41), (v44 = v43) != 0) )
    {
      v48 = (char *)*a1;
      v49 = v43 + 1;
      if ( a1[2] < v43 + 1 )
      {
        v54 = v43 + 1;
        v51 = sub_96080(a1, *a1, v49, 1);
        *a1 = v51;
        v49 = v54;
        v48 = (char *)v51;
      }
      a1[1] = v49;
      memmove(v48, v42, v44);
      *(_BYTE *)(*a1 + v44) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  v66 = v27;
  v28 = 0;
  v53 = v13 - 1;
  if ( v13 != 1 )
  {
    do
    {
      v29 = (char *)haystack;
      v30 = *a3 + 24 * v28;
      if ( *(_QWORD *)(v30 + 8) )
        v29 = *(char **)v30;
      v11 = sub_7B650((__int64)&v63, v29, nullptr);
      if ( !(_BYTE)v11 )
        goto LABEL_34;
      sub_92380(v66);
      v31 = v77;
      *(_QWORD *)&v77 = 0;
      v66 = (void *)sub_922E0(v31);
      ++v28;
      v32 = _mm_load_si128(&v92);
      v70 = v91;
      v67 = &v70;
      v71 = v32;
    }
    while ( v28 != v53 );
  }
  v33 = (char *)haystack;
  v34 = *a3 + 24LL * a3[1] - 24;
  if ( *(_QWORD *)(v34 + 8) )
    v33 = *(char **)v34;
  v11 = sub_7B650((__int64)&v63, v33, a4);
  if ( !(_BYTE)v11 )
  {
LABEL_34:
    v35 = v94;
    goto LABEL_35;
  }
  if ( !a6 || *(_QWORD *)a6 == v91 && *(_OWORD *)&v92 - *(_OWORD *)(a6 + 8) == 0 )
  {
    sub_92380((void *)a1[82]);
    v36 = (void *)a1[81];
    v37 = (void *)a1[80];
    a1[82] = 0;
    if ( v36 != v37 )
    {
      sub_92380(v36);
      v37 = (void *)a1[80];
    }
    a1[81] = 0;
    sub_92380(v37);
    a1[80] = 0;
    v38 = v66;
    a1[6] = 0;
    v39 = v94;
    a1[1] = 0;
    *((_BYTE *)a1 + 464) = 0;
    a1[75] = 0;
    a1[84] = 0;
    sub_92380(v38);
    v66 = nullptr;
    if ( *((_QWORD *)&v77 + 1) )
    {
      sub_959E0(*((_QWORD *)&v77 + 1));
      *((_QWORD *)&v77 + 1) = 0;
    }
    if ( (_QWORD)v77 )
    {
      sub_959E0(v77);
      *(_QWORD *)&v77 = 0;
      if ( (unsigned __int64)v76 > 1 )
      {
        if ( !(_BYTE)v39 )
          goto LABEL_68;
        v50 = haystack;
        if ( (_QWORD)v74 )
          v50 = (const char *)v73;
        if ( !(unsigned int)sub_95A50(v75, v50) )
        {
          v35 = v94;
          v11 = v39;
          goto LABEL_35;
        }
        v52 = v72;
        sub_978C0(0xFFFFFFFFLL);
        sub_17D80(v52);
        v11 = 0;
        if ( (_QWORD)v76 )
LABEL_68:
          v47 = (const char *)v75;
        else
          v47 = haystack;
        sub_95A30(v47);
      }
    }
    goto LABEL_34;
  }
  sub_17D80(v65);
  v94 = 0;
  v35 = 0;
  v11 = 0;
LABEL_35:
  sub_92380(v66);
  v66 = nullptr;
  if ( *((_QWORD *)&v77 + 1) )
  {
    sub_959E0(*((_QWORD *)&v77 + 1));
    *((_QWORD *)&v77 + 1) = 0;
  }
  if ( !(_QWORD)v77 )
    goto LABEL_42;
  sub_959E0(v77);
  *(_QWORD *)&v77 = 0;
  if ( (unsigned __int64)v76 <= 1 )
    goto LABEL_42;
  if ( !v35 )
    goto LABEL_40;
  v45 = haystack;
  if ( (_QWORD)v74 )
    v45 = (const char *)v73;
  if ( !(unsigned int)sub_95A50(v75, v45) )
    goto LABEL_42;
  v46 = v72;
  sub_978C0(0xFFFFFFFFLL);
  sub_17D80(v46);
  if ( (_QWORD)v76 )
LABEL_40:
    v40 = (const char *)v75;
  else
    v40 = haystack;
  sub_95A30(v40);
LABEL_42:
  v65 = nullptr;
  v67 = nullptr;
  if ( ptr )
  {
    *(_QWORD *)&v83 = 0;
    j__free(ptr);
  }
  if ( *((_QWORD *)&v77 + 1) )
  {
    sub_959E0(*((_QWORD *)&v77 + 1));
    *((_QWORD *)&v77 + 1) = 0;
  }
  if ( (_QWORD)v77 )
  {
    sub_959E0(v77);
    *(_QWORD *)&v77 = 0;
    if ( (unsigned __int64)v76 > 1 )
      sub_95A30(v75);
  }
  v72 = nullptr;
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    j__free(v75);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    j__free(v73);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    j__free(v68);
  }
  if ( v64.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v64.m128i_i64[0])(&v63, &v63, 3);
  return v11;
}

