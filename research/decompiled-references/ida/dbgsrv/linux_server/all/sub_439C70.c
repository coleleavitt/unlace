/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439C70
// Address: 0x0000000000439C70

//----- (0000000000439C70) ----------------------------------------------------
__int64 __fastcall sub_439C70(__int64 a1, unsigned __int64 a2)
{
  pthread_mutex_t *v2; // r12
  __int64 v3; // rbx

  v2 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  if ( a2 >= *(_QWORD *)(a1 + 72) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(284);
    BUG();
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * a2);
  sub_482F10(v2);
  return v3;
}
// 4C94E1: using guessed type char byte_4C94E1;
