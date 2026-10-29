/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49BB38
// Address: 0x000000000049BB38

//----- (000000000049BB38) ----------------------------------------------------
const char *__fastcall sub_49BB38(const char *a1)
{
  size_t v2; // x0
  const char *v3; // x19
  unsigned __int8 v4; // w20
  const unsigned __int16 *v5; // x1

  if ( a1 )
  {
    v2 = strlen(a1);
    v3 = &a1[v2];
    if ( a1 < &a1[v2] )
    {
      v4 = *(v3 - 1);
      if ( (v4 & 0x80) == 0 )
      {
        v5 = *__ctype_b_loc();
        do
        {
          if ( (v5[v4] & 0x2000) == 0 )
            break;
          if ( a1 == --v3 )
            break;
          v4 = *(v3 - 1);
        }
        while ( (v4 & 0x80) == 0 );
      }
    }
    *v3 = 0;
  }
  return a1;
}
