__m128i *__fastcall sub_40D220(__m128i *a1, __int64 *a2, char a3, __int64 a4)
{
  __m128i v4; // xmm0
  __int64 v7; // rdx
  double v8; // xmm0_8
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  const char *v11; // r13
  double v12; // xmm0_8
  size_t v13; // rax
  char *v14; // r13
  unsigned __int64 v15; // rdx
  double v16; // xmm0_8
  void **v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  double v21; // xmm0_8
  unsigned __int64 v22; // rdx
  size_t v23; // rax
  const char *v24; // r15
  double v25; // xmm0_8
  size_t v26; // rax
  unsigned __int64 v27; // rdx
  double v28; // xmm0_8
  __int64 v29; // rdx
  __int64 v30; // rcx
  double v31; // xmm0_8
  size_t v32; // rax
  char *v33; // r13
  unsigned __int64 v34; // rdx
  double v35; // xmm0_8
  __int64 v36; // rdx
  __int64 v37; // rcx
  double v38; // xmm0_8
  size_t v39; // rax
  char *v40; // r13
  unsigned __int64 v41; // rdx
  double v42; // xmm0_8
  __int64 v43; // rdx
  __int64 v44; // rcx
  const char *sa; // [rsp+48h] [rbp-2A8h]
  __int64 v47; // [rsp+58h] [rbp-298h] BYREF
  const char *v48; // [rsp+60h] [rbp-290h] BYREF
  __int128 v49; // [rsp+68h] [rbp-288h]
  void *v50[4]; // [rsp+80h] [rbp-270h] BYREF
  void *v51[4]; // [rsp+A0h] [rbp-250h] BYREF
  void *v52[4]; // [rsp+C0h] [rbp-230h] BYREF
  void *v53[4]; // [rsp+E0h] [rbp-210h] BYREF
  void *v54[4]; // [rsp+100h] [rbp-1F0h] BYREF
  void *v55[4]; // [rsp+120h] [rbp-1D0h] BYREF
  void *v56[4]; // [rsp+140h] [rbp-1B0h] BYREF
  void *v57[4]; // [rsp+160h] [rbp-190h] BYREF
  void *v58[4]; // [rsp+180h] [rbp-170h] BYREF
  void *v59[4]; // [rsp+1A0h] [rbp-150h] BYREF
  void *ptr[2]; // [rsp+1C0h] [rbp-130h] BYREF
  __int64 v61; // [rsp+1D0h] [rbp-120h]
  char *v62; // [rsp+1E0h] [rbp-110h] BYREF
  __int128 v63; // [rsp+1E8h] [rbp-108h]
  __int64 v64; // [rsp+1F8h] [rbp-F8h]
  __int128 v65; // [rsp+200h] [rbp-F0h]
  __int64 v66; // [rsp+210h] [rbp-E0h]
  __int128 v67; // [rsp+220h] [rbp-D0h] BYREF
  char *v68; // [rsp+230h] [rbp-C0h]
  __int128 v69; // [rsp+238h] [rbp-B8h]
  __int64 v70; // [rsp+248h] [rbp-A8h]
  __int128 v71; // [rsp+250h] [rbp-A0h]
  _OWORD v72[3]; // [rsp+260h] [rbp-90h] BYREF
  __int64 v73; // [rsp+290h] [rbp-60h]
  int v74; // [rsp+298h] [rbp-58h]
  __int64 v75; // [rsp+2A0h] [rbp-50h]
  char v76; // [rsp+2A8h] [rbp-48h]
  unsigned __int64 v77; // [rsp+2B8h] [rbp-38h]

  v4.m128i_i64[0] = 0;
  v77 = __readfsqword(0x28u);
  *a1 = 0;
  a1[1].m128i_i64[0] = 0;
  v47 = 0;
  v68 = nullptr;
  v70 = 0;
  v73 = 1;
  v74 = -1;
  v75 = 0;
  v76 = 0;
  v62 = nullptr;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v72[0] = 0;
  v63 = 0;
  v64 = 0;
  v7 = *a2;
  v65 = 0;
  if ( get_udm_by_tid(&v47, &v67, v7) == -1 )
  {
    if ( get_edm_by_tid(&v47, &v62, *a2) == -1 )
    {
      v17 = (void **)*a2;
      sub_40D040((QT::QString *)ptr, *a2, a3, a4);
      if ( v61 )
      {
        v17 = ptr;
        QT::QString::operator=(a1, ptr);
      }
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    else if ( (a3 & 1) != 0 )
    {
      v31 = QT::QString::fromUtf8(v52, 57, "<font color=\"%1\">%2</font> <font color=\"%3\">(= %4)</font>");
      sub_40BAA0((__int64)v53, 32, a4);
      QT::QString::arg(v54, v52, v53, 0, 32, v31);
      if ( (_QWORD)v63 )
      {
        v32 = v63 - 1;
        v33 = v62;
        v34 = (unsigned __int64)(v63 - 1) >> 63;
      }
      else
      {
        LOBYTE(v34) = 0;
        v32 = 0;
        v33 = (char *)&s1;
      }
      if ( !v33 || (_BYTE)v34 )
      {
        v32 = 0;
        if ( v33 )
          v32 = strlen(v33);
      }
      v35 = QT::QString::fromUtf8(v55, v32, v33);
      QT::QString::toHtmlEscaped((QT::QString *)v56);
      QT::QString::arg(v57, v54, v56, 0, 32, v35);
      sub_40BAA0((__int64)v58, 12, a4);
      QT::QString::arg(v59, v57, v58, 0, 32, v35);
      v17 = v59;
      QT::QString::arg(ptr, v59, v66, 0, 10, 32, v35);
      v4 = _mm_loadu_si128(a1);
      v36 = a1[1].m128i_i64[0];
      v37 = v61;
      *a1 = _mm_load_si128((const __m128i *)ptr);
      a1[1].m128i_i64[0] = v37;
      v61 = v36;
      *(__m128i *)ptr = v4;
      if ( v4.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v4.m128i_i64[0], 1u) )
        free(ptr[0]);
      if ( v59[0] && !_InterlockedSub((volatile signed __int32 *)v59[0], 1u) )
        free(v59[0]);
      if ( v58[0] && !_InterlockedSub((volatile signed __int32 *)v58[0], 1u) )
        free(v58[0]);
      if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
        free(v57[0]);
      if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
        free(v56[0]);
      if ( v55[0] && !_InterlockedSub((volatile signed __int32 *)v55[0], 1u) )
        free(v55[0]);
      if ( v54[0] && !_InterlockedSub((volatile signed __int32 *)v54[0], 1u) )
        free(v54[0]);
      if ( v53[0] && !_InterlockedSub((volatile signed __int32 *)v53[0], 1u) )
        free(v53[0]);
      if ( v52[0] && !_InterlockedSub((volatile signed __int32 *)v52[0], 1u) )
        free(v52[0]);
    }
    else
    {
      v38 = QT::QString::fromUtf8(v57, 9, "%1 (= %2)");
      if ( (_QWORD)v63 )
      {
        v39 = v63 - 1;
        v40 = v62;
        v41 = (unsigned __int64)(v63 - 1) >> 63;
      }
      else
      {
        LOBYTE(v41) = 0;
        v39 = 0;
        v40 = (char *)&s1;
      }
      if ( !v40 || (_BYTE)v41 )
      {
        v39 = 0;
        if ( v40 )
          v39 = strlen(v40);
      }
      v42 = QT::QString::fromUtf8(v58, v39, v40, v38);
      QT::QString::arg(v59, v57, v58, 0, 32, v42);
      v17 = v59;
      QT::QString::arg(ptr, v59, v66, 0, 10, 32, v42);
      v4 = _mm_loadu_si128(a1);
      v43 = a1[1].m128i_i64[0];
      v44 = v61;
      *a1 = _mm_load_si128((const __m128i *)ptr);
      a1[1].m128i_i64[0] = v44;
      v61 = v43;
      *(__m128i *)ptr = v4;
      if ( v4.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v4.m128i_i64[0], 1u) )
        free(ptr[0]);
      if ( v59[0] && !_InterlockedSub((volatile signed __int32 *)v59[0], 1u) )
        free(v59[0]);
      if ( v58[0] && !_InterlockedSub((volatile signed __int32 *)v58[0], 1u) )
        free(v58[0]);
      if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
        free(v57[0]);
    }
  }
  else
  {
    v48 = nullptr;
    v49 = 0;
    print_tinfo(&v48, 0, 0, 0, 32, v72, 0, 0);
    if ( (a3 & 1) != 0 )
    {
      v8 = QT::QString::fromUtf8(v50, 53, "<font color=\"%1\">%2</font> <font color=\"%3\">%4</font>");
      sub_40BAA0((__int64)v51, 32, a4);
      QT::QString::arg(v52, v50, v51, 0, 32, v8);
      if ( (_QWORD)v49 )
      {
        v10 = v49 - 1;
        v11 = v48;
        v9 = (unsigned __int64)(v49 - 1) >> 63;
      }
      else
      {
        LOBYTE(v9) = 0;
        v10 = 0;
        v11 = &s1;
      }
      if ( !v11 || (_BYTE)v9 )
      {
        v10 = 0;
        if ( v11 )
          v10 = strlen(v11);
      }
      v12 = QT::QString::fromUtf8(v53, v10, v11);
      QT::QString::toHtmlEscaped((QT::QString *)v54);
      QT::QString::arg(v55, v52, v54, 0, 32, v12);
      sub_40BAA0((__int64)v56, 25, a4);
      QT::QString::arg(v57, v55, v56, 0, 32, v12);
      if ( (_QWORD)v69 )
      {
        v13 = v69 - 1;
        v14 = v68;
        v15 = (unsigned __int64)(v69 - 1) >> 63;
      }
      else
      {
        LOBYTE(v15) = 0;
        v13 = 0;
        v14 = (char *)&s1;
      }
      if ( !v14 || (_BYTE)v15 )
      {
        v13 = 0;
        if ( v14 )
          v13 = strlen(v14);
      }
      v16 = QT::QString::fromUtf8(v58, v13, v14);
      QT::QString::toHtmlEscaped((QT::QString *)v59);
      v17 = v57;
      QT::QString::arg(ptr, v57, v59, 0, 32, v16);
      v4 = _mm_loadu_si128(a1);
      v18 = a1[1].m128i_i64[0];
      v19 = v61;
      *a1 = _mm_load_si128((const __m128i *)ptr);
      a1[1].m128i_i64[0] = v19;
      v61 = v18;
      *(__m128i *)ptr = v4;
      if ( v4.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v4.m128i_i64[0], 1u) )
        free(ptr[0]);
      if ( v59[0] && !_InterlockedSub((volatile signed __int32 *)v59[0], 1u) )
        free(v59[0]);
      if ( v58[0] && !_InterlockedSub((volatile signed __int32 *)v58[0], 1u) )
        free(v58[0]);
      if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
        free(v57[0]);
      if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
        free(v56[0]);
      if ( v55[0] && !_InterlockedSub((volatile signed __int32 *)v55[0], 1u) )
        free(v55[0]);
      if ( v54[0] && !_InterlockedSub((volatile signed __int32 *)v54[0], 1u) )
        free(v54[0]);
      if ( v53[0] && !_InterlockedSub((volatile signed __int32 *)v53[0], 1u) )
        free(v53[0]);
      if ( v52[0] && !_InterlockedSub((volatile signed __int32 *)v52[0], 1u) )
        free(v52[0]);
      if ( v51[0] && !_InterlockedSub((volatile signed __int32 *)v51[0], 1u) )
        free(v51[0]);
      if ( v50[0] && !_InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
        free(v50[0]);
    }
    else
    {
      v21 = QT::QString::fromUtf8(v56, 5, "%1 %2");
      if ( (_QWORD)v49 )
      {
        v23 = v49 - 1;
        v24 = v48;
        v22 = (unsigned __int64)(v49 - 1) >> 63;
      }
      else
      {
        LOBYTE(v22) = 0;
        v23 = 0;
        v24 = &s1;
      }
      if ( !v24 || (_BYTE)v22 )
      {
        v23 = 0;
        if ( v24 )
          v23 = strlen(v24);
      }
      v25 = QT::QString::fromUtf8(v57, v23, v24, v21);
      QT::QString::arg(v58, v56, v57, 0, 32, v25);
      if ( (_QWORD)v69 )
      {
        v26 = v69 - 1;
        sa = v68;
        v27 = (unsigned __int64)(v69 - 1) >> 63;
      }
      else
      {
        LOBYTE(v27) = 0;
        v26 = 0;
        sa = &s1;
      }
      if ( !sa || (_BYTE)v27 )
      {
        v26 = 0;
        if ( sa )
          v26 = strlen(sa);
      }
      v28 = QT::QString::fromUtf8(v59, v26, sa);
      v17 = v58;
      QT::QString::arg(ptr, v58, v59, 0, 32, v28);
      v4 = _mm_loadu_si128(a1);
      v29 = a1[1].m128i_i64[0];
      v30 = v61;
      *a1 = _mm_load_si128((const __m128i *)ptr);
      a1[1].m128i_i64[0] = v30;
      v61 = v29;
      *(__m128i *)ptr = v4;
      if ( v4.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v4.m128i_i64[0], 1u) )
        free(ptr[0]);
      if ( v59[0] && !_InterlockedSub((volatile signed __int32 *)v59[0], 1u) )
        free(v59[0]);
      if ( v58[0] && !_InterlockedSub((volatile signed __int32 *)v58[0], 1u) )
        free(v58[0]);
      if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
        free(v57[0]);
      if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
        free(v56[0]);
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      *(double *)v4.m128i_i64 = qfree(v48, (const char *)v17);
    }
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    *(double *)v4.m128i_i64 = qfree(v64, (const char *)v17, *(double *)v4.m128i_i64);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    *(double *)v4.m128i_i64 = qfree(v62, (const char *)v17, *(double *)v4.m128i_i64);
  }
  clear_tinfo_t(v72);
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    *(double *)v4.m128i_i64 = qfree(v70, (const char *)v17, *(double *)v4.m128i_i64);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68, (const char *)v17, *(double *)v4.m128i_i64);
  }
  clear_tinfo_t(&v47);
  return a1;
}
