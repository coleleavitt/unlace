/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F480
// Address: 0x0042F480

//----- (0042F480) --------------------------------------------------------
int __usercall sub_42F480@<eax>(int a1@<esi>, __m128i a2@<xmm0>, int a3, int a4)
{
  void *v5; // [esp+4h] [ebp-18h] BYREF
  unsigned int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+18h] [ebp-4h]

  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  sub_42F530(a1, a2, sub_42F3A0, (int)&v5, a3, a4);
  if ( v6 > 1 )
    sub_402760(&dword_489384);
  v8 = 1;
  if ( v5 )
  {
    v6 = 0;
    sub_453A20(v5);
  }
  return 0;
}
// 42F4E7: conditional instruction was optimized away because %var_14.4>=2u
// 489384: using guessed type int dword_489384;
