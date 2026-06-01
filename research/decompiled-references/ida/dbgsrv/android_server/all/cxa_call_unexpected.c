/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_call_unexpected
// Address: 0x00000000000D7550

//----- (00000000000D7550) ----------------------------------------------------
void __noreturn _cxa_call_unexpected(void *a1)
{
  void (*unexpected)(void); // x0
  __int64 v3; // [xsp+30h] [xbp-60h]

  if ( !a1 )
    sub_D7524(0, nullptr);
  _cxa_begin_catch(a1);
  if ( (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFF00LL) == 0x434C4E47432B2B00LL )
  {
    unexpected = *((void (**)(void))a1 - 9);
    v3 = *((_QWORD *)a1 - 4);
  }
  else
  {
    std::get_terminate();
    unexpected = (void (*)(void))std::get_unexpected();
  }
  sub_D6CB8(unexpected);
}
