const char *__fastcall sub_11BA9E0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rax
  const char *v4; // rbx
  size_t v5; // rbp
  size_t v6; // rax
  const char *v8; // rdi

  v2 = (_QWORD *)a2[1];
  v3 = (_DWORD *)(a2[4] + 80LL * (unsigned int)(*(_DWORD *)(a1 + 40) - 1));
  v4 = (const char *)(*v2 + (unsigned int)v3[1]);
  if ( !*v3 )
  {
    v5 = 0;
    if ( !v4 )
      return v4;
    goto LABEL_3;
  }
  v8 = (const char *)(*(unsigned int *)(a2[2] + 4LL * (unsigned int)(*v3 + 1)) + *v2);
  if ( !v8 )
  {
    v5 = 0;
    if ( !v4 )
    {
      v5 = 0;
      return &v4[v5];
    }
    goto LABEL_3;
  }
  v5 = (unsigned int)j__strlen(v8);
  v6 = 0;
  if ( v4 )
LABEL_3:
    v6 = strlen(v4);
  if ( v6 < v5 )
  {
    v4 += v6;
    return v4;
  }
  return &v4[v5];
}
