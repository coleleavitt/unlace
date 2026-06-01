__int64 __fastcall sub_B68D70(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 (*v6)(); // rdx

  v1 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) >= 0 )
  {
    if ( v1 )
      return *(_QWORD *)(a1 - 8);
    return 0;
  }
  if ( !v1 )
    return 0;
  v4 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v4 = sub_B68580(a1);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 18360LL);
  v6 = *(__int64 (**)())(*(_QWORD *)v5 + 104LL);
  result = 0;
  if ( v6 != sub_6CE270 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))v6)(v5, *(unsigned __int16 *)(a1 - 2));
  return result;
}

