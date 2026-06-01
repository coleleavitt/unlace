__int64 __fastcall sub_1747510(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned int v10; // eax

  v3 = *(_QWORD *)(a2 + 16);
  v4 = sub_17473B0(a1, v3);
  if ( !v4 )
    return 1;
  v8 = *(_QWORD *)a1;
  v9 = v4;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL)
    && v4 == *(_QWORD *)(a2 + 16)
    && *(_QWORD *)(v8 + 544) == *(_QWORD *)(a2 + 24) )
  {
    return a2;
  }
  v10 = sub_C00A40(a2, v3, v5, v6, v7);
  return sub_190FFF0(v8, v10, v9);
}
