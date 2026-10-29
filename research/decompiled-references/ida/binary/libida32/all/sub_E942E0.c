char *__fastcall sub_E942E0(__int64 a1, char *a2)
{
  char *v2; // rcx
  size_t v3; // rbx

  v2 = a2;
  v3 = 8LL * *(_QWORD *)(a1 + 8);
  if ( v3 )
    v2 = (char *)memmove(a2, *(const void **)a1, v3);
  return &v2[v3];
}

