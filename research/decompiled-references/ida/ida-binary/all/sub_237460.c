__int64 __fastcall sub_237460(double a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx

  if ( !(_QWORD)xmmword_8CC438 )
    return -1;
  v3 = *a3;
  if ( !(_DWORD)v3 )
    return -1;
  result = 0;
  while ( 1 )
  {
    v5 = result << 8;
    if ( *(_DWORD *)(qword_8CC430 + (result << 8)) == (_DWORD)v3 )
      break;
    if ( (_QWORD)xmmword_8CC438 == ++result )
    {
      if ( under_debugger )
        BUG();
      interr(40058, qword_8CC430, v5, v3, a1);
      return threads_chooser_t__::vfunc_9();
    }
  }
  return result;
}
