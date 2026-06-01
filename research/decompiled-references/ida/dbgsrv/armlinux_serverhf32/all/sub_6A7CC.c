/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A7CC
// Address: 0x0006A7CC

//----- (0006A7CC) --------------------------------------------------------
int __fastcall sub_6A7CC(int result)
{
  const char *v1; // r5
  int v2; // r4
  FILE *v3; // r0
  const char *v4; // r0

  if ( (unsigned int)dword_D3B78 > 1 )
  {
    v1 = (const char *)dword_D3B74;
    v2 = result;
    v3 = sub_75C44(dword_D3B74);
    *(_DWORD *)(v2 + 84) = v3;
    if ( v3 )
    {
      return sub_694AC((int)v3);
    }
    else
    {
      v4 = (const char *)sub_70EB4(-1);
      return sub_6946C("Cannot open log file \"%s\": %s\n", v1, v4);
    }
  }
  return result;
}
// D3B74: using guessed type int dword_D3B74;
// D3B78: using guessed type int dword_D3B78;
