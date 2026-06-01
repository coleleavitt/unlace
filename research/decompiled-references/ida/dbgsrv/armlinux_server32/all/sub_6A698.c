/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A698
// Address: 0x0006A698

//----- (0006A698) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_6A698(const char *a1)
{
  char v2; // r2
  char *v3; // r4
  _DWORD *v4; // r4
  pthread_mutex_t *v5; // r5
  int v6; // r3
  _DWORD *v7; // r1
  pthread_mutex_t *result; // r0
  const char *v9; // r0

  v2 = byte_D4B70;
  __dmb(0xBu);
  if ( (v2 & 1) != 0 )
  {
    v3 = (char *)dword_D4B84;
  }
  else if ( sub_81144((unsigned int *)&byte_D4B70) )
  {
    v3 = sub_79C38(a1, 1u);
    dword_D4B84 = (int)v3;
    sub_81248((int)&byte_D4B70);
  }
  else
  {
    v3 = (char *)dword_D4B84;
  }
  if ( !v3 )
  {
    v9 = sub_79980(-1);
    sub_17188("%s qsem: %s", a1, v9);
  }
  if ( !sub_79EE8((int)v3, 0) )
    sub_17188("%s: another running copy has been detected, exiting...", a1);
  v4 = sub_808A4(4u);
  v5 = (pthread_mutex_t *)dword_D4B74;
  *v4 = &off_D2B78;
  sub_7A268(v5);
  v6 = dword_D4B7C;
  v7 = (_DWORD *)dword_D4B78;
  if ( dword_D4B7C + 1 > (unsigned int)dword_D4B80 )
  {
    v7 = sub_78018((int)&dword_D4B78, (void *)dword_D4B78, dword_D4B7C + 1, 4u);
    v6 = dword_D4B7C;
    dword_D4B78 = (int)v7;
  }
  v7[v6] = v4;
  ++dword_D4B7C;
  result = sub_7A290(v5);
  *v4 = &off_D15EC;
  return result;
}
// D15EC: using guessed type _UNKNOWN *off_D15EC;
// D2B78: using guessed type _UNKNOWN *off_D2B78;
// D4B70: using guessed type char byte_D4B70;
// D4B74: using guessed type int dword_D4B74;
// D4B78: using guessed type int dword_D4B78;
// D4B7C: using guessed type int dword_D4B7C;
// D4B80: using guessed type int dword_D4B80;
// D4B84: using guessed type int dword_D4B84;
