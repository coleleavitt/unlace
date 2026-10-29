/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140056AC0
// Address: 0x0000000140056AC0

//----- (0000000140056AC0) ----------------------------------------------------
__int64 __fastcall sub_140056AC0(__int64 a1)
{
  char *v1; // rax

  v1 = (char *)qword_1400CB5E8;
  if ( !qword_1400CB5E8 )
  {
    v1 = sub_1400571D0(2u);
    qword_1400CB5E8 = (__int64)v1;
  }
  return ((__int64 (__fastcall *)(__int64))v1)(a1);
}
// 1400CB5E8: using guessed type __int64 qword_1400CB5E8;
