__int64 __fastcall type_completer_t__::vfunc_2(
        QT::QPlainTextEdit **this,
        int a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  QT::QString *v16; // rsi
  int v17; // [rsp+Ch] [rbp-1Ch]

  result = QT::QCompleter::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v17 = result;
        v16 = *(QT::QString **)(a12 + 8);
        if ( (_DWORD)result == 1 )
        {
          sub_3D1820(this, v16, a3, a4, a5, a6, v14, v15, a9, a10);
          LODWORD(result) = 1;
        }
        else
        {
          sub_3D0320((__int64)this, v16);
          LODWORD(result) = v17;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        **(_QWORD **)a12 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
