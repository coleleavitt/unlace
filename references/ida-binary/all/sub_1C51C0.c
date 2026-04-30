void __fastcall sub_1C51C0(int a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  _BYTE v6[4]; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_QWORD **)(a4 + 16);
      v5 = **(_QWORD **)(a4 + 8);
      sub_277730(v6, 0xFFFFFFFFLL);
      if ( QT::QCoreApplication::self )
        sub_545750(QT::QCoreApplication::self, v5, v4);
      sub_277860(v6);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
