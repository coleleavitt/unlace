__int64 __fastcall sub_709500(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rax

  v8 = sub_B0D970(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v8 )
    return 0;
  v9 = sub_B14A40(v8);
  v10 = v9;
  if ( (*(_BYTE *)(v9 + 29) & 1) == 0 )
    return 0;
  v12 = sub_79A2B0(v9);
  v13 = *(_QWORD *)v12;
  v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
  if ( v13 < v14 )
  {
    while ( *(_WORD *)(*(_QWORD *)v13 + 32LL) != 371 )
    {
      v13 += 8LL;
      if ( v14 == v13 )
        return 0;
    }
  }
  else
  {
    if ( v13 == v14 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v14 + 32LL) != 371 )
    {
      v14 += 8LL;
      if ( v13 == v14 )
        return 0;
    }
  }
  if ( v13 == v14 )
    return 0;
  v15 = sub_7868A0(v10);
  if ( !v15 )
    return 0;
LABEL_11:
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(_QWORD *)(v16 + 8);
  if ( (v17 & 7) != 0 || (v16 &= 0xFFFFFFFFFFFFFFF0LL, (v17 & 8) != 0) )
    v16 = sub_B0CF30(*(_QWORD *)(v15 + 48), v16) & 0xFFFFFFFFFFFFFFF0LL;
  result = sub_707EF0(a1, v16, a3, a4, a5, 0, 0);
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v15 + 8);
      v15 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 <= 7 )
        return 0;
      if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 47 <= 2 )
        goto LABEL_11;
    }
  }
  return result;
}

