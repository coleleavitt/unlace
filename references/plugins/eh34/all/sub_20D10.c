__int64 __fastcall sub_20D10(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r12
  void (__fastcall *v7)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v8; // r15
  void (__fastcall *v9)(__int64, __int64 *, __int64, __int64); // rax
  __int64 result; // rax
  void (__fastcall *v11)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v12; // r14
  void (__fastcall *v13)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rcx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rcx
  void (__fastcall *hexdsp)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v19; // r14
  void (__fastcall *v20)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64, __int64, __int64); // r8
  __int64 v25; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a3 + 32);
  switch ( *a4 )
  {
    case 0:
      hexdsp = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(a1, a2);
      hexdsp(418, &v25, a1, v4);
      v19 = v25;
      v20 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(418, &v25);
      v20(417, &v25, a1, v19);
      v21 = v25;
      v22 = *(_QWORD *)(a2 + 56);
      v23 = sub_6DB50(v4, v25);
      v24 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))get_hexdsp(v4, v21);
      result = v24(364, a2, v23, v22);
      break;
    case 1:
    case 4:
      v11 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(a1, a2);
      v11(418, &v25, a1, v4);
      v12 = v25;
      v13 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(418, &v25);
      v13(417, &v25, a1, v12);
      result = sub_6DD00(a1, *(unsigned int *)(*(_QWORD *)(a2 + 8) + 72LL), v25, v4);
      break;
    case 2:
      v14 = *(_QWORD *)(a2 + 56);
      v15 = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
      result = v15(287, v14 + 32, v4);
      break;
    case 3:
      v7 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(a1, a2);
      v7(418, &v25, a1, v4);
      v8 = v25;
      v9 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(418, &v25);
      v9(417, &v25, a1, v8);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 56LL) + 24LL) + 4LL * (int)a4[1]) = *(_DWORD *)(sub_6DD00(a1, (unsigned int)(*(_DWORD *)(a1 + 64) - 1), v25, v4) + 72);
      goto LABEL_3;
    case 5:
      v16 = *(_QWORD *)(a2 + 56);
      v17 = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
      result = v17(287, v16 + 64, v4);
      break;
    default:
LABEL_3:
      result = v26 - __readfsqword(0x28u);
      break;
  }
  return result;
}
