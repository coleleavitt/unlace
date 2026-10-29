/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AEC0
// Address: 0x0008AEC0

//----- (0008AEC0) --------------------------------------------------------
int __cdecl sub_8AEC0(int a1, unsigned int a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 284);
  if ( !v2 )
    sub_1DE10("debmod_t::get_reginfo is not implemented");
  if ( v2 <= a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(3256);
    BUG();
  }
  return *(_DWORD *)(a1 + 280) + 20 * a2;
}
// 13E34C: using guessed type int under_debugger;
