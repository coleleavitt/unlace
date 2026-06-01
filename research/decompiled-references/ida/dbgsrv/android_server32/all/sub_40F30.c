/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F30
// Address: 0x00040F30

//----- (00040F30) --------------------------------------------------------
int __fastcall sub_40F30(unsigned int a1)
{
  _DWORD *v3; // r5

  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v3 = operator new(0x50u);
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    v3[5] = 0;
    v3[6] = 0;
    memset(v3 + 8, 0, 0x29u);
    dword_DE390 = (int)v3;
    _cxa_guard_release(&dword_DE394);
  }
  return sub_40FB8(dword_DE390, a1);
}
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
