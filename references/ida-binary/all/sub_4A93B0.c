unsigned __int64 __fastcall sub_4A93B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  QT::QWidget::showEvent(a1, a2);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2392) + 13LL) & 0x10) != 0 )
  {
    v3 = 0;
    if ( !*(_BYTE *)(a1 + 1224) )
      v3 = *(_QWORD *)(a1 + 1216);
    *(_OWORD *)ptr = 0;
    v8 = 0;
    QT::qt_qFindChildren_helper(v3, 0, 0, &QT::QLineEdit::staticMetaObject, ptr, 1);
    if ( v8 )
    {
      if ( !ptr[0] || *(int *)ptr[0] > 1 )
        sub_4A7810((__int64)ptr, 0, 0, 0, v4, v5);
      QT::QWidget::setFocus(*(_QWORD *)ptr[1], 7);
    }
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v9 - __readfsqword(0x28u);
}
