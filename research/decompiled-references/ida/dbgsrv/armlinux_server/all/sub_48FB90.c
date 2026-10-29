/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FB90
// Address: 0x000000000048FB90

//----- (000000000048FB90) ----------------------------------------------------
__int64 __fastcall sub_48FB90(char *a1, char *s, unsigned int a3)
{
  int v6; // w1
  __int64 result; // x0
  char *v8; // x0
  char *v9; // x1
  char *v10; // x0
  unsigned __int8 *v11; // x0

  if ( (a3 & 1) != 0 )
  {
    v8 = strchr(s, 47);
    if ( !v8 )
LABEL_22:
      JUMPOUT(0x48EFC8);
  }
  else
  {
    v6 = (unsigned __int8)*s;
    result = v6 == 47 || v6 == 42;
    if ( (_DWORD)result && !s[1] )
      return result;
    v8 = strchr(s, 47);
    if ( !v8 )
    {
      v10 = strrchr(a1, 47);
      if ( v10 )
        v11 = (unsigned __int8 *)(v10 + 1);
      else
        v11 = (unsigned __int8 *)a1;
      return sub_48ED08(v11, (unsigned __int8 *)s);
    }
  }
  if ( !v8[1] )
    goto LABEL_22;
  if ( *a1 == 47 )
    ++a1;
  if ( *s == 47 )
    v9 = s + 1;
  else
    v9 = s;
  return sub_48EE80((unsigned __int8 *)a1, (unsigned __int8 *)v9, a3);
}
// 48FC30: control flows out of bounds to 48EFC8
