/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82AB0
// Address: 0x00082AB0

//----- (00082AB0) --------------------------------------------------------
void __fastcall sub_82AB0(_DWORD *a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(*a1 - 12);
  if ( !v1 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", 0xFFFFFFFF, 0);
  sub_822F4(a1, v1 - 1, 1, 0);
}
