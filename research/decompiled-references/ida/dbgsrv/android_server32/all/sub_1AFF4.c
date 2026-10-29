/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1AFF4
// Address: 0x0001AFF4

//----- (0001AFF4) --------------------------------------------------------
int __fastcall sub_1AFF4(int a1)
{
  void **v2; // r5

  v2 = (void **)(a1 + 196);
  if ( *(_DWORD *)(a1 + 196) )
  {
    sub_1B470((int *)(a1 + 196), 0);
    qfree(*v2);
    *v2 = nullptr;
    *(_DWORD *)(a1 + 204) = 0;
  }
  return 1;
}
