_BYTE *__fastcall sub_1357890(__int64 a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  char *v7; // rdi
  size_t v8; // r12
  const void *v9; // r8
  __int64 v10; // r13
  int v11; // ebp
  __int64 *v12; // r13
  __int64 *v13; // r15
  __int64 v14; // r12
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rax
  _BYTE *result; // rax
  int v19; // ebp
  _WORD *v20; // rdx
  __int64 *v21; // [rsp+0h] [rbp-48h]
  const void *v22; // [rsp+0h] [rbp-48h]
  const void *v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v3 = 1;
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(char **)(a2 + 32);
  if ( v4 == v5 )
    goto LABEL_15;
  v8 = *(_QWORD *)(v4 + 8);
  v9 = *(const void **)v4;
  v10 = v4 + 32;
  v11 = v8;
  while ( v6 - (unsigned __int64)v7 < v8 )
  {
    sub_227BF10(a2, v9, v8);
    v7 = *(char **)(a2 + 32);
    v6 = *(_QWORD *)(a2 + 24);
    if ( v5 == v10 )
      goto LABEL_14;
LABEL_11:
    v9 = *(const void **)v10;
    v8 = *(_QWORD *)(v10 + 8);
    if ( v11 )
    {
      if ( (unsigned int)(v11 + v8 + 2) > 0x4B )
      {
        v11 = v8 + 2;
        if ( v6 - (unsigned __int64)v7 > 4 )
        {
          *(_DWORD *)v7 = 537549856;
          v7[4] = 32;
          v7 = (char *)(*(_QWORD *)(a2 + 32) + 5LL);
          v6 = *(_QWORD *)(a2 + 24);
          *(_QWORD *)(a2 + 32) = v7;
        }
        else
        {
          v22 = *(const void **)v10;
          sub_227BF10(a2, " \\\n  ", 5);
          v7 = *(char **)(a2 + 32);
          v9 = v22;
          v6 = *(_QWORD *)(a2 + 24);
        }
      }
      else
      {
        v11 += v8 + 1;
        if ( v6 <= (unsigned __int64)v7 )
        {
          v23 = *(const void **)v10;
          sub_227BA10(a2, 32);
          v6 = *(_QWORD *)(a2 + 24);
          v7 = *(char **)(a2 + 32);
          v9 = v23;
        }
        else
        {
          *(_QWORD *)(a2 + 32) = v7 + 1;
          *v7 = 32;
          v6 = *(_QWORD *)(a2 + 24);
          v7 = *(char **)(a2 + 32);
        }
      }
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 8);
    }
    v10 += 32;
  }
  if ( v8 )
  {
    memcpy(v7, v9, v8);
    v6 = *(_QWORD *)(a2 + 24);
    v7 = (char *)(v8 + *(_QWORD *)(a2 + 32));
    *(_QWORD *)(a2 + 32) = v7;
  }
  if ( v5 != v10 )
    goto LABEL_11;
LABEL_14:
  v3 = v11 + 1;
LABEL_15:
  if ( (unsigned __int64)v7 >= v6 )
  {
    sub_227BA10(a2, 58);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v7 + 1;
    *v7 = 58;
  }
  v12 = *(__int64 **)(a1 + 32);
  v13 = v12;
  v21 = *(__int64 **)(a1 + 40);
  if ( v12 != v21 )
  {
    do
    {
      v14 = v13[1];
      v15 = *v13;
      if ( v14 == 7 && *(_DWORD *)v15 == 1685353276 && *(_WORD *)(v15 + 4) == 28265 && *(_BYTE *)(v15 + 6) == 62 )
        goto LABEL_22;
      v16 = *(_QWORD *)(a2 + 24);
      v17 = *(_DWORD **)(a2 + 32);
      if ( (unsigned int)(v3 + v14 + 3) <= 0x4B )
      {
        if ( v16 <= (unsigned __int64)v17 )
          goto LABEL_29;
      }
      else
      {
        if ( v16 - (unsigned __int64)v17 > 3 )
        {
          *v17 = 537549856;
          v17 = (_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL);
          *(_QWORD *)(a2 + 32) = v17;
        }
        else
        {
          v24 = *v13;
          sub_227BF10(a2, " \\\n ", 4);
          v17 = *(_DWORD **)(a2 + 32);
          v15 = v24;
        }
        v3 = 2;
        if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v17 )
        {
LABEL_29:
          v25 = v15;
          sub_227BA10(a2, 32);
          v15 = v25;
          goto LABEL_21;
        }
      }
      *(_QWORD *)(a2 + 32) = (char *)v17 + 1;
      *(_BYTE *)v17 = 32;
LABEL_21:
      v3 += v14 + 1;
      sub_1357020(a2, (_BYTE *)v15, v14, *(_DWORD *)(a1 + 120));
LABEL_22:
      v13 += 4;
    }
    while ( v21 != v13 );
  }
  result = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 24) )
  {
    result = (_BYTE *)sub_227BA10(a2, 10);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = result + 1;
    *result = 10;
  }
  if ( *(_BYTE *)(a1 + 113) && v12 != v21 )
  {
    v19 = 0;
    do
    {
      if ( *(_DWORD *)(a1 + 124) != v19 )
      {
        sub_1357020(a2, (_BYTE *)*v12, v12[1], *(_DWORD *)(a1 + 120));
        v20 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v20 <= 1u )
        {
          result = (_BYTE *)sub_227BF10(a2, ":\n", 2);
        }
        else
        {
          result = (_BYTE *)(elf_gnu_hash_indexes + 1938);
          *v20 = 2618;
          *(_QWORD *)(a2 + 32) += 2LL;
        }
      }
      v12 += 4;
      ++v19;
    }
    while ( v12 != v21 );
  }
  return result;
}
