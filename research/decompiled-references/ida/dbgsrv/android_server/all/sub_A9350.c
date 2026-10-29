/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9350
// Address: 0x00000000000A9350

//----- (00000000000A9350) ----------------------------------------------------
void __fastcall sub_A9350(unsigned int a1)
{
  pthread_mutex_t *v1; // x21
  _QWORD *v3; // x19
  __int64 v4; // x23
  __int64 v5; // x21
  _QWORD *v6; // x22

  v1 = (pthread_mutex_t *)qword_166D30;
  qmutex_lock((pthread_mutex_t *)qword_166D30);
  v3 = (_QWORD *)qword_166D38;
  v4 = qword_166D40;
  qword_166D40 = 0;
  qword_166D48 = 0;
  qword_166D38 = 0;
  qmutex_unlock(v1);
  v5 = 8 * v4;
  if ( 8 * v4 )
  {
    v6 = v3;
    do
    {
      (**(void (__fastcall ***)(_QWORD, _QWORD))*v6)(*v6, a1);
      v5 -= 8;
      ++v6;
    }
    while ( v5 );
  }
  if ( v3 )
    qfree(v3);
}
// 166D30: using guessed type __int64 qword_166D30;
// 166D38: using guessed type __int64 qword_166D38;
// 166D40: using guessed type __int64 qword_166D40;
// 166D48: using guessed type __int64 qword_166D48;
