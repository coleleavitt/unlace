/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_582F0
// Address: 0x000582F0

//----- (000582F0) --------------------------------------------------------
int __fastcall sub_582F0(int a1, int a2, void *a3, _DWORD *a4)
{
  signed int v5; // r4
  size_t v6; // r2
  int result; // r0

  v5 = *(_DWORD *)(a2 + 8);
  v6 = qlread(a1, a3, v5);
  if ( v6 == v5 )
  {
    result = 0;
    if ( dword_DE4A8 )
    {
      if ( *(_BYTE *)(dword_DE4A8 + 96) )
      {
        sub_1BBA0((int)"Section loaded (%d bytes).\n", v5);
        return 0;
      }
    }
  }
  else
  {
    if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
      sub_1BBA0((int)"Couldn't read %d bytes of data (read %d).\n", v5, v6);
    *a4 = 10;
    return 1;
  }
  return result;
}
// DE4A8: using guessed type int dword_DE4A8;
