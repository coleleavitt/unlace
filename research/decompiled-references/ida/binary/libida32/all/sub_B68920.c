__int64 __fastcall sub_B68920(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 (*v5)(); // rax

  v1 = a1;
  v2 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v2 = sub_B68580(a1);
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 88) + 18360LL);
  v5 = *(__int64 (**)())(*(_QWORD *)v4 + 104LL);
  if ( *(char *)(v1 + 29) < 0 )
    v3 = *(unsigned __int16 *)(v1 - 2);
  if ( v5 == sub_6CE270 )
    return 0;
  else
    return ((__int64 (__fastcall *)(__int64, __int64))v5)(v4, v3);
}

