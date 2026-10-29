/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD140
// Address: 0x00000000000AD140

//----- (00000000000AD140) ----------------------------------------------------
void __fastcall sub_AD140(_QWORD *ptr)
{
  void *v2; // rdi
  void *v3; // rdi

  *ptr = &off_14F6D8;
  v2 = (void *)ptr[8];
  if ( v2 )
  {
    ptr[9] = 0;
    qfree(v2);
    ptr[8] = 0;
    ptr[10] = 0;
  }
  v3 = (void *)ptr[4];
  if ( v3 )
  {
    ptr[5] = 0;
    qfree(v3);
  }
  operator delete(ptr);
}
// 14F6D8: using guessed type __int64 (__fastcall *off_14F6D8)();
