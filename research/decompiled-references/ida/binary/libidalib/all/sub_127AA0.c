__int64 __fastcall sub_127AA0(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 v3; // r12
  const char *encoding_name; // rax
  const char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r13
  char v10; // al
  const char *v11; // r13
  const char *v12; // rbp
  __int64 v13; // r15
  const char *v14; // rax
  int encoding_bpu_by_name; // r15d
  int v16; // eax
  __int64 v17; // rdx
  char *s2; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4 * a2);
  if ( !v2 )
    return -1;
  encoding_name = (const char *)get_encoding_name();
  src = nullptr;
  v6 = encoding_name;
  *(_OWORD *)n = 0;
  if ( encoding_name
    && (v7 = strlen(encoding_name),
        v8 = v7 + 1,
        v9 = v7,
        src = (void *)qvector_reserve(),
        n[0] = v8,
        memmove(src, v6, v9),
        *((_BYTE *)src + v9) = 0,
        n[0]) )
  {
    s2 = (char *)qalloc_or_throw();
    memcpy(s2, src, n[0]);
    v10 = 0;
  }
  else
  {
    s2 = nullptr;
    v10 = 1;
  }
  v11 = s1;
  if ( !v10 )
    v11 = s2;
  while ( 1 )
  {
    do
    {
      if ( (unsigned __int8)sub_9DB70((__int64)&src, 0, (__int64)"Enter an encoding name") )
      {
        if ( n[0] > 1 )
        {
          v12 = (const char *)src;
          if ( strcmp((const char *)src, v11) )
            continue;
        }
      }
      v17 = -1;
      goto LABEL_23;
    }
    while ( !(unsigned __int8)sub_10D940(v12) );
    if ( (unsigned __int8)rename_encoding() )
    {
      v17 = a2;
      goto LABEL_23;
    }
    v13 = 0;
    if ( *(_QWORD *)(a1 + 224) )
      break;
LABEL_18:
    encoding_bpu_by_name = get_encoding_bpu_by_name();
    if ( v2 == (unsigned int)get_default_encoding_idx() )
    {
      v16 = get_encoding_bpu_by_name();
      if ( encoding_bpu_by_name != v16 )
        sub_92200(
          (__int64)"Cannot rename encoding used as %d-bit default encoding to the %d-bit encoding",
          8 * encoding_bpu_by_name,
          8 * v16);
    }
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4 * v13) )
    {
      v14 = (const char *)get_encoding_name();
      if ( !strcmp(v14, v12) )
        break;
    }
    if ( (unsigned __int64)++v13 >= *(_QWORD *)(a1 + 224) )
      goto LABEL_18;
  }
  v17 = v13;
LABEL_23:
  v3 = v17;
  if ( s2 )
    qfree();
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v3;
}

