_DWORD *__fastcall sub_363E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  _QWORD *v7; // rax
  __int64 v8; // rbp
  _DWORD *v9; // rbx
  _QWORD *v10; // r15
  _QWORD *v11; // r13
  void (__fastcall *v12)(__int64, _DWORD *, __int64); // rax
  void (__fastcall *v13)(__int64, _QWORD *, int *); // rax
  void (__fastcall *v14)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v15)(__int64, int *); // rax
  int vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars4; // [rsp+4h] [rbp+4h]
  __int64 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  v4 = *(_DWORD *)(a3 + 68);
  vars18 = __readfsqword(0x28u);
  vars0 = 4;
  vars8 = a3;
  vars4 = v4;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v7 = (_QWORD *)hexdsp(129, 80);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = v7;
  v10 = v7 + 4;
  v11 = v7 + 6;
  v7[5] = 0;
  v7[4] = 0xFFFFFFFF00000000LL;
  v7[6] = 0xFFFFFFFF00000000LL;
  v7[7] = 0;
  v7[8] = 0xFFFFFFFF00000000LL;
  v7[9] = 0;
  v12 = (void (__fastcall *)(__int64, _DWORD *, __int64))get_hexdsp(129, 80);
  v12(333, v9, v8);
  *v9 = a2;
  v13 = (void (__fastcall *)(__int64, _QWORD *, int *))get_hexdsp(333, v9);
  v13(274, v10, &vars0);
  v14 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(274, v10);
  v14(274, v11, a4);
  v9[17] = vars4;
  v15 = (void (__fastcall *)(__int64, int *))get_hexdsp(274, v11);
  v15(276, &vars0);
  return v9;
}
