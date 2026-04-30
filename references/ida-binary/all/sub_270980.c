QT::QVariant *__fastcall sub_270980(QT::QVariant *this, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE v7[8]; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v8[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a4 )
  {
    if ( a4 != 1 || *(_DWORD *)(a3 + 12) )
    {
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 2;
      *(_OWORD *)this = 0;
    }
    else
    {
      QT::QFileIconProvider::QFileIconProvider((QT::QFileIconProvider *)v8);
      QT::QFileIconProvider::icon(v7, v8, 5);
      QT::QIcon::operator QT::QVariant(this, v7);
      QT::QIcon::~QIcon((QT::QIcon *)v7);
      QT::QFileIconProvider::~QFileIconProvider((QT::QFileIconProvider *)v8);
    }
  }
  else
  {
    v4 = *(_QWORD *)(a3 + 8);
    v5 = *(_QWORD *)(a2 + 16);
    if ( HIDWORD(v4) )
      QT::QVariant::QVariant(this, (const QT::QString *)(v5 + ((HIDWORD(v4) - 1) << 6) + 32));
    else
      QT::QVariant::QVariant(this, (const QT::QString *)(v5 + (v4 << 6) + 8));
  }
  return this;
}
