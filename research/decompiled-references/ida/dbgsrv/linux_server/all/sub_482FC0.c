/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482FC0
// Address: 0x0000000000482FC0

//----- (0000000000482FC0) ----------------------------------------------------
void *sub_482FC0()
{
  void *v1; // rbp

  if ( !(_BYTE)byte_4C9500 && __cxa_guard_acquire(&byte_4C9500) )
  {
    v1 = (void *)operator new(0xD0u);
    sub_482CE0((unsigned __int64)v1);
    arg = v1;
    __cxa_guard_release(&byte_4C9500);
  }
  sub_482F40((char *)arg);
  return arg;
}
