/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: print_idcv
// Address: 0x00058700

//----- (00058700) --------------------------------------------------------
char __cdecl print_idcv(int a1, int *a2, char *s, size_t n)
{
  int v5; // [esp+8h] [ebp-24h] BYREF
  void **v6[8]; // [esp+Ch] [ebp-20h] BYREF

  v6[3] = (void **)__readgsdword(0x14u);
  v6[0] = nullptr;
  v6[1] = nullptr;
  v5 = (int)v6;
  sub_587A0(a1, a2, s, n, &v5);
  sub_68120((int)&v5, v6[0]);
  return 1;
}
