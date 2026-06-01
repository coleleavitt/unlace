/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3140
// Address: 0x00000000000D3140

//----- (00000000000D3140) ----------------------------------------------------
__int64 __fastcall sub_D3140(int32x2_t *a1)
{
  unsigned __int64 v1; // x8
  __int64 result; // x0

  if ( !a1 )
    return 4294967194LL;
  v1 = a1[21].n64_u64[0];
  a1[16].n64_u64[0] = 0;
  a1[17].n64_u64[0] = v1;
  result = sub_D2548((__int64)a1, a1 + 22, a1[39].n64_u64, 0, 0, 0, 0, 0, 0);
  a1[18].n64_u64[0] = (_DWORD)result == 0;
  return result;
}
