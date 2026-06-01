/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_F124C
// Address: 0x00000000000F124C

//----- (00000000000F124C) ----------------------------------------------------
_QWORD *__fastcall sub_F124C(size_t *a1)
{
  unsigned __int64 v1; // x20
  size_t v3; // x0
  _QWORD *v4; // x0
  _QWORD *v5; // x19
  void *v6; // x0
  const void *v7; // x1
  size_t v8; // x2

  v1 = a1[1];
  v3 = *a1;
  if ( v1 > 8 )
  {
    v6 = malloc(v1 + v3 + 7);
    if ( !v6 )
LABEL_3:
      abort();
    v5 = (_QWORD *)(((unsigned __int64)v6 + v1 + 7) & -(__int64)v1);
    *(v5 - 1) = v6;
  }
  else
  {
    v4 = malloc(v3 + 8);
    if ( !v4 )
      goto LABEL_3;
    *v4 = v4;
    v5 = v4 + 1;
  }
  v7 = (const void *)a1[3];
  v8 = *a1;
  if ( v7 )
    memcpy(v5, v7, v8);
  else
    memset(v5, 0, v8);
  return v5;
}
