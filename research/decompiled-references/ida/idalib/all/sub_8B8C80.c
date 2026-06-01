void *__fastcall sub_8B8C80(_QWORD *a1, __int64 a2)
{
  void *v2; // rcx
  __int64 v3; // rax

  if ( a1[11] == a2 )
    return (void *)a2;
  v2 = memmove((void *)a2, (const void *)(a2 + 24), a1[2] + 24LL * a1[3] - a2 - 24);
  v3 = a1[3] - 1LL;
  a1[3] = v3;
  a1[11] = a1[2] + 24 * v3;
  return v2;
}
