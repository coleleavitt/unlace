/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C850
// Address: 0x000000000042C850

//----- (000000000042C850) ----------------------------------------------------
__int64 __fastcall sub_42C850(_QWORD *a1, __int64 a2)
{
  pthread_mutex_t *v4; // r12
  char *v5; // rsi
  const char *v6; // rdi
  FILE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rsi

  v4 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v5 = (char *)s1;
  if ( a1[6] )
    v5 = (char *)a1[5];
  v6 = s1;
  if ( a1[2] )
    v6 = (const char *)a1[1];
  v7 = sub_47F960(v6, v5);
  if ( v7 )
  {
    v8 = xmmword_4C80A8;
    if ( !(_QWORD)xmmword_4C80A8 )
    {
      v12 = qword_4C80A0;
      if ( !*((_QWORD *)&xmmword_4C80A8 + 1) )
      {
        qword_4C80A0 = (__int64)sub_481540((__int64)&qword_4C80A0, (void *)qword_4C80A0, 1u, 8u);
        v8 = xmmword_4C80A8;
        v12 = qword_4C80A0;
      }
      *(_QWORD *)(v12 + 8 * v8) = 0;
      v8 = xmmword_4C80A8 + 1;
      *(_QWORD *)&xmmword_4C80A8 = xmmword_4C80A8 + 1;
    }
    *(_QWORD *)(a2 + 8) = v8;
    v9 = xmmword_4C80A8;
    v10 = qword_4C80A0;
    if ( *((_QWORD *)&xmmword_4C80A8 + 1) < (unsigned __int64)(xmmword_4C80A8 + 1) )
    {
      qword_4C80A0 = (__int64)sub_481540((__int64)&qword_4C80A0, (void *)qword_4C80A0, xmmword_4C80A8 + 1, 8u);
      v10 = qword_4C80A0;
      v9 = xmmword_4C80A8;
    }
    *(_QWORD *)(v10 + 8 * v9) = v7;
    *(_QWORD *)&xmmword_4C80A8 = xmmword_4C80A8 + 1;
  }
  sub_482F10(v4);
  return 0;
}
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;
