/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000196EC
// Address: 0x00000001000196EC

//----- (00000001000196EC) ----------------------------------------------------
__int64 __fastcall sub_1000196EC(__int64 a1, _DWORD *a2)
{
  if ( *a2 != 38 )
    return 0;
  *(_OWORD *)*(_QWORD *)(a1 + 8) = *(_OWORD *)a2;
  return 1;
}
