/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F518
// Address: 0x0007F518

//----- (0007F518) --------------------------------------------------------
int __fastcall sub_7F518(int result)
{
  unsigned int v1; // r2
  int v2; // r5
  unsigned int i; // r4

  v1 = *(_DWORD *)(result + 4);
  if ( v1 )
  {
    v2 = result;
    for ( i = 0; i < v1; ++i )
    {
      result = *(_DWORD *)(*(_DWORD *)(v2 + 12) + 4 * i);
      if ( result != -1 )
      {
        result = j_j_close(result);
        *(_DWORD *)(*(_DWORD *)(v2 + 12) + 4 * i) = -1;
        v1 = *(_DWORD *)(v2 + 4);
      }
    }
  }
  return result;
}
