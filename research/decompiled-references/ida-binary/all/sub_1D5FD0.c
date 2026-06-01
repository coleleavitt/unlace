__m128i *__fastcall sub_1D5FD0(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i *v13; // rsi
  const char **v14; // r13
  __m128i si128; // xmm0
  size_t v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rbx
  void (__fastcall ***v28)(_QWORD); // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  const char *v31; // rsi
  const char *v32; // r12
  __m128i v33; // xmm0
  void (__fastcall *v34)(__m128i *, const char *, __m128i *); // r14
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r15
  char v45; // al
  __int64 v46; // rdi
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // rbx
  void (__fastcall ***v50)(_QWORD); // rdi
  QT::QString *v52; // [rsp+50h] [rbp-148h]
  const char *v53; // [rsp+58h] [rbp-140h]
  __m128i v54[2]; // [rsp+70h] [rbp-128h] BYREF
  __m128i v55; // [rsp+90h] [rbp-108h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-F8h]
  __m128i v57; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-D8h]
  __m128i v59; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v60; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-A8h]
  int v62; // [rsp+F8h] [rbp-A0h]
  const char *v63; // [rsp+100h] [rbp-98h]
  __int64 v64; // [rsp+108h] [rbp-90h]
  __int128 v65; // [rsp+110h] [rbp-88h]
  __int128 v66; // [rsp+120h] [rbp-78h] BYREF
  __int64 v67; // [rsp+130h] [rbp-68h]
  __int128 v68; // [rsp+138h] [rbp-60h] BYREF
  __int64 v69; // [rsp+148h] [rbp-50h]
  unsigned __int64 v70; // [rsp+158h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  v59.m128i_i64[0] = (__int64)&deskcfg_target_t___vtable;
  *a1 = 0;
  v61 = 0;
  v63 = nullptr;
  v62 = 0;
  v60 = 0;
  sub_1CD1B0((__int64)&v59, 0, a3, a4, 0.0);
  v64 = 0;
  v59.m128i_i64[0] = (__int64)&ida_deskcfg_t___vtable;
  v67 = 0;
  v69 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  if ( (unsigned __int8)sub_1CFC90(&v59, nullptr, 0, 0.0, a6) )
  {
    sub_1CC990((__int64)&v57, "<Default>");
    sub_1D5280(a1, a1[1].m128i_i64[0], &v57, v8, v9, v10);
    if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
      sub_1B21C0(a1, 0, 0, 0, v11, v12);
    sub_16D970((void **)&v57);
  }
  v13 = nullptr;
  if ( (unsigned __int8)sub_1CFC90(&v59, nullptr, 1, 0.0, a6) )
  {
    QT::QString::assign(&v60, &unk_5C2F25, 0);
    v14 = (const char **)&unk_85D940;
    do
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_8CB340);
      v58 = qword_8CB350;
      v57 = si128;
      if ( si128.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
      QT::QString::append((QT::QString *)&v57, (const QT::QString *)&unk_8CB300);
      sub_1CE950((QT::QString *)v54, &v57);
      sub_16D970((void **)&v57);
      if ( *v14 )
      {
        v53 = *v14;
        v16 = strlen(*v14);
        *(double *)si128.m128i_i64 = QT::QString::fromUtf8(&v57, v16, v53);
        QT::QString::append((QT::QString *)v54, (const QT::QString *)&v57);
        sub_16D970((void **)&v57);
      }
      v13 = v54;
      if ( (unsigned __int8)sub_1CF7D0(&v59, (const QT::QString *)v54) )
      {
        sub_1CE9C0(&v55, v54, *(double *)si128.m128i_i64, a6);
        sub_1CE950((QT::QString *)&v57, &xmmword_8CB260);
        QT::QString::append((QT::QString *)&v55, (const QT::QString *)&v57);
        sub_16D970((void **)&v57);
        v13 = &v55;
        if ( (unsigned __int8)sub_1CF7D0(&v59, (const QT::QString *)&v55) )
        {
          if ( a2 )
          {
            sub_1CE9C0(&v57, v54, *(double *)si128.m128i_i64, a6);
            v17 = a2[1].m128i_i64[0];
            a6 = (__m128)_mm_load_si128(&v57);
            v18 = _mm_loadu_si128(a2);
            a2[1].m128i_i64[0] = v58;
            *a2 = (__m128i)a6;
            v58 = v17;
            v57 = v18;
            sub_16D970((void **)&v57);
          }
          sub_1CC990((__int64)&v57, "<Debugger>");
          v13 = (__m128i *)a1[1].m128i_i64[0];
          sub_1D5280(a1, (__int64)v13, &v57, v19, v20, v21);
          if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
          {
            v13 = nullptr;
            sub_1B21C0(a1, 0, 0, 0, v22, v23);
          }
          sub_16D970((void **)&v57);
        }
        sub_16D970((void **)&v55);
      }
      ++v14;
      sub_16D970((void **)v54);
    }
    while ( v14 != (const char **)&unk_85D978 );
  }
  v59.m128i_i64[0] = (__int64)&ida_deskcfg_t___vtable;
  sub_16D970((void **)&v68);
  sub_16D970((void **)&v66);
  v24 = v64;
  v59.m128i_i64[0] = (__int64)&deskcfg_t___vtable;
  if ( v64 )
  {
    v25 = v65;
    if ( (_QWORD)v65 )
    {
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = (void (__fastcall ***)(_QWORD))(v26 + v24);
        ++v27;
        v26 += 56;
        (**v28)(v28);
        v24 = v64;
      }
      while ( v25 != v27 );
    }
    *(_QWORD *)&v65 = 0;
    qfree(v24, v13->m128i_i8);
  }
  v59.m128i_i64[0] = (__int64)&deskcfg_target_t___vtable;
  if ( v63 )
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v63 + 16LL))(v63);
  sub_16D970((void **)&v60);
  v61 = 0;
  v59.m128i_i64[0] = (__int64)&deskcfg_target_t___vtable;
  v63 = nullptr;
  v62 = 0;
  v60 = 0;
  sub_1CD1B0((__int64)&v59, 0, v29, v30, 0.0);
  v64 = 0;
  v59.m128i_i64[0] = (__int64)&ida_deskcfg_t___vtable;
  v67 = 0;
  v69 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  sub_1CFC90(&v59, nullptr, 0, 0.0, a6);
  QT::QString::assign(&v60, &unk_5C2F25, 0);
  v31 = (const char *)&xmmword_8CB340;
  if ( (unsigned __int8)sub_1CF7D0(&v59, (const QT::QString *)&xmmword_8CB340) )
  {
    v32 = v63;
    v33 = _mm_load_si128(&v60);
    v34 = *(void (__fastcall **)(__m128i *, const char *, __m128i *))(*(_QWORD *)v63 + 48LL);
    v58 = v61;
    v57 = v33;
    if ( v33.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)v33.m128i_i64[0], 1u);
    QT::QString::append((QT::QString *)&v57, (const QT::QString *)&xmmword_8CB340);
    v31 = v32;
    v34(&v55, v32, &v57);
    sub_16D970((void **)&v57);
    if ( (int)v56 > 0 )
    {
      v37 = 0;
      v38 = 8 * (3LL * (unsigned int)(v56 - 1) + 3);
      do
      {
        if ( !v55.m128i_i64[0] || *(int *)v55.m128i_i64[0] > 1 )
          sub_1B21C0(&v55, 0, 0, 0, v35, v36);
        sub_1CE9C0(&v57, (const __m128i *)(v37 + v55.m128i_i64[1]), *(double *)v33.m128i_i64, a6);
        v40 = v57.m128i_i64[1];
        v44 = v58;
        if ( qword_8CB330 != v58
          || (v52 = (QT::QString *)v57.m128i_i64[1],
              v31 = (const char *)v57.m128i_i64[1],
              v45 = QT::QtPrivate::equalStrings(v58, v57.m128i_i64[1], v58, qword_8CB328),
              v40 = (__int64)v52,
              !v45) )
        {
          if ( v44 != qword_8CB310
            || (v31 = (const char *)v40, !(unsigned __int8)QT::QtPrivate::equalStrings(v44, v40, v44, qword_8CB308)) )
          {
            if ( !v55.m128i_i64[0] || *(int *)v55.m128i_i64[0] > 1 )
              sub_1B21C0(&v55, 0, 0, 0, v40, v41);
            v31 = (const char *)a1[1].m128i_i64[0];
            sub_1D5510(a1, (__int64)v31, (const __m128i *)(v37 + v55.m128i_i64[1]), v39, v40, v41);
            if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
            {
              v31 = nullptr;
              sub_1B21C0(a1, 0, 0, 0, v42, v43);
            }
          }
        }
        v37 += 24;
        sub_16D970((void **)&v57);
      }
      while ( v38 != v37 );
    }
    sub_1AF880((__int64)&v55);
  }
  v59.m128i_i64[0] = (__int64)&ida_deskcfg_t___vtable;
  sub_16D970((void **)&v68);
  sub_16D970((void **)&v66);
  v46 = v64;
  v59.m128i_i64[0] = (__int64)&deskcfg_t___vtable;
  if ( v64 )
  {
    v47 = v65;
    if ( (_QWORD)v65 )
    {
      v48 = 0;
      v49 = 0;
      do
      {
        v50 = (void (__fastcall ***)(_QWORD))(v48 + v46);
        ++v49;
        v48 += 56;
        (**v50)(v50);
        v46 = v64;
      }
      while ( v47 != v49 );
    }
    *(_QWORD *)&v65 = 0;
    qfree(v46, v31);
  }
  v59.m128i_i64[0] = (__int64)&deskcfg_target_t___vtable;
  if ( v63 )
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v63 + 16LL))(v63);
  sub_16D970((void **)&v60);
  return a1;
}
