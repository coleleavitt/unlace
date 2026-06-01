/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A334
// Address: 0x0006A334

//----- (0006A334) --------------------------------------------------------
_DWORD *__fastcall sub_6A334(_DWORD *a1)
{
  pthread_mutex_t *v2; // r6
  int v3; // r3
  _DWORD *v4; // r1

  *a1 = &off_D1B78;
  v2 = (pthread_mutex_t *)dword_D3B54;
  sub_7A100((pthread_mutex_t *)dword_D3B54);
  v3 = dword_D3B5C;
  if ( dword_D3B5C + 1 > (unsigned int)dword_D3B60 )
  {
    v4 = sub_77EB0((int)&dword_D3B58, (void *)dword_D3B58, dword_D3B5C + 1, 4u);
    v3 = dword_D3B5C;
    dword_D3B58 = (int)v4;
  }
  else
  {
    v4 = (_DWORD *)dword_D3B58;
  }
  v4[v3] = a1;
  ++dword_D3B5C;
  sub_7A128(v2);
  return a1;
}
// D1B78: using guessed type _UNKNOWN *off_D1B78;
// D3B54: using guessed type int dword_D3B54;
// D3B58: using guessed type int dword_D3B58;
// D3B5C: using guessed type int dword_D3B5C;
// D3B60: using guessed type int dword_D3B60;
