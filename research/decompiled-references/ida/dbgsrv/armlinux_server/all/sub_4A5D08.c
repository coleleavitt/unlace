/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5D08
// Address: 0x00000000004A5D08

//----- (00000000004A5D08) ----------------------------------------------------
__int64 __fastcall sub_4A5D08(__int64 a1, int a2)
{
  _BYTE *v3; // x0
  __int64 v5; // x7
  unsigned __int8 **v6; // x8
  _BYTE *v7; // x0
  __int64 v8; // x7
  _BYTE *v9; // x0
  _BYTE *v10; // x1

  if ( !a2 )
  {
    v3 = *(_BYTE **)(a1 + 24);
    if ( !*v3 )
      return 0;
    *(_QWORD *)(a1 + 24) = v3 + 1;
    a2 = (unsigned __int8)*v3;
  }
  if ( a2 == 104 )
  {
    sub_4A5320((unsigned __int8 **)(a1 + 24));
  }
  else
  {
    if ( a2 != 118 )
      return 0;
    sub_4A5320((unsigned __int8 **)(a1 + 24));
    v7 = *(_BYTE **)(v5 + 24);
    if ( *v7 != 95 )
      return 0;
    *(_QWORD *)(v5 + 24) = v7 + 1;
    sub_4A5320(v6);
  }
  v9 = *(_BYTE **)(v8 + 24);
  if ( *v9 == 95 )
  {
    v10 = v9 + 1;
    *(_QWORD *)(v8 + 24) = v10;
    return 1;
  }
  return 0;
}
// 4A5D60: variable 'v5' is possibly undefined
// 4A5D7C: variable 'v6' is possibly undefined
// 4A5D8C: variable 'v8' is possibly undefined
