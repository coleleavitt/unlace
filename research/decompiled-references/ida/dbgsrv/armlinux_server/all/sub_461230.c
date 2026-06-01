/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461230
// Address: 0x0000000000461230

//----- (0000000000461230) ----------------------------------------------------
_QWORD *__fastcall sub_461230(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // x19
  unsigned __int64 v3; // x5
  int v4; // w4
  unsigned __int64 v5; // x3
  _QWORD *v6; // x2
  __int64 v9; // x0

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    v3 = *a2;
    v4 = 1;
    v5 = v2[4];
    if ( *a2 >= v5 )
      goto LABEL_5;
    while ( 1 )
    {
      v6 = (_QWORD *)v2[2];
      if ( !v6 )
        break;
      while ( 1 )
      {
        v2 = v6;
        v4 = 1;
        v5 = v6[4];
        if ( v3 < v5 )
          break;
LABEL_5:
        v6 = (_QWORD *)v2[3];
        v4 = 0;
        if ( !v6 )
          goto LABEL_6;
      }
    }
LABEL_6:
    if ( !v4 )
      goto LABEL_7;
  }
  else
  {
    v2 = (_QWORD *)(a1 + 8);
  }
  if ( *(_QWORD **)(a1 + 24) == v2 )
    return nullptr;
  v9 = sub_49F750(v2);
  v5 = *(_QWORD *)(v9 + 32);
  v2 = (_QWORD *)v9;
  v3 = *a2;
LABEL_7:
  if ( v3 > v5 )
    return nullptr;
  else
    return v2;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
