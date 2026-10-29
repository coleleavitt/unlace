/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5698
// Address: 0x00000000004A5698

//----- (00000000004A5698) ----------------------------------------------------
__int64 __fastcall sub_4A5698(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  _BYTE *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x10

  v2 = a1;
  v3 = *(_BYTE **)(a1 + 24);
  if ( *v3 == 66 )
  {
    do
    {
      *(_QWORD *)(v2 + 24) = v3 + 1;
      v4 = sub_4A5530(v2);
      v7 = sub_4A5090(v5, 75, v6, v4);
      v3 = *(_BYTE **)(v2 + 24);
    }
    while ( *v3 == 66 );
    *(_QWORD *)(v2 + 72) = v8;
    return v7;
  }
  else
  {
    *(_QWORD *)(v2 + 72) = *(_QWORD *)(v2 + 72);
    return a2;
  }
}
// 4A56C4: variable 'v2' is possibly undefined
// 4A56E0: variable 'v5' is possibly undefined
// 4A56E0: variable 'v6' is possibly undefined
// 4A56F8: variable 'v8' is possibly undefined
