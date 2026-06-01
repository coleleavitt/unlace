/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_has_common
// Address: 0x00000000000C46F0

//----- (00000000000C46F0) ----------------------------------------------------
bool __fastcall rangeset_t_has_common(_QWORD *a1, unsigned __int64 *a2, char a3)
{
  __int64 v3; // x9
  unsigned __int64 v4; // x8
  unsigned __int64 *i; // x10
  unsigned __int64 v6; // x11
  unsigned __int64 v7; // x10
  unsigned __int64 v8; // x9

  v3 = 16LL * a1[1];
  if ( !v3 )
    return 0;
  v4 = *a2;
  for ( i = (unsigned __int64 *)(*a1 + 8LL); ; i += 2 )
  {
    v6 = *i;
    if ( *i > v4 )
      break;
    v3 -= 16;
    if ( !v3 )
      return 0;
  }
  v7 = *(i - 1);
  v8 = a2[1];
  if ( v7 < v8 && (a3 & 1) != 0 )
    return v4 >= v7 && v8 <= v6;
  return v7 < v8;
}
