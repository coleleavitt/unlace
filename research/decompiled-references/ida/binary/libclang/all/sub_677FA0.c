__int64 __fastcall sub_677FA0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r13

  v7 = a2 + 40;
  if ( !a2 )
    v7 = 0;
  v8 = sub_66F3A0(a1, v7, a3, a4, a5, a6);
  if ( (_BYTE)v8 )
  {
    v9 = v8;
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

