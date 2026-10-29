/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4843E8
// Address: 0x00000000004843E8

//----- (00000000004843E8) ----------------------------------------------------
_QWORD *__fastcall sub_4843E8(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v4; // x21
  _QWORD *v5; // x19
  unsigned __int64 v6; // x0
  unsigned __int64 v7; // x20
  unsigned __int64 v8; // x4
  int v9; // w5
  _QWORD *v10; // x1
  _QWORD *v11; // x2
  char v13; // w0
  __int64 v14; // x0

  v4 = sub_49E050(0x30u);
  v5 = (_QWORD *)a1[2];
  v7 = *a2;
  v6 = a2[1];
  v4[4] = *a2;
  v4[5] = v6;
  if ( v5 )
  {
    v8 = v5[4];
    v9 = 1;
    if ( v7 >= v8 )
      goto LABEL_5;
    while ( 1 )
    {
      v10 = (_QWORD *)v5[2];
      if ( !v10 )
        break;
      while ( 1 )
      {
        v5 = v10;
        v9 = 1;
        v8 = v10[4];
        if ( v7 < v8 )
          break;
LABEL_5:
        v10 = (_QWORD *)v5[3];
        v9 = 0;
        if ( !v10 )
          goto LABEL_6;
      }
    }
LABEL_6:
    v11 = v5;
    if ( !v9 )
      goto LABEL_7;
  }
  else
  {
    v5 = a1 + 1;
  }
  if ( (_QWORD *)a1[3] == v5 )
  {
    v11 = v5;
    goto LABEL_12;
  }
  v14 = sub_49F750(v5);
  v11 = v5;
  v8 = *(_QWORD *)(v14 + 32);
  v5 = (_QWORD *)v14;
LABEL_7:
  if ( v7 <= v8 )
  {
LABEL_8:
    j__free_0(v4);
    return v5;
  }
LABEL_12:
  if ( !v11 )
  {
    v5 = nullptr;
    goto LABEL_8;
  }
  v13 = 1;
  if ( a1 + 1 != v11 )
    v13 = v7 < v11[4];
  sub_49F830(v13, (__int64)v4, v11, a1 + 1);
  ++a1[5];
  return v4;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
