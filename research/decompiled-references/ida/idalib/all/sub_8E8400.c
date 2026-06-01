unsigned __int64 __fastcall sub_8E8400(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi
  const char *v7; // rsi
  const char *v8; // rsi
  size_t v9; // rax
  _BYTE v11[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v12[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8) == 0;
  v12[0] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = *(const char **)a1;
  sub_649F10(a2, v4);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v5 = *(const char **)(a1 + 24);
  sub_649F10(a2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v6 = *(const char **)(a1 + 48);
  sub_649F10(a2, v6);
  v7 = haystack;
  if ( *(_QWORD *)(a1 + 80) )
    v7 = *(const char **)(a1 + 72);
  sub_649F10(a2, v7);
  v8 = haystack;
  if ( *(_QWORD *)(a1 + 104) )
    v8 = *(const char **)(a1 + 96);
  sub_649F10(a2, v8);
  v9 = pack_dq(v11, v12, *(_QWORD *)(a1 + 120)) - (_QWORD)v11;
  if ( v9 )
    sub_8D77E0(a2, v11, v9);
  return sub_3A0970(a2, *(unsigned __int8 *)(a1 + 128));
}
