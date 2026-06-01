/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043CC0
// Address: 0x0000000140043CC0

//----- (0000000140043CC0) ----------------------------------------------------
__int64 __fastcall sub_140043CC0(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 512);
  if ( !v2 )
    sub_140005300("debmod_t::get_reginfo is not implemented");
  if ( a2 >= v2 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3256);
  }
  return *(_QWORD *)(a1 + 504) + 32LL * a2;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
