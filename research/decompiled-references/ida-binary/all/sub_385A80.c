__int64 __fastcall sub_385A80(
        __int64 **a1,
        int a2,
        int a3,
        int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 *v14; // rax
  __m256i *v16; // rsi
  void (__fastcall ***v17)(_QWORD); // rdi
  bool v18; // zf
  int v19; // ebx
  _BOOL4 v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rdi
  __int64 v29; // r13
  double v30; // xmm4_8
  double v31; // xmm5_8
  __m256i *v32; // r8
  char v33; // al
  __int64 *v34; // r12
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rdi
  __int64 *v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rbx
  __int64 *v44; // r14
  __int64 v45; // rdi
  unsigned int v46; // r14d
  __int64 v47; // rdx
  __int64 v48; // r12
  __int64 v49; // rbx
  __int64 *v50; // rax
  __int64 v51; // rdi
  const __m128i *v53; // rbx
  const __m128i *v54; // rax
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  __int64 v57; // rax
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  __int64 v61; // rax
  __int64 *v62; // [rsp-10h] [rbp-130h]
  __int64 v63; // [rsp-8h] [rbp-128h]
  char *s2; // [rsp+0h] [rbp-120h]
  unsigned int v65; // [rsp+8h] [rbp-118h]
  int v67; // [rsp+Ch] [rbp-114h]
  __m256i *v68; // [rsp+10h] [rbp-110h] BYREF
  QT::QObject *v69; // [rsp+18h] [rbp-108h] BYREF
  __m256i *v70; // [rsp+20h] [rbp-100h] BYREF
  int v71; // [rsp+28h] [rbp-F8h]
  int v72; // [rsp+2Ch] [rbp-F4h]
  __m256i *v73; // [rsp+30h] [rbp-F0h] BYREF
  __int128 v74; // [rsp+38h] [rbp-E8h]
  __m256i v75; // [rsp+50h] [rbp-D0h] BYREF
  __int64 v76; // [rsp+70h] [rbp-B0h]
  __m256i **v77; // [rsp+78h] [rbp-A8h]
  _BYTE v78[24]; // [rsp+80h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+98h] [rbp-88h]
  __int128 v80; // [rsp+A0h] [rbp-80h]
  __m128i si128; // [rsp+B0h] [rbp-70h]
  void *ptr[2]; // [rsp+C0h] [rbp-60h]
  __int64 v83; // [rsp+D0h] [rbp-50h]
  int v84; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v85; // [rsp+E8h] [rbp-38h]

  v14 = *a1;
  v85 = __readfsqword(0x28u);
  *(_QWORD *)v78 = v14;
  v73 = nullptr;
  v74 = 0;
  if ( v14 )
    ++*((_DWORD *)v14 + 2);
  v16 = (__m256i *)v78;
  sub_23BAE0((__int64 *)&v73, v78);
  v17 = *(void (__fastcall ****)(_QWORD))v78;
  if ( *(_QWORD *)v78 )
  {
    v18 = (*(_DWORD *)(*(_QWORD *)v78 + 8LL))-- == 1;
    if ( v18 )
      (**v17)(v17);
  }
  if ( (unsigned __int64)v74 <= 1
    || (v16 = v73, s2 = (char *)v73, (unsigned __int8)sub_23A590((__int64)&qword_8CC000, v73->m256i_i8))
    && (a4 & 0x10000) != 0 )
  {
    v46 = 0;
    goto LABEL_49;
  }
  if ( dword_8BCA58 < 0 )
  {
    dword_8BCA58 = internal_register_place_class(&qword_8CF1A0, 3, 0, 930);
    register_loc_converter2("simpleline_place_t", "srcdbg_place_t", sub_384E00);
    register_loc_converter2("idaplace_t", "srcdbg_place_t", sub_386450);
  }
  v19 = a2 - (a2 > 0);
  v20 = a3 > 0;
  v21 = (unsigned int)(a3 - v20);
  v67 = a3 - v20;
  v22 = sub_1F4200();
  if ( v22 )
  {
    v21 = xmmword_8CF2A8;
    if ( !(_QWORD)xmmword_8CF2A8 )
    {
LABEL_16:
      v25 = sub_383ED0(s2);
      goto LABEL_17;
    }
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      v25 = *(_QWORD *)(qword_8CF2A0 + 8 * v24);
      if ( v25 )
      {
        if ( v22 == *(_QWORD *)(v25 + 24) )
          break;
      }
      v24 = ++v23;
      if ( v23 >= (unsigned __int64)xmmword_8CF2A8 )
        goto LABEL_16;
    }
    if ( *(_QWORD *)(v25 + 64) )
    {
      v21 = (__int64)s2;
      if ( !strcmp(*(const char **)(v25 + 56), s2) )
        goto LABEL_54;
    }
    else
    {
      v21 = (__int64)s2;
      if ( !strcmp(&s1, s2) )
        goto LABEL_54;
    }
    LOBYTE(v65) = 1;
  }
  else
  {
    LOBYTE(v65) = 0;
    v25 = 0;
  }
  v61 = sub_383ED0(s2);
  v27 = v65;
  v18 = v61 == v25;
  v25 = v61;
  v26 = (unsigned __int8)v65 & !v18;
  LOBYTE(a4) = v65 & !v18 | a4;
LABEL_17:
  if ( !v25 )
  {
    v28 = *a1;
    memset(&v75, 0, 24);
    v68 = nullptr;
    v69 = nullptr;
    v29 = (*(__int64 (__fastcall **)(__int64 *, __m256i **, QT::QObject **, _QWORD, _QWORD))(*v28 + 24))(
            v28,
            &v68,
            &v69,
            (unsigned int)(v19 + 1),
            (unsigned int)(v67 + 1));
    if ( !v29 )
    {
      v16 = &v75;
      if ( !(unsigned __int8)sub_3836A0(*a1, v75.m256i_i8, 0.0, a6, a7, a8, v30, v31, a11, a12) )
        goto LABEL_68;
    }
    v32 = v68;
    v33 = 1;
    if ( !v68 )
    {
      v33 = 0;
      v32 = &v75;
    }
    v34 = *a1;
    *(_QWORD *)v78 = v34;
    if ( v34 )
      ++*((_DWORD *)v34 + 2);
    v16 = (__m256i *)v29;
    v35 = sub_3852B0((__int64 *)&v70, v29, v69, (size_t *)v78, v32->m256i_i64, v19, v67, v33);
    v38 = v62;
    v39 = v35;
    v40 = v63;
    if ( v34 )
    {
      v18 = (*((_DWORD *)v34 + 2))-- == 1;
      if ( v18 )
      {
        v38 = v34;
        (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64))*v34)(v34, v29, v36, v37, v63);
      }
    }
    if ( v39 )
    {
      sub_3E1200(v38, v29, v36, v37, v40);
      memset(v78, 0, sizeof(v78));
      v79 = 0;
      v16 = v70;
      v83 = 0;
      v84 = 4194308;
      v80 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      *(_OWORD *)ptr = 0;
      (*(void (__fastcall **)(_QWORD *, __m256i *, _BYTE *))(QT::QCoreApplication::self[2] + 120LL))(
        QT::QCoreApplication::self + 2,
        v70,
        v78);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v41 = v79;
      if ( v79 )
      {
        v42 = v80;
        if ( (_QWORD)v80 )
        {
          v43 = 0;
          do
          {
            v44 = (__int64 *)(v41 + 40 * v43);
            jvalue_t_clear(v44 + 3);
            v45 = *v44;
            if ( *v44 )
            {
              v44[1] = 0;
              qfree(v45, v16->m256i_i8);
            }
            ++v43;
            v41 = v79;
          }
          while ( v42 != v43 );
        }
        *(_QWORD *)&v80 = 0;
        qfree(v41, v16->m256i_i8);
      }
      if ( *(_QWORD *)v78 )
      {
        *(_QWORD *)&v78[8] = 0;
        qfree(*(_QWORD *)v78, v16->m256i_i8);
      }
      v46 = 1;
    }
    else
    {
LABEL_68:
      v46 = 0;
    }
    v47 = v75.m256i_i64[0];
    if ( v75.m256i_i64[0] )
    {
      v48 = v75.m256i_i64[1];
      if ( v75.m256i_i64[1] )
      {
        v49 = 0;
        do
        {
          v50 = (__int64 *)(v47 + 32 * v49);
          v51 = *v50;
          if ( *v50 )
          {
            v50[1] = 0;
            qfree(v51, v16->m256i_i8);
            v47 = v75.m256i_i64[0];
          }
          ++v49;
        }
        while ( v48 != v49 );
      }
      v75.m256i_i64[1] = 0;
      qfree(v47, v16->m256i_i8);
    }
    goto LABEL_49;
  }
LABEL_54:
  v72 = v19;
  v70 = (__m256i *)&simpleline_place_t___vtable;
  v71 = 0;
  v53 = *(const __m128i **)(v25 + 24);
  v54 = (const __m128i *)sub_1EA680((__int64)v53[24].m128i_i64, v21, v26, v27, 0.0);
  v55 = _mm_loadu_si128(v54);
  v77 = &v70;
  *(__m128i *)v75.m256i_i8 = v55;
  v56 = _mm_loadu_si128(v54 + 1);
  v57 = v54[2].m128i_i64[0];
  *(__m128i *)&v75.m256i_u64[2] = v56;
  v76 = v57;
  v16 = (__m256i *)v78;
  v77 = (__m256i **)simpleline_place_t__clone(&v70);
  v79 = -1;
  v80 = 0u;
  memset(v78, 0, sizeof(v78));
  if ( (unsigned int)sub_1EB7C0(v53, (__int64)v78, (__int64)&v75, 1, (__m128i)0LL) == 1 )
  {
    if ( (a4 & 1) != 0 )
      callui(59, *(_QWORD *)(v25 + 24), 1, v58, v59, v60);
    v16 = (__m256i *)v53;
    v46 = callui(69, (_DWORD)v53, DWORD2(v80), v67, 5, v60, s2);
  }
  else
  {
    v46 = 0;
  }
  if ( *((_QWORD *)&v80 + 1) )
    qfree(*((_QWORD *)&v80 + 1), v16->m256i_i8);
  if ( v77 )
    qfree(v77, v16->m256i_i8);
LABEL_49:
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73, v16->m256i_i8);
  }
  return v46;
}
