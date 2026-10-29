_BYTE *__fastcall sub_6905C0(void *src, size_t n)
{
  void *v2; // rax
  void *v3; // rcx
  _BYTE *result; // rax

  v2 = malloc(n + 1);
  if ( v2 )
  {
    v3 = v2;
  }
  else if ( n != -1 || (v3 = malloc(1u)) == nullptr )
  {
    sub_25AA9F0("Allocation failed");
  }
  result = memcpy(v3, src, n);
  result[n] = 0;
  return result;
}

