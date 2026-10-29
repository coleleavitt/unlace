void *__fastcall sub_CE8850(void **a1, __int64 a2)
{
  void *result; // rax
  const void *v3; // rsi
  __int64 v4; // rdx

  result = (void *)*(unsigned int *)(a2 + 8);
  v3 = *(const void **)a2;
  if ( (unsigned int)result > 0x40 )
    return memcpy(*a1, v3, 8 * (((unsigned __int64)(unsigned int)result + 63) >> 6));
  v4 = 0;
  if ( (_DWORD)result )
    v4 = (__int64)((_QWORD)v3 << (64 - (unsigned __int8)result)) >> (64 - (unsigned __int8)result);
  *a1 = (void *)v4;
  return result;
}

