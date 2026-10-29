__int64 __fastcall sub_224C080(size_t *a1, __int64 a2)
{
  size_t v2; // rbx
  size_t v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  size_t v7; // rbp
  size_t v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // r14
  __int64 v12; // rax
  size_t v14; // r14
  size_t v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // rdx
  __int64 v19; // rax

  v2 = *a1;
  v3 = a1[1];
  v4 = *a1 - v3;
  v5 = v4 >> 5;
  v6 = v4 >> 3;
  if ( v5 > 0 )
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = v2 - 32 * v5;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v2 - 8);
      if ( *(_QWORD *)(v12 + 24) == v7 && (!v7 || !memcmp(*(const void **)(v12 + 16), *(const void **)(a2 + 16), v7)) )
        goto LABEL_10;
      v9 = *(_QWORD *)(v2 - 16);
      if ( v7 == *(_QWORD *)(v9 + 24)
        && ((v14 = v2 - 8, !v7) || !memcmp(*(const void **)(v9 + 16), *(const void **)(a2 + 16), v7))
        || (v10 = *(_QWORD *)(v2 - 24), v7 == *(_QWORD *)(v10 + 24))
        && ((v14 = v2 - 16, !v7) || !memcmp(*(const void **)(v10 + 16), *(const void **)(a2 + 16), v7))
        || (v11 = v2, v2 -= 32LL, v7 == *(_QWORD *)(*(_QWORD *)v2 + 24LL))
        && ((v14 = v11 - 24, !v7) || !memcmp(*(const void **)(*(_QWORD *)v2 + 16LL), *(const void **)(a2 + 16), v7)) )
      {
        LOBYTE(v7) = v3 == v14;
        return (unsigned int)v7;
      }
      if ( v8 == v2 )
      {
        v6 = (__int64)(v2 - v3) >> 3;
        break;
      }
    }
  }
  if ( v6 == 2 )
  {
    v15 = *(_QWORD *)(a2 + 24);
    v7 = v2;
LABEL_35:
    v19 = *(_QWORD *)(v7 - 8);
    v2 = v7 - 8;
    if ( v15 == *(_QWORD *)(v19 + 24) && (!v15 || !memcmp(*(const void **)(v19 + 16), *(const void **)(a2 + 16), v15)) )
    {
      LOBYTE(v7) = v3 == v7;
      return (unsigned int)v7;
    }
    goto LABEL_26;
  }
  if ( v6 == 3 )
  {
    v17 = *(_QWORD *)(v2 - 8);
    v15 = *(_QWORD *)(a2 + 24);
    v7 = v2 - 8;
    v18 = *(_QWORD *)(v17 + 24);
    if ( v18 == v15 && (!v18 || !memcmp(*(const void **)(v17 + 16), *(const void **)(a2 + 16), v18)) )
      goto LABEL_10;
    goto LABEL_35;
  }
  LODWORD(v7) = 1;
  if ( v6 != 1 )
    return (unsigned int)v7;
  v15 = *(_QWORD *)(a2 + 24);
LABEL_26:
  v16 = *(_QWORD *)(v2 - 8);
  LODWORD(v7) = 1;
  if ( v15 == *(_QWORD *)(v16 + 24) && (!v15 || !memcmp(*(const void **)(v16 + 16), *(const void **)(a2 + 16), v15)) )
LABEL_10:
    LOBYTE(v7) = v3 == v2;
  return (unsigned int)v7;
}
