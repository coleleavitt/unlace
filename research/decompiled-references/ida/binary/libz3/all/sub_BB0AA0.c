__int64 __fastcall sub_BB0AA0(__int64 a1, unsigned int *a2, _QWORD *a3, unsigned int **a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned int *v11; // r12
  unsigned int *v12; // r13
  __int64 v13; // rax
  __m128i v14; // xmm0

  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    return 0;
  v7 = *a2;
  v8 = 0;
  if ( (unsigned int)v7 < *(_DWORD *)(v5 - 4) )
  {
    v9 = v5 + 24 * v7;
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      v11 = *a4;
      v12 = *(unsigned int **)(v9 + 16);
      if ( *a4 )
      {
        if ( v11 != v12 )
        {
          if ( v12 )
          {
            v13 = sub_180C100(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), 24);
            v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v12);
            *v11 = (*v11 + 1) & 0x3FFFFFFF | *v11 & 0xC0000000;
            v11 = (unsigned int *)v13;
            *v12 = (*v12 + 1) & 0x3FFFFFFF | *v12 & 0xC0000000;
            *(_QWORD *)v13 = 0;
            *(__m128i *)(v13 + 8) = v14;
          }
        }
      }
      else
      {
        v11 = *(unsigned int **)(v9 + 16);
      }
      *a4 = v11;
      v8 = 1;
      *a3 = v10;
    }
  }
  return v8;
}

