__int64 __fastcall sub_3D5630(
        QT::QPlainTextEdit *this,
        QT::QKeyEvent *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  QT::QCompleter *v11; // rdi
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 result; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  QT::QPlainTextEdit **v17; // rdi

  v11 = *((QT::QCompleter **)this + 38);
  if ( v11 && *(char *)(*(_QWORD *)(QT::QCompleter::popup(v11) + 32LL) + 9LL) < 0 )
  {
    result = *((unsigned int *)a2 + 16);
    if ( (int)result > 16777218 )
    {
      result = (unsigned int)(result - 16777220);
      if ( (unsigned int)result <= 1 )
        goto LABEL_7;
    }
    else
    {
      if ( (int)result > 0x1000000 )
      {
LABEL_7:
        *((_BYTE *)a2 + 12) = 0;
        return result;
      }
      if ( (_DWORD)result == 0x1000000 )
      {
        result = sub_3D1E00(*((QT::QCompleter **)this + 38), 0, a3, a4, a5, a6, v12, v13, a9, a10);
        goto LABEL_7;
      }
    }
  }
  result = sub_5290B0(this, a2);
  v17 = *((QT::QPlainTextEdit ***)this + 38);
  if ( v17 )
    return sub_3D45F0(v17, a2, 0, a3, a4, a5, a6, v15, v16, a9, a10);
  return result;
}
