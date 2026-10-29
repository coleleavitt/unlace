/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444B60
// Address: 0x0000000000444B60

//----- (0000000000444B60) ----------------------------------------------------
__int64 __fastcall sub_444B60(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v3; // x23
  _QWORD *v4; // x5
  unsigned __int64 v5; // x2
  _QWORD *v6; // x21
  _QWORD *v7; // x19
  unsigned __int64 v8; // x0
  bool v9; // cc
  _BOOL4 v10; // w1
  __int64 v11; // x24
  _QWORD *v13; // x0
  _QWORD *i; // x3
  __int64 v16; // x22
  int *v17; // x0
  __int64 v18; // x0

  v3 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
  {
    v6 = a1 + 1;
    v10 = 1;
LABEL_6:
    v11 = a1[5];
    if ( !v10 || a1[3] != (_QWORD)v6 )
      return 0;
    goto LABEL_11;
  }
  v5 = *a2;
  v6 = a1 + 1;
  v7 = (_QWORD *)a1[2];
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = v7[4];
      v9 = v8 > v5;
      if ( v8 >= v5 )
        break;
      v7 = (_QWORD *)v7[3];
      if ( !v7 )
        goto LABEL_5;
    }
    v13 = (_QWORD *)v7[2];
    if ( !v9 )
      break;
    v6 = v7;
    v7 = (_QWORD *)v7[2];
    if ( !v13 )
    {
LABEL_5:
      v10 = v3 == v6;
      goto LABEL_6;
    }
  }
  for ( i = (_QWORD *)v7[3]; v13; v13 = (_QWORD *)v13[3] )
  {
    while ( v5 <= v13[4] )
    {
      v7 = v13;
      v13 = (_QWORD *)v13[2];
      if ( !v13 )
        goto LABEL_20;
    }
  }
LABEL_20:
  while ( i )
  {
    while ( v5 < i[4] )
    {
      v6 = i;
      i = (_QWORD *)i[2];
      if ( !i )
        goto LABEL_23;
    }
    i = (_QWORD *)i[3];
  }
LABEL_23:
  v11 = a1[5];
  if ( (_QWORD *)a1[3] == v7 && v3 == v6 )
  {
LABEL_11:
    sub_444B18((__int64)a1, v4);
    v3[1] = 0;
    v3[2] = v3;
    v3[3] = v3;
    v3[4] = 0;
    return v11;
  }
  if ( v7 == v6 )
    return 0;
  do
  {
    v16 = sub_49F748(v7);
    v17 = sub_49FAC0((int *)v7, v3);
    v7 = (_QWORD *)v16;
    j__free_0(v17);
    v18 = a1[5] - 1LL;
    a1[5] = v18;
  }
  while ( (_QWORD *)v16 != v6 );
  return v11 - v18;
}
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
