/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436D60
// Address: 0x0000000000436D60

//----- (0000000000436D60) ----------------------------------------------------
__int64 __fastcall sub_436D60(__int64 *a1)
{
  __int64 *v1; // rbx
  pthread_mutex_t *v2; // rbp
  __int64 v3; // rdx
  unsigned int v4; // ebx

  v1 = a1;
  v2 = (pthread_mutex_t *)qword_4C80E0;
  sub_482EC0((pthread_mutex_t *)qword_4C80E0);
  if ( !a1 )
    v1 = qword_4C6140;
  if ( !(_QWORD)xmmword_4C80C8 )
    goto LABEL_12;
  v3 = 0;
  while ( *(__int64 **)(qword_4C80C0 + 8 * v3) != v1 )
  {
    if ( (_QWORD)xmmword_4C80C8 == ++v3 )
      goto LABEL_12;
  }
  if ( (_QWORD)xmmword_4C80C8 == v3 )
  {
LABEL_12:
    v4 = 0;
  }
  else
  {
    if ( qword_4C80D8 != v3 )
    {
      qword_4C80D8 = v3;
      nullsub_20(2, v1, v3);
    }
    v4 = 1;
  }
  sub_482F10(v2);
  return v4;
}
// 475E30: using guessed type __int64 __fastcall nullsub_20(_QWORD, _QWORD, _QWORD);
// 4C6140: using guessed type __int64 qword_4C6140[5];
// 4C80C0: using guessed type __int64 qword_4C80C0;
// 4C80C8: using guessed type __int128 xmmword_4C80C8;
// 4C80D8: using guessed type __int64 qword_4C80D8;
// 4C80E0: using guessed type __int64 qword_4C80E0;
