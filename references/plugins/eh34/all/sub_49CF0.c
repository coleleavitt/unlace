__int64 __fastcall sub_49CF0(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, __int64, __int64); // rax
  __int64 v5; // rbp
  void (__fastcall *v6)(__int64, __int64, __int64); // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rbp
  void (__fastcall *v12)(__int64, __int64, __int64); // rax
  __int64 v13; // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v3 = hexdsp(129, 80);
  *(_QWORD *)(v3 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 72) = 0;
  v4 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
  v4(333, v3, a1);
  *(_DWORD *)v3 = 4;
  if ( *((_BYTE *)a2 + 16) )
  {
    v5 = *a2;
    v6 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(333, v3);
    v6(274, v3 + 32, v5);
    *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL) += a2[1];
  }
  else
  {
    v8 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(333, v3);
    v9 = v8(129, 24);
    v10 = *a2;
    v11 = v9;
    v12 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 24);
    v12(273, v11, v10);
    v13 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 16) = -1;
    *(_QWORD *)(v13 + 8) += a2[1];
    *(_BYTE *)(v3 + 32) = 10;
    *(_QWORD *)(v3 + 40) = v11;
  }
  *(_DWORD *)(v3 + 36) = 8;
  return v3;
}
