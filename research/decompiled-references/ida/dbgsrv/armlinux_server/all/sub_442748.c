/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442748
// Address: 0x0000000000442748

//----- (0000000000442748) ----------------------------------------------------
_QWORD *__fastcall sub_442748(_QWORD *a1, _QWORD *a2, const char **a3)
{
  const char *v6; // x22
  const char *v7; // x21
  int v8; // w0
  _QWORD *v9; // x2
  _QWORD *v11; // x21
  const char *v12; // x0
  __int64 v14; // x19
  const char *v15; // x0
  const char *v16; // x1
  int v17; // w0
  __int64 v18; // x21
  const char *v19; // x1

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_442198((__int64)a1, (__int64)a3);
    v14 = a1[4];
    if ( *(_QWORD *)(v14 + 40) )
    {
      v15 = *(const char **)(v14 + 32);
      if ( a3[1] )
      {
LABEL_20:
        v16 = *a3;
        goto LABEL_21;
      }
    }
    else
    {
      v15 = (const char *)&qword_4B2D48;
      if ( a3[1] )
        goto LABEL_20;
    }
    v16 = (const char *)&qword_4B2D48;
LABEL_21:
    v17 = strcmp(v15, v16);
    v9 = nullptr;
    if ( v17 < 0 )
      return v9;
    return sub_442198((__int64)a1, (__int64)a3);
  }
  if ( a3[1] )
  {
    v6 = *a3;
    if ( a2[5] )
      goto LABEL_4;
LABEL_8:
    v7 = (const char *)&qword_4B2D48;
    if ( (strcmp(v6, (const char *)&qword_4B2D48) & 0x80000000) == 0 )
      goto LABEL_5;
    goto LABEL_9;
  }
  v6 = (const char *)&qword_4B2D48;
  if ( !a2[5] )
    goto LABEL_8;
LABEL_4:
  v7 = (const char *)a2[4];
  if ( (strcmp(v6, v7) & 0x80000000) == 0 )
  {
LABEL_5:
    v8 = strcmp(v7, v6);
    v9 = a2;
    if ( (v8 & 0x80000000) == 0 )
      return v9;
    if ( (_QWORD *)a1[4] == a2 )
      return nullptr;
    v18 = sub_49F6E8((__int64)a2);
    if ( *(_QWORD *)(v18 + 40) )
      v19 = *(const char **)(v18 + 32);
    else
      v19 = (const char *)&qword_4B2D48;
    if ( strcmp(v6, v19) < 0 )
    {
      if ( a2[3] )
        return (_QWORD *)v18;
      else
        return nullptr;
    }
    return sub_442198((__int64)a1, (__int64)a3);
  }
LABEL_9:
  if ( (_QWORD *)a1[3] == a2 )
    return a2;
  v11 = (_QWORD *)sub_49F750(a2);
  if ( v11[5] )
    v12 = (const char *)v11[4];
  else
    v12 = (const char *)&qword_4B2D48;
  if ( (strcmp(v12, v6) & 0x80000000) == 0 )
    return sub_442198((__int64)a1, (__int64)a3);
  if ( v11[3] )
    return a2;
  else
    return nullptr;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
