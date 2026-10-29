__int64 __fastcall sub_52D5A0(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  _DWORD *v4; // rbp
  _QWORD *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rdi
  _DWORD *v8; // rax
  __int64 v9; // rsi
  void *v10; // rdi
  _DWORD *v11; // rdx
  int v12; // ecx
  unsigned int v13; // ebp
  size_t v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 *v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v23; // rbx
  __int64 *v24; // rbp
  __int64 v25; // rsi
  char *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rbx
  char *v29; // rbp
  __int64 v30; // rdi
  __int64 result; // rax
  void *v32; // rdi
  __int64 v33; // rsi

  v2 = *(_DWORD **)(a1 + 48);
  v3 = v2;
  v4 = &v2[8 * *(unsigned int *)(a1 + 56)];
  if ( v2 == v4 )
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_31;
  }
  else
  {
    while ( v3[1] != 2 )
    {
      v3 += 8;
      if ( v4 == v3 )
        goto LABEL_64;
    }
    if ( v4 == v3 )
    {
LABEL_64:
      if ( !*(_DWORD *)(a1 + 60) )
        goto LABEL_18;
      v10 = *(void **)(a1 + 48);
      v9 = *(unsigned int *)(a1 + 56);
      v11 = &v2[8 * v9];
      goto LABEL_20;
    }
    do
    {
      v5 = *((_QWORD **)v3 + 3);
      if ( v5 )
      {
        v6 = v5[3];
        if ( v6 )
          sub_186B220((void *)(v6 - 8));
        v7 = v5[2];
        if ( v7 )
          sub_186B220((void *)(v7 - 8));
        sub_186B220(v5);
      }
      v8 = v3 + 8;
      if ( v4 == v3 + 8 )
        break;
      while ( 1 )
      {
        v3 = v8;
        if ( v8[1] == 2 )
          break;
        v8 += 8;
        if ( v4 == v8 )
          goto LABEL_17;
      }
    }
    while ( v4 != v8 );
LABEL_17:
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_19;
  }
LABEL_18:
  if ( *(_DWORD *)(a1 + 64) )
  {
LABEL_19:
    v2 = *(_DWORD **)(a1 + 48);
    v9 = *(unsigned int *)(a1 + 56);
    v10 = v2;
    v11 = &v2[8 * v9];
    if ( v2 == v11 )
    {
LABEL_31:
      *(_QWORD *)(a1 + 60) = 0;
      goto LABEL_32;
    }
LABEL_20:
    v12 = 0;
    do
    {
      while ( v2[1] )
      {
        v2[1] = 0;
        v2 += 8;
        if ( v11 == v2 )
          goto LABEL_24;
      }
      v2 += 8;
      ++v12;
    }
    while ( v11 != v2 );
LABEL_24:
    if ( (unsigned int)v9 <= 0x10 || 3 * (int)v9 >= (unsigned int)(4 * v12) )
      goto LABEL_31;
    if ( v10 )
    {
      sub_186B220(v10);
      v13 = *(_DWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      v13 >>= 1;
      *(_DWORD *)(a1 + 56) = v13;
      v14 = 32LL * v13;
      v15 = sub_186B270(v14);
      if ( !v13 )
      {
LABEL_30:
        *(_QWORD *)(a1 + 48) = v15;
        goto LABEL_31;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 48) = 0;
      v33 = (unsigned int)v9 >> 1;
      *(_DWORD *)(a1 + 56) = v33;
      v14 = 32 * v33;
      v15 = sub_186B270(32 * v33);
    }
    v16 = (_QWORD *)v15;
    do
    {
      *v16 = 0;
      v16 += 4;
      *(v16 - 3) = 0;
      *(v16 - 2) = 0;
    }
    while ( (_QWORD *)(v15 + v14) != v16 );
    goto LABEL_30;
  }
LABEL_32:
  v17 = *(_QWORD *)(a1 + 144);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(__int64 **)(a1 + 136);
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_42;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = *(_QWORD *)(a1 + 128);
          if ( (*(_DWORD *)(v20 + 8))-- == 1 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_41;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_41:
    v18 = *(__int64 **)(a1 + 136);
    if ( v18 )
LABEL_42:
      sub_186B220(v18 - 1);
  }
  v23 = *(__int64 **)(a1 + 112);
  if ( v23 )
  {
    v24 = &v23[*((unsigned int *)v23 - 1)];
    if ( v23 >= v24 )
      goto LABEL_47;
    do
    {
      v25 = *v23++;
      sub_62A410(*(_QWORD *)(a1 + 104), v25);
    }
    while ( v23 < v24 );
    v23 = *(__int64 **)(a1 + 112);
    if ( v23 )
LABEL_47:
      sub_186B220(v23 - 1);
  }
  v26 = *(char **)(a1 + 80);
  if ( v26 )
  {
    v27 = *(unsigned int *)(a1 + 88);
    if ( (_DWORD)v27 )
    {
      v28 = *(_QWORD *)(a1 + 80);
      v29 = &v26[24 * v27];
      do
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)(v28 + 16);
          if ( !v30 )
            break;
          v28 += 24;
          sub_186B220((void *)(v30 - 8));
          if ( v29 == (char *)v28 )
            goto LABEL_53;
        }
        v28 += 24;
      }
      while ( (char *)v28 != v29 );
    }
LABEL_53:
    sub_186B220(v26);
  }
  result = *(_QWORD *)(a1 + 72);
  if ( result )
    result = sub_186B220((void *)(result - 8));
  v32 = *(void **)(a1 + 48);
  if ( v32 )
    return sub_186B220(v32);
  return result;
}

