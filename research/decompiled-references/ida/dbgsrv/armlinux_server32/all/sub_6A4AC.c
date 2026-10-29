/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A4AC
// Address: 0x0006A4AC

//----- (0006A4AC) --------------------------------------------------------
_DWORD *__fastcall sub_6A4AC(_DWORD *a1)
{
  pthread_mutex_t *v2; // r6
  int v3; // r3
  _DWORD *v4; // r1

  *a1 = &off_D2B78;
  v2 = (pthread_mutex_t *)dword_D4B74;
  sub_7A268((pthread_mutex_t *)dword_D4B74);
  v3 = dword_D4B7C;
  if ( dword_D4B7C + 1 > (unsigned int)dword_D4B80 )
  {
    v4 = sub_78018((int)&dword_D4B78, (void *)dword_D4B78, dword_D4B7C + 1, 4u);
    v3 = dword_D4B7C;
    dword_D4B78 = (int)v4;
  }
  else
  {
    v4 = (_DWORD *)dword_D4B78;
  }
  v4[v3] = a1;
  ++dword_D4B7C;
  sub_7A290(v2);
  return a1;
}
// D2B78: using guessed type _UNKNOWN *off_D2B78;
// D4B74: using guessed type int dword_D4B74;
// D4B78: using guessed type int dword_D4B78;
// D4B7C: using guessed type int dword_D4B7C;
// D4B80: using guessed type int dword_D4B80;
