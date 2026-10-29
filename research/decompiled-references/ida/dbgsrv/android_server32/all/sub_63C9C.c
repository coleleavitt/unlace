/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63C9C
// Address: 0x00063C9C

//----- (00063C9C) --------------------------------------------------------
int __fastcall sub_63C9C(int a1, int a2)
{
  size_t v3; // r5
  void *v4; // r6
  void *v6; // r0
  size_t v7; // r2

  v3 = *(_DWORD *)(a2 + 4);
  v4 = nullptr;
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    qmemcpy(v4, *(const void **)a2, v3);
  }
  v6 = *(void **)a1;
  v7 = v3;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v6);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
    v7 = v3;
  }
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)(a1 + 8) = v3;
  return a1;
}
