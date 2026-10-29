int __fastcall sub_2240370(__int64 a1, char *a2, unsigned int a3)
{
  return snprintf(
           a2,
           a3,
           *(const char **)(a1 + 8),
           *(unsigned int *)(a1 + 48),
           *(_QWORD *)(a1 + 40),
           *(unsigned int *)(a1 + 32),
           *(_QWORD *)(a1 + 24),
           *(_QWORD *)(a1 + 16));
}
