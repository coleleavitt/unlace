__int64 __fastcall sub_9C9110(const char **a1, __int64 a2, __int64 a3)
{
  const char **v3; // r13
  const char **v5; // rbx
  const char *v6; // rbp
  size_t v7; // rax

  v3 = &a1[a2];
  if ( v3 == a1 )
    return 0;
  v5 = a1;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 )
      break;
    if ( !*(_QWORD *)(a3 + 8) )
      return 1;
LABEL_7:
    if ( v3 == ++v5 )
      return 0;
  }
  v7 = strlen(*v5);
  if ( *(_QWORD *)(a3 + 8) != v7 || v7 && memcmp(v6, *(const void **)a3, v7) )
    goto LABEL_7;
  return 1;
}

