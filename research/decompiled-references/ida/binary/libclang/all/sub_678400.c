__int64 __fastcall sub_678400(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  unsigned __int64 v7; // rsi
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r13d
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax

  if ( !(unsigned __int8)sub_674990(a1, a2, a3, a4, a5, a6) )
    return 0;
  if ( *(_QWORD *)(a2 + 72) > 7u && (*(_QWORD *)(a2 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)qword_4AD2140 && __cxa_guard_acquire(&qword_4AD2140) )
    {
      LODWORD(qword_4AD2160[0]) = 0;
      qword_4AD2160[1] = 0;
      qword_4AD2160[3] = 0;
      __cxa_guard_release(&qword_4AD2140);
    }
    v7 = *(_QWORD *)(a2 + 72);
    if ( v7 <= 7 )
    {
      v8 = qword_4AD2160;
      goto LABEL_10;
    }
    v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    v9 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( v9 == 2 )
    {
      v16 = v8[9];
      v8 = nullptr;
      if ( !v16 || (v8 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL), (v16 & 6) != 4) || !v8 )
      {
LABEL_10:
        if ( (unsigned __int8)sub_674590(a1, (__int64)v8, a3, a4, a5, a6) )
          goto LABEL_11;
        return 0;
      }
    }
    else if ( v9 != 4 )
    {
      goto LABEL_10;
    }
    v8 = (__int64 *)v8[1];
    goto LABEL_10;
  }
LABEL_11:
  v10 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v10 = sub_79AC10(a2);
  v11 = sub_66F3A0(a1, v10, a3, a4, a5, a6);
  if ( !(_BYTE)v11 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v13 = nullptr;
    v14 = sub_79A2B0(a2);
    v15 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v13 = *(__int64 **)sub_79A2B0(a2);
    while ( (__int64 *)v15 != v13 )
    {
      if ( !(unsigned __int8)sub_6777E0(a1, *v13, a3, a4, a5, a6) )
        return 0;
      ++v13;
    }
  }
  return v11;
}

