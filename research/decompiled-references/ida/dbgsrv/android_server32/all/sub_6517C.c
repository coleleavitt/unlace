/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6517C
// Address: 0x0006517C

//----- (0006517C) --------------------------------------------------------
int __fastcall sub_6517C(int a1, unsigned int a2)
{
  unsigned int v2; // r2

  v2 = *(_DWORD *)(a1 + 284);
  if ( !v2 )
    sub_1C9E4("debmod_t::get_reginfo is not implemented");
  if ( v2 <= a2 )
  {
    if ( !under_debugger )
      interr(3256);
    __debugbreak();
  }
  return *(_DWORD *)(a1 + 280) + 20 * a2;
}
// E0550: using guessed type char under_debugger;
