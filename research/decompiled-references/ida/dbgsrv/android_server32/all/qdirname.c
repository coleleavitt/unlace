/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdirname
// Address: 0x0007D1C4

//----- (0007D1C4) --------------------------------------------------------
int __fastcall qdirname(char *a1, unsigned int a2, char *s)
{
  int v3; // r6
  char *v6; // r4
  char *v7; // r0
  size_t v8; // r2
  int v9; // r0
  char *v10; // r1
  size_t v11; // r5

  v3 = 0;
  if ( s && (!a1 || a2 >= 2) )
  {
    v6 = strrchr(s, 47);
    v7 = strrchr(s, 92);
    if ( v6 <= v7 )
      v6 = v7;
    if ( v6 )
    {
      v8 = v6 - s;
      if ( v6 - s >= a2 )
        v8 = a2 - 1;
      if ( !v8 )
      {
        v9 = (unsigned __int8)*v6;
        v8 = 0;
        if ( v9 == 92 || v9 == 47 )
          v8 = 1;
      }
      v3 = 1;
      if ( a1 )
      {
        if ( a1 != s )
        {
          v10 = s;
          v11 = v8;
          qmemcpy(a1, v10, v8);
          v8 = v11;
        }
        a1[v8] = 0;
      }
    }
    else if ( a1 )
    {
      v3 = 0;
      a1[1] = 0;
      *a1 = 46;
    }
  }
  return v3;
}
