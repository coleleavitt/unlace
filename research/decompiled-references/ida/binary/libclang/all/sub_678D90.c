__int64 __fastcall sub_678D90(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 *v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // r13d
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14

  sub_65A2A0(a1, a2);
  if ( *(_DWORD *)(a2 + 96) )
  {
    v7 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v7 = (__int64 *)*v7;
    if ( !(unsigned __int8)sub_673BB0(a1, *v7, (unsigned __int64)(v7 + 1), a3, a4, a5, a6) )
      return 0;
  }
  v8 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v8 = sub_79AC10(a2);
  v9 = sub_66F3A0(a1, v8, a3, a4, a5, a6);
  if ( (_BYTE)v9 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v11 = nullptr;
      v12 = sub_79A2B0(a2);
      v13 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v11 = *(__int64 **)sub_79A2B0(a2);
      while ( (__int64 *)v13 != v11 )
      {
        if ( !(unsigned __int8)sub_6777E0(a1, *v11, a3, a4, a5, a6) )
          return 0;
        ++v11;
      }
    }
  }
  else
  {
    return 0;
  }
  return v9;
}

