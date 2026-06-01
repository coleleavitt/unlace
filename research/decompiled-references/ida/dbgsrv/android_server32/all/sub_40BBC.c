/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BBC
// Address: 0x00040BBC

//----- (00040BBC) --------------------------------------------------------
char **__fastcall sub_40BBC(char *s2)
{
  char **result; // r0
  unsigned int v3; // r6
  char **v4; // r5
  unsigned int v5; // r7

  result = nullptr;
  if ( s2 )
  {
    v3 = dword_DD60C;
    if ( dword_DD60C )
    {
      v4 = off_DD610;
      v5 = 0;
      while ( strcmp(*v4, s2) )
      {
        v4 += 6;
        ++v5;
        result = nullptr;
        if ( v5 >= v3 )
          return result;
      }
      result = nullptr;
      if ( v4 )
      {
        if ( !v4[1] )
          return nullptr;
        return v4;
      }
    }
  }
  return result;
}
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
