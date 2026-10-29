__int64 __fastcall sub_6CA1E0(__int64 *a1, const char *a2)
{
  __int64 result; // rax
  const char *v3; // rdx
  char *v4; // rbp
  size_t v6; // r12
  size_t v7; // rax
  void *v8; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  size_t v14; // r13
  void *v15; // rax

  LOBYTE(result) = *a2;
  if ( !*a2 )
    return 0;
  v3 = a2;
  v4 = (char *)a2;
  while ( (unsigned __int8)result > 0x1Fu )
  {
    result = *(unsigned __int8 *)++v3;
    if ( !(_BYTE)result )
      return result;
  }
  v6 = 0;
  if ( a2 )
  {
    v7 = strlen(a2);
    v6 = v7;
    if ( v7 )
    {
      v14 = v7 + 1;
      v15 = (void *)qvector_reserve(a1, 0, v7 + 1, 1);
      a1[1] = v14;
      *a1 = (__int64)v15;
      memmove(v15, a2, v6);
      *(_BYTE *)(*a1 + v6) = 0;
      v6 = a1[1];
      v4 = (char *)*a1;
    }
    else
    {
      v4 = nullptr;
    }
  }
LABEL_8:
  while ( v6 <= 1 )
  {
    while ( v4 )
    {
LABEL_10:
      a1[1] = 0;
      v8 = v4;
      v4 = nullptr;
      qfree(v8);
      v6 = a1[1];
      *a1 = 0;
      a1[2] = 0;
      if ( v6 > 1 )
        goto LABEL_11;
    }
  }
LABEL_11:
  v9 = v6 - 1;
  while ( (unsigned __int8)v4[v6 - 2] <= 0x1Fu )
  {
    if ( v9 > 1 )
    {
      if ( a1[2] < (unsigned __int64)v9 )
      {
        v13 = qvector_reserve(a1, v4, v6 - 1, 1);
        *a1 = v13;
        v4 = (char *)v13;
      }
      a1[1] = v9;
      v4[v6 - 2] = 0;
      v6 = a1[1];
      v4 = (char *)*a1;
      goto LABEL_8;
    }
    if ( v4 )
      goto LABEL_10;
  }
  v10 = 0;
  do
  {
    v11 = (_BYTE *)(v10 + *a1);
    if ( *v11 <= 0x1Fu )
      *v11 = 95;
    v12 = a1[1];
    ++v10;
  }
  while ( v12 && v10 < v12 - 1 );
  return 1;
}
