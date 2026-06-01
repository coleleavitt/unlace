/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3538
// Address: 0x00000000000D3538

//----- (00000000000D3538) ----------------------------------------------------
__int64 __fastcall sub_D3538(int32x2_t *a1, unsigned __int64 *a2)
{
  __int64 result; // x0

  result = 4294967194LL;
  if ( a1 )
  {
    if ( a2 )
    {
      a1[17].n64_u64[0] = *a2;
      a1[16].n64_u64[0] = a2[1];
      result = sub_D2548((__int64)a1, a1 + 22, a1[39].n64_u64, 0, 0, 0, 0, 0, 0);
      a1[18].n64_u64[0] = (_DWORD)result == 0;
    }
  }
  return result;
}
