unsigned __int64 __fastcall sub_357560(__int64 a1, QT::QWidget *a2, QT::QWidget *a3, char a4)
{
  char v5; // r12
  double v7; // xmm0_8
  void *v9; // rdi
  int v10; // ebp
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  void *v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v5 = a4 ^ 1;
  v14 = __readfsqword(0x28u);
  QT::QWidget::setEnabled(a2, a4 != 1);
  QT::QWidget::setEnabled(a3, v5);
  if ( a4 )
  {
    v7 = QT::QString::fromUtf8(&ptr, 19, "lumina.hex-rays.com");
    QT::QLineEdit::setText(a2, (const QT::QString *)&ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    QT::QString::fromUtf8(&ptr, 3, "443", v7);
    QT::QLineEdit::setText(a3, (const QT::QString *)&ptr);
    if ( ptr )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
    }
    return v14 - __readfsqword(0x28u);
  }
  QT::QLineEdit::text((QT::QLineEdit *)&ptr);
  v9 = v12;
  if ( !v12 )
    v9 = &QT::QString::_empty;
  v10 = QT::QString::compare_helper(v9, v13, "lumina.hex-rays.com", 19, 1);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    free(ptr);
    if ( !v10 )
      goto LABEL_14;
    return v14 - __readfsqword(0x28u);
  }
  if ( v10 )
    return v14 - __readfsqword(0x28u);
LABEL_14:
  QT::QLineEdit::clear(a2);
  return QT::QLineEdit::clear(a3);
}
