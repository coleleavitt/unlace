__int64 __fastcall sub_8B85A0(__int64 a1, __int64 a2, const void *a3, __int64 a4)
{
  __int64 v4; // rbp

  v4 = 4 * a4;
  memcpy(*(void **)(a1 + 8), a3, 4 * a4);
  *(_QWORD *)(a1 + 8) += v4;
  return -1;
}
