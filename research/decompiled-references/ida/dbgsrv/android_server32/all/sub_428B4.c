/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428B4
// Address: 0x000428B4

//----- (000428B4) --------------------------------------------------------
int __fastcall sub_428B4(int a1)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)a1 = &off_D9C08;
  v2 = *(void **)(a1 + 76);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 84) = 0;
    *(_DWORD *)(a1 + 76) = 0;
  }
  if ( *(_DWORD *)(a1 + 44) )
  {
    sub_42938((int *)(a1 + 44), 0);
    qfree(*(void **)(a1 + 44));
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 44) = 0;
  }
  v3 = *(void **)(a1 + 32);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  sub_42840((char **)(a1 + 20));
  sub_1B3BC((char **)(a1 + 8));
  return a1;
}
// D9C08: using guessed type _UNKNOWN *off_D9C08;
