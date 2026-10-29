/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006747C
// Address: 0x000000010006747C

//----- (000000010006747C) ----------------------------------------------------
_QWORD *__fastcall sub_10006747C(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0

  *a1 = off_10009FCF8;
  a1[8] = 0;
  a1[10] = 0;
  v2 = a1[11];
  if ( v2 )
  {
    if ( a1[12] )
    {
      (*(void (__fastcall **)(_QWORD))(qword_1000A5AD8 + 344))(a1[12]);
      v2 = a1[11];
    }
    (*(void (__fastcall **)(__int64))(qword_1000A5AD8 + 224))(v2);
    a1[11] = 0;
  }
  sub_1000625F4(a1 + 4);
  v3 = (void *)a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
    a1[5] = 0;
    a1[7] = 0;
  }
  return a1;
}
// 10009FCF8: using guessed type __int64 (__fastcall *off_10009FCF8[20])();
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
