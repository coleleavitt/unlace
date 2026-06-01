/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DFA0
// Address: 0x000000000046DFA0

//----- (000000000046DFA0) ----------------------------------------------------
void __fastcall sub_46DFA0(pthread_mutex_t **a1)
{
  pthread_mutex_t *v2; // rbx
  pthread_mutex_t *v3; // rdi

  *a1 = (pthread_mutex_t *)&off_4C3CA8;
  sub_482C00(a1[7]);
  v2 = a1[3];
  *a1 = (pthread_mutex_t *)&off_4C3C70;
  while ( v2 )
  {
    sub_46DCF0(&v2->__list.__prev->__prev);
    v3 = v2;
    v2 = (pthread_mutex_t *)*(&v2->__align + 2);
    operator delete(v3, 0x30u);
  }
  operator delete(a1, 0x40u);
}
// 4C3C70: using guessed type __int64 (__fastcall *off_4C3C70)();
// 4C3CA8: using guessed type _UNKNOWN *off_4C3CA8;
