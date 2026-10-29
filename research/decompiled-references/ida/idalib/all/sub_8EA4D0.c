unsigned __int64 __fastcall sub_8EA4D0(__int64 a1, __int64 *a2)
{
  size_t v3; // rax
  size_t v4; // rax
  const char *v5; // rsi
  const char *v6; // rsi
  _BYTE v8[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v9[0] = __readfsqword(0x28u);
  sub_3A0970(a2, *(_DWORD *)a1);
  sub_3A0970(a2, *(_DWORD *)(a1 + 4));
  v3 = pack_dq(v8, v9, *(_QWORD *)(a1 + 8)) - (_QWORD)v8;
  if ( v3 )
    sub_8D77E0(a2, v8, v3);
  v4 = pack_dq(v8, v9, *(_QWORD *)(a1 + 16)) - (_QWORD)v8;
  if ( v4 )
    sub_8D77E0(a2, v8, v4);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v5 = *(const char **)(a1 + 24);
  sub_649F10(a2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v6 = *(const char **)(a1 + 48);
  sub_649F10(a2, v6);
  sub_3A0970(a2, *(_DWORD *)(a1 + 72));
  return sub_3A0970(a2, *(_DWORD *)(a1 + 76));
}
