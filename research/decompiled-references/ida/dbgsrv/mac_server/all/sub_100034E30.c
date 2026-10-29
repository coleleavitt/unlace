/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100034E30
// Address: 0x0000000100034E30

//----- (0000000100034E30) ----------------------------------------------------
bool sub_100034E30()
{
  _OWORD *v1; // rax

  remove_extlang((__int64)qword_1000AC148);
  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
  {
    v1 = operator new(0x80u);
    *(_OWORD *)((char *)v1 + 109) = 0;
    v1[6] = 0;
    v1[5] = 0;
    v1[4] = 0;
    v1[3] = 0;
    v1[2] = 0;
    v1[1] = 0;
    *v1 = 0;
    qword_1000AE2E0 = (__int64)v1;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  sub_100034EF0(qword_1000AE2E0);
  qmutex_free((pthread_mutex_t *)qword_1000AD0F0);
  return qmutex_free((pthread_mutex_t *)qword_1000AD0E8);
}
// 1000AC148: using guessed type __int64 qword_1000AC148[2];
// 1000AD0E8: using guessed type __int64 qword_1000AD0E8;
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE2E0: using guessed type __int64 qword_1000AE2E0;
