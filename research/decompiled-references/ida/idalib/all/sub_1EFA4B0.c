void __fastcall sub_1EFA4B0(__int64 *a1, __int64 a2)
{
  int v3; // eax
  unsigned __int64 v4; // rdx
  char *v5; // rbx
  int v6; // r13d
  int v7; // edx
  unsigned int v8; // eax
  int v9; // r12d
  __m128i *v10; // rcx
  __int64 v11; // rax
  char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  int v20; // r9d
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // r14
  int v24; // edx
  unsigned __int64 v25; // rdx
  const __m128i *v26; // rax
  unsigned __int64 v27; // [rsp+0h] [rbp-E8h]
  __int128 v29; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-B8h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-A0h]
  _BYTE v33[152]; // [rsp+50h] [rbp-98h] BYREF

  v3 = sub_1EE7490(*a1);
  v4 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = v3;
  v5 = v33;
  v6 = v4;
  ptr = v33;
  v32 = 0x400000000LL;
  if ( v4 > 4 )
  {
    sub_2237220(&ptr, v33, v4, 24);
    v7 = v32;
    v5 = (char *)ptr;
    v8 = v32;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  if ( v6 )
  {
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = (__m128i *)&v5[24 * v8];
        if ( v8 >= (unsigned __int64)HIDWORD(v32) )
        {
          v25 = v8 + 1LL;
          v29 = 0;
          v26 = (const __m128i *)&v29;
          v30 = 0;
          if ( HIDWORD(v32) < v25 )
          {
            if ( v5 > (char *)&v29 || v10 <= (__m128i *)&v29 )
            {
              sub_2237220(&ptr, v33, v25, 24);
              v10 = (__m128i *)((char *)ptr + 24 * (unsigned int)v32);
              v26 = (const __m128i *)&v29;
            }
            else
            {
              sub_2237220(&ptr, v33, v25, 24);
              v26 = (const __m128i *)((char *)ptr + (char *)&v29 - v5);
              v10 = (__m128i *)((char *)ptr + 24 * (unsigned int)v32);
            }
          }
          *v10 = _mm_loadu_si128(v26);
          v10[1].m128i_i64[0] = v26[1].m128i_i64[0];
          v8 = v32;
        }
        else
        {
          v10[1].m128i_i64[0] = 0;
          *v10 = 0;
        }
        v11 = v8 + 1;
        LODWORD(v32) = v11;
        v12 = (char *)ptr + 24 * v11 - 24;
        *(_QWORD *)v12 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        *((_QWORD *)v12 + 1) = sub_1F61940(*(_QWORD *)(*a1 + 8));
        v13 = *a1;
        v14 = *(unsigned int *)(*a1 + 24);
        v15 = *(_QWORD *)(*a1 + 16);
        v16 = *(_QWORD *)(*a1 + 8);
        v17 = *(_QWORD *)(v15 + 856);
        v18 = v15;
        *(_DWORD *)(v13 + 24) = v14 + 1;
        v19 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14);
        if ( v17 )
        {
          v27 = v19;
          sub_1EDF870(v16, v15);
          v13 = *a1;
          v19 = v27;
          v18 = *(_QWORD *)(*a1 + 16);
          v16 = *(_QWORD *)(*a1 + 8);
          v17 = *(_QWORD *)(v18 + 856);
        }
        v20 = __ROR4__(v19, 1);
        v21 = HIDWORD(v19);
        if ( v21 )
          v15 = *(_QWORD *)(*(_QWORD *)(v15 + 3320) + 8LL * (unsigned int)(v21 - 1));
        if ( v20 )
          v20 = v20 + *(_DWORD *)(v15 + 1648) - 2;
        *((_DWORD *)v12 + 4) = v20;
        v22 = *(unsigned int *)(v13 + 24);
        *(_DWORD *)(v13 + 24) = v22 + 1;
        v23 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v22);
        if ( v17 )
          sub_1EDF870(v16, v18);
        v24 = __ROR4__(v23, 1);
        if ( HIDWORD(v23) )
          v18 = *(_QWORD *)(*(_QWORD *)(v18 + 3320) + 8LL * (unsigned int)(HIDWORD(v23) - 1));
        if ( !v24 )
          break;
        ++v9;
        *((_DWORD *)v12 + 5) = v24 + *(_DWORD *)(v18 + 1648) - 2;
        v5 = (char *)ptr;
        v8 = v32;
        if ( v6 == v9 )
          goto LABEL_19;
      }
      ++v9;
      *((_DWORD *)v12 + 5) = 0;
      v8 = v32;
      v5 = (char *)ptr;
    }
    while ( v9 != v6 );
LABEL_19:
    v7 = v8;
  }
  sub_EB5B80(a2, v5, v7);
  if ( ptr != v33 )
    free(ptr);
}
