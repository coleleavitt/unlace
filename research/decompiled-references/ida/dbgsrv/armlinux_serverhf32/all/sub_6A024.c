/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A024
// Address: 0x0006A024

//----- (0006A024) --------------------------------------------------------
_DWORD *__fastcall sub_6A024(_DWORD *a1)
{
  pthread_mutex_t *v2; // r4
  _DWORD *v3; // r0
  int v4; // r2
  int v5; // r3

  *a1 = &off_D1B78;
  v2 = (pthread_mutex_t *)dword_D3B54;
  sub_7A100((pthread_mutex_t *)dword_D3B54);
  v3 = (_DWORD *)dword_D3B58;
  v4 = dword_D3B58 + 4 * dword_D3B5C;
  if ( dword_D3B58 != v4 )
  {
    if ( a1 == *(_DWORD **)dword_D3B58 )
    {
LABEL_7:
      memmove(v3, v3 + 1, ((v4 - (_DWORD)v3) & 0xFFFFFFFC) - 4);
      --dword_D3B5C;
    }
    else
    {
      v5 = dword_D3B58 + 4;
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
  sub_7A128(v2);
  sub_8121C(a1);
  return a1;
}
// D1B78: using guessed type _UNKNOWN *off_D1B78;
// D3B54: using guessed type int dword_D3B54;
// D3B58: using guessed type int dword_D3B58;
// D3B5C: using guessed type int dword_D3B5C;
