/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6650
// Address: 0x00000000000C6650

//----- (00000000000C6650) ----------------------------------------------------
void *sub_C6650()
{
  void *v1; // rbx

  if ( !(_BYTE)byte_158B70 && _cxa_guard_acquire(&byte_158B70) )
  {
    v1 = operator new(0x58u);
    sub_C5C00((__int64)v1);
    arg = v1;
    _cxa_guard_release(&byte_158B70);
  }
  sub_C62D0((char *)arg);
  return arg;
}
