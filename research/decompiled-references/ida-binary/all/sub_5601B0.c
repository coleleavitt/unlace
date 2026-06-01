__int64 __fastcall sub_5601B0(__int64 a1, const char *a2, unsigned int a3)
{
  size_t v3; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned int v10; // ebx
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  void *v15; // rdi
  unsigned int v16; // ebp
  unsigned int v17; // ebp
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int v20; // edx

  v3 = a3;
  v6 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 0;
    v3 = a3;
    while ( a3 != *(_DWORD *)(v7 + 8 * v8 + 4)
         || strncmp((const char *)(*(_QWORD *)a1 + *(unsigned int *)(v7 + 8 * v8)), a2, v3) )
    {
      if ( v6 == ++v8 )
        goto LABEL_8;
    }
    if ( (int)v8 >= 0 )
      return (unsigned int)v8;
  }
LABEL_8:
  v10 = *(_DWORD *)(a1 + 8);
  v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  if ( a3 != -1 )
  {
    v17 = a3 + 1;
    v18 = *(_DWORD *)(a1 + 12);
    v19 = *(_DWORD *)(a1 + 8);
    if ( v18 < v10 + v17 )
    {
      v20 = 2 * v18;
      if ( 2 * v18 < v10 + v17 )
        v20 = v10 + v17;
      if ( v20 < 8 )
        v20 = 8;
      if ( v18 < v20 )
      {
        sub_55D020(a1, 1, v20);
        v19 = *(_DWORD *)(a1 + 8);
      }
    }
    memset((void *)(*(_QWORD *)a1 + v19), 0, v17);
    *(_DWORD *)(a1 + 8) += v17;
  }
  memcpy((void *)(*(_QWORD *)a1 + v10), a2, v3);
  *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 8) - 1)) = 0;
  v12 = *(unsigned int *)(a1 + 24);
  v13 = *(_DWORD *)(a1 + 28);
  v14 = v12 + 1;
  if ( v13 < (int)v12 + 1 )
  {
    v16 = 2 * v13;
    v15 = *(void **)(a1 + 16);
    if ( 2 * v13 < v14 )
      v16 = v12 + 1;
    if ( v16 < 8 )
      v16 = 8;
    if ( v13 < v16 )
    {
      if ( v15 )
        v15 = off_8C52A8(v15, 8LL * v16);
      else
        v15 = off_8C52B8(8LL * v16);
      v12 = *(unsigned int *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = v15;
      *(_DWORD *)(a1 + 28) = v16;
      v14 = v12 + 1;
    }
  }
  else
  {
    v15 = *(void **)(a1 + 16);
  }
  *(_DWORD *)(a1 + 24) = v14;
  *((_QWORD *)v15 + v12) = v11;
  return v14 - 1;
}
