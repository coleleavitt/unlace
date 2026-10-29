/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EDC4
// Address: 0x0007EDC4

//----- (0007EDC4) --------------------------------------------------------
const char *__fastcall sub_7EDC4(const char *a1)
{
  size_t v2; // r0
  const char *v3; // r5
  int v4; // r4
  const unsigned __int16 *v5; // r1
  const char *v6; // r3
  int v7; // t1

  if ( a1 )
  {
    v2 = strlen(a1);
    v3 = &a1[v2];
    if ( a1 < &a1[v2] )
    {
      v4 = *((unsigned __int8 *)v3 - 1);
      if ( (v4 & 0x80) == 0 )
      {
        v5 = *_ctype_b_loc();
        v6 = v3 - 1;
        do
        {
          v3 = v6 + 1;
          if ( (v5[v4] & 0x2000) == 0 )
            break;
          v3 = v6;
          if ( v6 == a1 )
            break;
          v7 = *(unsigned __int8 *)--v6;
          v4 = v7;
        }
        while ( (v7 & 0x80) == 0 );
      }
    }
    *v3 = 0;
  }
  return a1;
}
