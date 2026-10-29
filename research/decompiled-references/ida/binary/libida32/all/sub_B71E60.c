int __fastcall sub_B71E60(__int64 a1, char *a2, unsigned int a3)
{
  return snprintf(
           a2,
           a3,
           *(const char **)(a1 + 8),
           *(unsigned int *)(a1 + 20),
           *(unsigned __int16 *)(a1 + 18),
           *(unsigned __int16 *)(a1 + 16));
}

