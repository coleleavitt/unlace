__int64 __fastcall sub_6DD00(__int64 a1, const char *a2, const char *a3, __int64 a4)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  __int64 v7; // rax
  const char *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbp
  void (__fastcall *v14)(__int64, __int64, __int64, __int64); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  v7 = hexdsp(405, a1, (unsigned int)a2);
  v8 = a3;
  v9 = a4;
  *(_QWORD *)(v7 + 32) = a3;
  v10 = v7;
  *(_DWORD *)(v7 + 76) = 0;
  *(_QWORD *)(v7 + 40) = -1;
  *(_DWORD *)(v7 + 24) = 130;
  v11 = sub_6DB50(a4, a3);
  v12 = *(_QWORD *)(v10 + 56);
  v13 = v11;
  v14 = (void (__fastcall *)(__int64, __int64, __int64, __int64))get_hexdsp(v9, v8);
  v14(364, v10, v13, v12);
  return v10;
}
