/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060BB8
// Address: 0x0000000100060BB8

//----- (0000000100060BB8) ----------------------------------------------------
_QWORD *__fastcall sub_100060BB8(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  *a1 = &off_10009BBA8;
  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
    a1[8] = 0;
    a1[10] = 0;
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
    a1[4] = 0;
    a1[6] = 0;
  }
  return a1;
}
// 10009BBA8: using guessed type __int64 (__fastcall *off_10009BBA8)();
