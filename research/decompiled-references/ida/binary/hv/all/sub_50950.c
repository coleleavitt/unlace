unsigned __int64 __fastcall sub_50950(__int64 a1, __int64 *a2)
{
  size_t v3; // rax
  size_t v4; // rax
  const char *v5; // rsi
  const char *v6; // rsi
  _BYTE v8[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v9[0] = __readfsqword(0x28u);
  sub_45AA0(a2, *(_DWORD *)a1);
  sub_45AA0(a2, *(_DWORD *)(a1 + 4));
  v3 = sub_93B90(v8, v9, *(_QWORD *)(a1 + 8)) - (_QWORD)v8;
  if ( v3 )
    sub_3DC50(a2, v8, v3);
  v4 = sub_93B90(v8, v9, *(_QWORD *)(a1 + 16)) - (_QWORD)v8;
  if ( v4 )
    sub_3DC50(a2, v8, v4);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v5 = *(const char **)(a1 + 24);
  sub_47F00(a2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v6 = *(const char **)(a1 + 48);
  sub_47F00(a2, v6);
  sub_45AA0(a2, *(_DWORD *)(a1 + 72));
  return sub_45AA0(a2, *(_DWORD *)(a1 + 76));
}

