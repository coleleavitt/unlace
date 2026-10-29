/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26D34
// Address: 0x00026D34

//----- (00026D34) --------------------------------------------------------
int __fastcall sub_26D34(int a1, const void *a2, unsigned int a3)
{
  char *v6; // r0

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a3 )
  {
    v6 = (char *)qvector_reserve(a1, nullptr, a3, 1u);
    *(_DWORD *)a1 = v6;
    memset(&v6[*(_DWORD *)(a1 + 4)], 0, a3 - *(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 4) = a3;
    qmemcpy(*(void **)a1, a2, a3);
  }
  return a1;
}
