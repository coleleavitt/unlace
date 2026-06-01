__int64 *__fastcall sub_1118DE0(__int64 *a1, __int64 *a2, __int64 *a3, const char *a4)
{
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r12
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rdx
  size_t v14; // rax
  size_t v15; // rdx
  bool v16; // zf
  size_t v18; // rax
  size_t v19; // rdx
  int v20; // eax
  size_t v21; // rax
  size_t v22; // rdx
  int v23; // eax
  size_t v24; // rax
  size_t v25; // rdx
  int v26; // eax
  __int64 v27; // [rsp+0h] [rbp-48h]
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+0h] [rbp-48h]

  v5 = *a2;
  v27 = *a3;
  v6 = (*a2 - *a3) >> 6;
  v7 = (*a2 - *a3) >> 4;
  if ( v6 > 0 )
  {
    v8 = v5 - 16;
    v9 = v5 - 16 - (v6 << 6);
    do
    {
      if ( a4 )
      {
        v10 = strlen(a4);
        if ( *(_QWORD *)(v8 + 8) == v10 && (!v10 || !memcmp(*(const void **)v8, a4, v10)) )
          goto LABEL_21;
        *a2 = v8;
        v11 = strlen(a4);
        if ( v11 == *(_QWORD *)(v8 - 8) && (!v11 || !memcmp(*(const void **)(v8 - 16), a4, v11)) )
          goto LABEL_21;
        *a2 = v8 - 16;
        v12 = strlen(a4);
        v13 = *(_QWORD *)(v8 - 24);
        if ( v13 == v12 && (!v13 || !memcmp(*(const void **)(v8 - 32), a4, v13)) )
          goto LABEL_21;
        *a2 = v8 - 32;
        v14 = strlen(a4);
        v15 = *(_QWORD *)(v8 - 40);
        if ( v15 == v14 && (!v15 || !memcmp(*(const void **)(v8 - 48), a4, v15)) )
          goto LABEL_21;
      }
      else
      {
        if ( !*(_QWORD *)(v8 + 8) )
          goto LABEL_21;
        v16 = *(_QWORD *)(v8 - 8) == 0;
        *a2 = v8;
        if ( v16 )
          goto LABEL_21;
        v16 = *(_QWORD *)(v8 - 24) == 0;
        *a2 = v8 - 16;
        if ( v16 )
          goto LABEL_21;
        v16 = *(_QWORD *)(v8 - 40) == 0;
        *a2 = v8 - 32;
        if ( v16 )
          goto LABEL_21;
      }
      v5 = v8 - 48;
      v8 -= 64;
      *a2 = v5;
    }
    while ( v9 != v8 );
    v7 = (v5 - v27) >> 4;
  }
  if ( v7 != 2 )
  {
    if ( v7 != 3 )
    {
      if ( v7 != 1 )
      {
LABEL_27:
        *a1 = *a3;
        return a1;
      }
      goto LABEL_38;
    }
    if ( a4 )
    {
      v28 = v5;
      v18 = strlen(a4);
      v5 = v28;
      v19 = *(_QWORD *)(v28 - 8);
      if ( v19 == v18 )
      {
        if ( !v19 )
          goto LABEL_21;
        v20 = memcmp(*(const void **)(v28 - 16), a4, v19);
        v5 = v28;
        if ( !v20 )
          goto LABEL_21;
      }
    }
    else if ( !*(_QWORD *)(v5 - 8) )
    {
      goto LABEL_21;
    }
    v5 -= 16;
    *a2 = v5;
  }
  if ( a4 )
  {
    v29 = v5;
    v21 = strlen(a4);
    v5 = v29;
    v22 = *(_QWORD *)(v29 - 8);
    if ( v22 == v21 )
    {
      if ( !v22 )
        goto LABEL_21;
      v23 = memcmp(*(const void **)(v29 - 16), a4, v22);
      v5 = v29;
      if ( !v23 )
        goto LABEL_21;
    }
  }
  else if ( !*(_QWORD *)(v5 - 8) )
  {
    goto LABEL_21;
  }
  v5 -= 16;
  *a2 = v5;
LABEL_38:
  if ( a4 )
  {
    v30 = v5;
    v24 = strlen(a4);
    v5 = v30;
    v25 = *(_QWORD *)(v30 - 8);
    if ( v25 != v24 )
      goto LABEL_42;
    if ( v25 )
    {
      v26 = memcmp(*(const void **)(v30 - 16), a4, v25);
      v5 = v30;
      if ( v26 )
        goto LABEL_42;
    }
  }
  else if ( *(_QWORD *)(v5 - 8) )
  {
LABEL_42:
    *a2 = v5 - 16;
    goto LABEL_27;
  }
LABEL_21:
  *a1 = *a2;
  return a1;
}

