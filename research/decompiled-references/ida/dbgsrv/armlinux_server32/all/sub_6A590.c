/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A590
// Address: 0x0006A590

//----- (0006A590) --------------------------------------------------------
_DWORD *__fastcall sub_6A590(_DWORD *a1)
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
  if ( dword_D4B78 != v4 )
  {
    if ( a1 == *(_DWORD **)dword_D4B78 )
    {
LABEL_7:
      memmove(v3, v3 + 1, ((v4 - (_DWORD)v3) & 0xFFFFFFFC) - 4);
      --dword_D4B7C;
    }
    else
    {
      v5 = dword_D4B78 + 4;
      while ( 1 )
      {
        v3 = (_DWORD *)v5;
        if ( v4 == v5 )
          break;
        v5 += 4;
        if ( a1 == (_DWORD *)*v3 )
          goto LABEL_7;
      }
    }
  }
  sub_7A290(v2);
  sub_808A0(a1);
  return a1;
}
// D2B78: using guessed type _UNKNOWN *off_D2B78;
// D4B74: using guessed type int dword_D4B74;
// D4B78: using guessed type int dword_D4B78;
// D4B7C: using guessed type int dword_D4B7C;
