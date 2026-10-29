/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436C30
// Address: 0x0000000000436C30

//----- (0000000000436C30) ----------------------------------------------------
__int64 __fastcall sub_436C30(__int64 a1)
{
  pthread_mutex_t *v1; // r12
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r13
  _QWORD *v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v8; // rdx

  if ( !a1 || *(_DWORD *)(a1 + 12) )
    return -1;
  v1 = (pthread_mutex_t *)qword_4C80E0;
  sub_482EC0((pthread_mutex_t *)qword_4C80E0);
  v2 = xmmword_4C80C8;
  v3 = qword_4C80C0;
  v4 = (int)xmmword_4C80C8;
  if ( (int)xmmword_4C80C8 <= 0 )
  {
    v4 = (int)xmmword_4C80C8;
    v6 = 0;
  }
  else
  {
    v5 = (_QWORD *)qword_4C80C0;
    do
    {
      if ( *v5 == a1 )
      {
        v6 = -1;
        goto LABEL_8;
      }
      ++v5;
    }
    while ( v5 != (_QWORD *)(qword_4C80C0 + 8LL * (unsigned int)(xmmword_4C80C8 - 1) + 8) );
    v6 = 0;
    while ( *(_QWORD *)(qword_4C80C0 + 8 * v6) )
    {
      if ( ++v6 == (int)xmmword_4C80C8 )
        goto LABEL_16;
    }
  }
  if ( v4 == v6 )
  {
LABEL_16:
    v8 = xmmword_4C80C8 + 1;
    if ( *((_QWORD *)&xmmword_4C80C8 + 1) < (unsigned __int64)(xmmword_4C80C8 + 1) )
    {
      qword_4C80C0 = (__int64)sub_481540((__int64)&qword_4C80C0, (void *)qword_4C80C0, v8, 8u);
      v3 = qword_4C80C0;
      v2 = xmmword_4C80C8;
      v8 = xmmword_4C80C8 + 1;
    }
    *(_QWORD *)&xmmword_4C80C8 = v8;
    v6 = v4;
    *(_QWORD *)(v3 + 8 * v2) = a1;
  }
  else
  {
    *(_QWORD *)(qword_4C80C0 + 8 * v6) = a1;
  }
  nullsub_20(0, a1, (unsigned int)v6);
LABEL_8:
  sub_482F10(v1);
  return v6;
}
// 475E30: using guessed type __int64 __fastcall nullsub_20(_QWORD, _QWORD, _QWORD);
// 4C80C0: using guessed type __int64 qword_4C80C0;
// 4C80C8: using guessed type __int128 xmmword_4C80C8;
// 4C80E0: using guessed type __int64 qword_4C80E0;
