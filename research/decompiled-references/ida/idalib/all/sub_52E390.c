__int64 __fastcall sub_52E390(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // r14d
  const char *v6; // rax
  const char *v7; // r12
  size_t v8; // rax
  size_t v9; // r15
  void *v11; // rdi
  size_t v12; // rdx
  __int64 v13; // rax
  size_t v14; // [rsp+8h] [rbp-40h]

  v3 = a3;
  v6 = (const char *)sub_64DFD0(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 1672LL), *(_QWORD *)(a1 + 40), a3, 0);
  if ( !v6 )
    return 0;
  if ( a2 )
  {
    v7 = v6;
    v8 = strlen(v6);
    v9 = v8;
    if ( v8 )
    {
      v11 = (void *)*a2;
      v12 = v8 + 1;
      if ( a2[2] < v8 + 1 )
      {
        v14 = v8 + 1;
        v13 = qvector_reserve(a2, *a2, v12, 1);
        v12 = v14;
        *a2 = v13;
        v11 = (void *)v13;
      }
      a2[1] = v12;
      memmove(v11, v7, v9);
      *(_BYTE *)(*a2 + v9) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    if ( (unsigned int)get_alias_target(*(_QWORD *)(a1 + 40), v3) != a3 )
      sub_35A910(a2);
  }
  return 1;
}
