unsigned __int64 __fastcall sub_51240(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi
  size_t v7; // rax
  size_t v8; // rax
  _BYTE v10[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v11[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 8) == 0;
  v11[0] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = *(const char **)a1;
  sub_47F00(a2, v4);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v5 = *(const char **)(a1 + 24);
  sub_47F00(a2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v6 = *(const char **)(a1 + 48);
  sub_47F00(a2, v6);
  v7 = sub_93B90(v10, v11, *(_QWORD *)(a1 + 72)) - (_QWORD)v10;
  if ( v7 )
    sub_3DC50(a2, v10, v7);
  v8 = sub_93B90(v10, v11, *(_QWORD *)(a1 + 80)) - (_QWORD)v10;
  if ( v8 )
    sub_3DC50(a2, v10, v8);
  sub_45AA0(a2, *(unsigned __int8 *)(a1 + 88));
  return sub_45AA0(a2, *(unsigned __int8 *)(a1 + 89));
}

