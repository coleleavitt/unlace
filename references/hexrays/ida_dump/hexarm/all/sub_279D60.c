__int64 __fastcall sub_279D60(unsigned __int64 **a1)
{
  unsigned __int64 *v2; // rdi
  __int64 result; // rax

  if ( a1 )
  {
    if ( *a1 )
    {
      sub_2799A0(a1);
      v2 = *a1;
      if ( *a1 )
        qfree(v2);
    }
    return qfree(a1);
  }
  return result;
}
