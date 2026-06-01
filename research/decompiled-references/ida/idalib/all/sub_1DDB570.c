unsigned __int64 __fastcall sub_1DDB570(
        __int64 a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 v16; // rbp
  unsigned int v17; // eax

  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(unsigned int *)(a2 + 4);
  v11 = sub_1DD8310(a1, v10, v9, a6, a7, a8, a3, a4);
  if ( !v11 )
    return 1;
  v15 = *(_QWORD *)a1;
  v16 = v11;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL)
    && v11 == *(_QWORD *)(a2 + 16)
    && *(_QWORD *)(v15 + 544) == *(_QWORD *)(a2 + 24) )
  {
    return a2;
  }
  v17 = sub_C00A40(a2, v10, v12, v13, v14);
  return sub_190FFF0(v15, v17, v16);
}
