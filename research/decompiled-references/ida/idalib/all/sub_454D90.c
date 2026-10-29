void *__fastcall sub_454D90(_QWORD *a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r13
  __int64 v5; // rbp
  size_t v6; // r15
  size_t v7; // r14
  __int64 v8; // rax

  v3 = strlen(a2);
  v4 = v3;
  v5 = (a1[1] == 0) + a1[1] - 1LL;
  v6 = v3 + v5;
  v7 = v3 + (a1[1] == 0) + a1[1];
  if ( a1[2] < v7 )
    *a1 = qvector_reserve(a1, *a1, v3 + (a1[1] == 0) + a1[1], 1);
  v8 = *a1;
  a1[1] = v7;
  *(_BYTE *)(v8 + v6) = 0;
  return memmove((void *)(v5 + *a1), a2, v4);
}
