/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4700
// Address: 0x000B4700

//----- (000B4700) --------------------------------------------------------
int sub_B4700()
{
  void *v1; // edi

  if ( !byte_13E364 && _cxa_guard_acquire((__guard *)&byte_13E364) )
  {
    v1 = operator new(0x2Cu);
    sub_B3B70((int)v1);
    dword_13E360 = (int)v1;
    _cxa_guard_release((__guard *)&byte_13E364);
  }
  sub_B4360((char *)dword_13E360);
  return dword_13E360;
}
// 13E360: using guessed type int dword_13E360;
// 13E364: using guessed type char byte_13E364;
