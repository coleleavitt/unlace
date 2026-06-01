/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF140
// Address: 0x00000000000CF140

//----- (00000000000CF140) ----------------------------------------------------
__int64 __fastcall sub_CF140(_QWORD *a1, int a2)
{
  __int64 v2; // x8
  int v4; // w9

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
  v4 = *(_DWORD *)(v2 + 16);
  if ( a2 )
  {
    if ( v4 )
    {
      *(_DWORD *)(v2 + 16) = v4 | 4;
      return 0;
    }
  }
  else
  {
    v4 &= ~4u;
  }
  *(_DWORD *)(v2 + 16) = v4;
  return 0;
}
