__int64 __fastcall sub_48100(__int64 a1, _DWORD *a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 result; // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  *a2 += hexdsp(218, a1 + 400);
  v3 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(218, a1 + 400);
  a2[1] += v3(218, a1 + 416);
  v4 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(218, a1 + 416);
  a2[2] += v4(218, a1 + 336);
  v5 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(218, a1 + 336);
  a2[3] += v5(218, a1 + 352);
  v6 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(218, a1 + 352);
  a2[4] += v6(218, a1 + 432);
  v7 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(218, a1 + 432);
  a2[6] += v7(218, a1 + 448);
  v8 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(218, a1 + 448);
  a2[7] += v8(218, a1 + 368);
  v9 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(218, a1 + 368);
  result = v9(218, a1 + 384);
  a2[8] += result;
  return result;
}
