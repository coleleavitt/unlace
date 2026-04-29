_QWORD *__fastcall sub_24AAD0(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r13d
  int v6; // ebp
  __int64 (__fastcall *v7)(__int64, int, int); // rax
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  _QWORD *v12; // rax
  _QWORD *v13; // r12
  __int64 v14; // rax
  _QWORD *v15; // rbp
  int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // r12

  v5 = a2;
  v6 = a3 - 1;
  v7 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v7 == sub_5EB50 )
  {
    v8 = (__int64 *)(a1[6] + 24LL * (int)a2);
    v9 = v6;
    v10 = *v8;
    v11 = *(_DWORD *)(*v8 + 4LL * v6);
  }
  else
  {
    v11 = v7((__int64)a1, a2, v6);
  }
  v12 = sub_248C50(a1, v11, v9, v10, a5);
  v13 = v12;
  if ( v6 <= 0 )
    return v13;
  if ( !v12 )
  {
    if ( !under_debugger )
      sub_37B760(50388);
    goto LABEL_17;
  }
  v14 = sub_24AAD0(a1, v5, (unsigned int)v6);
  v15 = (_QWORD *)v14;
  if ( !v14 )
    return v13;
  if ( !*(_DWORD *)(v14 + 8) )
  {
    v16 = *(_DWORD *)(v14 + 12);
    sub_24E2B0(v14);
    clear_tinfo_t(v15 + 6);
    j__qfree(v15);
    if ( v16 != -1 )
    {
      if ( *((_DWORD *)v13 + 3) == -1 )
      {
        *((_DWORD *)v13 + 3) = v16;
        return v13;
      }
      if ( !under_debugger )
        sub_37B760(51830);
LABEL_17:
      BUG();
    }
    return v13;
  }
  v18 = j__qalloc_or_throw(64);
  *(_QWORD *)(v18 + 24) = v15;
  *(_QWORD *)(v18 + 32) = v13;
  v19 = v18;
  *(_QWORD *)v18 = -1;
  *(_DWORD *)(v18 + 8) = 1;
  *(_QWORD *)(v18 + 12) = -1;
  *(_QWORD *)(v18 + 40) = 0;
  *(_QWORD *)(v18 + 48) = 0;
  *(_DWORD *)(v18 + 56) = 0;
  *(_QWORD *)v18 = *v15;
  sub_23CE40(v18, *(_QWORD *)(a1[41] + 112LL), 0);
  return (_QWORD *)v19;
}
