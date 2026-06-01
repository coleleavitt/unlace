/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58130
// Address: 0x00058130

//----- (00058130) --------------------------------------------------------
int __fastcall sub_58130(int a1, int a2, void *a3, _DWORD *a4)
{
  signed int v5; // r4
  size_t v6; // r0
  int result; // r0

  v5 = *(_DWORD *)(a2 + 8);
  v6 = sub_74A28(a1, a3, v5);
  if ( v5 == v6 )
  {
    result = dword_D3B18;
    if ( dword_D3B18 )
    {
      result = *(unsigned __int8 *)(dword_D3B18 + 96);
      if ( *(_BYTE *)(dword_D3B18 + 96) )
      {
        sub_1700C((int)"Section loaded (%d bytes).\n", v5);
        return 0;
      }
    }
  }
  else if ( dword_D3B18 && *(_BYTE *)(dword_D3B18 + 96) )
  {
    sub_1700C((int)"Couldn't read %d bytes of data (read %d).\n", v5, v6);
    *a4 = 10;
    return 1;
  }
  else
  {
    result = 1;
    *a4 = 10;
  }
  return result;
}
// D3B18: using guessed type int dword_D3B18;
