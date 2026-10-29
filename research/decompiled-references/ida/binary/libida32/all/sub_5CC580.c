__int64 __fastcall sub_5CC580(_QWORD *a1)
{
  const char *v1; // rbp
  __int64 v2; // r12
  size_t v3; // rbx
  void *v4; // rax
  _BYTE *v5; // rax

  *(_DWORD *)(a1[15] + 80LL) |= 1u;
  sub_5CC390(a1, "$");
  v1 = (const char *)a1[75];
  v2 = a1[15];
  v3 = strlen(v1);
  v4 = (void *)qalloc_or_throw(v3 + 1, "$");
  v5 = memcpy(v4, v1, v3);
  v5[v3] = 0;
  *(_QWORD *)(v2 + 72) = v5;
  return 0;
}

