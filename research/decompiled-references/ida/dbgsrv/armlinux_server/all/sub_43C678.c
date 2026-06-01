/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C678
// Address: 0x000000000043C678

//----- (000000000043C678) ----------------------------------------------------
const char **__fastcall sub_43C678(char *s2)
{
  __int64 v1; // x22
  __int64 v2; // x20
  const char **v4; // x1
  const char **v5; // x19

  v1 = qword_520148;
  if ( !qword_520148 )
    return nullptr;
  v2 = 0;
  v4 = (const char **)off_520150;
  while ( 1 )
  {
    v5 = v4;
    ++v2;
    if ( !strcmp(*v4, s2) )
      break;
    v4 = v5 + 5;
    if ( v2 == v1 )
      return nullptr;
  }
  return v5;
}
// 520148: using guessed type __int64 qword_520148;
// 520150: using guessed type _UNKNOWN **off_520150;
