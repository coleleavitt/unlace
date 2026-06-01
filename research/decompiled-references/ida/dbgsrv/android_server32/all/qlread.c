/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlread
// Address: 0x0007B788

//----- (0007B788) --------------------------------------------------------
size_t __fastcall qlread(int a1, void *a2, signed int a3)
{
  int v3; // r3

  v3 = -1;
  if ( a1 )
  {
    if ( *(int *)a1 < 2 )
      return qfread(*(FILE **)(a1 + 8), a2, a3);
    else
      return sub_7B4E0(a1, a2, a3);
  }
  return v3;
}
