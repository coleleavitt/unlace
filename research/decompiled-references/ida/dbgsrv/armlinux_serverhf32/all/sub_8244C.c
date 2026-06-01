/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8244C
// Address: 0x0008244C

//----- (0008244C) --------------------------------------------------------
void __fastcall sub_8244C(_DWORD *a1)
{
  int v1; // r3

  if ( (int *)(*a1 - 12) != std::string::_Rep::_S_empty_rep_storage )
  {
    v1 = *(_DWORD *)(*a1 - 4);
    __dmb(0xBu);
    if ( v1 > 0 )
    {
      sub_822F4(a1, 0, 0, 0);
      *(_DWORD *)(*a1 - 4) = -1;
    }
    else
    {
      *(_DWORD *)(*a1 - 4) = -1;
    }
  }
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
