/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF28C
// Address: 0x00000000000CF28C

//----- (00000000000CF28C) ----------------------------------------------------
__int64 __fastcall sub_CF28C(_QWORD *a1)
{
  __int64 v1; // x8

  if ( !a1 )
    return -1;
  if ( !a1[8] )
    return -1;
  if ( !a1[9] )
    return -1;
  v1 = a1[7];
  if ( !v1 )
    return -1;
  if ( *(_QWORD **)v1 != a1 )
    return -1;
  if ( (unsigned int)(*(_DWORD *)(v1 + 8) - 16180) > 0x1F )
    return -1;
  return (*(_QWORD *)(v1 + 144) - (v1 + 1368)) >> 2;
}
