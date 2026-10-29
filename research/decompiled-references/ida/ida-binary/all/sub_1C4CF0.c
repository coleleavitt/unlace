void __fastcall sub_1C4CF0(int a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  _BYTE v5[4]; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_QWORD **)(a4 + 8);
      sub_277730(v5, 0xFFFFFFFFLL);
      if ( QT::QCoreApplication::self )
        sub_545A00(QT::QCoreApplication::self, v4);
      sub_277860(v5);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
