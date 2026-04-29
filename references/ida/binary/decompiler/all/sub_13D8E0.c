unsigned __int64 *__fastcall sub_13D8E0(unsigned __int64 **a1)
{
  unsigned __int64 *result; // rax

  if ( *a1 )
  {
    result = sub_13D7E0(a1);
    if ( *a1 )
      return (unsigned __int64 *)qfree();
  }
  return result;
}
