int __fastcall sub_5F81F0(__int64 a1, char *a2, unsigned int a3)
{
  return snprintf(
           a2,
           a3,
           *(const char **)(a1 + 8),
           *(_QWORD *)(a1 + 32),
           *(unsigned int *)(a1 + 28),
           *(unsigned int *)(a1 + 24),
           *(_QWORD *)(a1 + 16));
}

