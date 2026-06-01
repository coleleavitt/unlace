__int64 __fastcall sub_1C7FC0(QT::QVariant *this)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 *v3; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+8h] [rbp-30h]
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v1 = 0;
  v8 = __readfsqword(0x28u);
  QT::QMetaType::QMetaType((QT::QMetaType *)&ptr, 12);
  v2 = QT::QVariant::metaType(this);
  if ( (unsigned __int8)QT::QMetaType::canConvert(v2, ptr) )
  {
    QT::QVariant::toByteArray((QT::QVariant *)&ptr);
    if ( v7 == 8 )
    {
      v3 = v6;
      if ( !v6 )
        v3 = (__int64 *)&QT::QByteArray::_empty;
      v1 = *v3;
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return v1;
}
