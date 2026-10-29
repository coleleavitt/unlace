__int64 __fastcall sub_BCF700(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbp
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rbp
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // rdi
  __int64 *v16; // rbp
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  char *v20; // rdi
  char *v21; // rcx
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 *v28; // rbp
  __int64 *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdi

  v1 = *(__int64 **)(a1 + 456);
  if ( v1 )
  {
    v3 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v1;
        if ( *v1 )
        {
          v5 = *(_QWORD *)(a1 + 448);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v1 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v1;
    }
    while ( v1 < v3 );
LABEL_8:
    v1 = *(__int64 **)(a1 + 456);
    if ( v1 )
LABEL_9:
      sub_186B220(v1 - 1);
  }
  v7 = *(__int64 **)(a1 + 440);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(a1 + 432);
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = *(__int64 **)(a1 + 440);
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  v11 = *(__int64 **)(a1 + 424);
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = *(_QWORD *)(a1 + 416);
          v6 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_26;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_26:
    v11 = *(__int64 **)(a1 + 424);
    if ( v11 )
LABEL_27:
      sub_186B220(v11 - 1);
  }
  v15 = *(void **)(a1 + 392);
  if ( v15 )
    sub_186B220(v15);
  v16 = *(__int64 **)(a1 + 384);
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 >= v17 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = *(_QWORD *)(a1 + 376);
          v6 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_37;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_37:
    v16 = *(__int64 **)(a1 + 384);
    if ( v16 )
LABEL_38:
      sub_186B220(v16 - 1);
  }
  v20 = *(char **)(a1 + 224);
  v21 = &v20[8 * *(unsigned int *)(a1 + 232)];
  for ( result = (__int64)v20; (char *)result != v21; *(_BYTE *)(v23 + 6) &= ~1u )
  {
    v23 = *(_QWORD *)result;
    result += 8;
  }
  *(_DWORD *)(a1 + 232) = 0;
  if ( v20 )
  {
    result = a1 + 240;
    if ( v20 != (char *)(a1 + 240) )
      result = sub_186B220(v20);
  }
  v24 = *(_QWORD *)(a1 + 216);
  if ( v24 )
    result = sub_186B220((void *)(v24 - 8));
  v25 = *(_QWORD *)(a1 + 208);
  if ( v25 )
    result = sub_186B220((void *)(v25 - 8));
  v26 = *(_QWORD *)(a1 + 200);
  if ( v26 )
    result = sub_186B220((void *)(v26 - 8));
  v27 = *(_QWORD *)(a1 + 192);
  if ( v27 )
    result = sub_186B220((void *)(v27 - 8));
  v28 = *(__int64 **)(a1 + 96);
  if ( v28 )
  {
    result = *((unsigned int *)v28 - 1);
    v29 = &v28[result];
    if ( v28 >= v29 )
      goto LABEL_60;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = *(_QWORD *)(a1 + 88);
          v6 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v28 >= v29 )
          goto LABEL_59;
      }
      result = sub_15D7BC0(v31, v30);
      ++v28;
    }
    while ( v28 < v29 );
LABEL_59:
    v28 = *(__int64 **)(a1 + 96);
    if ( v28 )
LABEL_60:
      result = sub_186B220(v28 - 1);
  }
  v32 = *(_QWORD *)(a1 + 80);
  if ( v32 )
    return sub_186B220((void *)(v32 - 8));
  return result;
}

