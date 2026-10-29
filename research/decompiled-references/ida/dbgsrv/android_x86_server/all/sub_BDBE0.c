/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BDBE0
// Address: 0x000BDBE0

//----- (000BDBE0) --------------------------------------------------------
void __cdecl __noreturn sub_BDBE0(void (*a1)(void))
{
  a1();
  sub_C10D0("unexpected_handler unexpectedly returned");
  std::unexpected();
}
