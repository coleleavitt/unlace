/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5198
// Address: 0x00000000000D5198

//----- (00000000000D5198) ----------------------------------------------------
__n128 __fastcall sub_D5198(__int64 a1)
{
  __int128 v1; // q0
  __n128 result; // q0

  *(_QWORD *)a1 = sub_D51F8;
  *(_QWORD *)&v1 = sub_D511C;
  *(_QWORD *)(a1 + 24) = sub_D5250;
  *(_QWORD *)(a1 + 32) = sub_D5258;
  *((_QWORD *)&v1 + 1) = sub_D5134;
  *(_OWORD *)(a1 + 8) = v1;
  result.n128_u64[0] = (unsigned __int64)sub_D5188;
  result.n128_u64[1] = (unsigned __int64)sub_D5190;
  *(__n128 *)(a1 + 40) = result;
  *(_QWORD *)(a1 + 56) = 0;
  return result;
}
