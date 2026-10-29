void *sub_168C30()
{
  void *result; // rax

  if ( !edata )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_85BC80);
    result = sub_168BC0();
    edata = 1;
  }
  return result;
}
