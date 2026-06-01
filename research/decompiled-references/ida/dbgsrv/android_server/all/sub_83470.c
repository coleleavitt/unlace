/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83470
// Address: 0x0000000000083470

//----- (0000000000083470) ----------------------------------------------------
__int64 __fastcall sub_83470(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8) == 0;
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
