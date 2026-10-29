/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F83C
// Address: 0x0003F83C

//----- (0003F83C) --------------------------------------------------------
_DWORD *__fastcall sub_3F83C(_DWORD *a1, int a2)
{
  _DWORD *v4; // r5

  *a1 = a1 + 1;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 1;
  a1[4] = a2;
  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v4 = operator new(0x50u);
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    v4[4] = 0;
    v4[5] = 0;
    v4[6] = 0;
    memset(v4 + 8, 0, 0x29u);
    dword_DE390 = (int)v4;
    _cxa_guard_release(&dword_DE394);
  }
  if ( a1[4] >= *(_DWORD *)(dword_DE390 + 44) )
    a1[4] = 0;
  return a1;
}
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
