void __fastcall sub_1C4C00(int a1, void *a2, __int64 a3, _QWORD **a4)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r15
  _BYTE v9[4]; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = *a4[5];
      v5 = *a4[4];
      v6 = *a4[3];
      v7 = *a4[2];
      v8 = *a4[1];
      sub_277730(v9, 0xFFFFFFFFLL);
      if ( QT::QCoreApplication::self )
        sub_545A60(QT::QCoreApplication::self, v8, v7, v6, v5, v4);
      sub_277860(v9);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
