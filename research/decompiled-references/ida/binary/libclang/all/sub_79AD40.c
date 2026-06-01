bool __fastcall sub_79AD40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (*v10)(); // rax

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) < 0 )
  {
    if ( !v3 )
      return 0;
    v8 = a1;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v8 = sub_793320(a1);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 88) + 18200LL);
    v10 = *(__int64 (**)())(*(_QWORD *)v9 + 104LL);
    if ( v10 == sub_792D90 )
      return 0;
    a2 = *(unsigned __int16 *)(v2 - 2);
    v4 = ((__int64 (__fastcall *)(__int64, __int64))v10)(v9, a2);
  }
  else
  {
    if ( !v3 )
      return 0;
    v4 = *(_QWORD *)(a1 - 8);
  }
  if ( !v4 )
    return 0;
  v5 = sub_C92EB0(v4, a2);
  v6 = *(_DWORD *)(v5 + 36);
  if ( v6 <= 5 )
  {
    if ( v6 > 1 )
      goto LABEL_7;
    return 0;
  }
  if ( v6 != 7 )
    return 0;
LABEL_7:
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) != 0 )
    v2 = sub_793320(v2);
  return *(_QWORD *)(*(_QWORD *)(v2 + 88) + 1720LL) != v5;
}

