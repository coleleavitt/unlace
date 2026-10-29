__int64 __fastcall sub_8267A0(__int64 a1, __int64 *a2, unsigned int a3)
{
  _QWORD *v3; // rax
  const char *v4; // rdi
  __int64 v5; // rax
  const char *v6; // rax
  const char *v7; // rbx
  size_t v8; // rax
  size_t v9; // r12
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v3 = *(_QWORD **)(a1 + 40);
  v4 = haystack;
  v5 = *v3 + 24LL * a3;
  if ( *(_QWORD *)(v5 + 8) )
    v4 = *(const char **)v5;
  v6 = (const char *)qbasename(v4);
  v7 = v6;
  if ( v6 && (v8 = strlen(v6), (v9 = v8) != 0) )
  {
    v11 = (void *)*a2;
    v12 = v8 + 1;
    if ( a2[2] < v8 + 1 )
    {
      v13 = qvector_reserve(a2, *a2, v8 + 1, 1);
      *a2 = v13;
      v11 = (void *)v13;
    }
    a2[1] = v12;
    memmove(v11, v7, v9);
    *(_BYTE *)(*a2 + v9) = 0;
    return 1;
  }
  else
  {
    a2[1] = 0;
    return 1;
  }
}

