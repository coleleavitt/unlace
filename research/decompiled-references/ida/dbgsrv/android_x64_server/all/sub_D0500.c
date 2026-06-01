/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0500
// Address: 0x00000000000D0500

//----- (00000000000D0500) ----------------------------------------------------
void __fastcall __noreturn sub_D0500(char a1, void *a2)
{
  _cxa_begin_catch(a2);
  if ( a1 )
    sub_CFC20(*((void (**)(void))a2 - 8));
  std::terminate();
}
