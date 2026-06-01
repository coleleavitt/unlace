/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F3A0
// Address: 0x0042F3A0

//----- (0042F3A0) --------------------------------------------------------
int __cdecl sub_42F3A0(int a1, char a2)
{
  int v2; // edi
  void *v4; // [esp-4h] [ebp-10h]

  if ( ((*(_DWORD *)(a1 + 4) - 1) & (unsigned int)-(*(_DWORD *)(a1 + 4) != 0)) >= 0x400 )
  {
    sub_402760(&dword_489384);
    if ( *(_DWORD *)a1 )
    {
      v4 = *(void **)a1;
      *(_DWORD *)(a1 + 4) = 0;
      sub_453A20(v4);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
  }
  v2 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
  if ( (unsigned int)(v2 + 2) > *(_DWORD *)(a1 + 8) )
    *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v2 + 2, 1u);
  *(_DWORD *)(a1 + 4) = v2 + 2;
  *(_BYTE *)(v2 + *(_DWORD *)a1) = a2;
  *(_BYTE *)(*(_DWORD *)a1 + v2 + 1) = 0;
  return 0;
}
// 489384: using guessed type int dword_489384;
