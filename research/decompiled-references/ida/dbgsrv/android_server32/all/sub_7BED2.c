/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BED2
// Address: 0x0007BED2

//----- (0007BED2) --------------------------------------------------------
size_t __fastcall sub_7BED2(int a1, unsigned __int64 a2, void *a3, size_t a4)
{
  _BOOL4 v5; // r1
  int v6; // r3
  size_t v7; // r4

  v5 = *(_QWORD *)(a1 + 8) < a2;
  v6 = *(_DWORD *)(a1 + 8);
  if ( !v5 )
    v6 = a2;
  v7 = *(_DWORD *)(a1 + 8) - v6;
  if ( v7 >= a4 )
    v7 = a4;
  qmemcpy(a3, (const void *)(*(_DWORD *)(a1 + 20) + v6), v7);
  return v7;
}
