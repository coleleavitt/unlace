/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BDF8
// Address: 0x000000000006BDF8

//----- (000000000006BDF8) ----------------------------------------------------
void __fastcall sub_6BDF8(__int64 a1, _QWORD *a2)
{
  void *v4; // x0

  if ( a2 )
  {
    sub_6BDF8(a1, (_QWORD *)*a2);
    sub_6BDF8(a1, (_QWORD *)a2[1]);
    free_idcv(a2 + 7);
    v4 = (void *)a2[4];
    if ( v4 )
    {
      a2[5] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
