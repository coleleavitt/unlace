/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65E54
// Address: 0x00065E54

//----- (00065E54) --------------------------------------------------------
_DWORD *__fastcall sub_65E54(_DWORD *a1)
{
  pthread_mutex_t *v2; // r0
  _DWORD *v3; // r1

  v2 = (pthread_mutex_t *)a1[7];
  *a1 = &off_D14A4;
  sub_7A054(v2);
  v3 = (_DWORD *)a1[3];
  *a1 = &off_D1488;
  sub_65CDC((int)(a1 + 1), v3);
  return a1;
}
// D1488: using guessed type _UNKNOWN *off_D1488;
// D14A4: using guessed type _UNKNOWN *off_D14A4;
