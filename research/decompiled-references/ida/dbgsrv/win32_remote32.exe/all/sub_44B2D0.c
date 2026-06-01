/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B2D0
// Address: 0x0044B2D0

//----- (0044B2D0) --------------------------------------------------------
int __stdcall sub_44B2D0(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  _BYTE *v5; // ecx

  v3 = *(_DWORD *)(a3 + 4);
  v4 = v3 + 3;
  if ( v3 + 3 < v3 )
    v4 = 0x7FFFFFFF;
  if ( v4 > v3 )
  {
    if ( v4 > *(_DWORD *)(a3 + 8) )
      *(_DWORD *)a3 = sub_453B00(a3, *(void **)a3, v4, 1u);
    sub_464890((__m128i *)(*(_DWORD *)(a3 + 4) + *(_DWORD *)a3), 0, v4 - *(_DWORD *)(a3 + 4));
    goto LABEL_9;
  }
  if ( v4 != v3 && v4 < v3 )
LABEL_9:
    *(_DWORD *)(a3 + 4) = v4;
  v5 = *(_BYTE **)a3;
  *(_WORD *)&v5[v3] = -5172;
  v5[v3 + 2] = -2;
  return 0;
}
