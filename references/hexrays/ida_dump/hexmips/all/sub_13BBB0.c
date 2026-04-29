unsigned __int64 *__fastcall sub_13BBB0(unsigned __int64 **a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 *v3; // rdi

  if ( *a1 )
  {
    result = sub_13BAB0(a1);
    v3 = *a1;
    if ( *a1 )
      return (unsigned __int64 *)qfree(v3);
  }
  return result;
}
