/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000627F4
// Address: 0x00000001000627F4

//----- (00000001000627F4) ----------------------------------------------------
_QWORD *__fastcall sub_1000627F4(_QWORD *a1, int a2)
{
  __int64 v4; // x0

  v4 = a1[11];
  if ( v4 )
  {
    if ( a1[12] )
    {
      (*(void (__fastcall **)(_QWORD))(qword_10009DAD8 + 344))(a1[12]);
      v4 = a1[11];
    }
    if ( (a2 & 0x80000000) == 0 )
    {
      (*(void (__fastcall **)(__int64))(qword_10009DAD8 + 296))(v4);
      v4 = a1[11];
    }
    (*(void (__fastcall **)(__int64))(qword_10009DAD8 + 224))(v4);
    a1[11] = 0;
  }
  return sub_10005E374(a1 + 4);
}
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
