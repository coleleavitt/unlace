/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::terminate
// Address: 0x000BDB80

//----- (000BDB80) --------------------------------------------------------
void __noreturn std::terminate()
{
  int *globals_fast; // eax
  int v1; // eax
  void (*v2)(void); // eax
  int *v3; // [esp+4h] [ebp-Ch]

  globals_fast = (int *)_cxa_get_globals_fast(v3);
  if ( globals_fast && (v1 = *globals_fast) != 0 && *(_QWORD *)(v1 + 48) >> 8 == 0x434C4E47432B2BLL )
    v2 = *(void (**)(void))(v1 + 12);
  else
    v2 = (void (*)(void))_cxa_terminate_handler[0];
  sub_BDC60(v2);
}
// BDB90: variable 'v3' is possibly undefined
// 13BC74: using guessed type void (__noreturn *_cxa_terminate_handler[2])();
