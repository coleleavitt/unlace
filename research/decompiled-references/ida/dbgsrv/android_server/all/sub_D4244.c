/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4244
// Address: 0x00000000000D4244

//----- (00000000000D4244) ----------------------------------------------------
__int64 __fastcall sub_D4244(int32x2_t *a1, unsigned __int64 a2)
{
  __int64 result; // x0

  if ( !a1 )
    return 4294967194LL;
  a1[16].n64_u64[0] = a1[13].n64_u64[0];
  a1[17].n64_u64[0] = a2;
  result = sub_D2548((__int64)a1, a1 + 22, a1[39].n64_u64, 0, 0, 0, 0, 0, 0);
  a1[18].n64_u64[0] = (_DWORD)result == 0;
  return result;
}
