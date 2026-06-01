/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EE98
// Address: 0x0007EE98

//----- (0007EE98) --------------------------------------------------------
bool __fastcall sub_7EE98(int a1, int a2)
{
  int v2; // r3
  _DWORD *v4; // r3

  if ( !a2 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( (v2 & 0x41) == 0x41 && (v2 & 8) == 0 )
    {
      v4 = *(_DWORD **)(a1 + 24);
      if ( v4 )
      {
        if ( *v4 )
          return v4[1] != 0;
      }
      else
      {
        return 1;
      }
    }
  }
  return a2;
}
