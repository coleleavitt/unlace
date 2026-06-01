__int64 __fastcall sub_81B20(__int64 a1, __int64 *a2)
{
  size_t v3; // rax
  char *v4; // rsi
  char *v5; // rsi
  _BYTE v7[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  sub_81A10(a2);
  v3 = pack_dq() - (_QWORD)v7;
  if ( v3 )
    sub_7BEC0(a2, v7, v3);
  sub_7F8E0(a2);
  v4 = (char *)s1;
  if ( *(_QWORD *)(a1 + 40) )
    v4 = *(char **)(a1 + 32);
  sub_7FC40(a2, v4);
  v5 = (char *)s1;
  if ( *(_QWORD *)(a1 + 64) )
    v5 = *(char **)(a1 + 56);
  sub_7FC40(a2, v5);
  sub_7FD50(a2, (_BYTE *)(a1 + 80));
  sub_7F8E0(a2);
  sub_7F8E0(a2);
  return sub_7F940(a2, *(_QWORD *)(a1 + 96));
}
