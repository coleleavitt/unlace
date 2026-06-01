/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77148
// Address: 0x00077148

//----- (00077148) --------------------------------------------------------
int __fastcall sub_77148(char *a1, char *s, int a3)
{
  unsigned __int8 *v5; // r4
  int v6; // r0
  bool v7; // zf
  int result; // r0
  char *v9; // r0
  char *v10; // r0

  v5 = (unsigned __int8 *)s;
  if ( (a3 & 1) != 0 )
  {
    v9 = strchr(s, 47);
    if ( !v9 )
      return sub_76A18(a1, v5, a3);
    goto LABEL_9;
  }
  v6 = (unsigned __int8)*s;
  v7 = v6 == 47;
  if ( v6 != 47 )
    v7 = v6 == 42;
  if ( !v7 || (result = 1, s[1]) )
  {
    v9 = strchr(s, 47);
    if ( v9 )
    {
LABEL_9:
      if ( v9[1] )
      {
        if ( *a1 == 47 )
          ++a1;
        if ( *v5 == 47 )
          ++v5;
        return sub_76960(a1, v5, a3);
      }
      return sub_76A18(a1, v5, a3);
    }
    v10 = strrchr(a1, 47);
    if ( v10 )
      a1 = v10 + 1;
    return sub_76888((unsigned __int8 *)a1, v5);
  }
  return result;
}
