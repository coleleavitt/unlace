/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8980
// Address: 0x00000000000A8980

//----- (00000000000A8980) ----------------------------------------------------
int __fastcall sub_A8980(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = operator new(0x10u);
  sub_AE3E0(v1);
  *v1 = &off_14F668;
  v1[1] = a1;
  return sub_AE440();
}
// 14F668: using guessed type _UNKNOWN *off_14F668;
