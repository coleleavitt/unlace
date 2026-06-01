__int64 __fastcall sub_4B0B90(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v2; // r12d
  const char *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  bool v6; // zf
  unsigned __int64 v7; // r13
  const char *v8; // rdx
  const char *v9; // rbx
  unsigned __int64 v10; // r14
  char v11; // cl
  const char *v12; // rbp
  size_t v13; // r15
  size_t v14; // rdx
  const char *v16; // [rsp+0h] [rbp-48h]
  size_t v17; // [rsp+8h] [rbp-40h]

  v3 = *(const char **)a1;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = a2[1];
  v6 = v4 == 0;
  v7 = *(_QWORD *)a1 + v4 - 1;
  v8 = (const char *)*a2;
  v9 = *(const char **)a1;
  if ( v6 )
    v7 = *(_QWORD *)a1;
  v6 = v5 == 0;
  v10 = (unsigned __int64)&v8[v5 - 1];
  v11 = *v8;
  if ( v6 )
    v10 = *a2;
  if ( *v3 == 95 )
  {
    do
      ++v9;
    while ( *v9 == 95 );
    LOBYTE(v2) = v3 < v9;
    if ( v11 != 95 )
    {
      v12 = (const char *)*a2;
      goto LABEL_11;
    }
LABEL_8:
    v12 = (const char *)*a2;
    do
      ++v12;
    while ( *v12 == 95 );
    LOBYTE(v3) = v8 < v12;
    v2 |= (unsigned int)v3;
LABEL_11:
    if ( (_BYTE)v2 && !strcmp(v9, v12) )
      return v2;
    goto LABEL_13;
  }
  v2 = 0;
  v12 = (const char *)*a2;
  if ( v11 == 95 )
    goto LABEL_8;
LABEL_13:
  v13 = sub_4B0890((unsigned __int64)v9, v7, 1);
  v16 = &v9[v13];
  if ( (unsigned __int64)&v9[v13] >= v7 || (const char *)v10 != &v12[v13] || (v2 = 1, strncmp(v9, v12, v13)) )
  {
    v2 = 0;
    v14 = sub_4B0890((unsigned __int64)v12, v10, 1);
    if ( (unsigned __int64)&v12[v14] < v10 )
    {
      if ( (const char *)v7 == &v9[v14] )
      {
        v17 = v14;
        v2 = 1;
        if ( !strncmp(v9, v12, v14) )
          return v2;
        v2 = 0;
        v14 = v17;
        if ( (unsigned __int64)v16 >= v7 )
          return v2;
      }
      else if ( (unsigned __int64)v16 >= v7 )
      {
        return v2;
      }
      v2 = 0;
      if ( v13 == v14 )
        LOBYTE(v2) = strncmp(v9, v12, v13) == 0;
    }
  }
  return v2;
}

