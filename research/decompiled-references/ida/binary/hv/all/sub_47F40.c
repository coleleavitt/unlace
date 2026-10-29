void *__fastcall sub_47F40(_QWORD *a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  const char *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  size_t v8; // rdx
  const char *v9; // r15
  __int64 v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  _BYTE v14[10]; // [rsp+Eh] [rbp-4Ah] BYREF
  _QWORD v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a1[3] == 0;
  v15[0] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = (const char *)a1[2];
  sub_47F00(a2, v4);
  v5 = haystack;
  if ( a1[6] )
    v5 = (const char *)a1[5];
  v6 = 0;
  sub_47F00(a2, v5);
  v7 = a1[9];
  sub_45AA0(a2, v7);
  if ( v7 )
  {
    do
    {
      v9 = haystack;
      v10 = a1[8] + 24 * v6;
      if ( *(_QWORD *)(v10 + 8) )
        v9 = *(const char **)v10;
      if ( v9 )
      {
        v8 = strlen(v9) + 1;
      }
      else
      {
        v8 = 1;
        v9 = "";
      }
      ++v6;
      sub_3DC50(a2, v9, v8);
    }
    while ( v7 != v6 );
  }
  v11 = sub_93B90(v14, v15, a1[11] + 1LL) - (_QWORD)v14;
  if ( v11 )
    sub_3DC50(a2, v14, v11);
  sub_3DC50(a2, a1 + 12, 0x10u);
  v12 = sub_93B90(v14, v15, a1[14] + 1LL) - (_QWORD)v14;
  if ( v12 )
    sub_3DC50(a2, v14, v12);
  return sub_3DC50(a2, a1 + 15, 0x10u);
}

