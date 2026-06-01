/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B250
// Address: 0x000000000046B250

//----- (000000000046B250) ----------------------------------------------------
_QWORD *__fastcall sub_46B250(__int64 a1, const char **a2)
{
  _QWORD *v2; // x20
  _QWORD *v4; // x0
  _QWORD *v5; // x19
  const char *v6; // x0
  const char *v7; // x1

  v2 = (_QWORD *)(a1 + 8);
  v4 = sub_462A90(*(_QWORD **)(a1 + 16), (_QWORD *)(a1 + 8), (__int64)a2);
  if ( v2 == v4 )
    return v2;
  v5 = v4;
  if ( a2[1] )
  {
    v6 = *a2;
    if ( v5[5] )
    {
LABEL_4:
      v7 = (const char *)v5[4];
      goto LABEL_5;
    }
  }
  else
  {
    v6 = (const char *)&qword_4B2D48;
    if ( v5[5] )
      goto LABEL_4;
  }
  v7 = (const char *)&qword_4B2D48;
LABEL_5:
  if ( strcmp(v6, v7) < 0 )
    return v2;
  return v5;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
