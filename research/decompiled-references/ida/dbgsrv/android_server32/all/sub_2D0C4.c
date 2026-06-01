/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D0C4
// Address: 0x0002D0C4

//----- (0002D0C4) --------------------------------------------------------
int __fastcall sub_2D0C4(int a1, void **a2, unsigned int *a3)
{
  int v3; // r3

  v3 = 0;
  if ( a3 )
  {
    v3 = 0;
    if ( *(__int64 *)(a1 + 144) >= 1 )
    {
      if ( *(_QWORD *)(a1 + 160) )
        return sub_32154(*(_DWORD *)(a1 + 132), a2, (__int64 *)(a1 + 144), *a3);
    }
  }
  return v3;
}
