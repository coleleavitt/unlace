void *__fastcall sub_7E3F90(__int64 *a1, unsigned int a2, const void *a3, size_t a4)
{
  void *result; // rax

  if ( HIDWORD(a4) )
  {
    if ( !under_debugger )
      interr(1576);
    BUG();
  }
  sub_3A0970(a1, a2);
  result = (void *)sub_3A0970(a1, a4);
  if ( a4 )
    return sub_7DE6E0(a1, a3, a4);
  return result;
}
