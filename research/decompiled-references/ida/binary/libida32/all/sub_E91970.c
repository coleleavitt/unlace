void *__fastcall sub_E91970(__int64 a1, const void *a2, __int64 a3)
{
  size_t v3; // rdx
  void *result; // rax

  v3 = 8 * a3;
  if ( v3 )
    return memmove((void *)(a1 + 8LL * *(unsigned int *)(a1 + 16) + 64), a2, v3);
  return result;
}

