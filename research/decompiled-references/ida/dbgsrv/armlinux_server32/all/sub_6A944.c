/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A944
// Address: 0x0006A944

//----- (0006A944) --------------------------------------------------------
int __fastcall sub_6A944(int result)
{
  const char *v1; // r5
  int v2; // r4
  FILE *v3; // r0
  const char *v4; // r0

  if ( (unsigned int)dword_D4B98 > 1 )
  {
    v1 = (const char *)dword_D4B94;
    v2 = result;
    v3 = sub_75DAC(dword_D4B94);
    *(_DWORD *)(v2 + 84) = v3;
    if ( v3 )
    {
      return sub_69624((int)v3);
    }
    else
    {
      v4 = (const char *)sub_71020(-1);
      return sub_695E4("Cannot open log file \"%s\": %s\n", v1, v4);
    }
  }
  return result;
}
// D4B94: using guessed type int dword_D4B94;
// D4B98: using guessed type int dword_D4B98;
