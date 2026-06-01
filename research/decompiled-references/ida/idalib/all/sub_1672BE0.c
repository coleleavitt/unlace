void *__fastcall sub_1672BE0(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  const void *v5; // rsi

  v2 = (void *)a2;
  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1 + 8 * v3;
  v5 = (const void *)(a2 + 8);
  if ( v5 != (const void *)v4 )
  {
    v2 = memmove(v2, v5, v4 - (_QWORD)v5);
    LODWORD(v3) = *(_DWORD *)(a1 + 8);
  }
  *(_DWORD *)(a1 + 8) = v3 - 1;
  return v2;
}
