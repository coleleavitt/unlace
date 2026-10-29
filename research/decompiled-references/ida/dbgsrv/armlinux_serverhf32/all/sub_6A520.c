/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A520
// Address: 0x0006A520

//----- (0006A520) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_6A520(const char *a1)
{
  char v2; // r2
  char *v3; // r4
  _DWORD *v4; // r4
  pthread_mutex_t *v5; // r5
  int v6; // r3
  _DWORD *v7; // r1
  pthread_mutex_t *result; // r0
  const char *v9; // r0

  v2 = byte_D3B50;
  __dmb(0xBu);
  if ( (v2 & 1) != 0 )
  {
    v3 = (char *)dword_D3B64;
  }
  else if ( sub_80BB0((unsigned int *)&byte_D3B50) )
  {
    v3 = sub_79AD0(a1, 1u);
    dword_D3B64 = (int)v3;
    sub_80CB4((int)&byte_D3B50);
  }
  else
  {
    v3 = (char *)dword_D3B64;
  }
  if ( !v3 )
  {
    v9 = sub_79818(-1);
    sub_16FE4("%s qsem: %s", a1, v9);
  }
  if ( !sub_79D80((int)v3, 0) )
    sub_16FE4("%s: another running copy has been detected, exiting...", a1);
  v4 = sub_805CC(4u);
  v5 = (pthread_mutex_t *)dword_D3B54;
  *v4 = &off_D1B78;
  sub_7A100(v5);
  v6 = dword_D3B5C;
  v7 = (_DWORD *)dword_D3B58;
  if ( dword_D3B5C + 1 > (unsigned int)dword_D3B60 )
  {
    v7 = sub_77EB0((int)&dword_D3B58, (void *)dword_D3B58, dword_D3B5C + 1, 4u);
    v6 = dword_D3B5C;
    dword_D3B58 = (int)v7;
  }
  v7[v6] = v4;
  ++dword_D3B5C;
  result = sub_7A128(v5);
  *v4 = &off_D05EC;
  return result;
}
// D05EC: using guessed type _UNKNOWN *off_D05EC;
// D1B78: using guessed type _UNKNOWN *off_D1B78;
// D3B50: using guessed type char byte_D3B50;
// D3B54: using guessed type int dword_D3B54;
// D3B58: using guessed type int dword_D3B58;
// D3B5C: using guessed type int dword_D3B5C;
// D3B60: using guessed type int dword_D3B60;
// D3B64: using guessed type int dword_D3B64;
