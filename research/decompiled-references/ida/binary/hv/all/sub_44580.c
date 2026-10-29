void *__fastcall sub_44580(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  size_t v3; // rax
  const char *v4; // rbp
  size_t v5; // rdx
  _BYTE v7[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned int *)(a1 + 12);
  v8[0] = __readfsqword(0x28u);
  v3 = sub_93A50(v7, v8, v2) - (_QWORD)v7;
  if ( v3 )
    sub_3DC50(a2, v7, v3);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v4 = *(const char **)(a1 + 16);
  if ( v4 )
  {
    v5 = strlen(v4) + 1;
  }
  else
  {
    v5 = 1;
    v4 = "";
  }
  return sub_3DC50(a2, v4, v5);
}

