/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB060
// Address: 0x000AB060

//----- (000AB060) --------------------------------------------------------
unsigned int __cdecl sub_AB060(int a1, char *s)
{
  char *i; // eax
  int v4[3]; // [esp+18h] [ebp-24h] BYREF
  int v5[6]; // [esp+24h] [ebp-18h] BYREF

  v5[1] = __readgsdword(0x14u);
  if ( a1 )
  {
    if ( s )
    {
      for ( i = (char *)qstrtok(s, ":", (const char **)v5); i; i = (char *)qstrtok(nullptr, ":", (const char **)v5) )
      {
        if ( *i )
        {
          sub_1B530((int)v4, i);
          sub_2DAC0(a1, (char *)v4);
          if ( v4[0] )
          {
            v4[1] = 0;
            qfree((void *)v4[0]);
            v4[0] = 0;
            v4[2] = 0;
          }
        }
      }
    }
  }
  return __readgsdword(0x14u);
}
