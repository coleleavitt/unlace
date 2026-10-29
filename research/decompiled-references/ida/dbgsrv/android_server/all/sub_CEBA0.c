/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CEBA0
// Address: 0x00000000000CEBA0

//----- (00000000000CEBA0) ----------------------------------------------------
__int64 __fastcall sub_CEBA0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x8

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v2 = a1[7];
  if ( !v2 )
    return 4294967294LL;
  if ( *(_QWORD **)v2 != a1 )
    return 4294967294LL;
  if ( (unsigned int)(*(_DWORD *)(v2 + 8) - 16180) > 0x1F )
    return 4294967294LL;
  if ( (*(_BYTE *)(v2 + 16) & 2) == 0 )
    return 4294967294LL;
  *(_QWORD *)(v2 + 48) = a2;
  *(_DWORD *)(a2 + 72) = 0;
  return 0;
}
