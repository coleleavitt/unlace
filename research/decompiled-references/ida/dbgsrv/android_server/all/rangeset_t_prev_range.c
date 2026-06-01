/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_prev_range
// Address: 0x00000000000C5530

//----- (00000000000C5530) ----------------------------------------------------
__int64 __fastcall rangeset_t_prev_range(unsigned __int64 **a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // x8
  __int64 v4; // x8
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x11
  unsigned __int64 *v7; // x12
  unsigned __int64 v8; // x13
  unsigned __int64 *v9; // x12

  v2 = a1[3];
  if ( v2 && *v2 <= a2 && v2[1] > a2 )
  {
    if ( v2 == *a1 )
      return -1;
    goto LABEL_13;
  }
  v4 = 16LL * (_QWORD)a1[1];
  if ( !v4 )
    return -1;
  v5 = v4 >> 4;
  v2 = *a1;
  do
  {
    v6 = v5 >> 1;
    v7 = &v2[2 * (v5 >> 1)];
    v8 = v7[1];
    v9 = v7 + 2;
    v5 += ~(v5 >> 1);
    if ( v8 <= a2 )
      v2 = v9;
    else
      v5 = v6;
  }
  while ( v5 );
  if ( v2 != *a1 )
  {
LABEL_13:
    a1[3] = v2 - 2;
    return *(v2 - 1) - 1;
  }
  return -1;
}
