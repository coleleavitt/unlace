__int64 __fastcall sub_20D1430(__int64 a1)
{
  _BYTE *v1; // r9
  _BYTE *v2; // rax
  __int64 v3; // rbp
  _BYTE *v5; // rdx
  unsigned __int64 v6; // r12
  char *v7; // r14
  char *v8; // r13
  size_t v9; // r15
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdx
  _BYTE *v12; // rdx
  _BYTE *v13; // rax
  char v14; // al
  __int64 *v15; // r12
  __int64 *v16; // r14
  __int64 v17; // r13
  void *v18; // rax
  __int64 v19; // rax
  size_t v20; // rbp
  void *v21; // rax
  __int64 v22; // rax
  void *v23; // rax
  void *v24; // rcx
  void *v25; // rax
  void *v26; // rcx
  unsigned __int64 v27; // [rsp+0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+8h] [rbp-50h] BYREF
  __int64 v29[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = *(_BYTE **)a1;
  v2 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE **)a1 == v2 || *v1 != 84 )
    return 0;
  v5 = v1 + 1;
  v27 = 0;
  *(_QWORD *)a1 = v1 + 1;
  if ( v1 + 1 == v2 )
  {
    v28 = 0;
  }
  else
  {
    if ( v1[1] == 76 )
    {
      *(_QWORD *)a1 = v1 + 2;
      if ( (unsigned __int8)sub_20CF8F0((_BYTE **)a1, (__int64 *)&v27) )
        return 0;
      v12 = *(_BYTE **)a1;
      v13 = *(_BYTE **)(a1 + 8);
      ++v27;
      if ( v12 == v13 || *v12 != 95 )
        return 0;
      v28 = 0;
      v5 = v12 + 1;
      *(_QWORD *)a1 = v5;
      if ( v13 == v5 )
        goto LABEL_9;
    }
    else
    {
      v28 = 0;
    }
    if ( *v5 == 95 )
    {
      v6 = 0;
      *(_QWORD *)a1 = v5 + 1;
      goto LABEL_13;
    }
  }
LABEL_9:
  if ( (unsigned __int8)sub_20CF8F0((_BYTE **)a1, &v28) )
    return 0;
  v5 = *(_BYTE **)a1;
  v6 = ++v28;
  if ( v5 == *(_BYTE **)(a1 + 8) || *v5 != 95 )
    return 0;
  *(_QWORD *)a1 = v5 + 1;
LABEL_13:
  if ( *(_BYTE *)(a1 + 778) )
  {
    v29[1] = (__int64)v1;
    v29[0] = v5 - v1;
    return sub_20D12D0(a1 + 816, v29);
  }
  if ( *(_BYTE *)(a1 + 777) && !v27 )
  {
    v3 = sub_20CF970(a1 + 816, 40);
    *(_WORD *)(v3 + 8) = -32724;
    v14 = *(_BYTE *)(v3 + 10);
    *(_QWORD *)(v3 + 16) = v6;
    v15 = *(__int64 **)(a1 + 728);
    *(_QWORD *)(v3 + 24) = 0;
    *(_BYTE *)(v3 + 32) = 0;
    *(_BYTE *)(v3 + 10) = v14 & 0xF0 | 0xA;
    *(_QWORD *)v3 = off_2BE7740;
    if ( v15 == *(__int64 **)(a1 + 736) )
    {
      v16 = *(__int64 **)(a1 + 720);
      v17 = 16 * (v15 - v16);
      if ( v16 == (__int64 *)(a1 + 744) )
      {
        v23 = malloc(16 * (v15 - v16));
        v24 = v23;
        if ( !v23 )
          goto LABEL_51;
        if ( v15 != v16 )
          v24 = memmove(v23, v16, (char *)v15 - (char *)v16);
        *(_QWORD *)(a1 + 720) = v24;
      }
      else
      {
        v18 = realloc(*(void **)(a1 + 720), 16 * (v15 - v16));
        *(_QWORD *)(a1 + 720) = v18;
        if ( !v18 )
          goto LABEL_51;
      }
      v19 = *(_QWORD *)(a1 + 720);
      v15 = (__int64 *)(v19 + (char *)v15 - (char *)v16);
      *(_QWORD *)(a1 + 736) = v17 + v19;
    }
    *(_QWORD *)(a1 + 728) = v15 + 1;
    *v15 = v3;
    return v3;
  }
  v7 = *(char **)(a1 + 672);
  v8 = *(char **)(a1 + 664);
  v9 = v7 - v8;
  v10 = (v7 - v8) >> 3;
  if ( v10 <= v27 )
  {
    if ( *(_QWORD *)(a1 + 784) != v27 || v10 != v27 )
      return 0;
    if ( v7 != *(char **)(a1 + 680) )
      goto LABEL_31;
    v20 = 16 * v27;
    if ( v8 == (char *)(a1 + 688) )
    {
      v25 = malloc(v20);
      v26 = v25;
      if ( v25 )
      {
        if ( v8 != v7 )
          v26 = memmove(v25, v8, v9);
        *(_QWORD *)(a1 + 664) = v26;
        goto LABEL_42;
      }
    }
    else
    {
      v21 = realloc(*(void **)(a1 + 664), v20);
      *(_QWORD *)(a1 + 664) = v21;
      if ( v21 )
      {
LABEL_42:
        v22 = *(_QWORD *)(a1 + 664);
        v7 = (char *)(v22 + v9);
        *(_QWORD *)(a1 + 680) = v20 + v22;
LABEL_31:
        *(_QWORD *)(a1 + 672) = v7 + 8;
        *(_QWORD *)v7 = 0;
        return sub_20D1380(a1 + 816, "auto");
      }
    }
LABEL_51:
    abort();
  }
  v11 = *(_QWORD **)&v8[8 * v27];
  if ( v11 && (__int64)(v11[1] - *v11) >> 3 > v6 )
    return *(_QWORD *)(*v11 + 8 * v6);
  if ( v27 == *(_QWORD *)(a1 + 784) )
    return sub_20D1380(a1 + 816, "auto");
  return 0;
}
