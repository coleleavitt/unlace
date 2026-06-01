void *__fastcall sub_7BD560(void *a1, size_t a2, size_t *a3, size_t a4)
{
  const void *v4; // rax
  size_t v5; // r8

  v4 = (const void *)*a3;
  v5 = a2 + *a3;
  if ( __CFADD__(a2, *a3) || a4 < v5 )
    return nullptr;
  *a3 = v5;
  return memcpy(a1, v4, a2);
}

