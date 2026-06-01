__int64 __fastcall sub_53AE00(
        __int64 *a1,
        __int64 a2,
        const char *a3,
        const char *a4,
        const __m128i *a5,
        int a6,
        int a7)
{
  __int64 (__fastcall ***v9)(); // r12
  size_t v10; // rax
  size_t v11; // r13
  __m128i *v14; // rsi
  __m128i si128; // xmm0
  size_t v16; // rax
  size_t v17; // r12
  __m128i v18; // xmm0
  char *v19; // rbp
  const char *v20; // r12
  __int64 (__fastcall **v21)(); // rsi
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // r12
  char *v25; // rax
  __int64 v26; // r15
  __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rbp
  size_t v30; // rax
  size_t v31; // r15
  size_t v32; // r8
  __int64 v33; // rdx
  __int64 (__fastcall **v34)(); // rdi
  __int64 v35; // rax
  void *v36; // rbp
  __int64 v37; // r15
  QT::QWidget *v38; // r14
  void **v39; // rsi
  void (__fastcall *v40)(void *, double); // rax
  void *v41; // rdi
  size_t v42; // r14
  void *v43; // rdi
  size_t v44; // r15
  char *v45; // r14
  __int64 v46; // rdi
  size_t v47; // r15
  size_t v48; // rax
  char v49; // r15
  char *v50; // r13
  int v51; // r14d
  __int64 v52; // r10
  unsigned __int64 v53; // rdx
  int v54; // eax
  int v55; // r10d
  __int64 v56; // r15
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  const char *src; // [rsp+0h] [rbp-198h]
  void *srcc; // [rsp+0h] [rbp-198h]
  void *srcb; // [rsp+0h] [rbp-198h]
  void *srca; // [rsp+0h] [rbp-198h]
  int v65; // [rsp+8h] [rbp-190h]
  __int64 v66; // [rsp+8h] [rbp-190h]
  int v67; // [rsp+10h] [rbp-188h]
  __int64 v68; // [rsp+10h] [rbp-188h]
  size_t v69; // [rsp+10h] [rbp-188h]
  __int64 v70; // [rsp+18h] [rbp-180h]
  void *ptr[4]; // [rsp+30h] [rbp-168h] BYREF
  void *v72; // [rsp+50h] [rbp-148h] BYREF
  char *s; // [rsp+58h] [rbp-140h]
  __int64 v74; // [rsp+70h] [rbp-128h] BYREF
  __int128 v75; // [rsp+78h] [rbp-120h]
  __int64 v76; // [rsp+88h] [rbp-110h]
  __int128 v77; // [rsp+90h] [rbp-108h]
  void *dest; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v79; // [rsp+A8h] [rbp-F0h]
  __int64 v80; // [rsp+B8h] [rbp-E0h]
  __int64 v81; // [rsp+C0h] [rbp-D8h]
  __int128 v82; // [rsp+C8h] [rbp-D0h]
  int v83; // [rsp+D8h] [rbp-C0h]
  __int16 v84; // [rsp+DCh] [rbp-BCh]
  char v85; // [rsp+DEh] [rbp-BAh]
  __int64 (__fastcall **v86)(); // [rsp+E0h] [rbp-B8h] BYREF
  __m128i v87; // [rsp+E8h] [rbp-B0h] BYREF
  __int64 v88; // [rsp+138h] [rbp-60h]
  __int64 v89; // [rsp+140h] [rbp-58h]
  unsigned __int64 v90; // [rsp+158h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  LODWORD(v9) = batch;
  if ( batch )
  {
    if ( a3 )
    {
      v10 = strlen(a3);
      v11 = v10;
      if ( v10 )
      {
        v41 = (void *)*a1;
        v42 = v10 + 1;
        if ( a1[2] < v10 + 1 )
        {
          v60 = qvector_reserve(a1, *a1, v10 + 1, 1);
          *a1 = v60;
          v41 = (void *)v60;
        }
        a1[1] = v42;
        memmove(v41, a3, v11);
        *(_BYTE *)(*a1 + v11) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    else
    {
      LODWORD(v9) = 0;
    }
    return (unsigned int)v9;
  }
  v74 = 0;
  v76 = 0;
  dest = nullptr;
  v80 = 0;
  v81 = 0;
  v83 = -1;
  v84 = 256;
  v85 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v82 = 0;
  sub_52AA00((__int64)&v74, a4, a5);
  v80 = a2;
  v14 = (__m128i *)v74;
  if ( *((_QWORD *)&v75 + 1) <= 0x11u )
  {
    v74 = qvector_reserve(&v74, v74, 18, 1);
    v14 = (__m128i *)v74;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDDF0);
  v14[1].m128i_i8[0] = 116;
  *(_QWORD *)&v75 = 18;
  *v14 = si128;
  *(_BYTE *)(v74 + 17) = 0;
  v85 = 1;
  if ( a3 && (v16 = strlen(a3), (v17 = v16) != 0) )
  {
    v43 = dest;
    v44 = v16 + 1;
    if ( v79.m128i_i64[1] < v16 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v44, 1);
      v43 = dest;
    }
    v79.m128i_i64[0] = v44;
    memmove(v43, a3, v17);
    v18.m128i_i64[0] = 0;
    *((_BYTE *)dest + v17) = 0;
    v86 = nullptr;
    v87 = 0;
    if ( v79.m128i_i64[0] )
    {
      src = (const char *)dest;
      v19 = strchr((const char *)dest, 13);
      goto LABEL_13;
    }
  }
  else
  {
    v79.m128i_i64[0] = 0;
    v18.m128i_i64[0] = 0;
    v86 = nullptr;
    v87 = 0;
  }
  v19 = nullptr;
  src = &s1;
LABEL_13:
  v20 = src;
  v21 = nullptr;
  while ( v19 )
  {
    if ( v19 != v20 )
    {
      v26 = v87.m128i_i64[0];
      v27 = v19 - v20;
      if ( v87.m128i_i64[0] )
      {
        v26 = v87.m128i_i64[0] - 1;
        v27 = v19 - v20 + v87.m128i_i64[0] - 1;
      }
      v28 = v27 + 1;
      if ( v87.m128i_i64[1] < (unsigned __int64)(v27 + 1) )
      {
        v70 = v27;
        v68 = v27 + 1;
        v86 = (__int64 (__fastcall **)())qvector_reserve(&v86, v21, v28, 1);
        v27 = v70;
        v21 = v86;
        v28 = v68;
      }
      v87.m128i_i64[0] = v28;
      *((_BYTE *)v21 + v27) = 0;
      memmove((char *)v86 + v26, v20, v19 - v20);
      v21 = v86;
    }
    v24 = v87.m128i_i64[0];
    if ( v87.m128i_i64[0] )
    {
      v22 = v87.m128i_i64[0] + 1;
      v23 = v87.m128i_i64[0] + 2;
      v24 = v87.m128i_i64[0] - 1;
      if ( v87.m128i_i64[1] >= (unsigned __int64)(v87.m128i_i64[0] + 2) )
        goto LABEL_15;
    }
    else
    {
      v23 = 3;
      v22 = 2;
      if ( v87.m128i_i64[1] >= 3uLL )
        goto LABEL_15;
    }
    v86 = (__int64 (__fastcall **)())qvector_reserve(&v86, v21, v23, 1);
    v21 = v86;
LABEL_15:
    v87.m128i_i64[0] = v23;
    *((_BYTE *)v21 + v22) = 0;
    *(_WORD *)((char *)v86 + v24) = 2573;
    v20 = v19 + 1;
    v25 = strchr(v19 + 1, 13);
    v21 = v86;
    v19 = v25;
  }
  if ( v20 == src )
  {
    v34 = v21;
  }
  else
  {
    if ( *v20 && v20 )
    {
      v29 = v87.m128i_i64[0];
      v30 = strlen(v20);
      v31 = v30;
      v32 = v30;
      if ( v29 )
      {
        --v29;
        v32 = v30 + v29;
      }
      v33 = v32 + 1;
      if ( v87.m128i_i64[1] < v32 + 1 )
      {
        v69 = v32;
        srca = (void *)(v32 + 1);
        v86 = (__int64 (__fastcall **)())qvector_reserve(&v86, v21, v33, 1);
        v32 = v69;
        v21 = v86;
        v33 = (__int64)srca;
      }
      v87.m128i_i64[0] = v33;
      *((_BYTE *)v21 + v32) = 0;
      memmove((char *)v86 + v29, v20, v31);
      v21 = v86;
    }
    v34 = (__int64 (__fastcall **)())dest;
    dest = v21;
    v18 = _mm_loadu_si128(&v87);
    v86 = v34;
    v87.m128i_i64[1] = v79.m128i_i64[1];
    v79 = v18;
  }
  if ( v34 )
  {
    v87.m128i_i64[0] = 0;
    *(double *)v18.m128i_i64 = qfree(v34, (const char *)v21);
  }
  v83 = a6;
  v35 = (*(__int64 (__fastcall **)(_QWORD *, double))(QT::QCoreApplication::self[2] + 88LL))(
          QT::QCoreApplication::self + 2,
          *(double *)v18.m128i_i64);
  v36 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 72LL))(v35, 0);
  v37 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 112LL))(QT::QCoreApplication::self);
  v38 = (QT::QWidget *)operator new(0xB8u);
  sub_529BA0(v38, nullptr, 0);
  v39 = (void **)v38;
  v9 = &v86;
  sub_52A170((QT::QWidget *)&v86, (__int64)v38, (__int64)&v74, v37, 0);
  v67 = sub_53AB40((void **)&v86);
  if ( v67 == 1 )
  {
    sub_529EB0((QT::QTextDocument *)ptr, (__int64)&v86);
    v39 = ptr;
    QT::QString::toUtf8_helper((QT::QString *)&v72, (const QT::QString *)ptr);
    v45 = s;
    if ( !s )
      v45 = (char *)&QT::QByteArray::_empty;
    v46 = *a1;
    if ( *a1 )
    {
      a1[1] = 0;
      *(double *)v18.m128i_i64 = qfree(v46, (const char *)ptr);
      *a1 = 0;
      v47 = 0;
      a1[2] = 0;
    }
    else
    {
      v47 = a1[2];
    }
    v48 = strlen(v45);
    if ( v47 < v48 )
    {
      v39 = (void **)*a1;
      *a1 = qvector_reserve(a1, *a1, v48, 1);
    }
    v49 = *v45;
    v50 = v45 + 1;
    if ( *v45 )
    {
      v51 = 0;
      do
      {
        if ( v49 == 9 )
        {
          v55 = a7 * (v51 / a7 + 1);
          if ( v51 < v55 )
          {
            do
            {
              v56 = a1[1];
              v57 = 2;
              if ( v56 )
                v57 = v56-- + 1;
              v39 = (void **)*a1;
              if ( a1[2] < v57 )
              {
                v65 = v55;
                srcc = (void *)v57;
                v58 = qvector_reserve(a1, v39, v57, 1);
                v55 = v65;
                v57 = (unsigned __int64)srcc;
                *a1 = v58;
                v39 = (void **)v58;
              }
              a1[1] = v57;
              ++v51;
              *((_BYTE *)v39 + v56) = 32;
              *(_BYTE *)(*a1 + v56 + 1) = 0;
            }
            while ( v55 != v51 );
          }
        }
        else if ( v49 != 13 )
        {
          v52 = a1[1];
          v53 = 2;
          if ( v52 )
            v53 = v52-- + 1;
          v39 = (void **)*a1;
          if ( a1[2] < v53 )
          {
            v66 = v52;
            srcb = (void *)v53;
            v59 = qvector_reserve(a1, v39, v53, 1);
            v52 = v66;
            v53 = (unsigned __int64)srcb;
            *a1 = v59;
            v39 = (void **)v59;
          }
          a1[1] = v53;
          *((_BYTE *)v39 + v52) = v49;
          *(_BYTE *)(*a1 + v52 + 1) = 0;
          v54 = 0;
          if ( v49 != 10 )
            v54 = v51 + 1;
          v51 = v54;
        }
        v49 = *v50++;
      }
      while ( v49 );
    }
    if ( v72 && !_InterlockedSub((volatile signed __int32 *)v72, 1u) )
      free(v72);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  QT::QWidget::hide((QT::QWidget *)&v86);
  v86 = &text_area_dialog_t___vtable;
  v87.m128i_i64[1] = (__int64)text_area_dialog_t___vtable_at__16;
  if ( v88 )
  {
    v89 = 0;
    *(double *)v18.m128i_i64 = qfree(v88, (const char *)v39);
  }
  v86 = &ui_dialog_t___vtable;
  v87.m128i_i64[1] = (__int64)ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog((QT::QDialog *)&v86);
  if ( v36 )
  {
    v40 = *(void (__fastcall **)(void *, double))(*(_QWORD *)v36 + 8LL);
    if ( v40 == ui_dialog_exec_ctl_t__::vfunc_1 )
    {
      ui_dialog_exec_ctl_t__::vfunc_0((__int64)v36, *(double *)v18.m128i_i64);
      v39 = (void **)&dword_30;
      operator delete(v36, 0x30u);
    }
    else
    {
      v40(v36, *(double *)v18.m128i_i64);
    }
  }
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    *(double *)v18.m128i_i64 = qfree(v81, (const char *)v39, *(double *)v18.m128i_i64);
  }
  if ( dest )
  {
    v79.m128i_i64[0] = 0;
    *(double *)v18.m128i_i64 = qfree(dest, (const char *)v39, *(double *)v18.m128i_i64);
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    *(double *)v18.m128i_i64 = qfree(v76, (const char *)v39, *(double *)v18.m128i_i64);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74, (const char *)v39, *(double *)v18.m128i_i64);
  }
  LOBYTE(v9) = v67 == 1;
  return (unsigned int)v9;
}
