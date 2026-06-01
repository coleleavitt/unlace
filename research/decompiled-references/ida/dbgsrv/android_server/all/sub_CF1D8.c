/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF1D8
// Address: 0x00000000000CF1D8

//----- (00000000000CF1D8) ----------------------------------------------------
__int64 __fastcall sub_CF1D8(_QWORD *a1)
{
  __int64 v1; // x8
  int v3; // w10
  __int64 v4; // x9

  if ( !a1 )
    return -65536;
  if ( !a1[8] )
    return -65536;
  if ( !a1[9] )
    return -65536;
  v1 = a1[7];
  if ( !v1 )
    return -65536;
  if ( *(_QWORD **)v1 != a1 )
    return -65536;
  v3 = *(_DWORD *)(v1 + 8);
  if ( (unsigned int)(v3 - 16180) > 0x1F )
    return -65536;
  v4 = (__int64)*(int *)(v1 + 7148) << 16;
  if ( v3 == 16204 )
    return v4 + (unsigned int)(*(_DWORD *)(v1 + 7152) - *(_DWORD *)(v1 + 92));
  if ( v3 == 16195 )
    return v4 + *(unsigned int *)(v1 + 92);
  return (__int64)*(int *)(v1 + 7148) << 16;
}
