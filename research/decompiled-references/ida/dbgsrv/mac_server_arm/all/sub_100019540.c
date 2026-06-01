/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019540
// Address: 0x0000000100019540

//----- (0000000100019540) ----------------------------------------------------
__int64 __fastcall sub_100019540(__int64 a1, __int128 *a2)
{
  __int64 v2; // x8
  __int128 v3; // q0

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *a2;
  *(_QWORD *)(v2 + 16) = *((_QWORD *)a2 + 2);
  *(_OWORD *)v2 = v3;
  return 1;
}
