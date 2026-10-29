/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70074
// Address: 0x00070074

//----- (00070074) --------------------------------------------------------
int *__fastcall sub_70074(int a1)
{
  int *result; // r0
  const char *v3; // r4
  FILE *v4; // r0
  const char *v5; // r0

  result = &dword_DE4B8;
  if ( (unsigned int)dword_DE4C8 >= 2 )
  {
    v3 = (const char *)dword_DE4C4;
    v4 = fopenA((const char *)dword_DE4C4);
    *(_DWORD *)(a1 + 84) = v4;
    if ( v4 )
    {
      return (int *)sub_6F270((int)v4);
    }
    else
    {
      v5 = (const char *)qerrstr(-1);
      return (int *)sub_6F20C("Cannot open log file \"%s\": %s\n", v3, v5);
    }
  }
  return result;
}
// DE4B8: using guessed type int dword_DE4B8;
// DE4C4: using guessed type int dword_DE4C4;
// DE4C8: using guessed type int dword_DE4C8;
