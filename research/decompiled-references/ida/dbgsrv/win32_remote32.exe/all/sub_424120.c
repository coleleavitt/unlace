/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424120
// Address: 0x00424120

//----- (00424120) --------------------------------------------------------
int __stdcall sub_424120(int a1, int a2)
{
  unsigned int *v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // ebp

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return sub_45CC20(1532);
  if ( !a1 )
    return 0;
  v2 = (unsigned int *)(sub_427F00(*(_DWORD *)(*(_DWORD *)(a2 + 8) + 12)) + 16);
  if ( (unsigned int *)a1 == v2 )
    return 0;
  v3 = v2[1] != 0 ? v2[1] - 1 : 0;
  if ( !v3 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    return 0;
  }
  v4 = *v2;
  if ( v3 + 1 > *(_DWORD *)(a1 + 8) )
    *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v3 + 1, 1u);
  *(_DWORD *)(a1 + 4) = v3 + 1;
  sub_464310(*(_DWORD *)a1, v4, v3);
  *(_BYTE *)(v3 + *(_DWORD *)a1) = 0;
  return 0;
}
