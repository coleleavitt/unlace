__int64 __fastcall sub_878AE0(_QWORD *a1, unsigned int *a2)
{
  __m128i *exception; // rbx
  char *v3; // rax
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 result; // rax
  unsigned int v8; // r14d
  _QWORD *v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // r13d
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rsi
  unsigned int v20; // edx
  _BYTE *v21; // rax
  _BYTE *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rsi
  unsigned int v26; // ebp
  size_t v27; // rsi
  unsigned int *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r15
  char *v32; // rdi
  _QWORD *v33; // rax
  unsigned int v34; // [rsp+8h] [rbp-40h]
  __int64 v35; // [rsp+8h] [rbp-40h]

  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 600LL);
  result = v6 + 8LL * a2[4];
  if ( *(_QWORD *)result )
    v8 = *(_DWORD *)(*(_QWORD *)result - 4LL);
  else
    v8 = 0;
  v9 = (_QWORD *)a1[8];
  v10 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 3612LL) + 1;
  if ( v9 )
  {
    v34 = *((_DWORD *)v9 - 1);
    if ( v34 >= v10 )
      goto LABEL_5;
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)(v5 + 24) + 3612LL) == -1 )
      goto LABEL_5;
    v33 = (_QWORD *)sub_186B270(0xAu);
    v34 = 0;
    v9 = v33 + 1;
    *v33 = 2;
    a1[8] = v33 + 1;
  }
  while ( 1 )
  {
    v29 = *((_DWORD *)v9 - 2);
    if ( v29 >= v10 )
      break;
    v26 = (3 * v29 + 1) >> 1;
    v27 = v26 + 8;
    if ( v29 + 8 >= (unsigned int)v27 || v29 >= v26 )
    {
      exception = (__m128i *)__cxa_allocate_exception(0x28u);
      v3 = (char *)operator new(0x2Bu);
      strcpy(v3, "Overflow encountered when expanding vector");
      exception->m128i_i64[1] = (__int64)v3;
      exception->m128i_i64[0] = (__int64)off_1C63128;
      exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v28 = (unsigned int *)sub_186B300(v9 - 1, v27);
    v9 = v28 + 2;
    *v28 = v26;
    a1[8] = v28 + 2;
  }
  v5 = *a1;
  v30 = v34;
  *((_DWORD *)v9 - 1) = v10;
  v31 = a2[4];
  v6 = *(_QWORD *)(v5 + 600);
  v32 = (char *)v9 + v34;
  if ( v10 != v34 )
  {
    v35 = *(_QWORD *)(v5 + 600);
    memset(v32, 0, v10 - v30);
    v6 = v35;
  }
  result = v6 + 8 * v31;
LABEL_5:
  v11 = a2[7];
  v12 = (__int64 *)(v6 + 8LL * a2[5]);
  if ( v11 <= v8 )
    v8 = a2[7];
  if ( v8 )
  {
    v13 = *(_QWORD *)result;
    v14 = *v12;
    v15 = 0;
    v16 = 0;
    do
    {
      v17 = *(_DWORD *)(v13 + v15);
      v18 = *(_DWORD *)(v14 + v15);
      if ( v18 != v17 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 3296LL);
        v20 = *(_DWORD *)(v19 + 24LL * (v18 >> 1));
        v21 = (char *)v9 + *(unsigned int *)(v19 + 24LL * (v17 >> 1));
        if ( !*v21 )
        {
          *v21 = 1;
          ++v16;
        }
        v22 = (char *)v9 + v20;
        if ( !*v22 )
        {
          *v22 = 1;
          ++v16;
        }
      }
      v15 += 4;
    }
    while ( v15 != 4LL * v8 );
    v23 = 4LL * (v8 - 1);
    do
    {
      v24 = *(_DWORD *)(v13 + v23);
      result = *(unsigned int *)(v14 + v23);
      if ( (_DWORD)result != v24 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 3296LL);
        result = *(unsigned int *)(v25 + 24LL * ((unsigned int)result >> 1));
        *((_BYTE *)v9 + *(unsigned int *)(v25 + 24LL * (v24 >> 1))) = 0;
        *((_BYTE *)v9 + result) = 0;
      }
      v23 -= 4;
    }
    while ( v23 != -4 );
  }
  else
  {
    v16 = 0;
  }
  if ( v16 < v11 )
    a2[7] = v16;
  return result;
}

