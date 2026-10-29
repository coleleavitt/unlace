__int64 __fastcall sub_679870(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  unsigned int v7; // r12d
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi

  sub_661FA0(a1, a2);
  if ( !(unsigned __int8)sub_674A70(a1, a2, a3, a4, a5, a6) )
    return 0;
  if ( (unsigned __int8)sub_77D680(a2) )
  {
    if ( (*(_BYTE *)(a2 + 97) & 6) == 4 )
    {
      v15 = sub_77D670(a2);
      if ( !(unsigned __int8)sub_672CC0(a1, v15, a3, a4, a5, a6) )
        return 0;
    }
  }
  if ( (unsigned __int8)sub_77D680(a2) )
  {
    if ( (((*(_BYTE *)(a2 + 97) & 6) - 2) & 0xFC) != 0 )
    {
      v14 = sub_77D590(a2);
      if ( !(unsigned __int8)sub_672CC0(a1, v14, a3, a4, a5, a6) )
        return 0;
    }
  }
  v9 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v9 = sub_79AC10(a2);
  v7 = sub_66F3A0(a1, v9, a3, a4, a5, a6);
  if ( !(_BYTE)v7 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v10 = sub_79A2B0(a2);
    v11 = *(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 8);
    v12 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v12 = *(__int64 **)sub_79A2B0(a2);
    if ( (__int64 *)v11 != v12 )
    {
      v13 = v12;
      while ( (unsigned __int8)sub_6777E0(a1, *v13, a3, a4, a5, a6) )
      {
        if ( (__int64 *)v11 == ++v13 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}

