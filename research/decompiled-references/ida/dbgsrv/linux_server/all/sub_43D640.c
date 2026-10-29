/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D640
// Address: 0x000000000043D640

//----- (000000000043D640) ----------------------------------------------------
__int64 __fastcall sub_43D640(__int64 a1, int a2)
{
  pthread_mutex_t *v2; // r12
  __int64 v3; // rbx

  v2 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 96) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(288);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 88) + 56LL * a2 + 24;
  sub_482F10(v2);
  return v3;
}
// 4C94E1: using guessed type char byte_4C94E1;
