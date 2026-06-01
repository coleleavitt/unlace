unsigned __int64 __fastcall sub_3D1820(
        QT::QPlainTextEdit **this,
        QT::QString *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 (*v11)(); // rax
  void *p_ptr; // rdi
  const char *v14; // rbp
  size_t v15; // rax
  size_t v16; // r14
  size_t v17; // r12
  char *v18; // rax
  QT::QString *v19; // r14
  __int64 v20; // rdi
  double v21; // xmm0_8
  int v22; // r14d
  int v23; // r12d
  int v24; // eax
  unsigned __int64 v25; // rdi
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r12
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r12
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rdi
  char *v39; // rdx
  char *v40; // r12
  char *v41; // rbx
  char *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // r12
  _QWORD *v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // [rsp+0h] [rbp-138h] BYREF
  int v51[2]; // [rsp+8h] [rbp-130h] BYREF
  int v52[2]; // [rsp+10h] [rbp-128h] BYREF
  int v53[4]; // [rsp+18h] [rbp-120h]
  int v54; // [rsp+28h] [rbp-110h]
  __m128i v55; // [rsp+30h] [rbp-108h] BYREF
  __int64 v56; // [rsp+40h] [rbp-F8h]
  __int64 v57; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v58; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v59; // [rsp+60h] [rbp-D8h]
  __int64 v60; // [rsp+70h] [rbp-C8h]
  __int128 v61; // [rsp+78h] [rbp-C0h]
  char v62; // [rsp+88h] [rbp-B0h]
  void *ptr; // [rsp+90h] [rbp-A8h] BYREF
  char *s[2]; // [rsp+98h] [rbp-A0h]
  __int64 v65; // [rsp+A8h] [rbp-90h]
  __int128 v66; // [rsp+B0h] [rbp-88h]
  __int64 v67; // [rsp+C0h] [rbp-78h]
  __int128 v68; // [rsp+C8h] [rbp-70h]
  __int64 v69; // [rsp+D8h] [rbp-60h]
  __int128 v70; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v71; // [rsp+108h] [rbp-30h]

  v71 = __readfsqword(0x28u);
  v11 = *(__int64 (**)())(*QT::QCoreApplication::self + 328LL);
  if ( (v11 == sub_3CFBF0 || (unsigned __int8)v11())
    && *(char *)(*(_QWORD *)(QT::QCompleter::popup((QT::QCompleter *)this) + 32LL) + 9LL) < 0 )
  {
    p_ptr = &ptr;
    QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
    v14 = s[0];
    *(_QWORD *)v52 = 0;
    *(_OWORD *)v53 = 0;
    if ( s[0] || (v14 = (const char *)&QT::QByteArray::_empty) != nullptr )
    {
      v15 = strlen(v14);
      v16 = v15 + 1;
      v17 = v15;
      p_ptr = (void *)qvector_reserve(v52, 0, v15 + 1, 1);
      a2 = (QT::QString *)v14;
      *(_QWORD *)v52 = p_ptr;
      *(_QWORD *)v53 = v16;
      memmove(p_ptr, v14, v17);
      *(_BYTE *)(*(_QWORD *)v52 + v17) = 0;
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      p_ptr = ptr;
      free(ptr);
    }
    v50 = 0;
    v18 = (char *)&s1;
    if ( *(_QWORD *)v53 )
      v18 = *(char **)v52;
    if ( v18
      && (s[0] = v18,
          LOWORD(s[1]) = 256,
          a2 = (QT::QString *)(&word_3C + 1),
          ptr = (void *)get_idati(p_ptr),
          (unsigned __int8)create_tinfo(&v50, 61, 61, &ptr)) )
    {
      v19 = *(QT::QString **)v52;
      v57 = 256;
      v58 = 0;
      v60 = 0;
      v62 = 1;
      v59 = 0;
      v61 = 0;
      if ( *(_QWORD *)v52 )
      {
        v58 = qvector_reserve(&v58, 0, 1, 80);
        a2 = v19;
        v20 = v58 + 80 * v59;
        *(_QWORD *)v20 = 0;
        *(_QWORD *)(v20 + 8) = 0;
        *(_QWORD *)(v20 + 32) = 0;
        *(_DWORD *)(v20 + 72) = 0;
        *(_OWORD *)(v20 + 16) = 0;
        *(_OWORD *)(v20 + 40) = 0;
        *(_OWORD *)(v20 + 56) = 0;
        *(_QWORD *)&v59 = v59 + 1;
        sub_1E88D0(v20, (const char *)v19, 1);
      }
      v21 = 0.0;
      ptr = nullptr;
      v65 = 0;
      v67 = 0;
      v69 = 0;
      *(_OWORD *)s = 0;
      v66 = 0;
      v68 = 0;
      v70 = 0;
      sub_2D1510((__int64)&ptr, (const char *)a2);
      sub_2D5330((const char *)&ptr, (const char **)&v50, 0xFFFFFFFF, (int *)&v57);
      v22 = QT::QPlainTextEdit::cursorRect(*(this + 2));
      v23 = sub_527DF0(*(this + 2), v50, v22, v52[0], v53[0], v53[2], v54, v55.m128i_i64[0]);
      v24 = sub_3D00A0((QT::QCompleter *)this);
      v25 = (unsigned __int64)*(this + 2);
      v51[1] -= 10;
      v51[0] = v24 + v22 - 15 + v23;
      v55 = (__m128i)v25;
      v56 = 0;
      v55.m128i_i64[1] = QT::QWidget::mapToGlobal(v25, v51);
      HIDWORD(v56) = 2;
      sub_2D5B40((__int64 *)&ptr, &v55, 0.0, a4, a5, a6, v26, v27, a9, a10);
      v28 = v69;
      if ( v69 )
      {
        v29 = v70;
        if ( (_QWORD)v70 )
        {
          v30 = 0;
          do
          {
            v31 = (_QWORD *)(v28 + 80 * v30);
            v32 = v31[4];
            if ( v32 )
            {
              v31[5] = 0;
              v21 = qfree(v32, v55.m128i_i8);
            }
            v33 = v31[1];
            if ( v33 )
            {
              v31[2] = 0;
              v21 = qfree(v33, v55.m128i_i8, v21);
            }
            ++v30;
            v28 = v69;
          }
          while ( v29 != v30 );
        }
        *(_QWORD *)&v70 = 0;
        v21 = qfree(v28, v55.m128i_i8);
      }
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        v21 = qfree(v67, v55.m128i_i8, v21);
      }
      v34 = v65;
      if ( v65 )
      {
        v35 = v66;
        if ( (_QWORD)v66 )
        {
          v36 = 0;
          do
          {
            v37 = (__int64 *)(v34 + 24 * v36);
            v38 = *v37;
            if ( *v37 )
            {
              v37[1] = 0;
              v21 = qfree(v38, v55.m128i_i8, v21);
              v34 = v65;
            }
            ++v36;
          }
          while ( v35 != v36 );
        }
        *(_QWORD *)&v66 = 0;
        v21 = qfree(v34, v55.m128i_i8, v21);
      }
      v39 = (char *)ptr;
      if ( ptr )
      {
        v40 = s[0];
        if ( s[0] )
        {
          v41 = nullptr;
          do
          {
            v42 = &v39[24 * (_QWORD)v41];
            v43 = *(_QWORD *)v42;
            if ( *(_QWORD *)v42 )
            {
              *((_QWORD *)v42 + 1) = 0;
              v21 = qfree(v43, v55.m128i_i8, v21);
              v39 = (char *)ptr;
            }
            ++v41;
          }
          while ( v40 != v41 );
        }
        s[0] = nullptr;
        v21 = qfree(v39, v55.m128i_i8, v21);
      }
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        v21 = qfree(v60, v55.m128i_i8, v21);
      }
      v44 = v58;
      if ( v58 )
      {
        v45 = v59;
        if ( (_QWORD)v59 )
        {
          v46 = 0;
          do
          {
            v47 = (_QWORD *)(v44 + 80 * v46);
            v48 = v47[4];
            if ( v48 )
            {
              v47[5] = 0;
              v21 = qfree(v48, v55.m128i_i8, v21);
            }
            v49 = v47[1];
            if ( v49 )
            {
              v47[2] = 0;
              v21 = qfree(v49, v55.m128i_i8, v21);
            }
            ++v46;
            v44 = v58;
          }
          while ( v45 != v46 );
        }
        *(_QWORD *)&v59 = 0;
        v21 = qfree(v44, v55.m128i_i8, v21);
      }
      clear_tinfo_t(&v50);
      if ( *(_QWORD *)v52 )
      {
        *(_QWORD *)v53 = 0;
        qfree(*(_QWORD *)v52, v55.m128i_i8, v21);
      }
    }
    else
    {
      if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
        QT::QWidget::close(qword_8CCE70);
      clear_tinfo_t(&v50);
      if ( *(_QWORD *)v52 )
      {
        *(_QWORD *)v53 = 0;
        qfree(*(_QWORD *)v52, (const char *)a2);
      }
    }
  }
  return v71 - __readfsqword(0x28u);
}
