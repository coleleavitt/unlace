__int64 __fastcall sub_6793E0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 *v12; // rbx
  unsigned int v13; // r12d
  __int64 v15; // rsi
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14

  v8 = sub_ACED50(*(_QWORD *)(a2 + 40));
  v9 = *(_QWORD *)(a2 + 40);
  v10 = (__int64 *)(v8 + 8LL * *(unsigned int *)(v9 + 4));
  v11 = sub_ACED50(v9);
  if ( v10 != (__int64 *)v11 )
  {
    v12 = (__int64 *)v11;
    while ( (unsigned __int8)sub_672CC0(a1, *v12, a3, a4, a5, a6) )
    {
      if ( v10 == ++v12 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v15 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v15 = sub_79AC10(a2);
  v13 = sub_66F3A0(a1, v15, a3, a4, a5, a6);
  if ( !(_BYTE)v13 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v16 = nullptr;
    v17 = sub_79A2B0(a2);
    v18 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v16 = *(__int64 **)sub_79A2B0(a2);
    while ( (__int64 *)v18 != v16 )
    {
      if ( !(unsigned __int8)sub_6777E0(a1, *v16, a3, a4, a5, a6) )
        return 0;
      ++v16;
    }
  }
  return v13;
}

