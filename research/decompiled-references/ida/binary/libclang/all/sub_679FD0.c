__int64 __fastcall sub_679FD0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 *v7; // rbx
  __int64 v8; // r13
  unsigned int v9; // r13d
  __int64 v11; // rsi
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14

  sub_661FA0(a1, a2);
  if ( !(unsigned __int8)sub_674A70(a1, a2, a3, a4, a5, a6) )
    return 0;
  v7 = (__int64 *)(a2 + 104);
  v8 = a2 + 104 + 8LL * *(unsigned int *)(a2 + 100);
  if ( v8 != a2 + 104 )
  {
    while ( (unsigned __int8)sub_66D270(a1, *v7, a3, a4, a5, a6) )
    {
      if ( (__int64 *)v8 == ++v7 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v11 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v11 = sub_79AC10(a2);
  v9 = sub_66F3A0(a1, v11, a3, a4, a5, a6);
  if ( !(_BYTE)v9 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v12 = nullptr;
    v13 = sub_79A2B0(a2);
    v14 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v12 = *(__int64 **)sub_79A2B0(a2);
    while ( (__int64 *)v14 != v12 )
    {
      if ( !(unsigned __int8)sub_6777E0(a1, *v12, a3, a4, a5, a6) )
        return 0;
      ++v12;
    }
  }
  return v9;
}

