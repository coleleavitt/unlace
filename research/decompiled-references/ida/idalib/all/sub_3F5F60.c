__int64 __fastcall sub_3F5F60(__int64 a1, char *a2)
{
  char **v2; // rax
  __int64 v3; // rdx
  char **v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rsi
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // r12
  size_t v12; // rbp
  const char *v13; // rsi
  char *v14; // rbp
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v2 = *(char ***)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 136);
  v17 = __readfsqword(0x28u);
  v5 = &v2[v3];
  if ( v2 == v5 )
    goto LABEL_8;
  while ( *v2 != a2 )
  {
    if ( v5 == ++v2 )
      goto LABEL_8;
  }
  if ( v5 == v2 )
  {
LABEL_8:
    if ( *(char **)(a1 + 16) != a2 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      s1 = a2;
      if ( sub_7BF130(&s1, v8, a1 + 24) <= 0 )
        sub_35A790((char **)(a1 + 24));
      *(_QWORD *)(a1 + 16) = a2;
    }
    v9 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v9 = *(const char **)(a1 + 24);
    s1 = nullptr;
    v16 = 0;
    if ( v9 )
    {
      v10 = strlen(v9);
      v11 = v10 + 1;
      v12 = v10;
      v13 = v9;
      s1 = (char *)qvector_reserve(&s1, 0, v10 + 1, 1);
      *(_QWORD *)&v16 = v11;
      v6 = 0;
      memmove(s1, v13, v12);
      s1[v12] = 0;
      v14 = s1;
      if ( (unsigned __int64)v16 > 0xB )
      {
        v6 = 1;
        if ( strncmp(s1, "$ pv edges ", 0xBu) )
          LOBYTE(v6) = strncmp(v14, "$ pv nodes ", 0xBu) == 0;
      }
      if ( v14 )
      {
        *(_QWORD *)&v16 = 0;
        qfree(v14);
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 1;
  }
  return v6;
}
