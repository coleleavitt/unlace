/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7690
// Address: 0x00000000000A7690

//----- (00000000000A7690) ----------------------------------------------------
__int64 __fastcall sub_A7690(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( a2 == 4 )
    return 0;
  v3 = *(_QWORD *)(a1 + 736);
  if ( v3 == a3 )
  {
    result = 6;
    if ( *(_DWORD *)(a1 + 768) == a2 )
      return result;
  }
  if ( v3 == -1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 744);
  if ( v5 == a3 )
  {
    result = 6;
    if ( *(_DWORD *)(a1 + 772) == a2 )
      return result;
  }
  if ( v5 == -1 )
    return 0;
  v6 = *(_QWORD *)(a1 + 752);
  if ( v6 == a3 )
  {
    result = 6;
    if ( *(_DWORD *)(a1 + 776) == a2 )
      return result;
  }
  if ( v6 == -1 )
    return 0;
  v7 = *(_QWORD *)(a1 + 760);
  result = 6;
  if ( v7 != a3 )
  {
    if ( v7 != -1 )
      return result;
    return 0;
  }
  if ( a3 == -1 && *(_DWORD *)(a1 + 780) != a2 )
    return 0;
  return result;
}
