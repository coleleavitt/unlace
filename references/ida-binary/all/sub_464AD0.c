__int64 __fastcall merge_progress_chooser_slotpoline_t__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax

  result = QT::QObject::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_279A90(a1);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
