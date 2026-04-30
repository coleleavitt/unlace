QT::QVariant *__fastcall sub_1C7F30(QT::QVariant *this, __int64 a2)
{
  char v3[8]; // [rsp+8h] [rbp-40h] BYREF
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  *(_QWORD *)v3 = a2;
  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QByteArray::QByteArray((QT::QByteArray *)ptr, v3, 8);
  QT::QVariant::QVariant(this, (const QT::QByteArray *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return this;
}
