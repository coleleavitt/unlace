__int64 __fastcall sub_27400(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax

  if ( !a2 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    return 0;
  if ( *(_BYTE *)(a2 + 64) != 9 )
    return 0;
  v3 = *(_QWORD *)(a2 + 72);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  if ( *(_DWORD *)hexdsp(268, v3) != 1 )
    return 0;
  if ( a1 )
    *a1 = *(_QWORD *)(a2 + 72);
  return 1;
}
