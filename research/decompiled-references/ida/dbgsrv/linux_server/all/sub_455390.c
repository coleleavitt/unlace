/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455390
// Address: 0x0000000000455390

//----- (0000000000455390) ----------------------------------------------------
__int64 __fastcall sub_455390(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx

  v2 = *(_QWORD *)(a1 + 680);
  if ( !v2 )
    sub_410DF0("debmod_t::get_reginfo is not implemented");
  if ( a2 >= v2 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(3256);
    BUG();
  }
  return *(_QWORD *)(a1 + 672) + 32LL * a2;
}
// 4C94E1: using guessed type char byte_4C94E1;
