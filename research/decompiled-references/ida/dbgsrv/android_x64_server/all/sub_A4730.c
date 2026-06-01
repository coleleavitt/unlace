/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4730
// Address: 0x00000000000A4730

//----- (00000000000A4730) ----------------------------------------------------
void __fastcall sub_A4730(_QWORD *ptr)
{
  void *v2; // rdi

  *ptr = &off_14ED58;
  v2 = (void *)ptr[14];
  if ( v2 )
  {
    ptr[15] = 0;
    qfree(v2);
    ptr[14] = 0;
    ptr[16] = 0;
  }
  sub_A8490(ptr);
  operator delete(ptr);
}
// 14ED58: using guessed type __int64 (__fastcall *off_14ED58)();
