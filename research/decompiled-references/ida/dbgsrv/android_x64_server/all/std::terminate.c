/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::terminate
// Address: 0x00000000000CFB90

//----- (00000000000CFB90) ----------------------------------------------------
void __fastcall __noreturn std::terminate()
{
  __int64 *globals_fast; // rax
  __int64 v1; // rax

  globals_fast = (__int64 *)_cxa_get_globals_fast();
  if ( globals_fast )
  {
    v1 = *globals_fast;
    if ( v1 )
    {
      if ( *(_QWORD *)(v1 + 96) >> 8 == 0x434C4E47432B2BLL )
        sub_CFC20(*(void (**)(void))(v1 + 32));
    }
  }
  sub_CFC20((void (*)(void))_cxa_terminate_handler[0]);
}
// 1556D0: using guessed type void (__fastcall __noreturn *_cxa_terminate_handler[2])();
