/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C0F0
// Address: 0x000000000009C0F0

//----- (000000000009C0F0) ----------------------------------------------------
void __fastcall sub_9C0F0(_QWORD *ptr)
{
  void *v2; // rdi
  void *v3; // rdi

  *ptr = off_14E770;
  v2 = (void *)ptr[7];
  if ( v2 )
  {
    ptr[8] = 0;
    qfree(v2);
    ptr[7] = 0;
    ptr[9] = 0;
  }
  v3 = (void *)ptr[4];
  if ( v3 )
  {
    ptr[5] = 0;
    qfree(v3);
  }
  operator delete(ptr);
}
// 14E770: using guessed type __int64 (__fastcall *off_14E770[3])();
