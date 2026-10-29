__int64 __fastcall sub_D0A5F0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  _BYTE v6[9]; // [rsp+1h] [rbp-9h] BYREF

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 1232);
  v5 = a1 + 384;
  *(_QWORD *)(v5 + 856) = v3;
  return sub_D098A0(v5, v4, (__int64 (__fastcall *)(__int64, __int64))sub_CF0360, (__int64)v6);
}
