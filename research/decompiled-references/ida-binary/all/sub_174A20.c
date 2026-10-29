void __fastcall sub_174A20(__int64 a1)
{
  void *v1; // rbp

  v1 = *(void **)(a1 + 48);
  if ( v1 )
  {
    QT::QTextLayout::~QTextLayout(*(QT::QTextLayout **)(a1 + 48));
    operator delete(v1, 8u);
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
}
