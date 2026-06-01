unsigned __int64 __fastcall sub_4FF750(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // eax
  unsigned int v12; // r12d
  int v13; // eax
  char *v14; // rdi
  char *v15; // rdx
  unsigned int *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  int v21; // eax
  char *v22; // rdi
  char *v23; // rdx
  unsigned int *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __m128i v28; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  v29 = __readfsqword(0x28u);
  v28 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dd(&v28);
  v6 = *(_QWORD *)(a1 + 1576);
  if ( !*(_BYTE *)(v6 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = v5 - *(_DWORD *)(*(_QWORD *)(v6 + 8) + 68LL);
  if ( v7 >= *(_QWORD *)(v6 + 40) )
    sub_4FC970();
  v8 = v7 << 6;
  *(_DWORD *)(*(_QWORD *)(v6 + 32) + v8 + 56) = v5;
  v9 = *(_QWORD *)(v6 + 32) + v8;
  v10 = unpack_dd(&v28);
  v11 = unpack_dd(&v28);
  v12 = v11;
  if ( a3 )
  {
    v21 = ea2node(v11);
    v22 = *(char **)(v9 + 32);
    v23 = &v22[4 * *(_QWORD *)(v9 + 40)];
    if ( v22 != v23 )
    {
      while ( v21 != *(_DWORD *)v22 )
      {
        v22 += 4;
        if ( v23 == v22 )
          goto LABEL_15;
      }
      if ( v23 != v22 )
      {
        memmove(v22, v22 + 4, v23 - v22 - 4);
        --*(_QWORD *)(v9 + 40);
      }
    }
LABEL_15:
    v24 = sub_4FED00((unsigned int **)v9, v10);
    v25 = *(_QWORD *)v9 + 17LL * *(_QWORD *)(v9 + 8);
    if ( v24 != (unsigned int *)v25 )
    {
      v26 = *v24;
      if ( v10 >= (unsigned int)v26 )
      {
        v27 = v24[1];
        if ( (unsigned int)v26 < v12
          && v10 < (unsigned int)v27
          && ((unsigned int)v27 >= v12
           || (unsigned int *)v25 == (unsigned int *)((char *)v24 + 17)
           || *(unsigned int *)((char *)v24 + 17) >= v12) )
        {
          sub_4FD960(*(unsigned int *)(v9 + 56), v26, v27, v12);
          v24[1] = v12;
          *((_BYTE *)v24 + 16) = 1;
        }
      }
    }
  }
  else
  {
    v13 = ea2node(v10);
    v14 = *(char **)(v9 + 32);
    v15 = &v14[4 * *(_QWORD *)(v9 + 40)];
    if ( v14 != v15 )
    {
      while ( v13 != *(_DWORD *)v14 )
      {
        v14 += 4;
        if ( v15 == v14 )
          goto LABEL_5;
      }
      if ( v15 != v14 )
      {
        memmove(v14, v14 + 4, v15 - v14 - 4);
        --*(_QWORD *)(v9 + 40);
      }
    }
LABEL_5:
    v16 = sub_4FED00((unsigned int **)v9, v12);
    v17 = *(_QWORD *)v9 + 17LL * *(_QWORD *)(v9 + 8);
    if ( v16 != (unsigned int *)v17 )
    {
      v18 = *v16;
      if ( v12 >= (unsigned int)v18 )
      {
        v19 = v16[1];
        if ( v12 < (unsigned int)v19
          && (unsigned int)v18 < v10
          && ((unsigned int)v19 >= v10
           || (unsigned int *)v17 == (unsigned int *)((char *)v16 + 17)
           || *(unsigned int *)((char *)v16 + 17) >= v10) )
        {
          sub_4FD960(*(unsigned int *)(v9 + 56), v18, v19, v10);
          v16[1] = v10;
          *((_BYTE *)v16 + 16) = 1;
        }
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}

