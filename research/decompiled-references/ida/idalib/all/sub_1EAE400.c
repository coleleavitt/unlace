void __fastcall sub_1EAE400(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // eax
  unsigned __int64 v8; // r13
  int v9; // edi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __m128i v15; // xmm0
  unsigned __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rcx
  const void *v20; // rsi
  int v21; // ecx
  const void *v22; // rsi
  __int64 i; // rdx
  __int64 v24; // rcx

  if ( a1 == a2 )
    return;
  v2 = *a1;
  v3 = *((_DWORD *)a2 + 2);
  if ( a1 + 2 != (__int64 *)*a1 && (__int64 *)*a2 != a2 + 2 )
  {
    *a1 = *a2;
    *a2 = v2;
    v4 = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 2) = v3;
    *((_DWORD *)a2 + 2) = v4;
    v5 = *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v5;
    return;
  }
  if ( *((_DWORD *)a1 + 3) < v3 )
  {
    sub_2237220(a1, a1 + 2, v3, 8);
    v8 = *((unsigned int *)a1 + 2);
    v9 = v8;
    if ( *((_DWORD *)a2 + 3) >= (unsigned int)v8 )
      goto LABEL_7;
    goto LABEL_26;
  }
  v8 = *((unsigned int *)a1 + 2);
  v9 = v8;
  if ( *((_DWORD *)a2 + 3) < (unsigned int)v8 )
  {
LABEL_26:
    sub_2237220(a2, a2 + 2, v8, 8);
    v8 = *((unsigned int *)a1 + 2);
    v9 = *((_DWORD *)a1 + 2);
  }
LABEL_7:
  v10 = *((unsigned int *)a2 + 2);
  v11 = v8;
  if ( v10 <= v8 )
    v11 = *((unsigned int *)a2 + 2);
  if ( v11 )
  {
    v12 = *a2;
    v13 = *a1;
    if ( (*a2 >= (unsigned __int64)(*a1 + 16) || *a1 >= (unsigned __int64)(*a2 + 16)) && v11 - 1 > 1 )
    {
      v14 = 0;
      do
      {
        v15 = _mm_loadu_si128((const __m128i *)(v13 + v14));
        *(__m128i *)(v13 + v14) = _mm_loadu_si128((const __m128i *)(v12 + v14));
        *(__m128i *)(v12 + v14) = v15;
        v14 += 16;
      }
      while ( 16 * (v11 >> 1) != v14 );
      if ( v11 != (v11 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v16 = 8 * (v11 & 0xFFFFFFFFFFFFFFFELL);
        v17 = (__int64 *)(v16 + v12);
        v18 = (__int64 *)(v13 + v16);
        v19 = *v18;
        *v18 = *v17;
        *v17 = v19;
      }
    }
    else
    {
      for ( i = 0; i != v11; ++i )
      {
        v24 = *(_QWORD *)(v13 + 8 * i);
        *(_QWORD *)(v13 + 8 * i) = *(_QWORD *)(v12 + 8 * i);
        *(_QWORD *)(v12 + 8 * i) = v24;
      }
    }
  }
  if ( v10 >= v8 )
  {
    if ( v10 > v8 )
    {
      v21 = v8;
      v22 = (const void *)(*a2 + 8 * v11);
      if ( v22 != (const void *)(8 * v10 + *a2) )
      {
        memcpy((void *)(*a1 + 8 * v8), v22, 8 * v10 - 8 * v11);
        v21 = *((_DWORD *)a1 + 2);
      }
      *((_DWORD *)a1 + 2) = v21 + v10 - v8;
      *((_DWORD *)a2 + 2) = v11;
    }
  }
  else
  {
    v20 = (const void *)(*a1 + 8 * v11);
    if ( v20 != (const void *)(8 * v8 + *a1) )
    {
      memcpy((void *)(*a2 + 8 * v10), v20, 8 * v8 - 8 * v11);
      v9 = *((_DWORD *)a2 + 2) - v10 + v8;
    }
    *((_DWORD *)a2 + 2) = v9;
    *((_DWORD *)a1 + 2) = v11;
  }
}
