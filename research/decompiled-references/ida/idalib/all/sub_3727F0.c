__int64 __fastcall sub_3727F0(__int64 a1, __int64 a2)
{
  const char *numbered_type_name; // rax
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r12
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax

  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  numbered_type_name = (const char *)get_numbered_type_name(0, *(unsigned int *)(a1 + 8));
  if ( numbered_type_name && (v3 = numbered_type_name, v4 = strlen(numbered_type_name), (v5 = v4) != 0) )
  {
    v7 = *(void **)(a2 + 8);
    v8 = v4 + 1;
    if ( *(_QWORD *)(a2 + 24) < v4 + 1 )
    {
      v9 = qvector_reserve(a2 + 8, *(_QWORD *)(a2 + 8), v8, 1);
      *(_QWORD *)(a2 + 8) = v9;
      v7 = (void *)v9;
    }
    *(_QWORD *)(a2 + 16) = v8;
    memmove(v7, v3, v5);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 16) = 0;
    return 0;
  }
}
