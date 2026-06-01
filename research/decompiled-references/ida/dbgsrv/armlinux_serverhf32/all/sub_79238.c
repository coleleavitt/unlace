/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79238
// Address: 0x00079238

//----- (00079238) --------------------------------------------------------
int sub_79238()
{
  int v0; // r6
  FILE *v1; // r0
  FILE *v2; // r5
  char v4[3]; // [sp+4h] [bp-404h] BYREF
  unsigned __int8 v5; // [sp+7h] [bp-401h]

  v0 = -1;
  v1 = sub_75BE8((int)"/proc/stat", (unsigned __int8 *)"r");
  if ( v1 )
  {
    v2 = v1;
    v0 = 0;
    while ( sub_77B74(v4, 1024, v2) )
    {
      while ( (v5 & 0x80) == 0 && (unsigned int)v5 - 48 <= 9 && !strncmp(v4, "cpu", 3u) )
      {
        ++v0;
        if ( !sub_77B74(v4, 1024, v2) )
          goto LABEL_8;
      }
    }
LABEL_8:
    sub_77754(v2);
  }
  return v0;
}
