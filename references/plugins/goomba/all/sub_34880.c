__int64 __fastcall sub_34880(__int64 a1, __int64 a2)
{
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  void (__fastcall *v3)(__int64, __int64); // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  hexdsp(276, a1 + 64);
  v3 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, a1 + 64);
  v3(276, a1 + 48);
  v4 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(276, a1 + 48);
  return v4(276, a1 + 32);
}
