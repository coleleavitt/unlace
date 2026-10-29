/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444690
// Address: 0x0000000000444690

//----- (0000000000444690) ----------------------------------------------------
__int64 __fastcall sub_444690(__int64 a1, int a2)
{
  pthread_mutex_t *v4; // x20
  __int64 v5; // x19

  v4 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  if ( *(_QWORD *)(a1 + 96) <= (unsigned __int64)a2 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(288);
  }
  v5 = *(_QWORD *)(a1 + 88) + 56LL * a2;
  sub_494760(v4);
  return v5 + 24;
}
// 522288: using guessed type __int64 qword_522288;
// 52451C: using guessed type char under_debugger;
