/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481AE0
// Address: 0x0000000000481AE0

//----- (0000000000481AE0) ----------------------------------------------------
void __fastcall __noreturn sub_481AE0(int status)
{
  sub_481990(1, status);
  if ( !byte_4C94E2 )
  {
    byte_4C94E2 = 1;
    if ( !byte_4C94E1 )
      sub_481AC0(546);
    BUG();
  }
  exit(status);
}
// 4C94E1: using guessed type char byte_4C94E1;
// 4C94E2: using guessed type char byte_4C94E2;
