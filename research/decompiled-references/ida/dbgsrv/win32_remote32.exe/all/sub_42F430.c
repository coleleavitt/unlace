/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F430
// Address: 0x0042F430

//----- (0042F430) --------------------------------------------------------
int __cdecl sub_42F430(int a1, char a2)
{
  int v2; // edi

  v2 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
  if ( (unsigned int)(v2 + 2) > *(_DWORD *)(a1 + 8) )
    *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v2 + 2, 1u);
  *(_DWORD *)(a1 + 4) = v2 + 2;
  *(_BYTE *)(v2 + *(_DWORD *)a1) = a2;
  *(_BYTE *)(*(_DWORD *)a1 + v2 + 1) = 0;
  return 0;
}
