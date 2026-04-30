__int64 __fastcall vault_files_picker_dialog_t__::vfunc_2(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = QT::QDialog::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_426270(a1, *(_QWORD *)(a4 + 8));
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
