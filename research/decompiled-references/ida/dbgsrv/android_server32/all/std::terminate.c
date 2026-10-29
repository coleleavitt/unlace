/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::terminate
// Address: 0x00090610

//----- (00090610) --------------------------------------------------------
void __noreturn std::terminate()
{
  int v0; // r0
  bool v1; // zf
  void (*v2)(void); // r0

  v0 = ((int (*)(void))_cxa_get_globals_fast)();
  v1 = v0 == 0;
  if ( v0 )
  {
    v0 = *(_DWORD *)v0;
    v1 = v0 == 0;
  }
  if ( !v1 && *(_QWORD *)(v0 + 40) >> 8 == 0x434C4E47432B2BLL )
    sub_906A4(*(void (**)(void))(v0 + 16));
  v2 = (void (*)(void))_cxa_terminate_handler;
  __dmb(0xBu);
  sub_906A4(v2);
}
// DE2BC: using guessed type _UNKNOWN *_cxa_terminate_handler;
