/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054EA0
// Address: 0x0000000100054EA0

//----- (0000000100054EA0) ----------------------------------------------------
void __fastcall sub_100054EA0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 440) = a2;
  *(_QWORD *)(a2 + 400) = a1 + 192;
}
