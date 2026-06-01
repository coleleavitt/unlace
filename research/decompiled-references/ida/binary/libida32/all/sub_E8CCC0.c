__int64 __fastcall sub_E8CCC0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rbx
  _BYTE *v7; // rax
  __int64 v8; // rax
  _BYTE *v9; // rdi
  const void *v10; // rsi
  size_t v11; // rbp
  unsigned __int64 v12; // rax
  __int64 result; // rax
  _BYTE *v14; // rdi
  unsigned int *v15; // rsi
  size_t v16; // rbp
  const void *v17; // rsi

  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v4) > 4 )
  {
    *(_DWORD *)v4 = 1684957538;
    *(_BYTE *)(v4 + 4) = 40;
    *(_QWORD *)(v3 + 32) += 5LL;
    v5 = *(_BYTE *)(a2 + 32);
    if ( v5 == -1 )
      goto LABEL_20;
  }
  else
  {
    sub_22581D0(v3, "bind(", 5);
    v5 = *(_BYTE *)(a2 + 32);
    if ( v5 == -1 )
      goto LABEL_20;
  }
  v6 = *a1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v14 = *(_BYTE **)(v6 + 32);
      v15 = *(unsigned int **)(*(_QWORD *)(a2 + 24) + 16LL);
      result = *(_QWORD *)(v6 + 24);
      v16 = *v15;
      v17 = v15 + 4;
      if ( v16 > result - (__int64)v14 )
      {
        sub_22581D0(*a1, v17, v16);
        v6 = *a1;
        result = *(_QWORD *)(*a1 + 24);
        v14 = *(_BYTE **)(*a1 + 32);
      }
      else if ( v16 )
      {
        memcpy(v14, v17, v16);
        *(_QWORD *)(v6 + 32) += v16;
        v6 = *a1;
        result = *(_QWORD *)(*a1 + 24);
        v14 = *(_BYTE **)(*a1 + 32);
      }
LABEL_17:
      if ( (_BYTE *)result != v14 )
        goto LABEL_12;
      return sub_22581D0(v6, ")", 1);
    }
LABEL_20:
    abort();
  }
  v7 = *(_BYTE **)(v6 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 24) )
  {
    v6 = sub_2257CD0(*a1, 34);
  }
  else
  {
    *(_QWORD *)(v6 + 32) = v7 + 1;
    *v7 = 34;
  }
  if ( *(_BYTE *)(a2 + 32) )
    goto LABEL_20;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_BYTE **)(v6 + 32);
  v10 = (const void *)(v8 + 4LL * *(unsigned int *)(v8 + 4) + 20);
  v11 = *(_DWORD *)(v8 + 16) * ((*(_WORD *)(v8 + 2) >> 6) & 7u);
  v12 = *(_QWORD *)(v6 + 24);
  if ( v11 > v12 - (unsigned __int64)v9 )
  {
    v6 = sub_22581D0(v6, v10, v11);
    v9 = *(_BYTE **)(v6 + 32);
    if ( (unsigned __int64)v9 < *(_QWORD *)(v6 + 24) )
      goto LABEL_11;
    goto LABEL_24;
  }
  if ( v11 )
  {
    memcpy(v9, v10, v11);
    v12 = *(_QWORD *)(v6 + 24);
    v9 = (_BYTE *)(v11 + *(_QWORD *)(v6 + 32));
    *(_QWORD *)(v6 + 32) = v9;
  }
  if ( (unsigned __int64)v9 >= v12 )
  {
LABEL_24:
    sub_2257CD0(v6, 34);
    v6 = *a1;
    result = *(_QWORD *)(*a1 + 24);
    v14 = *(_BYTE **)(*a1 + 32);
    goto LABEL_17;
  }
LABEL_11:
  *(_QWORD *)(v6 + 32) = v9 + 1;
  *v9 = 34;
  v6 = *a1;
  result = *(_QWORD *)(*a1 + 24);
  v14 = *(_BYTE **)(*a1 + 32);
  if ( (_BYTE *)result != v14 )
  {
LABEL_12:
    *v14 = 41;
    ++*(_QWORD *)(v6 + 32);
    return result;
  }
  return sub_22581D0(v6, ")", 1);
}

