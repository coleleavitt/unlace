/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65CD4
// Address: 0x00065CD4

//----- (00065CD4) --------------------------------------------------------
_DWORD *__fastcall sub_65CD4(_DWORD *a1)
{
  pthread_mutex_t *v2; // r0
  _DWORD *v3; // r1

  v2 = (pthread_mutex_t *)a1[7];
  *a1 = &off_D04A4;
  sub_79EEC(v2);
  v3 = (_DWORD *)a1[3];
  *a1 = &off_D0488;
  sub_65B5C((int)(a1 + 1), v3);
  return a1;
}
// D0488: using guessed type _UNKNOWN *off_D0488;
// D04A4: using guessed type _UNKNOWN *off_D04A4;
