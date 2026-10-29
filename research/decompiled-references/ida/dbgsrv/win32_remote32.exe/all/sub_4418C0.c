/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4418C0
// Address: 0x004418C0

//----- (004418C0) --------------------------------------------------------
int __cdecl sub_4418C0(int a1, int a2, __m128i *a3, _DWORD *a4)
{
  signed int v4; // esi

  v4 = *(_DWORD *)(a2 + 8);
  if ( sub_45C7E0(a1, a3, v4) == v4 )
  {
    if ( dword_4B6C08 && *(_BYTE *)(dword_4B6C08 + 104) )
      sub_402760("Section loaded (%d bytes).\n");
    return 0;
  }
  else
  {
    if ( dword_4B6C08 )
    {
      if ( *(_BYTE *)(dword_4B6C08 + 104) )
        sub_402760("Couldn't read %d bytes of data (read %d).\n");
    }
    *a4 = 10;
    return 1;
  }
}
// 4B6C08: using guessed type int dword_4B6C08;
