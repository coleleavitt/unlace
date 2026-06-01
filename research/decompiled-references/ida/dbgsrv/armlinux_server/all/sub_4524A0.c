/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4524A0
// Address: 0x00000000004524A0

//----- (00000000004524A0) ----------------------------------------------------
__int64 __fastcall sub_4524A0(__int64 a1, __int64 a2)
{
  __int64 v2; // x2

  v2 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = a2;
  return v2;
}
