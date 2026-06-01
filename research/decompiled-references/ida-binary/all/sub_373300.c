bool __fastcall xref_path_handler__::vfunc_0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v8; // r12d
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx

  v4 = *(_QWORD *)(a1 + 24);
  v5 = v4 + 16LL * *(_QWORD *)(a1 + 32);
  if ( v4 != v5 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    while ( a3 != *(_QWORD *)(v6 + 8) )
    {
      v6 += 16;
      if ( v5 == v6 )
        goto LABEL_7;
    }
    if ( v6 != v5 )
      return *(_QWORD *)(a1 + 8) != a3;
  }
LABEL_7:
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 32) + 1LL;
  if ( *(_QWORD *)(a1 + 40) < v9 )
  {
    v10 = qvector_reserve(a1 + 24, v4, v9, 16);
    v11 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v10;
    v5 = v10 + 16 * v11;
  }
  *(_DWORD *)v5 = v8;
  *(_QWORD *)(v5 + 8) = a3;
  ++*(_QWORD *)(a1 + 32);
  return *(_QWORD *)(a1 + 8) != a3;
}
