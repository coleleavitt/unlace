/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_class
// Address: 0x00041168

//----- (00041168) --------------------------------------------------------
_DWORD *__fastcall add_idc_class(const char *a1, int a2)
{
  _DWORD *v5; // r6

  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v5 = operator new(0x50u);
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    memset(v5 + 8, 0, 0x29u);
    dword_DE390 = (int)v5;
    _cxa_guard_release(&dword_DE394);
  }
  return sub_411F4(dword_DE390, a1, a2);
}
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
