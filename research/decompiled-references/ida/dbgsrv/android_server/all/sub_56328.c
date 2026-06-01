/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56328
// Address: 0x0000000000056328

//----- (0000000000056328) ----------------------------------------------------
unsigned __int64 __fastcall sub_56328(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x9
  bool v7; // cc
  unsigned __int64 v8; // x8

  if ( *(_DWORD *)(a2 + 4) == 8 )
    return 0;
  v3 = a1[4];
  v4 = *(_QWORD *)(a1[20] + 488LL) - *(_QWORD *)(a1[20] + 480LL);
  if ( a2 + 64 >= v3 && a2 + 64 < v3 + (a1[5] << 6) )
  {
    v5 = *(_QWORD *)(a2 + 88);
    if ( v5 < v4 && v5 >= *(_QWORD *)(a2 + 24) )
      v4 = *(_QWORD *)(a2 + 88);
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = v4 > v6;
  v8 = v4 - v6;
  if ( !v7 )
    return 0;
  if ( *(_QWORD *)(a2 + 32) >= v8 )
    return v8;
  return *(_QWORD *)(a2 + 32);
}
