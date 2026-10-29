/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdirname
// Address: 0x00000000000C0E30

//----- (00000000000C0E30) ----------------------------------------------------
__int64 __fastcall qdirname(char *dest, unsigned __int64 a2, const char *a3)
{
  unsigned int v4; // ebp
  char *v6; // r15
  char *v7; // rax
  size_t v8; // r15
  char v9; // al

  if ( !a3 )
    return 0;
  v4 = a2;
  if ( dest )
  {
    if ( a2 < 2 )
      return 0;
  }
  v6 = strrchr(a3, 47);
  v7 = strrchr(a3, 92);
  if ( v6 > v7 )
    v7 = v6;
  if ( !v7 )
  {
    if ( dest )
      *(_WORD *)dest = 46;
    return 0;
  }
  v8 = a2 - 1;
  if ( v7 - a3 < a2 )
    v8 = v7 - a3;
  if ( !v8 )
  {
    v9 = *v7;
    v8 = v9 == 92 || v9 == 47;
  }
  LOBYTE(v4) = 1;
  if ( dest )
  {
    if ( dest != a3 )
      memcpy(dest, a3, v8);
    dest[v8] = 0;
  }
  return v4;
}
