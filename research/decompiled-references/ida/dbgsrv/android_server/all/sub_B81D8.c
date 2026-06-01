/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B81D8
// Address: 0x00000000000B81D8

//----- (00000000000B81D8) ----------------------------------------------------
const char *__fastcall sub_B81D8(const char *result, char *s)
{
  char *v2; // x19
  char *v3; // x1
  void *ptr[3]; // [xsp+8h] [xbp-48h] BYREF
  const char *v5[2]; // [xsp+20h] [xbp-30h] BYREF

  v5[1] = *(const char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( result )
  {
    if ( s )
    {
      v2 = (char *)result;
      result = qstrtok(s, ":", v5);
      if ( result )
      {
        v3 = (char *)result;
        do
        {
          if ( *v3 )
          {
            sub_39140(ptr, v3);
            sub_494CC(v2, (char *)ptr);
            if ( ptr[0] )
            {
              ptr[1] = nullptr;
              qfree(ptr[0]);
              ptr[0] = nullptr;
              ptr[2] = nullptr;
            }
          }
          result = qstrtok(nullptr, ":", v5);
          v3 = (char *)result;
        }
        while ( result );
      }
    }
  }
  return result;
}
