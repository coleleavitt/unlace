/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr
// Address: 0x0000000100031D80

//----- (0000000100031D80) ----------------------------------------------------
__int64 __fastcall eval_expr(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  pthread_mutex_t *v5; // r13
  __int64 v6; // r12
  __int64 (__fastcall *v7)(__int64, __int64, const char *, __int64); // rax
  unsigned int v8; // r14d
  char *v9; // rax
  _QWORD v12[2]; // [rsp+10h] [rbp-40h] BYREF

  v5 = (pthread_mutex_t *)qword_1000AD0E8;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0E8);
  if ( (unsigned __int64)qword_1000AE2A8 < *((_QWORD *)&xmmword_1000AE290 + 1)
    && (v6 = *(_QWORD *)(xmmword_1000AE290 + 8 * qword_1000AE2A8)) != 0 )
  {
    ++*(_DWORD *)(v6 + 12);
  }
  else
  {
    v6 = 0;
  }
  qmutex_unlock(v5);
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, const char *, __int64))(v6 + 64);
    if ( v7 )
    {
      v8 = v7(a1, a2, a3, a4);
    }
    else
    {
      v8 = 0;
      if ( a4 )
        sub_100002D00(a4, "the '%s' extlang des not implement the 'eval_expr' callback", *(const char **)(v6 + 16));
    }
    --*(_DWORD *)(v6 + 12);
  }
  else
  {
    v9 = *(char **)a4;
    if ( *(_QWORD *)(a4 + 16) <= 0x15u )
    {
      v9 = (char *)qvector_reserve(a4, *(void **)a4, 0x16u, 1u);
      *(_QWORD *)a4 = v9;
    }
    *(_QWORD *)(a4 + 8) = 22;
    *(_OWORD *)v9 = *(_OWORD *)"no extlang registered";
    *(_QWORD *)(v9 + 13) = 0x6465726574736967LL;
    *(_BYTE *)(*(_QWORD *)a4 + 21LL) = 0;
    if ( a1 )
    {
      free_idcv((unsigned __int8 *)a1);
      *(_BYTE *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
    }
    v12[0] = &off_1000A8CF0;
    v12[1] = a2;
    return (unsigned int)eval_idc_snippet((unsigned __int8 *)a1, a3, (void **)a4, (__int64)v12);
  }
  return v8;
}
// 1000A8CF0: using guessed type __int64 (__fastcall *off_1000A8CF0)();
// 1000AD0E8: using guessed type __int64 qword_1000AD0E8;
// 1000AE290: using guessed type __int128 xmmword_1000AE290;
// 1000AE2A8: using guessed type __int64 qword_1000AE2A8;
