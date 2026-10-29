/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77CDC
// Address: 0x00077CDC

//----- (00077CDC) --------------------------------------------------------
unsigned __int8 *__fastcall sub_77CDC(char *a1, int a2, FILE *a3)
{
  unsigned __int8 *v3; // r4
  char *v4; // r0
  int v5; // r5
  size_t v6; // r0
  unsigned __int8 *v7; // r3
  size_t v8; // r0

  if ( a2 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1225);
  }
  v3 = (unsigned __int8 *)a3;
  if ( !a3 )
  {
    sub_70B98(1);
    *_errno_location() = 9;
    sub_70B98(1);
    return v3;
  }
  v4 = fgets(a1, a2, a3);
  v3 = (unsigned __int8 *)v4;
  if ( v4 )
  {
    v5 = (unsigned __int8)*v4;
    if ( !*v4 )
      return v3;
    v6 = strlen(v4);
    if ( v6 > 1 )
    {
      v7 = &v3[v6 - 2];
      if ( *v7 == 13 )
      {
        v8 = v6 - 1;
        if ( v3[v8] == 10 )
        {
          *v7 = 10;
          v3[v8] = 0;
          v5 = *v3;
        }
      }
    }
    if ( v5 != 26 )
      return v3;
  }
  return nullptr;
}
// D6C20: using guessed type char under_debugger;
