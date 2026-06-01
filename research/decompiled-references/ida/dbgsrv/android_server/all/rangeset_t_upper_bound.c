/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_upper_bound
// Address: 0x00000000000C5224

//----- (00000000000C5224) ----------------------------------------------------
_QWORD *__fastcall rangeset_t_upper_bound(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *result; // x0
  __int64 v4; // x8
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x9
  unsigned __int64 *v7; // x10
  _QWORD *v8; // x10
  unsigned __int64 v9; // t1

  result = (_QWORD *)*a1;
  v4 = 16LL * a1[1];
  if ( v4 )
  {
    v5 = v4 >> 4;
    do
    {
      v6 = v5 >> 1;
      v7 = &result[2 * (v5 >> 1)];
      v9 = *v7;
      v8 = v7 + 2;
      v5 += ~(v5 >> 1);
      if ( v9 <= a2 )
        result = v8;
      else
        v5 = v6;
    }
    while ( v5 );
  }
  return result;
}
