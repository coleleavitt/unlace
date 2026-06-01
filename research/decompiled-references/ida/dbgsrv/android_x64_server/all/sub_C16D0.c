/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C16D0
// Address: 0x00000000000C16D0

//----- (00000000000C16D0) ----------------------------------------------------
char __fastcall sub_C16D0(char *s, char *a2, char a3)
{
  char *v6; // rax
  char *v7; // rax
  char *v8; // rdi
  char *v10; // rdi
  char *v11; // rsi
  char *v12; // rbx
  char *v13; // rax

  if ( (a3 & 1) == 0 && (*a2 == 47 || *a2 == 42) && !a2[1] )
    return 1;
  v6 = strchr(a2, 47);
  if ( (a3 & 1) != 0 || v6 )
  {
    if ( v6 && v6[1] )
    {
      v10 = s + 1;
      if ( *s != 47 )
        v10 = s;
      v11 = a2 + 1;
      if ( *a2 != 47 )
        v11 = a2;
      return sub_C1940(v10, v11, a3);
    }
    else
    {
      v12 = s + 1;
      if ( *s != 47 )
        v12 = s;
      do
      {
        if ( *v12 == 46 && (a3 & 1) != 0 && *a2 != 46 )
          break;
        if ( sub_C1940(v12, a2, a3) )
          return 1;
        v13 = strchr(v12, 47);
        v12 = v13 + 1;
      }
      while ( v13 );
      return 0;
    }
  }
  else
  {
    v7 = strrchr(s, 47);
    v8 = v7 + 1;
    if ( !v7 )
      v8 = s;
    return sub_C17D0(v8, a2);
  }
}
