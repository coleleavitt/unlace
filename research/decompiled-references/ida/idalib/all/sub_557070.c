__int64 __fastcall sub_557070(__int64 a1, __int64 *a2, unsigned int a3)
{
  const char *numbered_type_name; // rbx
  __int64 result; // rax
  size_t v5; // rax
  size_t v6; // r12
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax

  numbered_type_name = (const char *)get_numbered_type_name(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL), a3);
  result = 0;
  if ( numbered_type_name && *numbered_type_name )
  {
    v5 = strlen(numbered_type_name);
    v6 = v5;
    if ( v5 )
    {
      v7 = (void *)*a2;
      v8 = v5 + 1;
      if ( a2[2] < v5 + 1 )
      {
        v9 = qvector_reserve(a2, *a2, v5 + 1, 1);
        *a2 = v9;
        v7 = (void *)v9;
      }
      a2[1] = v8;
      memmove(v7, numbered_type_name, v6);
      *(_BYTE *)(*a2 + v6) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    return 1;
  }
  return result;
}
