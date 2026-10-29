/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A604
// Address: 0x0006A604

//----- (0006A604) --------------------------------------------------------
int sub_6A604()
{
  int v0; // r0
  char *i; // r4
  int v2; // t1
  int *v3; // r2

  v0 = 2;
  for ( i = (char *)dword_9FF9C; ; i += 4 )
  {
    signal(v0, (__sighandler_t)sub_69FC8);
    if ( i == "%s qsem: %s" )
      break;
    v2 = *(_DWORD *)i;
    v0 = v2;
  }
  v3 = &dword_D36E0;
  if ( &dword_D36E0 )
    v3 = (int *)dword_D36E0;
  return j___cxa_atexit((void (*)(void *))sub_6A380, nullptr, v3);
}
// 9FF9C: using guessed type int dword_9FF9C[5];
// D36E0: using guessed type int dword_D36E0;
