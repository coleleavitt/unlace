/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D0A8
// Address: 0x000000000043D0A8

//----- (000000000043D0A8) ----------------------------------------------------
bool __fastcall sub_43D0A8(__int64 a1, char a2)
{
  pthread_mutex_t *v3; // x19
  __int64 v5; // x2

  v3 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v5 = *(_QWORD *)(a1 + 56);
  if ( (v5 & (1LL << a2)) == 0 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(1444);
  }
  *(_QWORD *)(a1 + 56) = v5 & ~(1LL << a2);
  return sub_494760(v3);
}
// 522288: using guessed type __int64 qword_522288;
// 52451C: using guessed type char under_debugger;
