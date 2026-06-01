/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame_info_bases
// Address: 0x00000000000F0CEC

//----- (00000000000F0CEC) ----------------------------------------------------
__int64 *__fastcall _register_frame_info_bases(__int64 *result, _QWORD *a2, __int64 a3, __int64 a4)
{
  if ( result && *(_DWORD *)result )
  {
    *a2 = -1;
    a2[4] = 0;
    a2[3] = result;
    a2[1] = a3;
    a2[2] = a4;
    *((_WORD *)a2 + 16) = 2040;
    if ( &pthread_create )
      pthread_mutex_lock((pthread_mutex_t *)&qword_169540[1]);
    result = &qword_1693A8;
    a2[5] = qword_169570;
    qword_169570 = (__int64)a2;
    if ( &pthread_create )
      return (__int64 *)pthread_mutex_unlock((pthread_mutex_t *)&qword_169540[1]);
  }
  return result;
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 1693A8: using guessed type __int64 qword_1693A8;
// 169540: using guessed type __int64 qword_169540[6];
// 169570: using guessed type __int64 qword_169570;
