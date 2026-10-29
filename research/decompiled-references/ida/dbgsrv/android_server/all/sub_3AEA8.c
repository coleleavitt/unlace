/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AEA8
// Address: 0x000000000003AEA8

//----- (000000000003AEA8) ----------------------------------------------------
__int64 *__fastcall sub_3AEA8(unsigned int a1)
{
  if ( a1 < 0x15 )
    return (__int64 *)*(&off_156750 + (int)a1);
  qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", a1);
  return qword_1669F8;
}
// 156750: using guessed type _UNKNOWN *off_156750;
// 1669F8: using guessed type __int64 qword_1669F8[8];
