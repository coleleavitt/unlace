void __fastcall sub_14FFC20(__int64 a1, __int64 a2)
{
  char *v3; // rbp
  __int64 v4; // r12
  char *v5; // rax
  char *v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // r8
  void *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  char *v14; // r14
  char *v15; // rdi
  int v16; // r14d
  const void *v17; // rsi
  size_t v18; // rdx
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (char *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 96, v21);
  v5 = *(char **)a1;
  v6 = (char *)(*(_QWORD *)a1 + 96LL * *(unsigned int *)(a1 + 8));
  if ( *(char **)a1 == v6 )
    goto LABEL_12;
  v7 = v5 + 80;
  v8 = v4 + 64;
  v9 = (unsigned __int64)&v5[((v6 - v5 - 96) & 0xFFFFFFFFFFFFFFE0LL) + 176];
  do
  {
    while ( 1 )
    {
      v10 = (void *)(v8 + 16);
      *(_QWORD *)(v8 - 64) = *(v7 - 10);
      *(_DWORD *)(v8 - 56) = *((_DWORD *)v7 - 18);
      *(_QWORD *)(v8 - 48) = *(v7 - 8);
      *(__m128i *)(v8 - 40) = _mm_loadu_si128((const __m128i *)(v7 - 7));
      *(__m128i *)(v8 - 24) = _mm_loadu_si128((const __m128i *)(v7 - 5));
      v11 = *(v7 - 3);
      *(_DWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 - 8) = v11;
      *(_DWORD *)(v8 + 12) = 2;
      v12 = *((_DWORD *)v7 - 2);
      *(_QWORD *)v8 = v8 + 16;
      if ( v12 )
      {
        if ( (_QWORD *)v8 != v7 - 2 )
          break;
      }
LABEL_3:
      v7 += 12;
      v8 += 96;
      if ( v7 == (_QWORD *)v9 )
        goto LABEL_8;
    }
    v13 = (_QWORD *)*(v7 - 2);
    if ( v13 == v7 )
    {
      v17 = v7;
      v18 = 8LL * v12;
      if ( v12 <= 2uLL
        || (v20 = v9,
            sub_2237220(v8, v8 + 16, v12, 8),
            v10 = *(void **)v8,
            v17 = (const void *)*(v7 - 2),
            v9 = v20,
            (v18 = 8LL * *((unsigned int *)v7 - 2)) != 0) )
      {
        v19 = v9;
        memcpy(v10, v17, v18);
        v9 = v19;
        *(_DWORD *)(v8 + 8) = v12;
        *((_DWORD *)v7 - 2) = 0;
      }
      else
      {
        *(_DWORD *)(v8 + 8) = v12;
        *((_DWORD *)v7 - 2) = 0;
      }
      goto LABEL_3;
    }
    *(_QWORD *)v8 = v13;
    v8 += 96;
    *(_DWORD *)(v8 - 88) = v12;
    *(_DWORD *)(v8 - 84) = *((_DWORD *)v7 - 1);
    *(v7 - 2) = v7;
    v7 += 12;
    *((_DWORD *)v7 - 25) = 0;
    *((_DWORD *)v7 - 26) = 0;
  }
  while ( v7 != (_QWORD *)v9 );
LABEL_8:
  v14 = *(char **)a1;
  v6 = (char *)(*(_QWORD *)a1 + 96LL * *(unsigned int *)(a1 + 8));
  if ( *(char **)a1 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v6 -= 96;
        v15 = *((char **)v6 + 8);
        if ( v15 == v6 + 80 )
          break;
        free(v15);
        if ( v14 == v6 )
        {
          v6 = *(char **)a1;
          goto LABEL_12;
        }
      }
    }
    while ( v14 != v6 );
    v6 = *(char **)a1;
  }
LABEL_12:
  v16 = v21[0];
  if ( v3 != v6 )
    free(v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v16;
}
