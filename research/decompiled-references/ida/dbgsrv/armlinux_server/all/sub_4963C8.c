/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4963C8
// Address: 0x00000000004963C8

//----- (00000000004963C8) ----------------------------------------------------
bool __fastcall sub_4963C8(unsigned __int64 **a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // x3
  unsigned __int64 v3; // x6
  unsigned __int64 *v4; // x4
  unsigned __int64 *v5; // x5
  unsigned __int64 v6; // x1
  __int64 v7; // x0
  unsigned __int64 *v8; // x2
  _BOOL8 result; // x0

  v2 = *a2;
  v3 = a2[1];
  if ( v3 <= *a2 )
    return 1;
  v4 = a1[1];
  if ( !v4 )
    return 0;
  v5 = *a1;
  v6 = (*a1)[1];
  if ( v2 > v6 )
  {
    v7 = 0;
    while ( (unsigned __int64 *)++v7 != v4 )
    {
      v8 = &v5[2 * (int)v7];
      v6 = v8[1];
      if ( v2 <= v6 )
        goto LABEL_11;
    }
    return 0;
  }
  v8 = *a1;
LABEL_11:
  result = (*v8 != v6) & (unsigned __int8)(v2 >= *v8);
  if ( *v8 != v6 && v2 >= *v8 )
    return v3 - 1 <= v6 - 1;
  return result;
}
