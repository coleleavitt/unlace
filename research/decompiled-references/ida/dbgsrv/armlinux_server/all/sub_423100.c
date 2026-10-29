/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423100
// Address: 0x0000000000423100

//----- (0000000000423100) ----------------------------------------------------
__int64 __fastcall sub_423100(__int64 a1, int a2, bool *a3)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int v6; // w0

  if ( !*(_BYTE *)(a1 + 168) )
    sub_4068C0();
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(20056);
    __break(0x3E8u);
  }
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v3 + (*(_QWORD *)(a1 + 40) << 6);
  if ( v3 == v4 )
    return 0;
  while ( 1 )
  {
    if ( *(_DWORD *)(v3 + 44) == a2 )
    {
      v6 = *(_DWORD *)(v3 + 4);
      if ( v6 == 4 || v6 == 9 )
        break;
    }
    v3 += 64;
    if ( v3 == v4 )
      return 0;
  }
  if ( a3 )
    *a3 = v6 == 4;
  return v3;
}
// 52451C: using guessed type char under_debugger;
