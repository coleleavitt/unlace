/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F0F0
// Address: 0x0001F0F0

//----- (0001F0F0) --------------------------------------------------------
void __cdecl sub_1F0F0(int a1)
{
  if ( *(_DWORD *)(a1 + 464) )
  {
    sub_199F0(*(void **)(a1 + 464));
    *(_DWORD *)(a1 + 464) = 0;
    sub_2B830((int)&dword_13BCCC, (void **)dword_13BCD0);
    dword_13BCD4 = 0;
    dword_13BCCC = (int)&dword_13BCD0;
    dword_13BCD0 = 0;
  }
}
// 13BCCC: using guessed type int dword_13BCCC;
// 13BCD0: using guessed type int dword_13BCD0;
// 13BCD4: using guessed type int dword_13BCD4;
