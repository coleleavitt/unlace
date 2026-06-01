/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78AB0
// Address: 0x00078AB0

//----- (00078AB0) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_78AB0(int a1)
{
  pthread_mutex_t *v2; // r5
  int v3; // r4
  _DWORD *v4; // r0
  int v5; // r2
  _DWORD *v6; // r3

  v2 = (pthread_mutex_t *)dword_D6C10;
  sub_7A268((pthread_mutex_t *)dword_D6C10);
  v3 = dword_D6C0C;
  if ( dword_D6C0C )
  {
    v4 = *(_DWORD **)dword_D6C0C;
    v5 = *(_DWORD *)dword_D6C0C + 4 * *(_DWORD *)(dword_D6C0C + 4);
    if ( *(_DWORD *)dword_D6C0C != v5 )
    {
      if ( *v4 == a1 )
      {
LABEL_9:
        memmove(v4, v4 + 1, ((v5 - (_DWORD)v4) & 0xFFFFFFFC) - 4);
        --*(_DWORD *)(v3 + 4);
        return sub_7A290(v2);
      }
      v6 = v4 + 1;
      while ( 1 )
      {
        v4 = v6;
        if ( (_DWORD *)v5 == v6 )
          break;
        ++v6;
        if ( *v4 == a1 )
          goto LABEL_9;
      }
    }
  }
  return sub_7A290(v2);
}
// D6C0C: using guessed type int dword_D6C0C;
// D6C10: using guessed type int dword_D6C10;
