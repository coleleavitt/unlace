void *__fastcall sub_2205510(__int64 a1, const void **a2)
{
  void *v2; // rax
  __int64 v3; // rdx

  v2 = (void *)operator new[](8 * (((unsigned __int64)*(unsigned int *)(a1 + 8) + 63) >> 6));
  v3 = *(unsigned int *)(a1 + 8);
  *(_QWORD *)a1 = v2;
  return memcpy(v2, *a2, 8 * ((unsigned __int64)(v3 + 63) >> 6));
}
