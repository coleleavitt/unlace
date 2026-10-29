/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DEF0
// Address: 0x000000000005DEF0

//----- (000000000005DEF0) ----------------------------------------------------
void __fastcall sub_5DEF0(__int64 *ptr)
{
  *ptr = (__int64)&off_147128;
  if ( ptr[5] )
  {
    sub_5BEB0(ptr + 5, 0);
    qfree((void *)ptr[5]);
  }
  operator delete(ptr);
}
// 147128: using guessed type __int64 (__fastcall *off_147128)();
