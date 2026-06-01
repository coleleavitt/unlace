/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82C48
// Address: 0x00082C48

//----- (00082C48) --------------------------------------------------------
void __fastcall sub_82C48(_DWORD *a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(*a1 - 12);
  if ( !v1 )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", 0xFFFFFFFF, 0);
  sub_82490(a1, v1 - 1, 1, 0);
}
