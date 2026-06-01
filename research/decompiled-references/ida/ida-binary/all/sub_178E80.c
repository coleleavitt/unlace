__int64 __fastcall add_idc_func_shortcut(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  *a1 = add_idc_func_shortcut;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree(result, a2, a3, a4, a5);
  }
  return result;
}
