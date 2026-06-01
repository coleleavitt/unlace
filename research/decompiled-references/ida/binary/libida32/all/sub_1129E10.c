__int64 __fastcall sub_1129E10(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r14
  size_t v8; // rax
  size_t v9; // rbp
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax

  v4 = (a2 - a1) >> 6;
  v5 = (a2 - a1) >> 4;
  v6 = a1;
  if ( v4 <= 0 )
  {
LABEL_18:
    if ( v5 != 2 )
    {
      if ( v5 != 3 )
      {
        if ( v5 != 1 )
          return a2;
LABEL_30:
        v13 = strlen(a3);
        if ( *(_QWORD *)(v6 + 8) == v13 && (!v13 || !memcmp(*(const void **)v6, a3, v13)) )
          return v6;
        return a2;
      }
      v11 = strlen(a3);
      if ( *(_QWORD *)(v6 + 8) == v11 && (!v11 || !memcmp(*(const void **)v6, a3, v11)) )
        return v6;
      v6 += 16;
    }
    v12 = strlen(a3);
    if ( *(_QWORD *)(v6 + 8) == v12 && (!v12 || !memcmp(*(const void **)v6, a3, v12)) )
      return v6;
    v6 += 16;
    goto LABEL_30;
  }
  v7 = a1 + (v4 << 6);
  while ( 1 )
  {
    v8 = strlen(a3);
    v9 = v8;
    if ( *(_QWORD *)(v6 + 8) == v8 && (!v8 || !memcmp(*(const void **)v6, a3, v8)) )
      return v6;
    if ( v9 == *(_QWORD *)(v6 + 24) && (!v9 || !memcmp(*(const void **)(v6 + 16), a3, v9)) )
      return v6 + 16;
    if ( v9 == *(_QWORD *)(v6 + 40) && (!v9 || !memcmp(*(const void **)(v6 + 32), a3, v9)) )
      return v6 + 32;
    if ( v9 == *(_QWORD *)(v6 + 56) && (!v9 || !memcmp(*(const void **)(v6 + 48), a3, v9)) )
      return v6 + 48;
    v6 += 64;
    if ( v6 == v7 )
    {
      v5 = (a2 - v6) >> 4;
      goto LABEL_18;
    }
  }
}

