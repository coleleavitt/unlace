__int64 __fastcall sub_19C20(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  const void *v4; // r13
  void *v5; // rdi
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return sub_96250(a2);
  if ( a2 == (__int64 *)(v2 + 8) )
    return 1;
  v3 = *(_QWORD *)(v2 + 16);
  if ( v3 >= 2 )
  {
    v4 = *(const void **)(v2 + 8);
    v5 = (void *)*a2;
    if ( a2[2] < v3 )
    {
      v7 = sub_96080(a2, *a2, *(_QWORD *)(v2 + 16), 1);
      *a2 = v7;
      v5 = (void *)v7;
    }
    a2[1] = v3;
    memmove(v5, v4, v3 - 1);
    *(_BYTE *)(*a2 + v3 - 1) = 0;
    return 1;
  }
  a2[1] = 0;
  return 1;
}

