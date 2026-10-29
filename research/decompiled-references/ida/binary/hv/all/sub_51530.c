unsigned __int64 __fastcall sub_51530(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  bool v3; // zf
  size_t v5; // rdx
  const char *v6; // rsi
  const char *v7; // r12
  size_t v8; // rdx
  const char *v9; // rsi
  size_t v10; // rax
  _BYTE v12[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v13[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 8) == 0;
  v13[0] = __readfsqword(0x28u);
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
  v6 = v2;
  v7 = haystack;
  sub_3DC50(a2, v6, v5);
  if ( *(_QWORD *)(a1 + 32) )
    v7 = *(const char **)(a1 + 24);
  if ( v7 )
  {
    v8 = strlen(v7) + 1;
  }
  else
  {
    v8 = 1;
    v7 = "";
  }
  sub_3DC50(a2, v7, v8);
  v9 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v9 = *(const char **)(a1 + 48);
  sub_47F00(a2, v9);
  v10 = sub_93B90(v12, v13, *(_QWORD *)(a1 + 72)) - (_QWORD)v12;
  if ( v10 )
    sub_3DC50(a2, v12, v10);
  return v13[0] - __readfsqword(0x28u);
}

