__int64 __fastcall sub_5E8310(__int64 a1)
{
  const char *v1; // rbp
  __int64 v2; // r12
  size_t v3; // rbx
  void *v4; // rax
  _BYTE *v5; // rax

  sub_5E8170((_QWORD *)a1, *(const char **)(a1 + 560));
  v1 = *(const char **)(a1 + 608);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = strlen(v1);
  v4 = (void *)qalloc_or_throw(v3 + 1);
  v5 = memcpy(v4, v1, v3);
  v5[v3] = 0;
  *(_QWORD *)(v2 + 72) = v5;
  return 0;
}
