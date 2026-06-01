__int64 __fastcall sub_4563B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rbp
  __int64 v5; // r13
  size_t v6; // r12
  __int64 v7; // rax
  void *v8; // rbx
  __int64 v9; // rax
  const char *v10; // rsi

  v2 = sub_426230(a1, (const char *)a2);
  if ( *(_QWORD *)(a2 + 56) != 1 )
    return 7;
  v4 = (__int64)v2;
  if ( !(unsigned __int8)sub_4170D0((__int64)v2) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 336LL) + 136LL * **(int **)(a2 + 48);
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
    {
      v8 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 8));
      memcpy(v8, *(const void **)v5, v6);
      v9 = sub_4170C0(v4);
      v10 = &s1;
      if ( *(_QWORD *)(v9 + 8) )
        v10 = *(const char **)v9;
      if ( strcmp((const char *)v8, v10) )
      {
        if ( v8 )
          qfree(v8, v10);
        return 7;
      }
      if ( v8 )
        qfree(v8, v10);
    }
    else
    {
      v7 = sub_4170C0(v4);
      if ( *(_QWORD *)(v7 + 8) && **(_BYTE **)v7 )
        return 7;
    }
  }
  return 3;
}
