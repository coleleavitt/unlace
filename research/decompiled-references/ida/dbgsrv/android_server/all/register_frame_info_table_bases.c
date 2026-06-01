/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame_info_table_bases
// Address: 0x00000000000F0DD4

//----- (00000000000F0DD4) ----------------------------------------------------
__int64 *__fastcall _register_frame_info_table_bases(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int16 v4; // w0
  __int64 *result; // x0
  _QWORD *v6; // [xsp+28h] [xbp+28h]

  a2[4] = 0;
  a2[3] = a1;
  *((_BYTE *)a2 + 32) = 2;
  a2[1] = a3;
  v4 = *((_WORD *)a2 + 16);
  *a2 = -1;
  a2[2] = a4;
  *((_WORD *)a2 + 16) = v4 | 0x7F8;
  if ( &pthread_create )
  {
    v6 = a2;
    pthread_mutex_lock((pthread_mutex_t *)&qword_169540[1]);
    a2 = v6;
  }
  result = &qword_1693A8;
  a2[5] = qword_169570;
  qword_169570 = (__int64)a2;
  if ( &pthread_create )
    return (__int64 *)pthread_mutex_unlock((pthread_mutex_t *)&qword_169540[1]);
  return result;
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 1693A8: using guessed type __int64 qword_1693A8;
// 169540: using guessed type __int64 qword_169540[6];
// 169570: using guessed type __int64 qword_169570;
