/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451CB0
// Address: 0x0000000000451CB0

//----- (0000000000451CB0) ----------------------------------------------------
__int64 __fastcall sub_451CB0(__int64 result, unsigned __int8 *a2)
{
  __int64 v2; // x4
  int v3; // w2
  unsigned __int64 v4; // x3
  int v5; // w1
  unsigned __int64 v6; // x2

  v2 = *(_QWORD *)(result + 8);
  v3 = 8 * (8 - *((_DWORD *)a2 + 1));
  v4 = 0xFFFFFFFFFFFFFFFFLL >> (8 * (8 - a2[4]));
  *(_QWORD *)(result + 8) = v2 & v4;
  v5 = *a2;
  *(_BYTE *)result = v5;
  if ( !v5 )
  {
    v6 = 0x8000000000000000LL >> v3;
    if ( (v2 & v4 & v6) != 0 )
      *(_QWORD *)(result + 8) = v2 | v6 | ~v4;
  }
  return result;
}
