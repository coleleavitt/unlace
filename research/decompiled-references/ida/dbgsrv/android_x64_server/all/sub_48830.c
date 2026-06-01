/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48830
// Address: 0x0000000000048830

//----- (0000000000048830) ----------------------------------------------------
void __fastcall sub_48830(_QWORD *ptr)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rdi
  void *v5; // rdi

  *ptr = &off_146E58;
  v2 = (_QWORD *)ptr[7];
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (void *)ptr[5];
  ptr[5] = 0;
  if ( v4 )
    operator delete(v4);
  v5 = (void *)ptr[2];
  if ( v5 )
  {
    ptr[3] = 0;
    qfree(v5);
  }
  operator delete(ptr);
}
// 146E58: using guessed type __int64 (__fastcall *off_146E58)();
