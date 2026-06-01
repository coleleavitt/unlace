/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF0C4
// Address: 0x00000000000CF0C4

//----- (00000000000CF0C4) ----------------------------------------------------
__int64 __fastcall sub_CF0C4(_QWORD *a1)
{
  __int64 v1; // x8

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
  if ( (unsigned int)(*(_DWORD *)(v1 + 8) - 16180) > 0x1F )
    return 4294967294LL;
  *(_DWORD *)(v1 + 7144) = 1;
  return 4294967293LL;
}
