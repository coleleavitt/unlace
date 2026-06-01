/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4235C0
// Address: 0x00000000004235C0

//----- (00000000004235C0) ----------------------------------------------------
const char **__fastcall sub_4235C0(char *s2)
{
  const char **v1; // rbx
  const char **v2; // r12
  const char *v4; // rax

  v1 = (const char **)off_4C22A0;
  while ( 1 )
  {
    v2 = v1;
    if ( !strcmp(*v1, s2) )
      break;
    if ( (unsigned __int8)sub_480670(s2) )
    {
      v4 = sub_480610(s2);
      if ( !strcmp(*v1, v4) )
        break;
    }
    v1 += 2;
    if ( v1 == (const char **)qword_4C22C0 )
      return nullptr;
  }
  return v2;
}
// 4C22A0: using guessed type char *off_4C22A0[4];
// 4C22C0: using guessed type __int64[2];
