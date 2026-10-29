__int64 __fastcall sub_312940(__int64 a1, const char *a2, int a3)
{
  __int64 v3; // rax
  QT::QLineEdit *v4; // rbp
  size_t v5; // rax
  __int64 v6; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 320);
  ptr[3] = (void *)__readfsqword(0x28u);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 48);
  v4 = *(QT::QLineEdit **)(v3 + 48);
  v5 = a3;
  if ( !a2 || a3 < 0LL )
  {
    v5 = 0;
    if ( a2 )
      v5 = strlen(a2);
  }
  QT::QString::fromUtf8(ptr, v5, a2);
  QT::QLineEdit::insert(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = *(_QWORD *)(a1 + 320);
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 48);
  return QT::QWidget::setFocus(*(_QWORD *)(v6 + 48), 7);
}
