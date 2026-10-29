/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46EB88
// Address: 0x000000000046EB88

//----- (000000000046EB88) ----------------------------------------------------
_QWORD *__fastcall sub_46EB88(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x19
  __int64 v5; // x22
  const char *v6; // x0
  __int64 v7; // x21
  const char *v8; // x1
  _QWORD *v9; // x0
  int v10; // w1
  const char *v11; // x0
  const char *v12; // x1
  __int64 v14; // x0

  v4 = *(_QWORD **)(a1 + 16);
  if ( !v4 )
  {
    v4 = (_QWORD *)(a1 + 8);
    goto LABEL_19;
  }
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v6 = (const char *)&qword_4B2D48;
    if ( v5 )
      v6 = *(const char **)a2;
    v7 = v4[5];
    v8 = (const char *)&qword_4B2D48;
    if ( v7 )
      v8 = (const char *)v4[4];
    if ( strcmp(v6, v8) < 0 )
      break;
    v9 = (_QWORD *)v4[3];
    v10 = 0;
    if ( !v9 )
      goto LABEL_11;
LABEL_9:
    v4 = v9;
  }
  v9 = (_QWORD *)v4[2];
  v10 = 1;
  if ( v9 )
    goto LABEL_9;
LABEL_11:
  if ( !v10 )
  {
    if ( !v7 )
      goto LABEL_13;
LABEL_21:
    v11 = (const char *)v4[4];
    if ( !v5 )
      goto LABEL_22;
LABEL_14:
    v12 = *(const char **)a2;
    goto LABEL_15;
  }
LABEL_19:
  if ( *(_QWORD **)(a1 + 24) == v4 )
    return nullptr;
  v14 = sub_49F750(v4);
  v5 = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)v14;
  if ( *(_QWORD *)(v14 + 40) )
    goto LABEL_21;
LABEL_13:
  v11 = (const char *)&qword_4B2D48;
  if ( v5 )
    goto LABEL_14;
LABEL_22:
  v12 = (const char *)&qword_4B2D48;
LABEL_15:
  if ( strcmp(v11, v12) < 0 )
    return nullptr;
  else
    return v4;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
