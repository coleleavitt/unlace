void __fastcall sub_347670(
        __int64 a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int16 v13; // r13
  double v14; // xmm4_8
  double v15; // xmm5_8
  _QWORD **v16; // rbp
  void *v17; // rdi
  QT::QComboBox *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  QT::QComboBox *v25; // rdi
  char v26; // [rsp-28h] [rbp-28h]

  if ( a2 != -1 )
  {
    if ( (unsigned int)QT::QComboBox::count(*(QT::QComboBox **)(a1 + 704)) - 1 == a2 )
    {
      sub_345730(qword_8CEFF0);
      v25 = *(QT::QComboBox **)(a1 + 704);
      qword_8CEFF0 = nullptr;
      qword_8CEFF8 = (__int64)&dword_8CEFE8;
      qword_8CF000 = (__int64)&dword_8CEFE8;
      qword_8CF008 = 0;
      QT::QComboBox::setCurrentIndex(v25, -1);
      sub_340E20(*(_QWORD *)(a1 + 696), 0xFFFFFFFFFFFFFFFFLL);
    }
    else
    {
      v13 = xmmword_8BCDB0;
      LOWORD(xmmword_8BCDB0) = 1;
      if ( (unsigned __int8)sub_3470C0(a1, a2, a3, a4, a5, a6, v11, v12, a9, a10) )
      {
        sub_346400(a1, a3, a4, a5, a6, v14, v15, a9, a10);
        sub_340E20(*(_QWORD *)(a1 + 696), 0xFFFFFFFFFFFFFFFFLL);
        if ( !qword_8CF008 )
          sub_169630((int)"Nothing found", -1, v19, v20, v21, v22, a3, a4, a5, a6, v23, v24, a9, a10, v26);
      }
      else
      {
        v16 = (_QWORD **)qword_8CEFF0;
        if ( qword_8CEFF0 )
        {
          do
          {
            sub_345730(v16[3]);
            v17 = v16;
            v16 = (_QWORD **)v16[2];
            operator delete(v17, 0x30u);
          }
          while ( v16 );
        }
        v18 = *(QT::QComboBox **)(a1 + 704);
        qword_8CEFF0 = nullptr;
        qword_8CEFF8 = (__int64)&dword_8CEFE8;
        qword_8CF000 = (__int64)&dword_8CEFE8;
        qword_8CF008 = 0;
        QT::QComboBox::setCurrentIndex(v18, -1);
      }
      LOWORD(xmmword_8BCDB0) = v13;
    }
  }
}
