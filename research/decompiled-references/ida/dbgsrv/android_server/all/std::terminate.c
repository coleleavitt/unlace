/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::terminate
// Address: 0x00000000000D6C68

//----- (00000000000D6C68) ----------------------------------------------------
void __fastcall __noreturn std::terminate()
{
  __int64 *globals_fast; // x0
  __int64 v1; // x8
  void (*v2)(void); // x0

  globals_fast = (__int64 *)_cxa_get_globals_fast();
  if ( globals_fast )
  {
    v1 = *globals_fast;
    if ( *globals_fast )
    {
      if ( *(_QWORD *)(v1 + 96) >> 8 == 0x434C4E47432B2BLL )
        sub_D6CF8(*(void (**)(void))(v1 + 32));
    }
  }
  v2 = (void (*)(void))atomic_load((unsigned __int64 *)&_cxa_terminate_handler);
  sub_D6CF8(v2);
}
// 1669B0: using guessed type __int64 (__fastcall *_cxa_terminate_handler)();
