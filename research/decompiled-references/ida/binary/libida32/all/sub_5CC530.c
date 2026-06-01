__int64 __fastcall sub_5CC530(_QWORD *a1)
{
  const char *v1; // rsi
  const char *v2; // rbp
  __int64 v3; // r12
  size_t v4; // rbx
  void *v5; // rax
  _BYTE *v6; // rax

  v1 = (const char *)a1[69];
  sub_5CC390(a1, v1);
  v2 = (const char *)a1[75];
  v3 = a1[15];
  v4 = strlen(v2);
  v5 = (void *)qalloc_or_throw(v4 + 1, v1);
  v6 = memcpy(v5, v2, v4);
  v6[v4] = 0;
  *(_QWORD *)(v3 + 72) = v6;
  return 0;
}

