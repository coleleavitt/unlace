/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_906A4
// Address: 0x000906A4

//----- (000906A4) --------------------------------------------------------
void __fastcall __noreturn sub_906A4(void (*a1)(void))
{
  void *v1; // r0
  void *v2; // r4

  a1();
  v1 = (void *)((int (__fastcall *)(const char *))loc_91FF8)("terminate_handler unexpectedly returned");
  _cxa_begin_catch(v1);
  v2 = (void *)((int (__fastcall *)(const char *))loc_91FF8)("terminate_handler unexpectedly threw an exception");
  _cxa_end_catch();
  sub_1B094(v2);
}
