/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F3A0
// Address: 0x000000000040F3A0

//----- (000000000040F3A0) ----------------------------------------------------
_QWORD *__fastcall sub_40F3A0(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v4; // x22
  _QWORD *v5; // x19
  unsigned __int64 v6; // x5
  int v7; // w4
  unsigned __int64 v8; // x2
  _QWORD *v9; // x0
  __int64 v11; // x0
  char v12; // w24
  _QWORD *v13; // x23

  v4 = a1 + 1;
  v5 = (_QWORD *)a1[2];
  if ( v5 )
  {
    v6 = *a2;
    v7 = 1;
    v8 = v5[4];
    if ( *a2 >= v8 )
      goto LABEL_5;
    while ( 1 )
    {
      v9 = (_QWORD *)v5[2];
      if ( !v9 )
        break;
      while ( 1 )
      {
        v5 = v9;
        v7 = 1;
        v8 = v9[4];
        if ( v6 < v8 )
          break;
LABEL_5:
        v9 = (_QWORD *)v5[3];
        v7 = 0;
        if ( !v9 )
          goto LABEL_6;
      }
    }
LABEL_6:
    if ( !v7 )
    {
      if ( v6 <= v8 )
        return v5;
      goto LABEL_14;
    }
  }
  else
  {
    v5 = a1 + 1;
  }
  if ( (_QWORD *)a1[3] != v5 )
  {
    v11 = sub_49F750(v5);
    if ( *a2 <= *(_QWORD *)(v11 + 32) )
      return (_QWORD *)v11;
  }
  if ( !v5 )
    return v5;
LABEL_14:
  v12 = 1;
  if ( v5 != v4 )
    v12 = *a2 < v5[4];
  v13 = sub_49E050(0x28u);
  v13[4] = *a2;
  sub_49F830(v12, (__int64)v13, v5, v4);
  ++a1[5];
  return v13;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
