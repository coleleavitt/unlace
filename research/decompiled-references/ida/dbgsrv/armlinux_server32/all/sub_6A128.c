/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A128
// Address: 0x0006A128

//----- (0006A128) --------------------------------------------------------
_DWORD *__fastcall sub_6A128(_DWORD *a1)
{
  pthread_mutex_t *v2; // r4
  _DWORD *v3; // r0
  int v4; // r2
  int v5; // r3

  *a1 = &off_D2B78;
  v2 = (pthread_mutex_t *)dword_D4B74;
  sub_7A268((pthread_mutex_t *)dword_D4B74);
  v3 = (_DWORD *)dword_D4B78;
  v4 = dword_D4B78 + 4 * dword_D4B7C;
  if ( dword_D4B78 == v4 )
  {
LABEL_6:
    sub_7A290(v2);
    return a1;
  }
  if ( a1 != *(_DWORD **)dword_D4B78 )
  {
    v5 = dword_D4B78 + 4;
    do
    {
      v3 = (_DWORD *)v5;
      if ( v4 == v5 )
        goto LABEL_6;
      v5 += 4;
    }
    while ( a1 != (_DWORD *)*v3 );
  }
  memmove(v3, v3 + 1, ((v4 - (_DWORD)v3) & 0xFFFFFFFC) - 4);
  --dword_D4B7C;
  sub_7A290(v2);
  return a1;
}
// D2B78: using guessed type _UNKNOWN *off_D2B78;
// D4B74: using guessed type int dword_D4B74;
// D4B78: using guessed type int dword_D4B78;
// D4B7C: using guessed type int dword_D4B7C;
