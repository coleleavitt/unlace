__int64 __fastcall sub_1B91590(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // r15
  unsigned __int8 v8; // dl
  int v9; // ebx
  char v10; // r14
  char v11; // r13
  char v12; // r13
  char v13; // dl
  __int64 v14; // [rsp+8h] [rbp-40h]

  v4 = (unsigned __int64)sub_1B90FD0(a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v6 = v4;
  v7 = sub_1B04070((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( !v7 )
    return 1;
  v8 = *(_BYTE *)(a2 + 28);
  v9 = *(_DWORD *)(a2 + 24);
  v10 = v8 & 1;
  v11 = v8 >> 1;
  result = sub_EEE9A0(32, *(_QWORD **)(*a1 + 248), 8u);
  v12 = v11 & 1;
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x6B;
  if ( unk_2CD7484 )
  {
    v14 = result;
    sub_EE9B50(107);
    result = v14;
  }
  v13 = *(_BYTE *)(result + 28);
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v6;
  *(_QWORD *)(result + 16) = v7;
  *(_DWORD *)(result + 24) = v9;
  *(_BYTE *)(result + 28) = (2 * v12) | v10 | v13 & 0xFC;
  return result;
}
