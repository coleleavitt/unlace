QT::QComboBox *__fastcall sub_4EDDB0(__int64 a1, __int64 a2, double a3)
{
  bool v3; // cc
  QT::QComboBox *v5; // rbp
  const char *v6; // rsi
  unsigned int v7; // eax
  void **v8; // rbx
  void **v9; // r15
  QT::QLineEdit *v10; // rbx
  unsigned __int64 v11; // rax
  void **v12; // rsi
  size_t v13; // r12
  __int64 (*v14)(); // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  const char *v18; // r12
  signed __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // rax
  const char *v22; // rbx
  size_t v23; // rdx
  double v24; // xmm0_8
  void **v25; // r14
  size_t v26; // rbx
  const char *v27; // rdi
  __int64 v28; // rbx
  __m128i v29; // xmm1
  double v30; // xmm0_8
  __m128i v31; // xmm1
  __int64 v32; // rdi
  void *v33; // rdi
  __m128i v34; // [rsp+0h] [rbp-A8h] BYREF
  void *v35[4]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v36; // [rsp+30h] [rbp-78h] BYREF
  __m128i v37; // [rsp+38h] [rbp-70h] BYREF
  void *v38; // [rsp+50h] [rbp-58h] BYREF
  void *src; // [rsp+58h] [rbp-50h]
  size_t n; // [rsp+60h] [rbp-48h]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 112) <= 1u;
  v41 = __readfsqword(0x28u);
  if ( !v3 )
  {
    v5 = (QT::QComboBox *)operator new(0x28u);
    QT::QComboBox::QComboBox(v5, nullptr);
    v6 = &s1;
    if ( *(_QWORD *)(a1 + 112) )
      v6 = *(const char **)(a1 + 104);
    sub_4F7790(&v38, v6);
    v7 = QT::QComboBox::count(v5);
    QT::QComboBox::insertItems(v5, v7, &v38);
    if ( v38 && !_InterlockedSub((volatile signed __int32 *)v38, 1u) )
    {
      v8 = (void **)src;
      v9 = (void **)((char *)src + 24 * n);
      if ( src != v9 )
      {
        do
        {
          if ( *v8 && !_InterlockedSub((volatile signed __int32 *)*v8, 1u) )
            free(*v8);
          v8 += 3;
        }
        while ( v9 != v8 );
      }
      free(v38);
    }
    v10 = (QT::QLineEdit *)operator new(0x28u);
    QT::QLineEdit::QLineEdit(v10, nullptr);
    QT::QLineEdit::setEchoMode(v10, a3);
    QT::QComboBox::setLineEdit(v5, v10);
    v11 = *(_QWORD *)(a2 + 8);
    if ( v11 > 1 )
    {
      v18 = *(const char **)a2;
      v19 = v11 - 1;
      if ( !*(_QWORD *)a2 || v19 < 0 )
      {
        v19 = 0;
        if ( v18 )
          v19 = strlen(*(const char **)a2);
      }
      QT::QString::fromUtf8(&v38, v19, v18);
      v12 = &v38;
      QT::QLineEdit::setText(v10, (const QT::QString *)&v38);
      if ( v38 && !_InterlockedSub((volatile signed __int32 *)v38, 1u) )
        free(v38);
      goto LABEL_16;
    }
    v12 = (void **)v10;
    QT::QLineEdit::text((QT::QLineEdit *)&v38);
    v13 = n;
    if ( v38 && !_InterlockedSub((volatile signed __int32 *)v38, 1u) )
    {
      free(v38);
      if ( !v13 )
      {
LABEL_16:
        v14 = *(__int64 (**)())(*QT::QCoreApplication::self + 288LL);
        if ( v14 != sub_3895F0
          && !((unsigned __int8 (__fastcall *)(_QWORD *, void **))v14)(QT::QCoreApplication::self, v12) )
        {
          QT::QComboBox::setCompleter(v5, nullptr);
        }
        v15 = QT::QComboBox::completer(v5);
        v16 = v15;
        if ( v15 )
        {
          QT::QCompleter::setCompletionMode(v15, 0);
          QT::QCompleter::setCaseSensitivity(v16, 1);
        }
        return v5;
      }
    }
    else if ( !v13 )
    {
      goto LABEL_16;
    }
    QT::QLineEdit::text((QT::QLineEdit *)v35);
    v12 = v35;
    QT::QString::toUtf8_helper((QT::QString *)&v38, (const QT::QString *)v35);
    v25 = (void **)src;
    v26 = n;
    if ( !src )
      v25 = (void **)&QT::QByteArray::_empty;
    v36 = 0;
    v37 = 0;
    if ( n )
    {
      v33 = nullptr;
      if ( n != -1 )
      {
        v36 = qvector_reserve(&v36, 0, n + 1, 1);
        v33 = (void *)v36;
      }
      v12 = v25;
      v37.m128i_i64[0] = v26 + 1;
      memmove(v33, v25, v26);
      *(_BYTE *)(v36 + v26) = 0;
    }
    if ( v38 && !_InterlockedSub((volatile signed __int32 *)v38, 1u) )
      free(v38);
    v27 = *(const char **)a2;
    v28 = v36;
    v36 = 0;
    v29 = _mm_loadu_si128(&v37);
    v37 = 0;
    if ( v27 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v34 = v29;
      v30 = qfree(v27, (const char *)v12);
      v31 = _mm_load_si128(&v34);
      v32 = v36;
      *(_QWORD *)a2 = v28;
      *(__m128i *)(a2 + 8) = v31;
      if ( v32 )
      {
        v37.m128i_i64[0] = 0;
        qfree(v32, (const char *)v12, v30);
      }
    }
    else
    {
      *(_QWORD *)a2 = v28;
      *(__m128i *)(a2 + 8) = v29;
    }
    if ( v35[0] && !_InterlockedSub((volatile signed __int32 *)v35[0], 1u) )
      free(v35[0]);
    goto LABEL_16;
  }
  v5 = (QT::QComboBox *)operator new(0x28u);
  v20 = *(_QWORD *)(a2 + 8);
  if ( v20 )
  {
    v21 = v20 - 1;
    v22 = *(const char **)a2;
    v23 = v21 >> 63;
  }
  else
  {
    LOBYTE(v23) = 0;
    v21 = 0;
    v22 = &s1;
  }
  if ( !v22 || (_BYTE)v23 )
  {
    v21 = 0;
    if ( v22 )
      v21 = strlen(v22);
  }
  v24 = QT::QString::fromUtf8(&v38, v21, v22);
  QT::QLineEdit::QLineEdit(v5, (const QT::QString *)&v38, nullptr);
  if ( v38 && !_InterlockedSub((volatile signed __int32 *)v38, 1u) )
    free(v38);
  QT::QLineEdit::setEchoMode(v5, v24);
  return v5;
}
