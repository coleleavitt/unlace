_BYTE *__fastcall sub_9A9DA0(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v5; // r13
  unsigned int v6; // r15d
  __int64 v7; // r13
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rsi
  char v11; // bl
  _BYTE *result; // rax

  v5 = *(_QWORD *)(a1 + 184);
  v6 = *(_DWORD *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = *(_DWORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  v9 = *(_QWORD *)(a1 + 184);
  v10 = 2;
  if ( v8 >= v6 )
    v10 = v6 < v8 ? 3 : 0;
  v11 = a2(a3, v10);
  result = (_BYTE *)sub_A1A4E0(v9, 8);
  *result = v11;
  return result;
}

