__int64 __fastcall sub_6792E0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 *v7; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 v11; // rbx
  __int64 i; // r14
  __int64 v13; // rsi
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r14

  v7 = *(__int64 **)(a2 + 96);
  if ( v7 && !(unsigned __int8)sub_673BB0(a1, *v7, (unsigned __int64)(v7 + 1), a3, a4, a5, a6) )
    return 0;
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  v9 = v8 == sub_5F7B90 ? *(_QWORD *)(a2 + 88) : v8(a2);
  v10 = sub_672CC0(a1, v9, a3, a4, a5, a6);
  if ( !(_BYTE)v10 )
    return 0;
  v11 = *(_QWORD *)(a2 + 104);
  for ( i = v11 + 16LL * *(unsigned int *)(a2 + 112); i != v11; v11 += 16 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
    {
      if ( !(unsigned __int8)sub_672CC0(a1, v13, a3, a4, a5, a6) )
        return 0;
    }
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v14 = nullptr;
    v15 = sub_79A2B0(a2);
    v16 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v14 = *(__int64 **)sub_79A2B0(a2);
    while ( (__int64 *)v16 != v14 )
    {
      if ( !(unsigned __int8)sub_6777E0(a1, *v14, a3, a4, a5, a6) )
        return 0;
      ++v14;
    }
  }
  return v10;
}

