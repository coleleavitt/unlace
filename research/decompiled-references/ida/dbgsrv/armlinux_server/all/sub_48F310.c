/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F310
// Address: 0x000000000048F310

//----- (000000000048F310) ----------------------------------------------------
bool __fastcall sub_48F310(char *a1, unsigned __int64 a2, char *s)
{
  _BOOL4 v3; // w19
  char *v7; // x23
  char *v8; // x0
  size_t v9; // x23
  int v11; // w0

  if ( !s )
    return 0;
  v3 = a1 != nullptr && a2 <= 1;
  if ( a1 != nullptr && a2 <= 1 )
    return 0;
  v7 = strrchr(s, 47);
  v8 = strrchr(s, 92);
  if ( v8 < v7 )
    v8 = v7;
  if ( !v8 )
  {
    if ( !a1 )
      return v3;
    *(_WORD *)a1 = 46;
    return 0;
  }
  v9 = v8 - s;
  if ( a2 <= v8 - s )
    v9 = a2 - 1;
  if ( !v9 )
  {
    v11 = (unsigned __int8)*v8;
    v9 = v11 == 47 || v11 == 92;
  }
  v3 = 1;
  if ( !a1 )
    return v3;
  if ( s != a1 )
    memcpy(a1, s, v9);
  a1[v9] = 0;
  return 1;
}
