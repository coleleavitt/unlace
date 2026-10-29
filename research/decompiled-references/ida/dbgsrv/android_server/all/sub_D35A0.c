/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D35A0
// Address: 0x00000000000D35A0

//----- (00000000000D35A0) ----------------------------------------------------
__int64 __fastcall sub_D35A0(__int64 a1, int8x16_t *a2)
{
  __int64 result; // x0

  result = 4294967194LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *(int8x16_t *)(a1 + 128) = vextq_s8(*a2, *a2, 8u);
      result = sub_D2548(a1, (int32x2_t *)(a1 + 176), (unsigned __int64 *)(a1 + 312), 0, 0, 0, 0, 0, 0);
      *(_QWORD *)(a1 + 144) = (_DWORD)result == 0;
    }
  }
  return result;
}
