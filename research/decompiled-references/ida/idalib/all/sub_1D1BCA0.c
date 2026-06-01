unsigned __int64 __fastcall sub_1D1BCA0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rbp
  unsigned int v16; // eax

  v9 = *(_QWORD *)(a2 + 16);
  v10 = sub_1D1B120(a1, v9, a7, a8, a3, a4, a5, a6);
  if ( !v10 )
    return 1;
  v14 = *(_QWORD *)a1;
  v15 = v10;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL)
    && v10 == *(_QWORD *)(a2 + 16)
    && *(_QWORD *)(v14 + 544) == *(_QWORD *)(a2 + 24) )
  {
    return a2;
  }
  v16 = sub_C00A40(a2, v9, v11, v12, v13);
  return sub_190FFF0(v14, v16, v15);
}
