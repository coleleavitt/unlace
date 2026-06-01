bool __fastcall sub_1AF3130(__int64 a1, __int64 a2)
{
  char v3; // [rsp+0h] [rbp-3Ah] BYREF
  char v4; // [rsp+1h] [rbp-39h] BYREF
  _BYTE v5[4]; // [rsp+2h] [rbp-38h] BYREF
  int v6; // [rsp+6h] [rbp-34h]

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 49 > 2 )
    return 0;
  sub_1AF1480(
    (__int64)v5,
    *(_QWORD *)(a1 + 8),
    a2,
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE6990,
    (__int64)&v4,
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 27456LL) != 106,
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1AE9800,
    (__int64)&v3);
  return v6 != 106;
}
