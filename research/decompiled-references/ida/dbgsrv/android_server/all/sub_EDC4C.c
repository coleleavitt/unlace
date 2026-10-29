/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EDC4C
// Address: 0x00000000000EDC4C

//----- (00000000000EDC4C) ----------------------------------------------------
__int64 __fastcall sub_EDC4C(__int64 result, __int64 a2, _QWORD *a3)
{
  if ( byte_16935F != 8 )
    abort();
  *a3 = a2;
  if ( (*(_QWORD *)(result + 832) & 0x4000000000000000LL) != 0 )
    *(_BYTE *)(result + 887) = 0;
  *(_QWORD *)(result + 248) = a3;
  return result;
}
// 16935F: using guessed type char byte_16935F;
