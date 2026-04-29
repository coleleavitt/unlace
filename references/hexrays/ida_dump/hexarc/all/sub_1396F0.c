unsigned __int64 *__fastcall sub_1396F0(unsigned __int64 **a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 *v3; // rdi

  if ( *a1 )
  {
    result = sub_1395F0(a1);
    v3 = *a1;
    if ( *a1 )
      return (unsigned __int64 *)qfree(v3);
  }
  return result;
}
