/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CEEC0
// Address: 0x00000000000CEEC0

//----- (00000000000CEEC0) ----------------------------------------------------
__int64 __fastcall sub_CEEC0(_QWORD *a1)
{
  __int64 v1; // x8
  int v3; // w9

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v1 = a1[7];
  if ( !v1 )
    return 4294967294LL;
  if ( *(_QWORD **)v1 != a1 )
    return 4294967294LL;
  v3 = *(_DWORD *)(v1 + 8);
  if ( (unsigned int)(v3 - 16180) > 0x1F )
    return 4294967294LL;
  if ( v3 == 16193 )
    return *(_DWORD *)(v1 + 88) == 0;
  return 0;
}
