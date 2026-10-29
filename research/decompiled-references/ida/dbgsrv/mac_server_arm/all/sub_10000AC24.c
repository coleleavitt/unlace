/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000AC24
// Address: 0x000000010000AC24

//----- (000000010000AC24) ----------------------------------------------------
void __fastcall sub_10000AC24(_QWORD *a1)
{
  void *v1; // x8
  _QWORD *v2; // x19

  *a1 = off_100098B90;
  v1 = (void *)a1[6];
  if ( v1 )
  {
    a1[7] = 0;
    v2 = a1;
    qfree(v1);
    a1 = v2;
  }
  operator delete(a1);
}
// 100098B90: using guessed type __int64 (__fastcall *off_100098B90[8])();
