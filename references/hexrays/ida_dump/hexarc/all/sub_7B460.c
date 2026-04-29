__int64 __fastcall sub_7B460(__int64 a1, __int64 *a2)
{
  size_t v3; // rax
  char *v4; // rsi
  char *v5; // rsi
  _BYTE v7[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v8[4]; // [rsp+18h] [rbp-20h] BYREF

  v8[0] = __readfsqword(0x28u);
  sub_7B350(a2);
  v3 = pack_dq(v7, v8, *(_QWORD *)(a1 + 16) + 1 - a2[5]) - (_QWORD)v7;
  if ( v3 )
    sub_75940(a2, v7, v3);
  sub_792E0(a2, *(_DWORD *)(a1 + 24));
  v4 = (char *)s1;
  if ( *(_QWORD *)(a1 + 40) )
    v4 = *(char **)(a1 + 32);
  sub_79640(a2, v4);
  v5 = (char *)s1;
  if ( *(_QWORD *)(a1 + 64) )
    v5 = *(char **)(a1 + 56);
  sub_79640(a2, v5);
  sub_79750(a2, (_BYTE *)(a1 + 80));
  sub_792E0(a2, *(_DWORD *)(a1 + 88));
  sub_792E0(a2, *(_DWORD *)(a1 + 92));
  return sub_79340(a2, *(_QWORD *)(a1 + 96));
}
