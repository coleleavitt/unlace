__int64 __fastcall sub_8EA950(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  size_t v5; // rax
  size_t v6; // rax
  _BYTE v8[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 8) == 0;
  v9[0] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = *(const char **)a1;
  sub_649F10(a2, v4);
  sub_8D77E0(a2, (const void *)(a1 + 24), 0x10u);
  v5 = pack_dq(v8, v9, *(_QWORD *)(a1 + 40) + 1LL) - (_QWORD)v8;
  if ( v5 )
    sub_8D77E0(a2, v8, v5);
  v6 = pack_dq(v8, v9, *(_QWORD *)(a1 + 48)) - (_QWORD)v8;
  if ( v6 )
    sub_8D77E0(a2, v8, v6);
  sub_3A0970(a2, *(_DWORD *)(a1 + 56));
  sub_3A0970(a2, *(_DWORD *)(a1 + 60));
  sub_3A0970(a2, *(_DWORD *)(a1 + 64));
  sub_3A0970(a2, *(_DWORD *)(a1 + 68));
  return sub_8D6E80(a2, *(_BYTE *)(a1 + 72));
}
