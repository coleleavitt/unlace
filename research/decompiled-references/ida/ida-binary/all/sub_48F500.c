void __fastcall sub_48F500(int a1, QT::QAbstractItemView **a2, __int64 a3, __int64 a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      sub_48F2A0(a2[2], **(_QWORD **)(a4 + 8), 0x42u);
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
