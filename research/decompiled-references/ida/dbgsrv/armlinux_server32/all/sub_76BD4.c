/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76BD4
// Address: 0x00076BD4

//----- (00076BD4) --------------------------------------------------------
bool __fastcall sub_76BD4(char *a1, unsigned int a2, char *s)
{
  _BOOL4 v3; // r4
  char *v7; // r8
  char *v8; // r0
  size_t v9; // r8
  int v11; // r8
  bool v12; // zf

  if ( !s )
    return 0;
  v3 = a2 <= 1;
  if ( !a1 )
    v3 = 0;
  if ( v3 )
    return 0;
  v7 = strrchr(s, 47);
  v8 = strrchr(s, 92);
  if ( v8 < v7 )
    v8 = v7;
  if ( !v8 )
  {
    if ( a1 )
    {
      a1[1] = 0;
      *a1 = 46;
    }
    return v3;
  }
  v9 = v8 - s;
  if ( a2 <= v8 - s )
    v9 = a2 - 1;
  if ( !v9 )
  {
    v11 = (unsigned __int8)*v8;
    v12 = v11 == 92;
    if ( v11 != 92 )
      v12 = v11 == 47;
    v9 = v12;
  }
  v3 = 1;
  if ( !a1 )
    return v3;
  if ( s != a1 )
    memcpy(a1, s, v9);
  a1[v9] = 0;
  return 1;
}
