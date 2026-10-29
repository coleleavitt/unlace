/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B120
// Address: 0x000000010001B120

//----- (000000010001B120) ----------------------------------------------------
__int64 __fastcall sub_10001B120(__int64 a1, _DWORD *a2)
{
  if ( *a2 != 38 )
    return 0;
  *(_OWORD *)*(_QWORD *)(a1 + 8) = *(_OWORD *)a2;
  return 1;
}
