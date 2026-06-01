/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3676C
// Address: 0x0003676C

//----- (0003676C) --------------------------------------------------------
int sub_3676C()
{
  pthread_mutex_t *v0; // r6
  FILE **v1; // r4
  int v2; // r5
  FILE *v3; // r0
  FILE *v4; // t1

  v0 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v1 = (FILE **)dword_D49EC;
  v2 = dword_D49EC + 4 * dword_D49F0;
  if ( dword_D49EC != v2 )
  {
    do
    {
      v4 = *v1++;
      v3 = v4;
      if ( v4 )
        sub_778BC(v3);
    }
    while ( (FILE **)v2 != v1 );
  }
  dword_D49F0 = 0;
  sub_7A290(v0);
  return 0;
}
// D49EC: using guessed type int dword_D49EC;
// D49F0: using guessed type int dword_D49F0;
// D4AB0: using guessed type int dword_D4AB0;
