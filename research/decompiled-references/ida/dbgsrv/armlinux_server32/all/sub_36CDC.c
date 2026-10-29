/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36CDC
// Address: 0x00036CDC

//----- (00036CDC) --------------------------------------------------------
int __fastcall sub_36CDC(int a1, int a2)
{
  __int64 v3; // r6

  v3 = sub_78EE4();
  sub_45758((unsigned __int8 *)a2);
  *(_QWORD *)(a2 + 8) = v3;
  *(_BYTE *)a2 = 9;
  return 0;
}
