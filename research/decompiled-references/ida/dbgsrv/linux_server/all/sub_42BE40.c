/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BE40
// Address: 0x000000000042BE40

//----- (000000000042BE40) ----------------------------------------------------
__int64 __fastcall sub_42BE40(__int64 a1)
{
  pthread_mutex_t *v1; // rbp
  unsigned __int64 v2; // rbx
  __int64 i; // rax

  v1 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 < (unsigned __int64)xmmword_4C80A8 )
    {
      sub_480D70(*(FILE **)(qword_4C80A0 + 8 * v2));
      *(_QWORD *)(qword_4C80A0 + 8 * v2) = 0;
      for ( i = xmmword_4C80A8; i; *(_QWORD *)&xmmword_4C80A8 = --i )
      {
        if ( *(_QWORD *)(qword_4C80A0 + 8 * i - 8) )
          break;
      }
    }
  }
  sub_482F10(v1);
  return 0;
}
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;
