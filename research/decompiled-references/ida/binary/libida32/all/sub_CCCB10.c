void *__fastcall sub_CCCB10(void **a1, __int64 a2)
{
  void *result; // rax
  void *v3; // rsi

  result = (void *)*(unsigned int *)(a2 + 8);
  v3 = *(void **)a2;
  if ( (unsigned int)result > 0x40 )
    return memcpy(*a1, v3, 8 * (((unsigned __int64)(unsigned int)result + 63) >> 6));
  *a1 = v3;
  return result;
}

