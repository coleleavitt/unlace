bool __fastcall sub_17A5E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v5; // rax
  __int64 v6; // rdx
  _BOOL4 v7; // eax

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 35 > 3 )
    return 0;
  if ( (unsigned int)sub_B76070(a1, a2, a3, a4) )
    return 0;
  if ( (*(_BYTE *)(a1 + 40) & 7) != 0 )
    return 0;
  v5 = sub_995750(a1);
  if ( v6 != 17 )
    return 0;
  v7 = *(_QWORD *)v5 ^ 0x757465725F746567LL | *((_QWORD *)v5 + 1) ^ 0x63656A626F5F6E72LL || v5[16] != 116;
  return !v7;
}
