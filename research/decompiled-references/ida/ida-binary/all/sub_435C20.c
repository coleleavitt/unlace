__int64 __fastcall sub_435C20(
        __int64 *a1,
        const char *a2,
        int a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __m128 v15; // xmm0
  __m128i v16; // xmm0
  const char *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 v22; // rcx
  __int64 v23; // rdx
  const char **v24; // rbx
  const char **v25; // r12
  const char **v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rbx
  const char **v29; // rax
  const char *v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 (__fastcall **v41)(); // r15
  __m128i v42; // xmm0
  char *v43; // rax
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // rdi
  __m128i v46; // xmm0
  char *v47; // rax
  const char *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // [rsp-8h] [rbp-158h]
  __m128i v51; // [rsp+0h] [rbp-150h] BYREF
  __int64 v52; // [rsp+10h] [rbp-140h]
  int v53; // [rsp+1Ch] [rbp-134h]
  char *v54; // [rsp+20h] [rbp-130h]
  __int64 (__fastcall ***v55)(); // [rsp+28h] [rbp-128h]
  unsigned __int64 v56; // [rsp+30h] [rbp-120h] BYREF
  __int128 v57; // [rsp+38h] [rbp-118h]
  const char **v58; // [rsp+50h] [rbp-100h] BYREF
  __int128 v59; // [rsp+58h] [rbp-F8h]
  __int64 (__fastcall **v60)(); // [rsp+70h] [rbp-E0h] BYREF
  _BYTE v61[24]; // [rsp+78h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+90h] [rbp-C0h]
  __int128 v63; // [rsp+98h] [rbp-B8h]
  __int64 v64; // [rsp+A8h] [rbp-A8h]
  __int128 v65; // [rsp+B0h] [rbp-A0h] BYREF
  __m128i v66; // [rsp+C0h] [rbp-90h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-80h] BYREF
  __m128i v68; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v69; // [rsp+F0h] [rbp-60h] BYREF
  __m128 v70; // [rsp+100h] [rbp-50h]
  unsigned __int64 v71; // [rsp+118h] [rbp-38h]

  v53 = a3;
  v54 = (char *)a2;
  v52 = a4;
  v71 = __readfsqword(0x28u);
  v12 = sub_426230(a1, a2);
  v13 = a1[1];
  v56 = 0;
  v14 = (__int64)v12;
  v65 = 0;
  v66 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_86B358), (__m128i)(unsigned __int64)sub_433770);
  v57 = 0;
  if ( v13 )
  {
    v37 = qvector_reserve(&v56, 0, v13, 24);
    v38 = a1[1];
    v56 = v37;
    if ( *((_QWORD *)v54 + 2) < v38 )
    {
      *(_QWORD *)v54 = qvector_reserve(v54, *(_QWORD *)v54, v38, 24);
      v38 = a1[1];
    }
    v39 = *a1;
    v40 = *a1 + 48 * v38;
    if ( *a1 != v40 )
    {
      v55 = &v60;
      do
      {
        v44 = (unsigned __int64)v55;
        sub_417500((__int64)v55, v14, v39);
        v49 = v57;
        v48 = (const char *)v56;
        v45 = v57 + 1;
        if ( v44 < v56 || v44 >= v56 + 24LL * *((_QWORD *)&v57 + 1) )
        {
          if ( *((_QWORD *)&v57 + 1) < v45 )
          {
            v56 = qvector_reserve(&v56, v56, v57 + 1, 24);
            v48 = (const char *)v56;
            v49 = v57;
          }
          v46 = _mm_loadu_si128((const __m128i *)v61);
          v47 = (char *)&v48[24 * v49];
          *(_QWORD *)v47 = v60;
          *(__m128i *)(v47 + 8) = v46;
          *(_QWORD *)&v57 = v57 + 1;
        }
        else
        {
          a7 = 0;
          v41 = v60;
          v42 = _mm_loadl_epi64((const __m128i *)v61);
          v60 = nullptr;
          a6 = (__m128)_mm_loadl_epi64((const __m128i *)&v61[8]);
          *(_OWORD *)v61 = 0;
          if ( *((_QWORD *)&v57 + 1) < v45 )
          {
            v51.m128i_i64[0] = a6.m128_u64[0];
            v51.m128i_i64[1] = v42.m128i_i64[0];
            v56 = qvector_reserve(&v56, v56, v57 + 1, 24);
            v48 = (const char *)v56;
            a6 = (__m128)_mm_loadl_epi64(&v51);
            v42 = _mm_loadl_epi64((const __m128i *)&v51.m128i_u64[1]);
            v49 = v57;
          }
          v43 = (char *)&v48[24 * v49];
          *(_QWORD *)v43 = v41;
          *(__m128i *)(v43 + 8) = _mm_unpacklo_epi64(v42, (__m128i)a6);
          *(_QWORD *)&v57 = v57 + 1;
          if ( v60 )
          {
            *(_QWORD *)v61 = 0;
            qfree(v60, v48);
          }
        }
        v39 += 48;
      }
      while ( v40 != v39 );
    }
  }
  sub_4341F0((_DWORD)QT::QCoreApplication::self + 16, (int)"Collecting local files");
  memset(v61, 0, sizeof(v61));
  v60 = &local_site_t___vtable;
  v55 = &v60;
  v62 = 0;
  v64 = 0;
  v63 = 0;
  sub_417360(v14, &v60);
  v58 = nullptr;
  v59 = 0;
  v15 = 0;
  v68 = 0u;
  v67 = 0;
  if ( v66.m128i_i64[0] )
  {
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v66.m128i_i64[0])(&v67, &v65, 2);
    v16 = _mm_load_si128(&v66);
    v70 = 0u;
    v68 = v16;
    v15 = 0;
    v69 = 0;
    if ( v66.m128i_i64[0] )
    {
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v66.m128i_i64[0])(&v69, &v67, 2);
      v15 = (__m128)_mm_load_si128(&v68);
      v70 = v15;
    }
  }
  else
  {
    v70 = 0u;
    v69 = 0;
  }
  v51.m128i_i64[1] = (__int64)&v58;
  v17 = v54;
  LOBYTE(v54) = lsite_collect_files(v55, v54, &v58, &v56, (unsigned __int8)v53, &v69, v52);
  v22 = v50;
  if ( v70.m128_u64[0] )
  {
    v17 = (const char *)&v69;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v70.m128_u64[0])(&v69, &v69, 3);
  }
  if ( v68.m128i_i64[0] )
  {
    v17 = (const char *)&v67;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v68.m128i_i64[0])(&v67, &v67, 3);
  }
  v23 = (__int64)v58;
  v24 = v58;
  v25 = &v58[3 * v59];
  if ( v25 != v58 )
  {
    do
    {
      v17 = &s1;
      if ( v24[1] )
        v17 = *v24;
      sub_169700(
        (int)"%s\n",
        (__int64)v17,
        v23,
        v22,
        v18,
        v19,
        v15,
        a6,
        a7,
        (__m128)(unsigned __int64)sub_433770,
        v20,
        v21,
        a11,
        a12,
        v51.m128i_i8[0]);
      v24 += 3;
    }
    while ( v25 != v24 );
  }
  sub_541CC0(QT::QCoreApplication::self + 2);
  v26 = v58;
  if ( v58 )
  {
    v27 = v59;
    if ( (_QWORD)v59 )
    {
      v28 = 0;
      do
      {
        v29 = &v26[3 * v28];
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = nullptr;
          qfree(v30, v17);
          v26 = v58;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v59 = 0;
    qfree(v26, v17);
  }
  v64 = 0;
  v60 = &local_site_t___vtable;
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62, v17);
  }
  if ( *(_QWORD *)v61 )
  {
    *(_QWORD *)&v61[8] = 0;
    qfree(*(_QWORD *)v61, v17);
  }
  v31 = v56;
  if ( v56 )
  {
    v32 = v57;
    if ( (_QWORD)v57 )
    {
      v33 = 0;
      do
      {
        v34 = (__int64 *)(v31 + 24 * v33);
        v35 = *v34;
        if ( *v34 )
        {
          v34[1] = 0;
          qfree(v35, v17);
          v31 = v56;
        }
        ++v33;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v57 = 0;
    qfree(v31, v17);
  }
  if ( v66.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v66.m128i_i64[0])(&v65, &v65, 3);
  return (unsigned __int8)v54;
}
