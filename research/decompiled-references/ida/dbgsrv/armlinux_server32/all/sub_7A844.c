/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A844
// Address: 0x0007A844

//----- (0007A844) --------------------------------------------------------
const char *__fastcall sub_7A844(const char *a1, const char *a2)
{
  const char *v2; // r4
  pthread_mutex_t *v4; // r6
  int v5; // r0

  v2 = a2;
  if ( a2 )
  {
    if ( !dword_D6C2C )
      sub_7A0E4();
    v4 = (pthread_mutex_t *)dword_D6C28;
    sub_7A268((pthread_mutex_t *)dword_D6C28);
    if ( *v2 )
      v5 = setenv(a1, v2, 1);
    else
      v5 = unsetenv(a1);
    v2 = (const char *)(v5 == 0);
    sub_7A290(v4);
  }
  return v2;
}
// D6C28: using guessed type int dword_D6C28;
// D6C2C: using guessed type int dword_D6C2C;
