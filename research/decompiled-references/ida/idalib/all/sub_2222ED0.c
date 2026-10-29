bool __fastcall sub_2222ED0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(unsigned int *)(a1 + 8);
  return v2 == *(_DWORD *)(a2 + 8) && memcmp(*(const void **)a1, *(const void **)a2, 4 * v2) == 0;
}
