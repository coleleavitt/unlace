__int64 __fastcall sub_116E9B0(__int64 a1, __m128i *a2, char *a3)
{
  __m128i *v3; // r15
  __m128i *v5; // r14
  __int64 v6; // rax
  size_t v7; // r12
  char v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rbx
  void *v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rax
  _OWORD *v15; // rsi
  __int64 v16; // r12
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rbx
  int v23; // ebx
  int v24; // eax
  __int64 v25; // rax
  __int64 v27; // [rsp+18h] [rbp-60h] BYREF
  void *v28; // [rsp+20h] [rbp-58h]
  size_t v29; // [rsp+28h] [rbp-50h]
  _OWORD v30[4]; // [rsp+30h] [rbp-48h] BYREF

  v3 = a2 + 1;
  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
  {
    v14 = sub_2237400(a1, a1 + 16, 0, 64, &v27);
    v15 = (_OWORD *)a2->m128i_i64[0];
    v16 = v14;
    v17 = v3 == (__m128i *)a2->m128i_i64[0];
    v28 = v30;
    if ( v17 )
    {
      v15 = v30;
      v30[0] = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      v18 = a2[1].m128i_i64[0];
      v28 = v15;
      *(_QWORD *)&v30[0] = v18;
    }
    v19 = a2->m128i_i64[1];
    a2->m128i_i64[0] = (__int64)v3;
    a2[1].m128i_i8[0] = 0;
    v20 = *a3;
    a2->m128i_i64[1] = 0;
    v21 = *(unsigned int *)(a1 + 8);
    v29 = v19;
    v22 = v16 + (v21 << 6);
    *(_OWORD *)(v22 + 8) = 0;
    *(_QWORD *)v22 = v22 + 24;
    sub_A1FE50((_QWORD *)v22, v15, (_BYTE *)v15 + v19);
    *(_BYTE *)(v22 + 24) = v20;
    *(_QWORD *)(v22 + 32) = v22 + 48;
    *(_QWORD *)(v22 + 40) = 0;
    *(_BYTE *)(v22 + 48) = 0;
    if ( v28 != v30 )
      operator delete(v28);
    sub_116E650(a1, v16);
    v23 = v27;
    if ( a1 + 16 != *(_QWORD *)a1 )
      free(*(void **)a1);
    v24 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v16;
    *(_DWORD *)(a1 + 12) = v23;
    v25 = (unsigned int)(v24 + 1);
    *(_DWORD *)(a1 + 8) = v25;
    return v16 + (v25 << 6) - 64;
  }
  else
  {
    v5 = (__m128i *)a2->m128i_i64[0];
    v28 = v30;
    if ( v3 == v5 )
    {
      v5 = (__m128i *)v30;
      v30[0] = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      v6 = a2[1].m128i_i64[0];
      v28 = v5;
      *(_QWORD *)&v30[0] = v6;
    }
    v7 = a2->m128i_u64[1];
    a2->m128i_i64[0] = (__int64)v3;
    a2[1].m128i_i8[0] = 0;
    v8 = *a3;
    a2->m128i_i64[1] = 0;
    v9 = *(unsigned int *)(a1 + 8);
    v29 = v7;
    v10 = *(_QWORD *)a1 + (v9 << 6);
    *(_OWORD *)(v10 + 8) = 0;
    *(_QWORD *)v10 = v10 + 24;
    if ( v7 )
    {
      sub_2236E10(v10, v10 + 24, v7, 1);
      memcpy((void *)(*(_QWORD *)v10 + *(_QWORD *)(v10 + 8)), v5, v7);
      v7 += *(_QWORD *)(v10 + 8);
    }
    *(_QWORD *)(v10 + 8) = v7;
    *(_BYTE *)(v10 + 24) = v8;
    *(_QWORD *)(v10 + 32) = v10 + 48;
    *(_QWORD *)(v10 + 40) = 0;
    *(_BYTE *)(v10 + 48) = 0;
    if ( v28 != v30 )
      operator delete(v28);
    v11 = *(void **)a1;
    v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v12;
    return (__int64)v11 + 64 * v12 - 64;
  }
}
