__int64 __fastcall sub_15D62E0(_DWORD *a1, __int64 *a2, int a3, const char **a4)
{
  unsigned int v4; // ebx
  const char *v6; // rbp
  __int64 v7; // r12
  size_t v8; // rax

  v4 = 0;
  if ( *a1 != a3 )
    return v4;
  v6 = *a4;
  v7 = *a2;
  if ( *a4 )
  {
    v8 = strlen(*a4);
    if ( *(_QWORD *)(v7 + 8) == v8 )
    {
      if ( v8 )
      {
        LOBYTE(v4) = memcmp(v6, *(const void **)v7, v8) == 0;
        return v4;
      }
      return 1;
    }
    return v4;
  }
  LOBYTE(v4) = *(_QWORD *)(v7 + 8) == 0;
  return v4;
}
