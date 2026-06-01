/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B190
// Address: 0x000000000009B190

//----- (000000000009B190) ----------------------------------------------------
void __fastcall sub_9B190(_QWORD *ptr)
{
  void *v2; // rdi
  void *v3; // rdi

  *ptr = &off_14E6C0;
  v2 = (void *)ptr[5];
  if ( v2 )
  {
    ptr[6] = 0;
    qfree(v2);
    ptr[5] = 0;
    ptr[7] = 0;
  }
  v3 = (void *)ptr[2];
  if ( v3 )
  {
    ptr[3] = 0;
    qfree(v3);
  }
  operator delete(ptr);
}
// 14E6C0: using guessed type __int64 (__fastcall *off_14E6C0)();
