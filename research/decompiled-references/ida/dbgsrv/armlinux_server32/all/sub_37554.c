/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37554
// Address: 0x00037554

//----- (00037554) --------------------------------------------------------
int __fastcall sub_37554(int *a1, int a2)
{
  int *v3; // r0
  int *v4; // r6
  size_t v5; // r0
  size_t v6; // r5
  size_t v7; // r7
  void *v8; // r0

  v3 = sub_426F4(a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = strlen((const char *)v3);
    v6 = v5;
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = 0;
    if ( v5 )
    {
      v7 = v5 + 1;
      v8 = sub_78018(a2 + 8, nullptr, v5 + 1, 1u);
      *(_DWORD *)(a2 + 8) = v8;
      *(_DWORD *)(a2 + 12) = v7;
      memmove(v8, v4, v6);
      *(_BYTE *)(*(_DWORD *)(a2 + 8) + v6) = 0;
    }
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)a2 = 7;
    return 0;
  }
}
