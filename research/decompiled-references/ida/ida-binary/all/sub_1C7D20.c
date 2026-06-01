__int64 __fastcall sub_1C7D20(QT::QApplication *a1)
{
  __int64 result; // rax

  result = (unsigned int)dword_8BA4E0;
  if ( dword_8BA4E0 != -1 )
  {
    if ( dword_8BA4E0 <= 0 )
      return result;
    return QT::QApplication::beep(a1);
  }
  a1 = (QT::QApplication *)"IDA_NOBEEP";
  result = (unsigned __int8)qgetenv("IDA_NOBEEP", 0) ^ 1u;
  dword_8BA4E0 = result;
  if ( (int)result > 0 )
    return QT::QApplication::beep(a1);
  return result;
}
