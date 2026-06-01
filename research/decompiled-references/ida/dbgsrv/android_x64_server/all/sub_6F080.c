/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F080
// Address: 0x000000000006F080

//----- (000000000006F080) ----------------------------------------------------
bool __fastcall sub_6F080(double a1, __m128 a2)
{
  _OWORD *v3; // rax

  remove_extlang((__int64)qword_154A88);
  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
  {
    v3 = operator new(0x80u);
    a1 = 0.0;
    *(_OWORD *)((char *)v3 + 109) = 0;
    v3[6] = 0;
    v3[5] = 0;
    v3[4] = 0;
    v3[3] = 0;
    v3[2] = 0;
    v3[1] = 0;
    *v3 = 0;
    qword_155820 = (__int64)v3;
    _cxa_guard_release(&byte_155828);
  }
  sub_6F130(qword_155820, a1, a2);
  qmutex_free((pthread_mutex_t *)qword_1557E8);
  return qmutex_free((pthread_mutex_t *)qword_1557C0);
}
// 154A88: using guessed type __int64 qword_154A88[2];
// 1557C0: using guessed type __int64 qword_1557C0;
// 155820: using guessed type __int64 qword_155820;
