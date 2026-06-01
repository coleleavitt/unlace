/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A48C
// Address: 0x0006A48C

//----- (0006A48C) --------------------------------------------------------
int sub_6A48C()
{
  int v0; // r0
  char *i; // r4
  int v2; // t1
  int *v3; // r2

  v0 = 2;
  for ( i = (char *)dword_9FE60; ; i += 4 )
  {
    signal(v0, (__sighandler_t)sub_69E50);
    if ( i == "%s qsem: %s" )
      break;
    v2 = *(_DWORD *)i;
    v0 = v2;
  }
  v3 = &dword_D26C0;
  if ( &dword_D26C0 )
    v3 = (int *)dword_D26C0;
  return j___cxa_atexit((void (*)(void *))sub_6A208, nullptr, v3);
}
// 9FE60: using guessed type int dword_9FE60[5];
// D26C0: using guessed type int dword_D26C0;
