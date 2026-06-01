unsigned __int64 __fastcall sub_FD3F00(const void *a1, size_t a2)
{
  __int64 v2; // r12
  char *v3; // rbx
  size_t v4; // rax
  size_t v5; // rdx
  void *v6; // r10
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // r14
  unsigned __int16 *v10; // r13
  const char *v11; // r8
  __int64 v12; // r12
  const char *v13; // rbp
  char *s1; // [rsp+10h] [rbp-48h]
  void *s1a; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v2 = 1123;
  v3 = (char *)&unk_2B4D8A0;
  while ( 1 )
  {
    v9 = v2 >> 1;
    v10 = (unsigned __int16 *)&v3[24 * (v2 >> 1)];
    v11 = &byte_2411C20[*v10];
    if ( !v11 )
    {
      v6 = nullptr;
      goto LABEL_6;
    }
    s1 = &byte_2411C20[*v10];
    v4 = strlen(v11);
    v5 = v4;
    v6 = (void *)v4;
    if ( a2 <= v4 )
      v5 = a2;
    if ( v5 )
    {
      v7 = s1;
      s1a = (void *)v4;
      v8 = memcmp(v7, a1, v5);
      v6 = s1a;
      if ( v8 )
        break;
    }
LABEL_6:
    if ( (void *)a2 != v6 && a2 > (unsigned __int64)v6 )
      goto LABEL_8;
LABEL_9:
    if ( v9 <= 0 )
      goto LABEL_15;
LABEL_10:
    v2 = v9;
  }
  if ( v8 < 0 )
  {
LABEL_8:
    v3 = (char *)(v10 + 12);
    v9 = v2 - v9 - 1;
    goto LABEL_9;
  }
  if ( v9 > 0 )
    goto LABEL_10;
LABEL_15:
  v12 = 0;
  if ( v3 == (char *)&unk_2B541E8 )
    return (v12 << 32) | v18 & 0xFFFFFF00FFFFFFFFLL;
  v13 = &byte_2411C20[*(unsigned __int16 *)v3];
  if ( !v13 )
  {
    if ( a2 )
      return (v12 << 32) | v18 & 0xFFFFFF00FFFFFFFFLL;
LABEL_22:
    v12 = 1;
    v18 = -1431655765 * (unsigned int)((v3 - (char *)&unk_2B4D8A0) >> 3);
    return (v12 << 32) | v18 & 0xFFFFFF00FFFFFFFFLL;
  }
  if ( a2 == strlen(v13) && (!a2 || !memcmp(v13, a1, a2)) )
    goto LABEL_22;
  return (v12 << 32) | v18 & 0xFFFFFF00FFFFFFFFLL;
}
