/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7524
// Address: 0x00000000000D7524

//----- (00000000000D7524) ----------------------------------------------------
void __fastcall __noreturn sub_D7524(char a1, void *a2)
{
  _cxa_begin_catch(a2);
  if ( (a1 & 1) != 0 )
    sub_D6CF8(*((void (**)(void))a2 - 8));
  std::terminate();
}
