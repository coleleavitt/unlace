/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4387F0
// Address: 0x00000000004387F0

//----- (00000000004387F0) ----------------------------------------------------
bool __fastcall sub_4387F0(__int64 a1, char a2)
{
  pthread_mutex_t *v2; // rbp
  __int64 v3; // rdx

  v2 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v3 = *(_QWORD *)(a1 + 56);
  if ( ((1LL << a2) & v3) == 0 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1444);
    BUG();
  }
  *(_QWORD *)(a1 + 56) = v3 & ~(1LL << a2);
  return sub_482F10(v2);
}
// 4C94E1: using guessed type char byte_4C94E1;
