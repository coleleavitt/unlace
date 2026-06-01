__int64 __fastcall sub_2289340(__int64 a1)
{
  size_t v1; // r13
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rbp
  __int64 v4; // r15
  unsigned int v5; // r12d
  char *v6; // rcx
  char v7; // al
  char *v8; // rsi
  char v9; // dl
  bool v10; // zf
  char *v11; // r12
  size_t v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  char v20; // al
  char v21; // dl
  __int64 v22; // rax
  size_t v23; // rax
  int v24; // eax
  size_t v25; // rax
  char *v26; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = v1 + *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v3;
  if ( v3 == v2 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    return a1;
  }
  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 40);
  v6 = (char *)(*(_QWORD *)a1 + v3);
  v7 = *v6;
  if ( v1 <= 2
    || (v8 = *(char **)(a1 + 16), v9 = *v8, *v8 != 47) && (v5 <= 1 || v9 != 92)
    || v8[1] != v9
    || (v21 = v8[2], v21 == 47)
    || v5 > 1 && v21 == 92 )
  {
    if ( v7 == 47 )
    {
      if ( v5 <= 1 )
        goto LABEL_22;
    }
    else
    {
      if ( v5 == 1 )
        goto LABEL_26;
      if ( v7 != 92 || !v5 )
      {
LABEL_10:
        v10 = v5 == 0;
        v11 = "/";
        if ( !v10 )
          v11 = "\\/";
        goto LABEL_12;
      }
    }
    v26 = (char *)(*(_QWORD *)a1 + v3);
    v23 = j__strlen(":");
    if ( v1 >= v23 )
    {
      v6 = v26;
      if ( !v23 )
        goto LABEL_32;
      v24 = memcmp((const void *)(*(_QWORD *)(a1 + 16) + v1 - v23), ":", v23);
      v6 = v26;
      if ( !v24 )
        goto LABEL_32;
    }
LABEL_22:
    while ( 1 )
    {
      v20 = *(_BYTE *)(v4 + v3);
      if ( v20 != 47 && (v5 <= 1 || v20 != 92) )
        break;
      *(_QWORD *)(a1 + 32) = v3 + 1;
      if ( v3 + 1 == v2 )
      {
        if ( v1 != j__strlen("/") || v1 && memcmp(*(const void **)(a1 + 16), "/", v1) )
        {
          *(_QWORD *)(a1 + 32) = v3;
          v25 = j__strlen(".");
          *(_QWORD *)(a1 + 16) = ".";
          *(_QWORD *)(a1 + 24) = v25;
          return a1;
        }
        v3 = v2;
        break;
      }
      ++v3;
    }
    if ( v5 != 1 )
      goto LABEL_10;
    goto LABEL_26;
  }
  if ( v7 == 47 )
  {
LABEL_32:
    v22 = 1;
    if ( v3 > v2 )
    {
      v6 = (char *)(v4 + v2);
      v22 = 0;
    }
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v22;
    return a1;
  }
  if ( v5 != 1 )
  {
    if ( v7 == 92 && v5 )
      goto LABEL_32;
    goto LABEL_10;
  }
LABEL_26:
  v11 = "/";
LABEL_12:
  v12 = strlen(v11);
  v13 = sub_2246EC0((__int64 *)a1, (unsigned __int8 *)v11, v12, v3);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = v14;
  if ( *(_QWORD *)(a1 + 32) <= v14 )
    v15 = *(_QWORD *)(a1 + 32);
  v16 = 0;
  if ( v13 >= v15 )
  {
    v17 = *(_QWORD *)(a1 + 8);
    if ( v13 <= v14 )
      v17 = v13;
    v16 = v17 - v15;
  }
  v18 = *(_QWORD *)a1 + v15;
  *(_QWORD *)(a1 + 24) = v16;
  *(_QWORD *)(a1 + 16) = v18;
  return a1;
}
