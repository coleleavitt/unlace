/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B0D0
// Address: 0x000000000009B0D0

//----- (000000000009B0D0) ----------------------------------------------------
void __fastcall sub_9B0D0(_QWORD *ptr)
{
  void *v2; // rdi

  *ptr = &off_14E690;
  v2 = (void *)ptr[2];
  if ( v2 )
  {
    ptr[3] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// 14E690: using guessed type __int64 (__fastcall *off_14E690)();
