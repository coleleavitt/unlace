/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000510A0
// Address: 0x00000001000510A0

//----- (00000001000510A0) ----------------------------------------------------
void __fastcall sub_1000510A0(_QWORD *a1)
{
  void *v1; // x8
  _QWORD *v2; // x19

  *a1 = off_10009ADE0;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    v2 = a1;
    qfree(v1);
    a1 = v2;
  }
  operator delete(a1);
}
// 10009ADE0: using guessed type __int64 (__fastcall *off_10009ADE0[4])();
