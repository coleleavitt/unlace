/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4727D0
// Address: 0x00000000004727D0

//----- (00000000004727D0) ----------------------------------------------------
bool __fastcall sub_4727D0(_QWORD *a1)
{
  pthread_mutex_t *v1; // rbp
  __int64 v2; // rax
  _QWORD *v3; // rsi

  *a1 = &off_4C4C98;
  v1 = (pthread_mutex_t *)qword_4C8360;
  sub_482EC0((pthread_mutex_t *)qword_4C8360);
  v2 = xmmword_4C8370;
  v3 = ptr;
  if ( *((_QWORD *)&xmmword_4C8370 + 1) < (unsigned __int64)(xmmword_4C8370 + 1) )
  {
    ptr = sub_481540((__int64)&ptr, ptr, xmmword_4C8370 + 1, 8u);
    v3 = ptr;
    v2 = xmmword_4C8370;
  }
  v3[v2] = a1;
  *(_QWORD *)&xmmword_4C8370 = xmmword_4C8370 + 1;
  return sub_482F10(v1);
}
// 4C4C98: using guessed type _UNKNOWN *off_4C4C98;
// 4C8360: using guessed type __int64 qword_4C8360;
// 4C8370: using guessed type __int128 xmmword_4C8370;
