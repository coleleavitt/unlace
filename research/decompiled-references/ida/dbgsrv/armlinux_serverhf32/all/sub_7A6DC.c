/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A6DC
// Address: 0x0007A6DC

//----- (0007A6DC) --------------------------------------------------------
const char *__fastcall sub_7A6DC(const char *a1, const char *a2)
{
  const char *v2; // r4
  pthread_mutex_t *v4; // r6
  int v5; // r0

  v2 = a2;
  if ( a2 )
  {
    if ( !dword_D5C0C )
      sub_79F7C();
    v4 = (pthread_mutex_t *)dword_D5C08;
    sub_7A100((pthread_mutex_t *)dword_D5C08);
    if ( *v2 )
      v5 = setenv(a1, v2, 1);
    else
      v5 = unsetenv(a1);
    v2 = (const char *)(v5 == 0);
    sub_7A128(v4);
  }
  return v2;
}
// D5C08: using guessed type int dword_D5C08;
// D5C0C: using guessed type int dword_D5C0C;
