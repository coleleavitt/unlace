/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80DC4
// Address: 0x00080DC4

//----- (00080DC4) --------------------------------------------------------
int sub_80DC4()
{
  void *v1; // r5

  if ( !(sub_9B7B4((int)&dword_E0568, 0, 0) << 31) && _cxa_guard_acquire(&dword_E0568) )
  {
    v1 = operator new(0x2Cu);
    sub_80650((int)v1);
    dword_E0564 = (int)v1;
    _cxa_guard_release(&dword_E0568);
  }
  sub_80B44(dword_E0564);
  return dword_E0564;
}
// E0564: using guessed type int dword_E0564;
// E0568: using guessed type int dword_E0568;
