_BYTE *__fastcall unpack_ds(const void **a1, unsigned __int64 a2, char a3)
{
  size_t v4; // rbp
  char *v5; // rax
  char *v6; // r14
  void *v7; // rax
  _BYTE *result; // rax

  v4 = (unsigned int)unpack_dd(a1);
  v5 = (char *)*a1;
  v6 = (char *)*a1 + v4;
  if ( a2 < (unsigned __int64)v6 || v6 < v5 || a3 && (!v4 || !*v5) )
    return nullptr;
  v7 = (void *)qalloc(v4 + 1);
  if ( !v7 )
    sub_3B74D0((int)"unpack_ds");
  result = memcpy(v7, *a1, v4);
  result[v4] = 0;
  *a1 = v6;
  return result;
}

