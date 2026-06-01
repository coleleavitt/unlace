/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001AF6C
// Address: 0x000000010001AF6C

//----- (000000010001AF6C) ----------------------------------------------------
__int64 __fastcall sub_10001AF6C(__int64 a1, __int128 *a2)
{
  __int64 v2; // x8
  __int128 v3; // q0

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *a2;
  *(_QWORD *)(v2 + 16) = *((_QWORD *)a2 + 2);
  *(_OWORD *)v2 = v3;
  return 1;
}
