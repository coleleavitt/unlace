__int64 __fastcall sub_116E790(__int64 a1, __m128i *a2)
{
  __m128i *v2; // r15
  __m128i *v4; // r14
  __int64 v5; // rax
  size_t v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rbx
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rax
  __m128i *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rbx
  int v19; // ebx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-60h] BYREF
  void *v23; // [rsp+10h] [rbp-58h]
  size_t v24; // [rsp+18h] [rbp-50h]
  _OWORD v25[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2 + 1;
  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
  {
    v12 = sub_2237400(a1, a1 + 16, 0, 64, &v22);
    v13 = (__m128i *)a2->m128i_i64[0];
    v14 = v12;
    v23 = v25;
    if ( v13 == v2 )
    {
      v13 = (__m128i *)v25;
      v25[0] = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      v15 = a2[1].m128i_i64[0];
      v23 = v13;
      *(_QWORD *)&v25[0] = v15;
    }
    v16 = a2->m128i_i64[1];
    a2->m128i_i64[0] = (__int64)v2;
    a2->m128i_i64[1] = 0;
    a2[1].m128i_i8[0] = 0;
    v17 = *(unsigned int *)(a1 + 8);
    v24 = v16;
    v18 = v14 + (v17 << 6);
    *(_OWORD *)(v18 + 8) = 0;
    *(_QWORD *)v18 = v18 + 24;
    sub_A1FE50((_QWORD *)v18, v13, &v13->m128i_i8[v16]);
    *(_BYTE *)(v18 + 24) = 0;
    *(_QWORD *)(v18 + 32) = v18 + 48;
    *(_QWORD *)(v18 + 40) = 0;
    *(_BYTE *)(v18 + 48) = 0;
    if ( v23 != v25 )
      operator delete(v23);
    sub_116E650(a1, v14);
    v19 = v22;
    if ( a1 + 16 != *(_QWORD *)a1 )
      free(*(void **)a1);
    v20 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v14;
    *(_DWORD *)(a1 + 12) = v19;
    v21 = (unsigned int)(v20 + 1);
    *(_DWORD *)(a1 + 8) = v21;
    return v14 + (v21 << 6) - 64;
  }
  else
  {
    v4 = (__m128i *)a2->m128i_i64[0];
    v23 = v25;
    if ( v4 == v2 )
    {
      v4 = (__m128i *)v25;
      v25[0] = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      v5 = a2[1].m128i_i64[0];
      v23 = v4;
      *(_QWORD *)&v25[0] = v5;
    }
    v6 = a2->m128i_u64[1];
    a2->m128i_i64[0] = (__int64)v2;
    a2[1].m128i_i8[0] = 0;
    a2->m128i_i64[1] = 0;
    v7 = *(unsigned int *)(a1 + 8);
    v24 = v6;
    v8 = *(_QWORD *)a1 + (v7 << 6);
    *(_OWORD *)(v8 + 8) = 0;
    *(_QWORD *)v8 = v8 + 24;
    if ( v6 )
    {
      sub_2236E10(v8, v8 + 24, v6, 1);
      memcpy((void *)(*(_QWORD *)v8 + *(_QWORD *)(v8 + 8)), v4, v6);
      v6 += *(_QWORD *)(v8 + 8);
    }
    *(_QWORD *)(v8 + 8) = v6;
    *(_BYTE *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 32) = v8 + 48;
    *(_QWORD *)(v8 + 40) = 0;
    *(_BYTE *)(v8 + 48) = 0;
    if ( v23 != v25 )
      operator delete(v23);
    v9 = *(void **)a1;
    v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v10;
    return (__int64)v9 + 64 * v10 - 64;
  }
}
