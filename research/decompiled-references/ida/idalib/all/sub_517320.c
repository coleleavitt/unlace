unsigned __int64 __fastcall sub_517320(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  char *v14; // rdi
  char *v15; // rdx
  unsigned __int64 *v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v21; // rax
  char *v22; // rdi
  char *v23; // rdx
  unsigned __int64 *v24; // rbp
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __m128i v28; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  v29 = __readfsqword(0x28u);
  v28 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dd(&v28);
  v6 = *(_QWORD *)(a1 + 1768);
  if ( !*(_BYTE *)(v6 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = v5 - *(_DWORD *)(*(_QWORD *)(v6 + 8) + 68LL);
  if ( v7 >= *(_QWORD *)(v6 + 40) )
    sub_5144F0();
  v8 = v7 << 6;
  *(_DWORD *)(*(_QWORD *)(v6 + 32) + v8 + 56) = v5;
  v9 = *(_QWORD *)(v6 + 32) + v8;
  v10 = unpack_dq(&v28);
  v11 = unpack_dq(&v28);
  v12 = v11;
  if ( a3 )
  {
    v21 = ea2node(v11);
    v22 = *(char **)(v9 + 32);
    v23 = &v22[8 * *(_QWORD *)(v9 + 40)];
    if ( v22 != v23 )
    {
      while ( v21 != *(_QWORD *)v22 )
      {
        v22 += 8;
        if ( v23 == v22 )
          goto LABEL_15;
      }
      if ( v23 != v22 )
      {
        memmove(v22, v22 + 8, v23 - v22 - 8);
        --*(_QWORD *)(v9 + 40);
      }
    }
LABEL_15:
    v24 = sub_5168B0((unsigned __int64 **)v9, v10);
    v25 = *(_QWORD *)v9 + 33LL * *(_QWORD *)(v9 + 8);
    if ( v24 != (unsigned __int64 *)v25 )
    {
      v26 = *v24;
      if ( v10 >= *v24 )
      {
        v27 = v24[1];
        if ( v26 < v12
          && v10 < v27
          && (v27 >= v12
           || (unsigned __int64 *)v25 == (unsigned __int64 *)((char *)v24 + 33)
           || *(unsigned __int64 *)((char *)v24 + 33) >= v12) )
        {
          sub_5154D0(*(unsigned int *)(v9 + 56), v26, v27, v12);
          v24[1] = v12;
          *((_BYTE *)v24 + 32) = 1;
        }
      }
    }
  }
  else
  {
    v13 = ea2node(v10);
    v14 = *(char **)(v9 + 32);
    v15 = &v14[8 * *(_QWORD *)(v9 + 40)];
    if ( v14 != v15 )
    {
      while ( v13 != *(_QWORD *)v14 )
      {
        v14 += 8;
        if ( v15 == v14 )
          goto LABEL_5;
      }
      if ( v15 != v14 )
      {
        memmove(v14, v14 + 8, v15 - v14 - 8);
        --*(_QWORD *)(v9 + 40);
      }
    }
LABEL_5:
    v16 = sub_5168B0((unsigned __int64 **)v9, v12);
    v17 = *(_QWORD *)v9 + 33LL * *(_QWORD *)(v9 + 8);
    if ( v16 != (unsigned __int64 *)v17 )
    {
      v18 = *v16;
      if ( v12 >= *v16 )
      {
        v19 = v16[1];
        if ( v12 < v19
          && v18 < v10
          && (v19 >= v10
           || (unsigned __int64 *)v17 == (unsigned __int64 *)((char *)v16 + 33)
           || *(unsigned __int64 *)((char *)v16 + 33) >= v10) )
        {
          sub_5154D0(*(unsigned int *)(v9 + 56), v18, v19, v10);
          v16[1] = v10;
          *((_BYTE *)v16 + 32) = 1;
        }
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}
