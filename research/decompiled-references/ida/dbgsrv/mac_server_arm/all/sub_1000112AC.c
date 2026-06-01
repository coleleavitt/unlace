/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000112AC
// Address: 0x00000001000112AC

//----- (00000001000112AC) ----------------------------------------------------
char *__fastcall sub_1000112AC(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // x9
  unsigned __int64 v3; // x8
  __int64 v4; // x8
  unsigned __int8 *v5; // x19

  v2 = a1[2];
  v3 = v2 - 1;
  if ( !v2 )
    v3 = 0;
  if ( v3 <= a2 )
    return byte_1000757B9;
  v4 = a1[4];
  if ( !v4 )
    return byte_1000757B9;
  v5 = (unsigned __int8 *)(a1[1] + a2);
  qlgetz(v4, a1[5] + a2, v5, v2 - a2);
  return (char *)v5;
}
