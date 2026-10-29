/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4922C0
// Address: 0x00000000004922C0

//----- (00000000004922C0) ----------------------------------------------------
void __fastcall __noreturn sub_4922C0(int status)
{
  sub_492140(1u, status);
  if ( !byte_524510 )
  {
    byte_524510 = 1;
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(546);
  }
  exit(status);
}
// 523500: using guessed type __int64 qword_523500[512];
// 524510: using guessed type char byte_524510;
// 52451C: using guessed type char under_debugger;
