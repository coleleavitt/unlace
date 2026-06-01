/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_825E8
// Address: 0x000825E8

//----- (000825E8) --------------------------------------------------------
void __fastcall sub_825E8(_DWORD *a1)
{
  int v1; // r3

  if ( (int *)(*a1 - 12) != std::string::_Rep::_S_empty_rep_storage )
  {
    v1 = *(_DWORD *)(*a1 - 4);
    __dmb(0xBu);
    if ( v1 > 0 )
    {
      sub_82490(a1, 0, 0, 0);
      *(_DWORD *)(*a1 - 4) = -1;
    }
    else
    {
      *(_DWORD *)(*a1 - 4) = -1;
    }
  }
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
