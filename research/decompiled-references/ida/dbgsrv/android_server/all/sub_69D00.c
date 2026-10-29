/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69D00
// Address: 0x0000000000069D00

//----- (0000000000069D00) ----------------------------------------------------
const char **__fastcall sub_69D00(char *s2)
{
  const char **result; // x0
  unsigned __int64 v3; // x21
  const char **v4; // x20
  unsigned __int64 v5; // x22

  result = nullptr;
  if ( s2 )
  {
    v3 = qword_164A28;
    if ( qword_164A28 )
    {
      v4 = (const char **)off_164A30;
      v5 = 0;
      while ( strcmp(*v4, s2) )
      {
        ++v5;
        v4 += 5;
        if ( v5 >= v3 )
          return nullptr;
      }
      if ( !v4 )
        return nullptr;
      if ( v4[1] )
        return v4;
      else
        return nullptr;
    }
  }
  return result;
}
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
