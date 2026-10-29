/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DE50
// Address: 0x000000000043DE50

//----- (000000000043DE50) ----------------------------------------------------
__int64 __fastcall sub_43DE50(__int64 *a1, char *s2)
{
  __int64 v2; // x19
  __int64 v4; // x22
  __int64 v5; // x2
  const char *v6; // x0

  if ( !s2 )
    return -1;
  v2 = a1[1] - 1;
  if ( v2 < 0 )
    return -1;
  v4 = *a1;
  do
  {
    v5 = *(_QWORD *)(v4 + 8 * v2);
    v6 = (const char *)&qword_4B2D48;
    if ( *(_QWORD *)(v5 + 8) )
      v6 = *(const char **)v5;
    if ( !strcmp(v6, s2) )
      break;
    --v2;
  }
  while ( v2 != -1 );
  return v2;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
