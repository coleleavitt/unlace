__int64 __fastcall sub_515F60(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // ebp
  const char *v5; // rax
  const char *v6; // r13
  size_t v7; // rax
  size_t v8; // r14
  void *v10; // rdi
  size_t v11; // r15
  __int64 v12; // rax

  v3 = a3;
  v5 = (const char *)sub_6309B0(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 1480LL), *(_QWORD *)(a1 + 40), a3, 0);
  if ( !v5 )
    return 0;
  if ( a2 )
  {
    v6 = v5;
    v7 = strlen(v5);
    v8 = v7;
    if ( v7 )
    {
      v10 = (void *)*a2;
      v11 = v7 + 1;
      if ( a2[2] < v7 + 1 )
      {
        v12 = qvector_reserve(a2, *a2, v7 + 1, 1);
        *a2 = v12;
        v10 = (void *)v12;
      }
      a2[1] = v11;
      memmove(v10, v6, v8);
      *(_BYTE *)(*a2 + v8) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    if ( v3 != (unsigned int)get_alias_target(*(_QWORD *)(a1 + 40), v3) )
      sub_357520(a2);
  }
  return 1;
}

