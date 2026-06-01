/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::unexpected
// Address: 0x00000000000D6CD0

//----- (00000000000D6CD0) ----------------------------------------------------
void __fastcall __noreturn std::unexpected()
{
  void (*v0)(void); // x0

  v0 = (void (*)(void))atomic_load((unsigned __int64 *)&_cxa_unexpected_handler);
  sub_D6CB8(v0);
}
// 1669B8: using guessed type void (__fastcall __noreturn *_cxa_unexpected_handler)();
