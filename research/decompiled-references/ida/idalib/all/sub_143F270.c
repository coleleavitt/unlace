int __fastcall sub_143F270(__int64 a1, char *a2, unsigned int a3)
{
  return snprintf(
           a2,
           a3,
           *(const char **)(a1 + 8),
           *(_QWORD *)(a1 + 24),
           *(unsigned int *)(a1 + 20),
           *(unsigned int *)(a1 + 16));
}
