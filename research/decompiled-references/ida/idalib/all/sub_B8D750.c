bool __fastcall sub_B8D750(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // ecx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (*v8)(); // rax

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) < 0 )
  {
    if ( !v2 )
      return 0;
    v6 = a1;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v6 = sub_B8C2C0(a1);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 88) + 18360LL);
    v8 = *(__int64 (**)())(*(_QWORD *)v7 + 104LL);
    if ( v8 == sub_6EE8B0 )
      return 0;
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))v8)(v7, *(unsigned __int16 *)(v1 - 2));
  }
  else
  {
    if ( !v2 )
      return 0;
    v3 = *(_QWORD *)(a1 - 8);
  }
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(v3 + 36);
  if ( v4 > 7 || ((1LL << v4) & 0xBC) == 0 )
    return 0;
  if ( (*(_BYTE *)(v1 + 28) & 0x7F) != 0 )
    v1 = sub_B8C2C0(v1);
  return *(_QWORD *)(*(_QWORD *)(v1 + 88) + 1800LL) == v3;
}
