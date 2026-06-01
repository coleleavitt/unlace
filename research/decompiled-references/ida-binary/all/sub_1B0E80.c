__int64 __fastcall sub_1B0E80(
        __int64 a1,
        int *a2,
        QT::QKeyEvent *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  QT::QLineEdit *v12; // r12
  __int64 v13; // rax
  unsigned int v14; // ebx
  const char *v16; // r8
  unsigned int v17; // eax
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // eax
  bool v35; // sf
  int v36; // eax
  const char *v37; // rsi
  void **v38; // rbx
  void **v39; // rbp
  size_t v40; // rax
  char *v41; // rbx
  unsigned __int64 v42; // rdx
  char v43; // dl
  __int64 v44; // rax
  QT::QWidget *v45; // rbp
  QT::QWidget *v46; // rax
  size_t n; // [rsp+8h] [rbp-E0h]
  const char *src; // [rsp+18h] [rbp-D0h]
  int v49; // [rsp+28h] [rbp-C0h] BYREF
  int v50; // [rsp+2Ch] [rbp-BCh] BYREF
  char *v51; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v52; // [rsp+38h] [rbp-B0h]
  void *ptr[2]; // [rsp+50h] [rbp-98h] BYREF
  int v54; // [rsp+60h] [rbp-88h]
  void *v55; // [rsp+70h] [rbp-78h] BYREF
  char *s[2]; // [rsp+78h] [rbp-70h]
  void *v57[2]; // [rsp+88h] [rbp-60h]
  __int64 v58; // [rsp+98h] [rbp-50h]
  unsigned __int64 v59; // [rsp+A8h] [rbp-40h]

  v12 = (QT::QLineEdit *)a2;
  v13 = *(_QWORD *)a1;
  v14 = *((_DWORD *)a3 + 16);
  v59 = __readfsqword(0x28u);
  if ( *(_QWORD *)(v13 + 48) )
  {
    v49 = QT::QLineEdit::selectionStart((QT::QLineEdit *)a2);
    QT::QLineEdit::selectedText((QT::QLineEdit *)&v55);
    v50 = (int)s[1];
    if ( v55 && !_InterlockedSub((volatile signed __int32 *)v55, 1u) )
      free(v55);
    QT::QLineEdit::text((QT::QLineEdit *)ptr);
    QT::QString::toUtf8_helper((QT::QString *)&v55, (const QT::QString *)ptr);
    v16 = s[0];
    a4 = 0.0;
    v51 = nullptr;
    v52 = 0;
    if ( s[0] || (v16 = (const char *)&QT::QByteArray::_empty) != nullptr )
    {
      src = v16;
      n = strlen(v16);
      v51 = (char *)qvector_reserve(&v51, 0, n + 1, 1);
      *(_QWORD *)&v52 = n + 1;
      memmove(v51, src, n);
      v51[n] = 0;
    }
    if ( v55 && !_InterlockedSub((volatile signed __int32 *)v55, 1u) )
      free(v55);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 8LL) & 1) != 0 )
    {
      LODWORD(ptr[0]) = v14;
      v17 = QT::QKeyEvent::modifiers(a3);
    }
    else
    {
      LODWORD(ptr[0]) = sub_3EA8F0(a3);
      v17 = sub_47B6A0(QT::QCoreApplication::self, a3);
    }
    a2 = &v49;
    if ( (*(unsigned __int8 (__fastcall **)(char **, int *, int *, void **, _QWORD))(*(_QWORD *)a1 + 48LL))(
           &v51,
           &v49,
           &v50,
           ptr,
           v17) )
    {
      if ( (_QWORD)v52 )
      {
        v40 = v52 - 1;
        v41 = v51;
        v42 = (unsigned __int64)(v52 - 1) >> 63;
      }
      else
      {
        LOBYTE(v42) = 0;
        v40 = 0;
        v41 = (char *)&s1;
      }
      if ( !v41 || (_BYTE)v42 )
      {
        v40 = 0;
        if ( v41 )
          v40 = strlen(v41);
      }
      QT::QString::fromUtf8(&v55, v40, v41);
      QT::QLineEdit::setText(v12, (const QT::QString *)&v55);
      if ( v55 && !_InterlockedSub((volatile signed __int32 *)v55, 1u) )
        free(v55);
      a2 = (int *)(unsigned int)v49;
      QT::QLineEdit::setSelection(v12, v49, v50);
      v14 = (unsigned int)ptr[0];
    }
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51, (const char *)a2);
    }
  }
  if ( v14 == 0x1000000 )
  {
    if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
      QT::QWidget::close(qword_8CCE70);
    v44 = sub_479A70(QT::QCoreApplication::self + 21, -1, -1, 1);
    v45 = (QT::QWidget *)v44;
    if ( v44 )
    {
      QT::QWidget::setFocus(v44, 7);
      v46 = (QT::QWidget *)QT::QWidget::window(v45);
      QT::QWidget::activateWindow(v46);
    }
    return v14;
  }
  if ( v14 - 16777217 <= 1 )
  {
    v43 = v14 == 16777217;
    v14 = 0;
    sub_1AFE30(a1, v12, v43);
    return v14;
  }
  if ( v14 - 16777248 > 3 )
  {
    if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
      QT::QWidget::close(qword_8CCE70);
    v21 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 8) = -1;
    v22 = 0;
    if ( v21 )
    {
      do
      {
        v23 = (__int64 *)(*(_QWORD *)(a1 + 24) + 24 * v22);
        v24 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v24, (const char *)a2);
        }
        ++v22;
      }
      while ( v21 != v22 );
    }
    v25 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 32) = 0;
    v26 = 0;
    if ( v25 )
    {
      do
      {
        v27 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24 * v26);
        v28 = *v27;
        if ( *v27 )
        {
          v27[1] = 0;
          qfree(v28, (const char *)a2);
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    v29 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 56) = 0;
    v30 = 0;
    if ( v29 )
    {
      do
      {
        v31 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24 * v30);
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          qfree(v32, (const char *)a2);
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 12) = -1;
  }
  if ( (QT::QKeyEvent::modifiers(a3) & 0xE000000) == 0 )
  {
    if ( v14 != 16777235 )
    {
      if ( (int)v14 <= 16777235 )
      {
        if ( v14 - 16777220 <= 1 )
        {
          sub_1AF8F0((_QWORD *)a1, a4, a5, a6, a7, v18, v19, a10, a11);
          return 0;
        }
        return v14;
      }
      if ( v14 != 16777237 )
        return v14;
    }
    v33 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    *(_OWORD *)s = 0;
    v55 = nullptr;
    v58 = 0;
    *(_OWORD *)v57 = 0;
    sub_4F65D0(&v55, v33);
    v34 = 2 * (v14 == 16777235) - 1;
    v35 = *(_DWORD *)(a1 + 120) + v34 < 0;
    v36 = *(_DWORD *)(a1 + 120) + v34;
    *(_DWORD *)(a1 + 120) = v36;
    if ( v35 )
    {
      *(_DWORD *)(a1 + 120) = 0;
    }
    else if ( v36 < v58 )
    {
      QT::QLineEdit::setText(v12, (const QT::QString *)((char *)v57[1] + 24 * v36));
    }
    else
    {
      *(_DWORD *)(a1 + 120) = v58 - 1;
    }
    QT::QLineEdit::text((QT::QLineEdit *)ptr);
    v37 = (const char *)(unsigned int)v54;
    QT::QLineEdit::setSelection(v12, v54, 0);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
    {
      v38 = (void **)v57[1];
      v39 = (void **)((char *)v57[1] + 24 * v58);
      if ( v57[1] != v39 )
      {
        do
        {
          if ( *v38 && !_InterlockedSub((volatile signed __int32 *)*v38, 1u) )
            free(*v38);
          v38 += 3;
        }
        while ( v39 != v38 );
      }
      free(v57[0]);
    }
    if ( v55 )
    {
      s[0] = nullptr;
      v14 = 0;
      qfree(v55, v37);
      return v14;
    }
    return 0;
  }
  return v14;
}
