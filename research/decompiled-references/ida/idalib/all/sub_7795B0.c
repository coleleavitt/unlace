void *__fastcall sub_7795B0(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r12
  char v7; // bp
  void *result; // rax

  if ( a3 != a4 )
  {
    v4 = *a2 + 9 * a3;
    v5 = 9 * a4 + *a2;
    v6 = *(_QWORD *)v4;
    v7 = *(_BYTE *)(v4 + 8);
    if ( a3 < a4 )
      result = memmove((void *)v4, (const void *)(v4 + 9), 9 * (a4 - a3));
    else
      result = memmove((void *)(v5 + 9), (const void *)(9 * a4 + *a2), 9 * (a3 - a4));
    *(_QWORD *)v5 = v6;
    *(_BYTE *)(v5 + 8) = v7;
  }
  return result;
}
