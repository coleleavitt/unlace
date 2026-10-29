unsigned __int64 __fastcall sub_4F550(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  bool v3; // zf
  size_t v5; // rdx
  const char *v6; // rsi
  const char *v7; // rsi
  const char *v8; // rsi
  size_t v9; // rax
  _BYTE v11[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v12[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 8) == 0;
  v12[0] = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)a1;
  if ( v2 )
  {
    v5 = strlen(v2) + 1;
  }
  else
  {
    v5 = 1;
    v2 = "";
  }
  sub_3DC50(a2, v2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v6 = *(const char **)(a1 + 24);
  sub_47F00(a2, v6);
  v7 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v7 = *(const char **)(a1 + 48);
  sub_47F00(a2, v7);
  v8 = haystack;
  if ( *(_QWORD *)(a1 + 80) )
    v8 = *(const char **)(a1 + 72);
  sub_47F00(a2, v8);
  v9 = sub_93B90(v11, v12, *(_QWORD *)(a1 + 96)) - (_QWORD)v11;
  if ( v9 )
    sub_3DC50(a2, v11, v9);
  return v12[0] - __readfsqword(0x28u);
}

