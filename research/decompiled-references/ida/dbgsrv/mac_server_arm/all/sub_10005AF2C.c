/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005AF2C
// Address: 0x000000010005AF2C

//----- (000000010005AF2C) ----------------------------------------------------
unsigned __int64 __fastcall sub_10005AF2C(_QWORD *a1, unsigned __int64 *a2)
{
  const char *v4; // x21
  _BYTE *v5; // x9
  size_t v7; // x0
  size_t v8; // x22
  unsigned __int64 v9; // x23
  _QWORD *v10; // x1
  unsigned __int64 result; // x0

  v4 = (const char *)*a2;
  v5 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v5 >= a2[1] )
      goto LABEL_9;
  }
  while ( *v5++ );
  *a2 = (unsigned __int64)v5;
  if ( !v4 || (v7 = strlen(v4)) == 0 )
  {
LABEL_9:
    a1[1] = 0;
    goto LABEL_10;
  }
  v8 = v7;
  v9 = v7 + 1;
  v10 = (_QWORD *)*a1;
  if ( a1[2] < v7 + 1 )
  {
    v10 = qvector_reserve(a1, v10, v9, 1u);
    *a1 = v10;
  }
  a1[1] = v9;
  memmove(v10, v4, v8);
  *(_BYTE *)(*a1 + v8) = 0;
LABEL_10:
  a1[3] = unpack_dq(a2, a2[1]) - 1;
  a1[4] = unpack_dq(a2, a2[1]) - 1;
  result = unpack_dq(a2, a2[1]);
  a1[5] = result - 1;
  return result;
}
