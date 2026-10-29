/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BB70
// Address: 0x0005BB70

//----- (0005BB70) --------------------------------------------------------
unsigned int __fastcall sub_5BB70(int *a1, unsigned int a2)
{
  void *v5[65]; // [sp+8h] [bp-104h] BYREF

  if ( a1[1] != a2 )
  {
    memset(v5, 0, 0x100u);
    memset(&v5[8], 255, 12);
    memset(&v5[11], 0, 0xCCu);
    sub_636E0(a1, a2, (unsigned int)v5);
    if ( v5[5] )
    {
      v5[6] = nullptr;
      qfree(v5[5]);
      v5[7] = nullptr;
      v5[5] = nullptr;
    }
    if ( v5[1] )
    {
      v5[2] = nullptr;
      qfree(v5[1]);
      v5[3] = nullptr;
      v5[1] = nullptr;
    }
  }
  return _stack_chk_guard - (unsigned int)v5[64];
}
