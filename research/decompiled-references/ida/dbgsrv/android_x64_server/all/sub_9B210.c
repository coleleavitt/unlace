/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B210
// Address: 0x000000000009B210

//----- (000000000009B210) ----------------------------------------------------
void __fastcall sub_9B210(_QWORD *ptr)
{
  void *v2; // rdi

  *ptr = off_14E6F0;
  v2 = (void *)ptr[1];
  if ( v2 )
  {
    ptr[2] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// 14E6F0: using guessed type __int64 (__fastcall *off_14E6F0[2])();
