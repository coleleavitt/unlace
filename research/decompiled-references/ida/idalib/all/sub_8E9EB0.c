unsigned __int64 __fastcall sub_8E9EB0(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  bool v3; // zf
  size_t v5; // rdx
  const char *v6; // rsi
  const char *v7; // rsi
  size_t v8; // rax
  _BYTE v10[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v11[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 8) == 0;
  v11[0] = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)a1;
  if ( v2 )
  {
    v5 = strlen(v2) + 1;
  }
  else
  {
    v5 = 1;
    v2 = &byte_22F0C30;
  }
  sub_8D77E0(a2, v2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v6 = *(const char **)(a1 + 24);
  sub_649F10(a2, v6);
  v7 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v7 = *(const char **)(a1 + 48);
  sub_649F10(a2, v7);
  v8 = pack_dq(v10, v11, *(_QWORD *)(a1 + 72)) - (_QWORD)v10;
  if ( v8 )
    sub_8D77E0(a2, v10, v8);
  sub_3A0970(a2, *(_DWORD *)(a1 + 80));
  return sub_3A0970(a2, *(_DWORD *)(a1 + 84));
}
