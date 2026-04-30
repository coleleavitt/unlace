unsigned __int64 __fastcall sub_51D2F0(__int64 a1, const QT::QString *a2)
{
  volatile signed __int32 *v2; // r12
  char v4; // r13
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+10h] [rbp-38h]
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  v2 = (volatile signed __int32 *)ptr[0];
  if ( v6 != *((_QWORD *)a2 + 2) )
  {
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    return QT::QLineEdit::setText(*(QT::QLineEdit **)(a1 + 64), a2);
  }
  v4 = QT::QtPrivate::equalStrings(v6, *((_QWORD *)a2 + 1), v6, ptr[1]);
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(ptr[0]);
  if ( !v4 )
    return QT::QLineEdit::setText(*(QT::QLineEdit **)(a1 + 64), a2);
  return v7 - __readfsqword(0x28u);
}
