__int64 __fastcall sub_7A2110(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, __int64, const char *))(a1 + 48))(a2, 10018, "Hex-Rays-IDA");
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *)))(a1 + 48))(
    a2,
    20011,
    sub_7A20A0);
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 48))(a2, 10001, *(_QWORD *)(a1 + 136));
  if ( *(_BYTE *)(a1 + 144) )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 48))(a2, 43, 0);
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall *)()))(a1 + 48))(a2, 20056, sub_7A2530);
  }
  if ( (*(_BYTE *)(a1 + 128) & 0x40) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 48))(a2, 52, 1);
  return result;
}

