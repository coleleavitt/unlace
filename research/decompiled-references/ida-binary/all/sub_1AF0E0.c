unsigned __int64 __fastcall sub_1AF0E0(_QWORD *a1, int a2)
{
  _QWORD *v4; // rax
  void *v5; // rdi
  __int64 v6; // r12
  QT::QAbstractButton *v7; // r13
  size_t v8; // rax
  const char *v9; // rbp
  QT::QWidget *v10; // r13
  const char *v11; // rbx
  size_t v12; // rax
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a2 < (unsigned __int64)xmmword_8CAE08 && a2 >= 0 )
  {
    v4 = *((_QWORD **)qword_8CAE00 + a2);
    a1[8] = v4;
    if ( v4[13] )
    {
      v5 = (void *)v4[12];
      v4[14] = 0;
      *((_OWORD *)v4 + 6) = 0;
      if ( v5 && !_InterlockedSub((volatile signed __int32 *)v5, 1u) )
        free(v5);
      v4 = (_QWORD *)a1[8];
    }
    v6 = *v4;
    v7 = (QT::QAbstractButton *)a1[5];
    v8 = 0;
    v9 = *(const char **)(v6 + 16);
    if ( v9 )
      v8 = strlen(*(const char **)(v6 + 16));
    QT::QString::fromUtf8(ptr, v8, v9);
    QT::QAbstractButton::setText(v7, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v10 = (QT::QWidget *)a1[6];
    v11 = *(const char **)(v6 + 32);
    if ( v11 )
    {
      v12 = strlen(*(const char **)(v6 + 32));
      QT::QString::fromUtf8(ptr, v12, v11);
    }
    else
    {
      QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25);
    }
    QT::QWidget::setToolTip(v10, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v14 - __readfsqword(0x28u);
}
