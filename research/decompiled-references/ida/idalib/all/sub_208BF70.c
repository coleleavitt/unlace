__int64 __fastcall sub_208BF70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  size_t v4; // rdx
  __int64 v5; // r12
  __int64 (__fastcall *v6)(__int64, __int64, size_t); // r13
  unsigned int v7; // ebx
  size_t v9; // r12
  char *v10; // r13
  const void *v11; // rbp

  v1 = sub_208D410(*(_QWORD *)(a1 + 16));
  v2 = sub_20922C0(v1);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0;
  v5 = v2;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, size_t))(*(_QWORD *)v2 + 24LL);
  if ( v3 )
    v4 = strlen(*(const char **)(a1 + 40));
  v7 = v6(v5, v3, v4);
  if ( (_BYTE)v7 )
    return v7;
  v9 = 0;
  v10 = off_2C8EF00[0];
  if ( off_2C8EF00[0] )
    v9 = strlen(off_2C8EF00[0]);
  v11 = *(const void **)(a1 + 40);
  if ( v11 )
  {
    if ( v9 == strlen((const char *)v11) )
    {
      if ( v9 )
      {
        LOBYTE(v7) = memcmp(v11, v10, v9) == 0;
        return v7;
      }
      return 1;
    }
    return v7;
  }
  LOBYTE(v7) = v9 == 0;
  return v7;
}
