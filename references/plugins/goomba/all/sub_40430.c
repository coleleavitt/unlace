__int64 __fastcall sub_40430(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  int v4; // r13d
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v8; // rbp
  void (__fastcall *v9)(__int64, __int64, __int64); // rax
  int v10; // eax
  void (__fastcall *v11)(__int64, __int64, __int64); // rax

  if ( *(_BYTE *)a2 != 9 )
    return 0;
  v3 = *(int *)(*(_QWORD *)(a2 + 8) + 16LL);
  if ( v3 >= *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) )
    return 0xFFFFFFFFLL;
  *(_BYTE *)a2 = 4;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = **(_QWORD **)(a1 + 48) + 16 * v3;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v8 = hexdsp(129, 80);
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  v9 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
  v9(333, v8, v5);
  v10 = 4;
  if ( v4 != *(_DWORD *)(v6 + 4) )
    v10 = (v4 < *(_DWORD *)(v6 + 4)) + 9;
  *(_DWORD *)v8 = v10;
  v11 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(333, v8);
  v11(274, v8 + 32, v6);
  *(_DWORD *)(v8 + 68) = v4;
  result = 0;
  *(_QWORD *)(a2 + 8) = v8;
  return result;
}
