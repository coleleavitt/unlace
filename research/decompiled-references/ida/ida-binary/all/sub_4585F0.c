__int64 __fastcall vault_files_dirtree_widget_picker_t__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax

  result = j_files_dirtree_widget_t__::vfunc_2(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 1 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1208LL))(a1, *a4[1]);
          LODWORD(result) = 1;
        }
        return (unsigned int)(result - 2);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1208LL))(a1, *a4[1]);
      return 0xFFFFFFFFLL;
    }
    if ( a2 == 7 )
    {
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 1 )
          **a4 = 0;
        return (unsigned int)(result - 2);
      }
      **a4 = 0;
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
