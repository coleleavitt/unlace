__int64 __fastcall sub_11CBE0(_QWORD *a1, __int64 a2, char a3)
{
  size_t v4; // rbx
  const char *v5; // rax
  const char *v6; // r12
  unsigned int v7; // ebx
  char *s2; // [rsp+0h] [rbp-48h]
  void *v10; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v10 = nullptr;
  if ( v4 )
  {
    v10 = (void *)qalloc_or_throw();
    memcpy(v10, *(const void **)a2, v4);
  }
  v5 = s1;
  if ( v4 )
    v5 = (const char *)v10;
  s2 = (char *)v5;
  while ( 1 )
  {
    v7 = sub_9DA30(a2, 0, (__int64)"Enter snippet name");
    if ( !(_BYTE)v7 )
      break;
    if ( *(_QWORD *)(a2 + 8) <= 1u || (v6 = *(const char **)a2, !a3) && !strcmp(*(const char **)a2, s2) )
    {
      v7 = 0;
      break;
    }
    if ( !(*(__int64 (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a1 + 16LL))(*a1, v6) )
      break;
    sub_92120((__int64)"Snippet '%s' already exists!", v6);
  }
  if ( v10 )
    qfree();
  return v7;
}

