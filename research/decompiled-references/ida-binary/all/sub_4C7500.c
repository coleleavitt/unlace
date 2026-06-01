unsigned __int64 __fastcall sub_4C7500(__int64 a1)
{
  __int64 v1; // rsi
  QT::QLabel *v2; // r13
  unsigned int v3; // r12d
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return v6 - __readfsqword(0x28u);
  v2 = *(QT::QLabel **)(a1 + 80);
  if ( *(_BYTE *)(a1 + 56) )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(v1 + 32) + 12LL) & 0x800;
    if ( v3 )
      QT::QWidget::windowTitle((QT::QWidget *)ptr);
    else
      QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_8982E0, "Drag this title to dock somewhere else", 0);
    QT::QLabel::setText(v2, (const QT::QString *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    QT::QWidget::show(*(QT::QWidget **)(a1 + 80));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 104LL))(*(_QWORD *)(a1 + 72), v3 >> 11);
  }
  else
  {
    QT::QWidget::hide(*(QT::QWidget **)(a1 + 80));
    QT::QWidget::hide(*(QT::QWidget **)(a1 + 72));
  }
  return sub_4C5F10(*(_QWORD **)(a1 + 40));
}
