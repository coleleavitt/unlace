/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CF60
// Address: 0x000000000006CF60

//----- (000000000006CF60) ----------------------------------------------------
char **__fastcall sub_6CF60(char *s2)
{
  __int64 v1; // r14
  int *v2; // r12
  char **v3; // r13
  unsigned __int64 v4; // rbx

  v1 = 0;
  if ( s2 )
  {
    v2 = off_154A20;
    if ( off_154A20 )
    {
      v3 = off_154A28;
      v1 = 0;
      v4 = 0;
      while ( strcmp(*v3, s2) )
      {
        ++v4;
        v3 += 5;
        if ( v4 >= (unsigned __int64)v2 )
          return (char **)v1;
      }
      if ( v3 )
      {
        if ( !v3[1] )
          return nullptr;
        return v3;
      }
      else
      {
        return nullptr;
      }
    }
  }
  return (char **)v1;
}
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **;
