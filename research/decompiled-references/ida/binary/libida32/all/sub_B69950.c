bool __fastcall sub_B69950(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (*v10)(); // rax

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) < 0 )
  {
    if ( !v2 )
      return 0;
    v8 = a1;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v8 = sub_B68580(a1);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 88) + 18360LL);
    v10 = *(__int64 (**)())(*(_QWORD *)v9 + 104LL);
    if ( v10 == sub_6CE270 )
      return 0;
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))v10)(v9, *(unsigned __int16 *)(v1 - 2));
  }
  else
  {
    if ( !v2 )
      return 0;
    v3 = *(_QWORD *)(a1 - 8);
  }
  if ( !v3 )
    return 0;
  v4 = sub_FCB100(v3);
  v5 = *(_DWORD *)(v4 + 36);
  v6 = v4;
  if ( v5 > 7 || ((1LL << v5) & 0xBC) == 0 )
    return 0;
  if ( (*(_BYTE *)(v1 + 28) & 0x7F) != 0 )
    v1 = sub_B68580(v1);
  return *(_QWORD *)(*(_QWORD *)(v1 + 88) + 1800LL) != v6;
}

