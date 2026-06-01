/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E4F8
// Address: 0x000000000043E4F8

//----- (000000000043E4F8) ----------------------------------------------------
__int64 __fastcall sub_43E4F8(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // x19
  pthread_mutex_t *v5; // x0
  __int64 v6; // x19

  v4 = qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  if ( a2 >= *(_QWORD *)(a1 + 72) )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(284);
  }
  v5 = (pthread_mutex_t *)v4;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * a2);
  sub_494760(v5);
  return v6;
}
// 522288: using guessed type __int64 qword_522288;
// 52451C: using guessed type char under_debugger;
