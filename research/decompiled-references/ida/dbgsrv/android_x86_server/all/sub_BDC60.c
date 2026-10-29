/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BDC60
// Address: 0x000BDC60

//----- (000BDC60) --------------------------------------------------------
void __cdecl __noreturn sub_BDC60(void (*a1)(void))
{
  void *v1; // eax
  void *v2; // esi

  a1();
  v1 = (void *)sub_C10D0("terminate_handler unexpectedly returned");
  _cxa_begin_catch(v1);
  v2 = (void *)sub_C10D0("terminate_handler unexpectedly threw an exception");
  _cxa_end_catch();
  sub_1B500(v2);
}
