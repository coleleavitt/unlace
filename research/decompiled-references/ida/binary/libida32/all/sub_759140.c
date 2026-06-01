void *__fastcall sub_759140(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // r12d
  char v7; // bp
  void *result; // rax

  if ( a3 != a4 )
  {
    v4 = *a2 + 5 * a3;
    v5 = 5 * a4 + *a2;
    v6 = *(_DWORD *)v4;
    v7 = *(_BYTE *)(v4 + 4);
    if ( a3 < a4 )
      result = memmove((void *)v4, (const void *)(v4 + 5), 5 * (a4 - a3));
    else
      result = memmove((void *)(v5 + 5), (const void *)(5 * a4 + *a2), 5 * (a3 - a4));
    *(_DWORD *)v5 = v6;
    *(_BYTE *)(v5 + 4) = v7;
  }
  return result;
}

