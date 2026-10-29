QT::QIcon *__fastcall sub_3087A0(QT::QIcon *this, const char *a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = sub_5313F0(a3);
  if ( v3 )
    sub_3086A0((__int64)this, a2, v3 + 32);
  else
    QT::QIcon::QIcon(this);
  return this;
}
