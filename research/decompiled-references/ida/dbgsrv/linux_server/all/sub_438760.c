/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438760
// Address: 0x0000000000438760

//----- (0000000000438760) ----------------------------------------------------
__int64 __fastcall sub_438760(__int64 a1)
{
  pthread_mutex_t *v1; // r12
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 i; // rax

  v1 = (pthread_mutex_t *)qword_4C8210;
  v2 = 0;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v3 = *(_QWORD *)(a1 + 56);
  for ( i = 1; (i & v3) != 0; i *= 2 )
  {
    if ( ++v2 == 64 )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(1443);
      BUG();
    }
  }
  *(_QWORD *)(a1 + 56) = i | v3;
  sub_482F10(v1);
  return v2;
}
// 4C94E1: using guessed type char byte_4C94E1;
