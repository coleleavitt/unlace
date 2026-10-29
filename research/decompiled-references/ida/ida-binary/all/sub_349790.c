QT::QString *__fastcall sub_349790(QT::QString *this, const QT::QString *a2)
{
  char v3; // [rsp+6h] [rbp-22h] BYREF
  char v4; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  QT::QString::toUtf8_helper(this, a2);
  v3 = 13;
  QT::QByteArray::replace(this, 1, &v3, 0, &unk_5C2F25);
  v4 = 10;
  QT::QByteArray::replace(this, 1, &v4, 2, "\r\n");
  return this;
}
