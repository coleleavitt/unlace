size_t __fastcall sub_5C49E0(__int64 a1, char *a2, size_t a3)
{
  __int64 v3; // rbx
  size_t v4; // rbp
  int v5; // edx
  __int64 v8; // r15
  __int64 v9; // rsi
  size_t v10; // r12
  __int16 v11; // cx
  void *v12; // rdi
  _BYTE *v13; // rax
  __int16 v14; // cx
  __int64 v15; // rax
  void *v17; // rdi
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rdi
  unsigned int v21; // edx
  FILE *v22; // rcx
  size_t v23; // r12
  int v24; // eax
  __int64 v25; // rax
  size_t v26; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 72);
  if ( !a3 )
    return 0;
  v4 = a3;
  v5 = *(_DWORD *)(v3 + 24);
  v8 = 0;
  while ( v5 != 3 )
  {
    if ( v5 > 3 )
    {
      if ( v5 != 4 )
        return 0;
      goto LABEL_17;
    }
    if ( v5 == -1 )
    {
      v17 = *(void **)(v3 + 16);
      v10 = v4;
      if ( v3 - (__int64)v17 + 46 <= v4 )
        v10 = v3 - (_QWORD)v17 + 46;
      memcpy(v17, a2, v10);
      if ( v3 - (__int64)v17 + 46 >= v4 )
      {
        *(_QWORD *)(v3 + 16) += v10;
        return v10;
      }
      if ( (unsigned __int16)(*(_WORD *)(v3 + 28) - 1) > 0x3FEu
        || *(_WORD *)(v3 + 30) > 0x3FFu
        || *(_WORD *)(v3 + 32) > 0x3FFu
        || (v18 = *(_DWORD *)(v3 + 34), v19 = *(_DWORD *)(a1 + 84), v19 < v18)
        || v19 < *(_DWORD *)(v3 + 38)
        || v19 < *(_DWORD *)(v3 + 42) )
      {
        *(_DWORD *)(v3 + 24) = -2;
        return 0;
      }
      *(_DWORD *)(a1 + 20) = v18;
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(v3 + 38);
      *(_DWORD *)a1 = *(_DWORD *)(v3 + 42);
      v25 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v3 + 8) = 0;
      v5 = *(_DWORD *)(v3 + 24);
      *(_QWORD *)(v3 + 16) = v25;
    }
    else
    {
      if ( (unsigned int)v5 > 2 )
        return 0;
      v9 = v5;
      v10 = *(unsigned __int16 *)(v3 + 2LL * v5 + 28);
      v11 = *(_WORD *)(v3 + 2LL * v5 + 28);
      if ( v10 > v4 )
        v10 = v4;
      if ( !v10 )
        goto LABEL_13;
      v12 = *(void **)(v3 + 16);
      if ( v12 )
      {
        memcpy(v12, a2, v10);
        v13 = (_BYTE *)(v10 + *(_QWORD *)(v3 + 16));
        *(_QWORD *)(v3 + 16) = v13;
        *v13 = 0;
        v9 = *(int *)(v3 + 24);
        v11 = *(_WORD *)(v3 + 2 * v9 + 28);
        v5 = *(_DWORD *)(v3 + 24);
      }
      v14 = v11 - v10;
      *(_WORD *)(v3 + 2 * v9 + 28) = v14;
      if ( !v14 )
      {
LABEL_13:
        v15 = *(_QWORD *)(a1 + 32);
        if ( !v5 )
          v15 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(v3 + 16) = v15;
      }
    }
    ++v5;
    v8 += v10;
    a2 += v10;
    *(_DWORD *)(v3 + 24) = v5;
    v4 -= v10;
    if ( !v4 )
      return v8;
  }
  v20 = *(unsigned int *)(v3 + 8);
  if ( *(unsigned int *)(a1 + 80) < v20 + v4 )
  {
LABEL_17:
    *(_DWORD *)(v3 + 24) = -3;
    return 0;
  }
  v21 = *(_DWORD *)(a1 + 48);
  v22 = *(FILE **)(a1 + 56);
  if ( v21 )
  {
    if ( v22 )
    {
      v23 = 0;
      if ( (unsigned int)v20 < v21 )
      {
        v23 = v4;
        v26 = v21 - (unsigned int)v20;
        if ( v26 <= v4 )
          v23 = v21 - (unsigned int)v20;
        memcpy((void *)(*(_QWORD *)(a1 + 64) + v20), a2, v23);
        if ( v26 >= v4 )
          goto LABEL_34;
        v22 = *(FILE **)(a1 + 56);
        a2 += v23;
      }
      v23 += qfwrite(v22, a2);
    }
    else
    {
      v23 = v4;
      memcpy((void *)(*(_QWORD *)(a1 + 64) + v20), a2, v4);
    }
  }
  else
  {
    v23 = qfwrite(*(FILE **)(a1 + 56), a2);
  }
LABEL_34:
  v24 = v23 + *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = v24;
  if ( v24 == *(_DWORD *)(a1 + 80) )
    ++*(_DWORD *)(v3 + 24);
  return v23 + v8;
}

