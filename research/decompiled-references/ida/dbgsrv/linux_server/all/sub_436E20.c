/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436E20
// Address: 0x0000000000436E20

//----- (0000000000436E20) ----------------------------------------------------
__int64 __fastcall sub_436E20(__int64 a1)
{
  pthread_mutex_t *v1; // r12
  unsigned __int64 v2; // rbx

  v1 = (pthread_mutex_t *)qword_4C80E0;
  sub_482EC0((pthread_mutex_t *)qword_4C80E0);
  if ( !(_QWORD)xmmword_4C80C8 )
    goto LABEL_11;
  v2 = 0;
  while ( *(_QWORD *)(qword_4C80C0 + 8 * v2) != a1 )
  {
    if ( ++v2 == (_QWORD)xmmword_4C80C8 )
      goto LABEL_11;
  }
  if ( v2 < (unsigned __int64)xmmword_4C80C8 )
  {
    if ( qword_4C80D8 == v2 )
      sub_436D60(nullptr);
    if ( *(_DWORD *)(a1 + 12) && !byte_4C94EC )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(1442);
      BUG();
    }
    *(_QWORD *)(qword_4C80C0 + 8 * v2) = 0;
    nullsub_20(1, a1, (unsigned int)v2);
    sub_482F10(v1);
    return 1;
  }
  else
  {
LABEL_11:
    sub_482F10(v1);
    return 0;
  }
}
// 475E30: using guessed type __int64 __fastcall nullsub_20(_QWORD, _QWORD, _QWORD);
// 4C80C0: using guessed type __int64 qword_4C80C0;
// 4C80C8: using guessed type __int128 xmmword_4C80C8;
// 4C80D8: using guessed type __int64 qword_4C80D8;
// 4C80E0: using guessed type __int64 qword_4C80E0;
// 4C94E1: using guessed type char byte_4C94E1;
// 4C94EC: using guessed type char byte_4C94EC;
