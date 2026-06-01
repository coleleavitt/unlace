__int64 __fastcall sub_8B85E0(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  __int64 v4; // rbp

  v4 = 4 * a4;
  memcpy(a3, *(const void **)(a1 + 8), 4 * a4);
  *(_QWORD *)(a1 + 8) += v4;
  return -1;
}
