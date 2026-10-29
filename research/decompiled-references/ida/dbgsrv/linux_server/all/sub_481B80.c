/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481B80
// Address: 0x0000000000481B80

//----- (0000000000481B80) ----------------------------------------------------
bool __fastcall sub_481B80(__int64 a1)
{
  pthread_mutex_t *v1; // r12
  _QWORD *v2; // rbp
  void *v3; // rsi
  __int64 v4; // rdx
  char *v5; // rcx
  char *v6; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx

  v1 = (pthread_mutex_t *)qword_4C94F0;
  if ( !qword_4C94F0 )
  {
    qword_4C94F0 = (__int64)sub_482C40();
    v1 = (pthread_mutex_t *)qword_4C94F0;
    if ( !qword_4C94F0 )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(547);
      BUG();
    }
  }
  sub_482EC0(v1);
  v2 = qword_4C94F8;
  if ( qword_4C94F8 )
  {
    v3 = *(void **)qword_4C94F8;
    v4 = *((_QWORD *)qword_4C94F8 + 1);
    v5 = (char *)(*(_QWORD *)qword_4C94F8 + 8 * v4);
    if ( *(char **)qword_4C94F8 != v5 )
    {
      v6 = *(char **)qword_4C94F8;
      while ( *(_QWORD *)v6 != a1 )
      {
        v6 += 8;
        if ( v6 == v5 )
          goto LABEL_10;
      }
      if ( v6 != v5 )
        return sub_482F10(v1);
    }
  }
  else
  {
    v8 = sub_4814F0(24);
    *v8 = 0;
    v2 = v8;
    v5 = nullptr;
    qword_4C94F8 = v8;
    v3 = nullptr;
    v4 = 0;
    *(_OWORD *)(v8 + 1) = 0;
  }
LABEL_10:
  v9 = v4 + 1;
  if ( v2[2] < v9 )
  {
    v10 = (char *)sub_481540((__int64)v2, v3, v9, 8u);
    v11 = v2[1];
    *v2 = v10;
    v5 = &v10[8 * v11];
  }
  *(_QWORD *)v5 = a1;
  ++v2[1];
  return sub_482F10(v1);
}
// 4C94E1: using guessed type char byte_4C94E1;
// 4C94F0: using guessed type __int64 qword_4C94F0;
