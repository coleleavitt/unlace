void __fastcall sub_14A0F50(__int64 a1, __int64 a2, __m128i a3, double a4)
{
  __int64 v5; // rax
  int v6; // edi
  int v7; // eax
  __int64 v8; // rdi
  _QWORD savedregs[13]; // [rsp+0h] [rbp+0h] BYREF

  sub_1564820(savedregs, a1, *(unsigned int *)(a2 + 24), 1732);
  sub_AE9DF0((unsigned __int8 **)savedregs, a2, 0xAu);
  sub_AEA040((__int64)savedregs);
  sub_1564820(savedregs, a1, *(unsigned int *)(a1 + 16), 2038);
  sub_AE9DF0((unsigned __int8 **)savedregs, a2, 0xAu);
  sub_AEA040((__int64)savedregs);
  sub_1479990(*(_QWORD *)(a1 + 8), (const __m128i *)savedregs, 1u);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v7 = sub_13DC060(v6, 0, *(__int64 **)(v5 + 88), *(_QWORD *)(v5 + 56), a3, a4);
  v8 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 16) = v7;
  *(_WORD *)(a1 + 32) = 63;
  sub_1479990(v8, (const __m128i *)savedregs, 1u);
  *(_WORD *)(a1 + 32) = 25;
}
