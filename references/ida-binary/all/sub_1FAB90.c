__int64 __fastcall sub_1FAB90(
        __int64 *a1,
        __int64 a2,
        char a3,
        int a4,
        __m128 a5,
        __m128 si128,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 *v18; // r13
  _QWORD *v19; // r15
  char *v20; // r12
  unsigned int v21; // ebp
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  const __m128i *v24; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __m128 v29; // xmm0
  __int64 v30; // rdi
  int v31; // ebx
  __m128i *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  const char *v39; // rdi
  __m128i *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r14
  __int64 v44; // rdi
  __int64 m128i_i64; // rbx
  __m128i *v46; // rsi
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __m128 v53; // xmm4
  __m128 v54; // xmm5
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rax
  _QWORD *v58; // r13
  _QWORD *v59; // rdi
  __int64 v60; // rdx
  _QWORD *v61; // rdi
  const QT::QObject *v62; // rax
  const char *v63; // rax
  __int64 v64; // r9
  const char *v65; // r14
  __int64 v66; // r8
  size_t v67; // rbx
  const char *v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // r14
  __int64 v71; // rbx
  __int64 *v72; // rbp
  __int64 v73; // rdi
  __int64 Child_helper; // rax
  struct _Unwind_Exception *v75; // rbx
  const __m128i *v76; // [rsp+0h] [rbp-198h]
  __int64 v77; // [rsp+8h] [rbp-190h]
  __int64 v78; // [rsp+8h] [rbp-190h]
  QT::QObject *v79; // [rsp+10h] [rbp-188h]
  void *src; // [rsp+18h] [rbp-180h]
  char *srca; // [rsp+18h] [rbp-180h]
  unsigned __int8 srcb; // [rsp+18h] [rbp-180h]
  void *srcc; // [rsp+18h] [rbp-180h]
  __int64 v84; // [rsp+28h] [rbp-170h]
  int v85[2]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v86; // [rsp+38h] [rbp-160h]
  __m128i v87; // [rsp+50h] [rbp-148h] BYREF
  __m128 v88; // [rsp+60h] [rbp-138h]
  __int64 v89; // [rsp+70h] [rbp-128h]
  __int64 v90; // [rsp+78h] [rbp-120h]
  __m128i v91; // [rsp+80h] [rbp-118h] BYREF
  __int64 v92; // [rsp+90h] [rbp-108h]
  __int64 v93; // [rsp+98h] [rbp-100h]
  __int64 v94; // [rsp+A0h] [rbp-F8h]
  __int128 v95; // [rsp+A8h] [rbp-F0h] BYREF
  __int128 v96; // [rsp+B8h] [rbp-E0h]
  __int64 v97; // [rsp+C8h] [rbp-D0h]
  __int128 v98; // [rsp+D0h] [rbp-C8h]
  char v99[8]; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v100; // [rsp+E8h] [rbp-B0h]
  __int64 v101; // [rsp+F8h] [rbp-A0h]
  __int128 v102; // [rsp+100h] [rbp-98h]
  __m128 v103; // [rsp+110h] [rbp-88h]
  void *ptr[2]; // [rsp+120h] [rbp-78h]
  __int64 v105; // [rsp+130h] [rbp-68h]
  int v106; // [rsp+138h] [rbp-60h]
  __int128 v107; // [rsp+140h] [rbp-58h] BYREF
  unsigned __int64 v108; // [rsp+158h] [rbp-40h]

  v20 = (char *)a1;
  LOBYTE(v21) = a3;
  v22 = (_QWORD *)qword_8CB4F0;
  v76 = (const __m128i *)a2;
  v23 = (_QWORD *)(qword_8CB4F0 + 8 * xmmword_8CB4F8);
  v108 = __readfsqword(0x28u);
  LODWORD(v24) = a4;
  if ( (_QWORD *)qword_8CB4F0 != v23 )
  {
    while ( a2 != *v22 )
    {
      if ( v23 == ++v22 )
        goto LABEL_8;
    }
    if ( v23 != v22 )
      return 0;
  }
LABEL_8:
  sub_1E7BC0((__int64)v85, a1, a2);
  v28 = *(_QWORD *)(a2 + 424);
  if ( !v28 )
  {
    v75 = (struct _Unwind_Exception *)sub_1E69C0(*(double *)a5.m128_u64, 0, (__int64)v20, v26, v27);
    sub_1A1EA0(v18, v20);
    sub_1E7480(v19, v20);
    if ( v77 )
      *(double *)a5.m128_u64 = qfree(v77, v20);
    sub_1E7E90((__int64)v85, v20, a5, si128, a7, a8, v16, v17, a11, a12, v12, v13, v14, v15);
    _Unwind_Resume(v75);
  }
  v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v91 = 0;
  v29 = 0;
  v92 = 0;
  v30 = *(_QWORD *)(a2 + 512);
  v93 = -1;
  v94 = 0;
  v97 = 0;
  v95 = 0;
  v96 = 0;
  v98 = 0;
  if ( (_BYTE)v21 )
  {
    v31 = navstack_t_stack_size(v30);
    if ( v31 )
    {
      if ( v31 - 1 - (unsigned int)navstack_t_stack_index(*(_QWORD *)(a2 + 512)) >= (unsigned int)v24 )
        goto LABEL_12;
    }
    else if ( !(_DWORD)v24 )
    {
      goto LABEL_12;
    }
    LODWORD(v24) = navstack_t_stack_size(*(_QWORD *)(a2 + 512));
    if ( (_DWORD)v24 )
      LODWORD(v24) = (_DWORD)v24 - 1 - navstack_t_stack_index(*(_QWORD *)(a2 + 512));
  }
  else
  {
LABEL_41:
    if ( (unsigned int)navstack_t_stack_index(v30) < (unsigned int)v24 )
      LODWORD(v24) = navstack_t_stack_index(v76[32].m128i_i64[0]);
  }
LABEL_12:
  sub_1C6390();
  v32 = &v91;
  v21 = navstack_t_stack_nav(
          v76[32].m128i_i64[0],
          &v91,
          (unsigned __int8)v21,
          (unsigned int)v24,
          (unsigned __int8)byte_8BA8E5);
  if ( (_BYTE)v21 && (_QWORD)v95 )
  {
    sub_1C63A0();
    v39 = &s1;
    if ( (_QWORD)v96 )
      v39 = *((const char **)&v95 + 1);
    v40 = (__m128i *)sub_1FA850(v39);
    v43 = (__int64)v40;
    if ( v40 )
    {
      v44 = v40[26].m128i_i64[1];
      if ( !v44 )
        sub_1E69C0(*(double *)v29.m128_u64, 0, (__int64)&v91, v41, v42);
      m128i_i64 = (__int64)v40[24].m128i_i64;
      v29 = 0;
      v88.m128_u64[0] = 0;
      v88.m128_u64[1] = -1;
      v89 = 0;
      v90 = 0;
      v87 = 0;
      if ( &v40[24] == &v87 )
      {
        src = nullptr;
      }
      else
      {
        v87 = _mm_loadu_si128(v40 + 24);
        v29 = (__m128)_mm_loadu_si128(v40 + 25);
        v88 = v29;
        LODWORD(v89) = v40[26].m128i_i32[0];
        src = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        v90 = (__int64)src;
      }
      sub_1E95D0((QT::QObject *)v99, v43, 8, 0, -32768, *(double *)v29.m128_u64);
      v46 = &v91;
      *(_QWORD *)&v107 = 0;
      *((_QWORD *)&v107 + 1) = v43;
      sub_1F0EE0(m128i_i64, &v91, &v107, 5, 1, v47, *(double *)v29.m128_u64);
      if ( v76 != (const __m128i *)v43 )
      {
        v46 = (__m128i *)v43;
        sub_479090(QT::QCoreApplication::self + 2, v43, 1);
      }
      if ( !(_BYTE)v101 )
      {
        v48 = *((_QWORD *)&v100 + 1);
        if ( *((_QWORD *)&v100 + 1) )
        {
          *(_QWORD *)(*((_QWORD *)&v100 + 1) + 948LL) = v102;
          *(_WORD *)(v48 + 956) = WORD4(v102);
        }
      }
      *(_QWORD *)v99 = &object_lifecycle_monitor_t___vtable;
      QT::QObject::~QObject((QT::QObject *)v99);
      if ( src )
        *(double *)v29.m128_u64 = qfree(src, v46->m128i_i8);
      goto LABEL_27;
    }
    v32 = nullptr;
    v62 = (const QT::QObject *)sub_4B81F0((char *)&v95 + 8, 0);
    if ( v62 )
    {
      v79 = v62;
      v63 = (const char *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v62);
      v64 = (__int64)v79;
      v65 = v63;
      if ( v63
        || (v32 = nullptr,
            Child_helper = QT::qt_qFindChild_helper(v79, 0, 0, &off_87B020, 1),
            v64 = (__int64)v79,
            (v65 = (const char *)Child_helper) != nullptr) )
      {
        *(_QWORD *)&v107 = 0;
        *((_QWORD *)&v107 + 1) = v65;
        sub_1F0EE0((__int64)(v65 + 384), &v91, &v107, 5, 1, v64, *(double *)v29.m128_u64);
        v29 = 0;
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
        *(_QWORD *)v99 = 0;
        v101 = 0;
        v66 = v76[31].m128i_i64[0];
        v100 = 0;
        v105 = 0;
        v106 = 0;
        v102 = 0;
        v103 = si128;
        *(_OWORD *)ptr = 0;
        if ( v66 )
        {
          v67 = v66 - 1;
          if ( v66 != 1 )
          {
            v84 = v66;
            srcc = (void *)v76[30].m128i_i64[1];
            *(_QWORD *)v99 = qvector_reserve(v99, 0, v66, 1);
            *(_QWORD *)&v100 = v84;
            memmove(*(void **)v99, srcc, v67);
            *(_BYTE *)(*(_QWORD *)v99 + v84 - 1) = 0;
          }
        }
        v68 = v65;
        v106 = 0x400000;
        (*(void (__fastcall **)(_QWORD *, const char *, char *))(QT::QCoreApplication::self[2] + 120LL))(
          QT::QCoreApplication::self + 2,
          v65,
          v99);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        v69 = v101;
        if ( v101 )
        {
          if ( (_QWORD)v102 )
          {
            srcb = v21;
            v70 = 0;
            v71 = v102;
            do
            {
              v72 = (__int64 *)(v69 + 40 * v70);
              jvalue_t_clear(v72 + 3);
              v73 = *v72;
              if ( *v72 )
              {
                v72[1] = 0;
                qfree(v73, v68);
              }
              ++v70;
              v69 = v101;
            }
            while ( v71 != v70 );
            v21 = srcb;
          }
          *(_QWORD *)&v102 = 0;
          *(double *)v29.m128_u64 = qfree(v69, v68);
        }
        if ( *(_QWORD *)v99 )
        {
          *(_QWORD *)&v100 = 0;
          *(double *)v29.m128_u64 = qfree(*(_QWORD *)v99, v68);
        }
LABEL_27:
        v30 = (__int64)v20;
        v32 = (__m128i *)&v107;
        *(_QWORD *)&v107 = 0;
        *((_QWORD *)&v107 + 1) = v76;
        if ( sub_1E7840((__int64 *)v20, &v107) && (int)v86 > 0 )
        {
          v20 = nullptr;
          srca = (char *)(8LL * (unsigned int)(v86 - 1) + 8);
          while ( 1 )
          {
            v24 = *(const __m128i **)&v20[*(_QWORD *)v85];
            if ( v76 != v24 )
            {
              if ( !v24[26].m128i_i64[1] )
              {
                sub_1E69C0(*(double *)v29.m128_u64, v30, (__int64)v32, v49, v50);
                goto LABEL_41;
              }
              v55 = v24[26].m128i_i64[0];
              v87 = _mm_loadu_si128(v24 + 24);
              v29 = (__m128)_mm_loadu_si128(v24 + 25);
              v89 = v55;
              v90 = v95;
              v88 = v29;
              if ( (_QWORD)v95 )
                v90 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v95 + 16LL))(v95);
              sub_1E95D0(
                (QT::QObject *)v99,
                (__int64)v24,
                v24[59].m128i_i32[1],
                v24[59].m128i_i32[2] | 0x10000,
                -32768,
                *(double *)v29.m128_u64);
              v32 = &v87;
              *(_QWORD *)&v107 = 0;
              *((_QWORD *)&v107 + 1) = v76;
              sub_1F0EE0((__int64)v24[24].m128i_i64, &v87, &v107, 5, 0, v56, *(double *)v29.m128_u64);
              if ( !(_BYTE)v101 )
              {
                v57 = *((_QWORD *)&v100 + 1);
                if ( *((_QWORD *)&v100 + 1) )
                {
                  *(_QWORD *)(*((_QWORD *)&v100 + 1) + 948LL) = v102;
                  *(_WORD *)(v57 + 956) = WORD4(v102);
                }
              }
              *(_QWORD *)v99 = &object_lifecycle_monitor_t___vtable;
              QT::QObject::~QObject((QT::QObject *)v99);
              v30 = v90;
              if ( v90 )
                *(double *)v29.m128_u64 = qfree(v90, v87.m128i_i8);
            }
            v20 += 8;
            if ( srca == v20 )
              goto LABEL_45;
          }
        }
        goto LABEL_45;
      }
      QT::QObject::deleteLater(v79);
    }
  }
  else
  {
    sub_169700(
      (int)"Navigation failed. This can happen if the view's history was corrupted. If you suspect this is a bug, please "
           "send this database to <support@hex-rays.com>",
      (__int64)&v91,
      v33,
      v34,
      v35,
      v36,
      v29,
      si128,
      a7,
      a8,
      v37,
      v38,
      a11,
      a12,
      (char)v76);
    sub_1C63A0();
  }
  v21 = 0;
LABEL_45:
  if ( (_QWORD)v95 )
  {
    *(double *)v29.m128_u64 = qfree(v95, v32->m128i_i8, *(double *)v29.m128_u64);
    *(_QWORD *)&v95 = 0;
  }
  if ( *((_QWORD *)&v95 + 1) )
  {
    *(_QWORD *)&v96 = 0;
    *(double *)v29.m128_u64 = qfree(*((_QWORD *)&v95 + 1), v32->m128i_i8, *(double *)v29.m128_u64);
    *((_QWORD *)&v95 + 1) = 0;
    *((_QWORD *)&v96 + 1) = 0;
  }
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    *(double *)v29.m128_u64 = qfree(v97, v32->m128i_i8, *(double *)v29.m128_u64);
  }
  if ( *((_QWORD *)&v95 + 1) )
  {
    *(_QWORD *)&v96 = 0;
    *(double *)v29.m128_u64 = qfree(*((_QWORD *)&v95 + 1), v32->m128i_i8, *(double *)v29.m128_u64);
  }
  if ( (_QWORD)v95 )
    *(double *)v29.m128_u64 = qfree(v95, v32->m128i_i8, *(double *)v29.m128_u64);
  if ( v78 )
    *(double *)v29.m128_u64 = qfree(v78, v32->m128i_i8, *(double *)v29.m128_u64);
  v58 = *(_QWORD **)v85;
  if ( 8 * v86 )
  {
    do
    {
      v59 = (_QWORD *)qword_8CB4F0;
      v60 = qword_8CB4F0 + 8 * xmmword_8CB4F8;
      if ( qword_8CB4F0 == v60 )
        goto LABEL_67;
      while ( *v58 != *v59 )
      {
        if ( (_QWORD *)v60 == ++v59 )
          goto LABEL_67;
      }
      if ( v59 == (_QWORD *)v60 )
      {
LABEL_67:
        sub_169700(
          (int)"Coherency check failed: currently_being_synced.del(cur)\n",
          (__int64)v32,
          v60,
          v50,
          v51,
          v52,
          v29,
          si128,
          a7,
          a8,
          v53,
          v54,
          a11,
          a12,
          (char)v76);
      }
      else
      {
        v32 = (__m128i *)(v59 + 1);
        memmove(v59, v59 + 1, v60 - (_QWORD)v59 - 8);
        *(_QWORD *)&xmmword_8CB4F8 = xmmword_8CB4F8 - 1;
      }
      v61 = *(_QWORD **)v85;
      ++v58;
    }
    while ( v58 != (_QWORD *)(*(_QWORD *)v85 + 8 * v86) );
  }
  else
  {
    v61 = *(_QWORD **)v85;
  }
  if ( v61 )
  {
    v86 = 0;
    qfree(v61, v32->m128i_i8, *(double *)v29.m128_u64);
  }
  return v21;
}
