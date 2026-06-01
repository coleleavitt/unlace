/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E2B0
// Address: 0x000000000005E2B0

//----- (000000000005E2B0) ----------------------------------------------------
void __fastcall sub_5E2B0(_QWORD *ptr)
{
  void *v2; // rdi

  *ptr = &off_147150;
  v2 = (void *)ptr[5];
  if ( v2 )
  {
    ptr[6] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// 147150: using guessed type __int64 (__fastcall *off_147150)();
