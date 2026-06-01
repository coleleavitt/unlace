__int64 __fastcall sub_794640(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 (*v4)(); // rax

  v1 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v1 = sub_793320(a1);
  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 18200LL);
  v4 = *(__int64 (**)())(*(_QWORD *)v3 + 104LL);
  if ( *(char *)(a1 + 29) < 0 )
    v2 = *(unsigned __int16 *)(a1 - 2);
  if ( v4 == sub_792D90 )
    return 0;
  else
    return ((__int64 (__fastcall *)(__int64, __int64))v4)(v3, v2);
}

