void __fastcall sub_2C7B00(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp

  v1 = a1[2];
  while ( v1 )
  {
    v2 = v1;
    sub_2C78C0(*(_QWORD **)(v1 + 24));
    v1 = *(_QWORD *)(v1 + 16);
    QT::QImage::~QImage((QT::QImage *)(v2 + 40));
    operator delete((void *)v2, 0x40u);
  }
}
