__int64 __fastcall sub_384420(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  const char *v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r12
  void *v9; // rdi
  size_t v10; // r13
  __int64 v11; // rax

  v3 = *(_QWORD *)(a2 + 48);
  if ( !v3 )
    return 0;
  v4 = (const char *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 16LL))(v3, 0);
  v5 = v4;
  if ( v4 && (v6 = strlen(v4), (v7 = v6) != 0) )
  {
    v9 = (void *)*a1;
    v10 = v6 + 1;
    if ( a1[2] < v6 + 1 )
    {
      v11 = qvector_reserve(a1, *a1, v6 + 1, 1);
      *a1 = v11;
      v9 = (void *)v11;
    }
    a1[1] = v10;
    memmove(v9, v5, v7);
    *(_BYTE *)(*a1 + v7) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  return 1;
}
