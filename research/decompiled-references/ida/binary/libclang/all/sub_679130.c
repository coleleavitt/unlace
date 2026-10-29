__int64 __fastcall sub_679130(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // r13d
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax

  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 && !(unsigned __int8)sub_673340(a1, v7 & 0xFFFFFFFFFFFFFFF0LL, a3, a4, a5, a6)
    || (*(_BYTE *)(a2 + 60) & 4) != 0 && !(unsigned __int8)sub_677500(a1, *(_QWORD *)(a2 + 88), a3, a4, a5, a6) )
  {
    return 0;
  }
  if ( *(_QWORD *)(a2 + 72) > 7u && (*(_QWORD *)(a2 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)qword_4AD2180 && __cxa_guard_acquire(&qword_4AD2180) )
    {
      LODWORD(qword_4AD21A0[0]) = 0;
      qword_4AD21A0[1] = 0;
      qword_4AD21A0[3] = 0;
      __cxa_guard_release(&qword_4AD2180);
    }
    v8 = *(_QWORD *)(a2 + 72);
    if ( v8 <= 7 )
    {
      v9 = qword_4AD21A0;
      goto LABEL_13;
    }
    v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    v10 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( v10 == 2 )
    {
      v17 = v9[9];
      v9 = nullptr;
      if ( !v17 || (v9 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL), (v17 & 6) != 4) || !v9 )
      {
LABEL_13:
        if ( (unsigned __int8)sub_674590(a1, (__int64)v9, a3, a4, a5, a6) )
          goto LABEL_14;
        return 0;
      }
    }
    else if ( v10 != 4 )
    {
      goto LABEL_13;
    }
    v9 = (__int64 *)v9[1];
    goto LABEL_13;
  }
LABEL_14:
  v11 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v11 = sub_79AC10(a2);
  v12 = sub_66F3A0(a1, v11, a3, a4, a5, a6);
  if ( !(_BYTE)v12 )
    return 0;
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
  return v12;
}

