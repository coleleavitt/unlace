/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA930
// Address: 0x00000000000BA930

//----- (00000000000BA930) ----------------------------------------------------
void __fastcall sub_BA930(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[3];
  *a1 = &off_160390;
  if ( v2 )
  {
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1);
}
// 160390: using guessed type __int64 (__fastcall *off_160390)(int, int, void *ptr, size_t n);
