__int64 __fastcall sub_227580(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 module_data; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( dword_8CD7F0 )
  {
    module_data = get_module_data((unsigned int)dword_8CD7F0);
    if ( module_data )
      return *(_QWORD *)(module_data + 904);
  }
  else
  {
    if ( under_debugger )
      goto LABEL_8;
    interr(41189, a3, a4, a5, a1);
  }
  if ( under_debugger )
LABEL_8:
    BUG();
  interr(41190, a3, v6, v7, a1);
  return sub_2275E0();
}
