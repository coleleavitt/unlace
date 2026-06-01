/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4046E0
// Address: 0x004046E0

//----- (004046E0) --------------------------------------------------------
bool __stdcall sub_4046E0(int a1, unsigned int a2)
{
  bool result; // al

  result = 1;
  if ( a2 > 4 )
  {
    if ( *(_BYTE *)a1 == 78 && *(_BYTE *)(a1 + 1) == 66 && a2 >= 0x10 )
    {
      *(_BYTE *)(a1 + a2 - 1) = 0;
      return sub_404740((const CHAR *)(a1 + 16));
    }
    else if ( *(_DWORD *)a1 == 1396986706 && a2 >= 0x18 )
    {
      *(_BYTE *)(a1 + a2 - 1) = 0;
      return sub_404740((const CHAR *)(a1 + 24));
    }
    else
    {
      return 0;
    }
  }
  return result;
}
