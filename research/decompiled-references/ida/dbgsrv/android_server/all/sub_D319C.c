/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D319C
// Address: 0x00000000000D319C

//----- (00000000000D319C) ----------------------------------------------------
__int64 __fastcall sub_D319C(int32x2_t *a1)
{
  unsigned __int64 v2; // x9
  __int64 v3; // x8
  __int64 result; // x0
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x11
  unsigned __int64 v8; // x12

  if ( !a1 )
    return 4294967194LL;
  if ( !a1[18].n64_u64[0] )
    return 4294967196LL;
  v2 = a1[13].n64_u64[0];
  v3 = a1[16].n64_u64[0] + 1;
  if ( v2 != 0xFFFF && v3 == v2 )
    return 4294967196LL;
  v5 = a1[30].n64_u64[0];
  v6 = a1[31].n64_u64[0];
  v7 = a1[32].n64_u64[0];
  v8 = a1[17].n64_u64[0];
  a1[16].n64_u64[0] = v3;
  a1[17].n64_u64[0] = v5 + v6 + v7 + v8 + 46;
  result = sub_D2548((__int64)a1, a1 + 22, a1[39].n64_u64, 0, 0, 0, 0, 0, 0);
  a1[18].n64_u64[0] = (_DWORD)result == 0;
  return result;
}
