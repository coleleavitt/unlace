/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444820
// Address: 0x0000000000444820

//----- (0000000000444820) ----------------------------------------------------
_QWORD *__fastcall sub_444820(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // x23
  _QWORD *v5; // x19
  __int64 v6; // x24
  const char *v7; // x0
  __int64 v8; // x25
  const char *v9; // x1
  _QWORD *v10; // x0
  int v11; // w1
  _QWORD *v12; // x20
  const char *v13; // x0
  __int64 v15; // x0
  unsigned int v16; // w24
  _QWORD *v17; // x19
  __int64 v18; // x2
  __int64 v19; // x3
  const char *v20; // x4
  const char *v21; // x0
  const char *v22; // x1

  v4 = a1 + 1;
  v5 = (_QWORD *)a1[2];
  if ( !v5 )
  {
    v5 = a1 + 1;
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v7 = (const char *)&qword_4B2D48;
    if ( v6 )
      v7 = *(const char **)a2;
    v8 = v5[5];
    v9 = (const char *)&qword_4B2D48;
    if ( v8 )
      v9 = (const char *)v5[4];
    if ( strcmp(v7, v9) < 0 )
      break;
    v10 = (_QWORD *)v5[3];
    v11 = 0;
    if ( !v10 )
      goto LABEL_11;
LABEL_9:
    v5 = v10;
  }
  v10 = (_QWORD *)v5[2];
  v11 = 1;
  if ( v10 )
    goto LABEL_9;
LABEL_11:
  v12 = v5;
  if ( !v11 )
  {
    if ( !v8 )
      goto LABEL_13;
LABEL_19:
    v13 = (const char *)v5[4];
    if ( !v6 )
      goto LABEL_20;
LABEL_14:
    if ( (strcmp(v13, *(const char **)a2) & 0x80000000) == 0 )
      return v5;
    goto LABEL_21;
  }
LABEL_17:
  if ( (_QWORD *)a1[3] == v5 )
  {
    v12 = v5;
    goto LABEL_21;
  }
  v15 = sub_49F750(v5);
  v12 = v5;
  v6 = *(_QWORD *)(a2 + 8);
  v5 = (_QWORD *)v15;
  if ( *(_QWORD *)(v15 + 40) )
    goto LABEL_19;
LABEL_13:
  v13 = (const char *)&qword_4B2D48;
  if ( v6 )
    goto LABEL_14;
LABEL_20:
  if ( (strcmp(v13, (const char *)&qword_4B2D48) & 0x80000000) == 0 )
    return v5;
LABEL_21:
  if ( !v12 )
    return nullptr;
  LOBYTE(v16) = 1;
  if ( v4 != v12 )
  {
    if ( *(_QWORD *)(a2 + 8) )
      v21 = *(const char **)a2;
    else
      v21 = (const char *)&qword_4B2D48;
    if ( v12[5] )
      v22 = (const char *)v12[4];
    else
      v22 = (const char *)&qword_4B2D48;
    v16 = (unsigned int)strcmp(v21, v22) >> 31;
  }
  v17 = sub_49E050(0x38u);
  v18 = *(_QWORD *)(a2 + 16);
  v20 = *(const char **)a2;
  v19 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  v17[4] = v20;
  v17[5] = v19;
  v17[6] = v18;
  *(_QWORD *)(a2 + 16) = 0;
  sub_49F830(v16, (__int64)v17, v12, v4);
  ++a1[5];
  return v17;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
