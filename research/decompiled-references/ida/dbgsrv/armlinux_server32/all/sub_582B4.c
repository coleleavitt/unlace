/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_582B4
// Address: 0x000582B4

//----- (000582B4) --------------------------------------------------------
int __fastcall sub_582B4(int a1, int a2, void *a3, _DWORD *a4)
{
  signed int v5; // r4
  size_t v6; // r0
  int result; // r0

  v5 = *(_DWORD *)(a2 + 8);
  v6 = sub_74B94(a1, a3, v5);
  if ( v5 == v6 )
  {
    result = dword_D4B38;
    if ( dword_D4B38 )
    {
      result = *(unsigned __int8 *)(dword_D4B38 + 96);
      if ( *(_BYTE *)(dword_D4B38 + 96) )
      {
        sub_171B0((int)"Section loaded (%d bytes).\n", v5);
        return 0;
      }
    }
  }
  else if ( dword_D4B38 && *(_BYTE *)(dword_D4B38 + 96) )
  {
    sub_171B0((int)"Couldn't read %d bytes of data (read %d).\n", v5, v6);
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
// D4B38: using guessed type int dword_D4B38;
