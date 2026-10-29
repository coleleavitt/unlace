__int64 __fastcall sub_5CCC50(__int64 a1)
{
  __int64 v2; // rax
  const char *v3; // rbp
  char *v4; // rax
  size_t v6; // rbp
  __int64 v7; // rdi
  char *v8; // r12
  __int64 v9; // rbx
  void *v10; // rax
  _BYTE *v11; // rax
  char *s; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  sub_5CC5E0((_QWORD *)a1);
  v2 = *(_QWORD *)(a1 + 120);
  s = nullptr;
  v3 = *(const char **)(v2 + 72);
  v13 = 0;
  v4 = strrchr(v3, 58);
  if ( v4 )
    v3 = v4 + 1;
  if ( (unsigned __int8)sub_5CC930(a1, (__int64 *)&s, v3, 0) )
  {
    qfree(*(void **)(*(_QWORD *)(a1 + 120) + 72LL));
    v6 = v13;
    v7 = 1;
    v8 = (char *)haystack;
    if ( (_QWORD)v13 )
    {
      v8 = s;
      v6 = strlen(s);
      v7 = v6 + 1;
    }
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 728) & 1) != 0 )
      goto LABEL_5;
    qfree(*(void **)(*(_QWORD *)(a1 + 120) + 72LL));
    v6 = *(_QWORD *)(a1 + 560);
    v7 = 1;
    v8 = (char *)haystack;
    if ( v6 )
    {
      v8 = *(char **)(a1 + 552);
      v6 = strlen(v8);
      v7 = v6 + 1;
    }
  }
  v9 = *(_QWORD *)(a1 + 120);
  v10 = (void *)qalloc_or_throw(v7, (const char *)&s);
  v11 = memcpy(v10, v8, v6);
  v11[v6] = 0;
  *(_QWORD *)(v9 + 72) = v11;
LABEL_5:
  if ( s )
  {
    *(_QWORD *)&v13 = 0;
    qfree(s);
  }
  return 0;
}

