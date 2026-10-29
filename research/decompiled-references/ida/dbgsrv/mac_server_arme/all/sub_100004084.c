/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004084
// Address: 0x0000000100004084

//----- (0000000100004084) ----------------------------------------------------
__int64 __fastcall sub_100004084(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x8
  int v3; // w11
  __int64 v4; // x10
  __int64 v5; // x13
  __int64 i; // x12

  v2 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
  {
    if ( under_debugger != 1 )
      interr(3298);
    __break(1u);
  }
  if ( *(_QWORD *)(a2 + 24) == v2 )
    v3 = 8;
  else
    v3 = 4;
  v4 = 56LL * a1[58];
  if ( v4 )
  {
    v5 = 56LL * a1[58];
    for ( i = a1[57]; v2 != *(_QWORD *)i || v3 != *(_DWORD *)(i + 32); i += 56 )
    {
      v5 -= 56;
      if ( !v5 )
        return 0;
    }
  }
  else
  {
    i = a1[57];
  }
  if ( i == a1[57] + v4 )
    return 0;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 736LL))(a1);
  return 1;
}
// 1000A590D: using guessed type char under_debugger;
