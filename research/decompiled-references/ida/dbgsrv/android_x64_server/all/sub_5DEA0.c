/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DEA0
// Address: 0x000000000005DEA0

//----- (000000000005DEA0) ----------------------------------------------------
void __fastcall sub_5DEA0(_QWORD *a1)
{
  *a1 = &off_147128;
  if ( a1[5] )
  {
    sub_5BEB0(a1 + 5, 0);
    qfree((void *)a1[5]);
    a1[5] = 0;
    a1[7] = 0;
  }
}
// 147128: using guessed type __int64 (__fastcall *off_147128)();
