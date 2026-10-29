/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36B44
// Address: 0x00036B44

//----- (00036B44) --------------------------------------------------------
int __fastcall sub_36B44(int a1, int a2)
{
  __int64 v3; // r6

  v3 = sub_78D7C();
  sub_455C8((unsigned __int8 *)a2);
  *(_QWORD *)(a2 + 8) = v3;
  *(_BYTE *)a2 = 9;
  return 0;
}
