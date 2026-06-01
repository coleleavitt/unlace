__int64 __fastcall sub_67A3B0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned int v14; // r13d
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  bool v22; // zf
  _QWORD *v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdi

  v8 = *(_QWORD *)(a2 + 40);
  if ( !v8 )
  {
    v11 = 0;
    goto LABEL_5;
  }
  v9 = v8 >> 2;
  if ( (v8 & 4) == 0 )
  {
    v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = 0;
    if ( (v9 & 1) == 0 )
      v11 = v10;
    goto LABEL_5;
  }
  v11 = 0;
  v19 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v19 )
  {
LABEL_5:
    v12 = v11;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)sub_673BB0(a1, *v19, (unsigned __int64)(v19 + 1), a3, a4, a5, a6) )
    return 0;
  v20 = *(_QWORD *)(a2 + 40);
  if ( !v20 )
    BUG();
  v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  v22 = (v20 & 4) == 0;
  v23 = nullptr;
  if ( !v22 )
    v23 = (_QWORD *)v21;
  v24 = *v23 & 0xFFFFFFFFFFFFFFF0LL;
  v25 = *(_QWORD *)v24;
  if ( *(_BYTE *)(*(_QWORD *)v24 + 16LL) == 24
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 && (v25 = sub_B0D320(v25)) != 0 )
  {
    v12 = 0;
    if ( (*(_BYTE *)(v25 + 19) & 8) != 0 )
      v12 = *(_QWORD *)(v25 + 48);
LABEL_6:
    if ( (unsigned __int8)sub_66D270(a1, v12, a3, a4, a5, a6) )
      goto LABEL_7;
    return 0;
  }
LABEL_7:
  v13 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v13 = sub_79AC10(a2);
  v14 = sub_66F3A0(a1, v13, a3, a4, a5, a6);
  if ( !(_BYTE)v14 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v15 = nullptr;
    v16 = sub_79A2B0(a2);
    v17 = *(_QWORD *)v16 + 8LL * *(unsigned int *)(v16 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v15 = *(__int64 **)sub_79A2B0(a2);
    if ( (__int64 *)v17 != v15 )
    {
      while ( (unsigned __int8)sub_6777E0(a1, *v15, a3, a4, a5, a6) )
      {
        if ( (__int64 *)v17 == ++v15 )
          return v14;
      }
      return 0;
    }
  }
  return v14;
}

