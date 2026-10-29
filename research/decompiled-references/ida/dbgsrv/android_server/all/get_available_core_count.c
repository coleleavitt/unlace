/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_available_core_count
// Address: 0x00000000000BFA2C

//----- (00000000000BFA2C) ----------------------------------------------------
__int64 get_available_core_count()
{
  FILE *v0; // x0
  FILE *v1; // x19
  unsigned int v2; // w20
  pthread_mutex_t s1[25]; // [xsp+8h] [xbp-438h] BYREF
  __int64 v5; // [xsp+408h] [xbp-38h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v0 = qfopen("/proc/stat", "r");
  if ( v0 )
  {
    v1 = v0;
    v2 = 0;
    while ( qfgets(s1, 1024, v1) )
    {
      if ( (s1[0].__size[3] & 0x80000000) == 0
        && (unsigned int)(unsigned __int8)s1[0].__size[3] - 48 <= 9
        && !strncmp((const char *)s1, "cpu", 3u) )
      {
        ++v2;
      }
    }
    qfclose(v1);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v2;
}
