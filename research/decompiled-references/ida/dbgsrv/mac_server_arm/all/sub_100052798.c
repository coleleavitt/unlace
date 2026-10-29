/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100052798
// Address: 0x0000000100052798

//----- (0000000100052798) ----------------------------------------------------
void __fastcall sub_100052798(_QWORD *a1)
{
  void *v1; // x8
  _QWORD *v2; // x19

  *a1 = off_10009AE90;
  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    v2 = a1;
    qfree(v1);
    a1 = v2;
  }
  operator delete(a1);
}
// 10009AE90: using guessed type __int64 (__fastcall *off_10009AE90[3])();
