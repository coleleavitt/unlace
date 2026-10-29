/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF5C0
// Address: 0x00000000000BF5C0

//----- (00000000000BF5C0) ----------------------------------------------------
void __fastcall sub_BF5C0(_QWORD *ptr)
{
  void *v2; // rdi

  *ptr = &off_150660;
  v2 = (void *)ptr[3];
  if ( v2 )
  {
    ptr[4] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// 150660: using guessed type _UNKNOWN *off_150660;
