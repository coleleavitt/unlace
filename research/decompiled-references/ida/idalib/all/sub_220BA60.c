void *__fastcall sub_220BA60(const void **a1, void *a2, unsigned int a3)
{
  const void *v4; // rsi

  v4 = a1;
  if ( *((_DWORD *)a1 + 2) > 0x40u )
    v4 = *a1;
  return memcpy(a2, v4, a3);
}
