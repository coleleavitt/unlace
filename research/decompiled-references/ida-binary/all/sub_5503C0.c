__int64 __fastcall ActionsInspectorDialog__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax

  v5 = QT::QDialog::qt_metacall();
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      if ( a2 != 7 )
        return v6;
      if ( !v5 )
        **a4 = 0;
    }
    else if ( !v5 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 424LL))(a1);
      if ( *a4 )
        *(_DWORD *)*a4 = v8;
    }
    --v6;
  }
  return v6;
}
