__int64 __fastcall sub_2799A0(unsigned __int64 **a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *a1 )
    {
      sub_2795E0(a1);
      if ( *a1 )
        qfree();
    }
    return qfree();
  }
  return result;
}
