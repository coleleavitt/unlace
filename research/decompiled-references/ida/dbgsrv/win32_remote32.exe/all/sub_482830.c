/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482830
// Address: 0x00482830

//----- (00482830) --------------------------------------------------------
BOOL __cdecl sub_482830(int a1)
{
  int v1; // ecx

  if ( *(_WORD *)a1 == 23117 && (v1 = a1 + *(_DWORD *)(a1 + 60), *(_DWORD *)v1 == 17744) )
    return *(_WORD *)(v1 + 24) == 267;
  else
    return 0;
}
