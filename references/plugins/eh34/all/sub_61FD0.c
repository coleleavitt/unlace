_QWORD *__fastcall sub_61FD0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned int v9; // r15d
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  void (__fastcall *v14)(__int64, _QWORD *, __int64, __int64); // rax
  __int64 v15; // rax
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_BYTE *)(a1 + 272) == 0;
  v16[1] = __readfsqword(0x28u);
  if ( !v2 )
  {
    v4 = *(_QWORD *)(a1 + 216);
    *(_BYTE *)(a1 + 272) = 0;
    if ( *(_BYTE *)(v4 + 433) )
    {
      v6 = *(_QWORD *)(a2 + 16);
      v7 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v6 + 40) = v7;
      v8 = *(_QWORD *)(a2 + 8);
      v9 = *(_DWORD *)(v8 + 64);
      hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, (const char *)a2);
      v11 = (const char *)v8;
      v12 = hexdsp(405, v8, v9);
      *(_QWORD *)(v12 + 32) = v7;
      *(_DWORD *)(v12 + 24) = 1024;
      *(_QWORD *)(v12 + 40) = -1;
      v13 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 16) = v12;
      v14 = (void (__fastcall *)(__int64, _QWORD *, __int64, __int64))get_hexdsp(405, v11);
      v14(417, v16, v13, v7);
      v15 = v16[0];
      *(_DWORD *)(v6 + 24) |= 2u;
      *(_QWORD *)(v6 + 40) = -1;
      *(_QWORD *)(v6 + 32) = v15;
    }
  }
  return sub_61EE0((_QWORD *)a1, (_QWORD *)a2);
}
