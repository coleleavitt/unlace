__int64 __fastcall sub_251E50(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  int v4; // ebp
  __int64 (__fastcall *v5)(__int64, int, int); // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbp
  int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // r12

  v3 = a2;
  v4 = a3 - 1;
  v5 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v5 == sub_650D0 )
  {
    v6 = (__int64 *)(a1[6] + 24LL * (int)a2);
    v7 = v4;
    v8 = *v6;
    v9 = *(unsigned int *)(*v6 + 4LL * v4);
  }
  else
  {
    v9 = (unsigned int)v5((__int64)a1, a2, v4);
  }
  v10 = sub_24FFD0(a1, v9, v7, v8);
  v11 = v10;
  if ( v4 <= 0 )
    return v11;
  if ( !v10 )
  {
    if ( !under_debugger )
      sub_383060(50388);
    goto LABEL_17;
  }
  v12 = sub_251E50(a1, v3, (unsigned int)v4);
  v15 = (_QWORD *)v12;
  if ( !v12 )
    return v11;
  if ( !*(_DWORD *)(v12 + 8) )
  {
    v16 = *(_DWORD *)(v12 + 12);
    sub_255630(v12);
    clear_tinfo_t();
    j__qfree((__int64)v15);
    if ( v16 != -1 )
    {
      if ( *(_DWORD *)(v11 + 12) == -1 )
      {
        *(_DWORD *)(v11 + 12) = v16;
        return v11;
      }
      if ( !under_debugger )
        sub_383060(51830);
LABEL_17:
      BUG();
    }
    return v11;
  }
  v18 = j__qalloc_or_throw(64, v3, v13, v14);
  *(_QWORD *)(v18 + 24) = v15;
  *(_QWORD *)(v18 + 32) = v11;
  v19 = v18;
  *(_QWORD *)v18 = -1;
  *(_DWORD *)(v18 + 8) = 1;
  *(_QWORD *)(v18 + 12) = -1;
  *(_QWORD *)(v18 + 40) = 0;
  *(_QWORD *)(v18 + 48) = 0;
  *(_DWORD *)(v18 + 56) = 0;
  *(_QWORD *)v18 = *v15;
  sub_2441C0(v18, *(_QWORD *)(a1[41] + 112LL), 0);
  return v19;
}
