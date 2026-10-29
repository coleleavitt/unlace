__int64 __fastcall sub_677EF0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  unsigned int v7; // r13d
  __int64 v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14

  if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40), a3, a4, a5, a6) )
    return 0;
  v9 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v9 = sub_79AC10(a2);
  v7 = sub_66F3A0(a1, v9, a3, a4, a5, a6);
  if ( (_BYTE)v7 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v10 = nullptr;
      v11 = sub_79A2B0(a2);
      v12 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v10 = *(__int64 **)sub_79A2B0(a2);
      while ( (__int64 *)v12 != v10 )
      {
        if ( !(unsigned __int8)sub_6777E0(a1, *v10, a3, a4, a5, a6) )
          return 0;
        ++v10;
      }
    }
  }
  else
  {
    return 0;
  }
  return v7;
}

