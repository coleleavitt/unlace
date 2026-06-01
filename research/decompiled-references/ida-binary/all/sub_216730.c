void __fastcall sub_216730(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  int v6; // ebx
  _BYTE *v7; // rdi
  int v8; // ebx
  const void *v9; // rsi
  __int64 v10; // rbx
  int *v11; // r13
  size_t v12; // rdx
  void *v13; // r15
  __int64 v14; // rdi
  __m128i si128; // xmm0
  int v16; // eax
  __int64 v17; // rdi
  size_t v18; // r15
  void *v19; // rax
  void *v20; // rax
  __int64 v21; // rax
  size_t n[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+18h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( a2 )
  {
    v3 = nullptr;
    v4 = a2;
    v5 = *(int *)(dbg + 64);
    v6 = *(_DWORD *)(dbg + 64);
    if ( (v5 + 7) >> 3 )
    {
      v23 = a1 + 24;
      v21 = qvector_reserve(a1, 0, (v5 + 7) >> 3, 1);
      *(_QWORD *)a1 = v21;
      v3 = (void *)v21;
    }
    *(_QWORD *)(a1 + 8) = (v5 + 7) >> 3;
    v7 = memset(v3, 255, v5 >> 3);
    v8 = v6 & 7;
    if ( v8 )
    {
      v9 = (const void *)v5;
      v7[v5 >> 3] |= (unsigned __int8)(1 << v8) - 1;
      v23 = a1 + 24;
      sub_216180((int **)(a1 + 24), (int *)v5);
    }
    else
    {
      v9 = (const void *)v5;
      v23 = a1 + 24;
      sub_216180((int **)(a1 + 24), (int *)v5);
      if ( !v5 )
      {
LABEL_24:
        sub_20CF60((_QWORD *)a1);
        return;
      }
    }
    v10 = *(_QWORD *)(a1 + 24);
    v11 = nullptr;
    do
    {
      if ( v10 != v4 )
      {
        v16 = *(_DWORD *)v10;
        if ( *(int *)v4 >= -1 )
        {
          if ( v16 < -1 )
          {
            *(_QWORD *)(v10 + 8) = 0;
            *(_OWORD *)(v10 + 16) = 0;
            v18 = *(_QWORD *)(v4 + 16);
            if ( v18 )
            {
              v19 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 16));
              *(_QWORD *)(v10 + 8) = v19;
              *(_QWORD *)(v10 + 24) = v18;
              v9 = *(const void **)(v4 + 8);
              memcpy(v19, v9, v18);
              *(_QWORD *)(v10 + 16) = v18;
            }
          }
          else
          {
            v12 = *(_QWORD *)(v4 + 16);
            v13 = nullptr;
            if ( v12 )
            {
              n[0] = *(_QWORD *)(v4 + 16);
              v20 = (void *)qalloc_or_throw(n[0]);
              v9 = *(const void **)(v4 + 8);
              v13 = v20;
              memcpy(v20, v9, n[0]);
              v12 = n[0];
            }
            v14 = *(_QWORD *)(v10 + 8);
            si128 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
            if ( v14 )
            {
              *(_QWORD *)(v10 + 16) = 0;
              *(__m128i *)n = si128;
              qfree(v14, (const char *)v9);
              si128 = _mm_load_si128((const __m128i *)n);
            }
            *(_QWORD *)(v10 + 8) = v13;
            *(__m128i *)(v10 + 16) = si128;
          }
        }
        else
        {
          if ( v16 >= -1 )
          {
            v17 = *(_QWORD *)(v10 + 8);
            if ( v17 )
            {
              *(_QWORD *)(v10 + 16) = 0;
              qfree(v17, (const char *)v9);
            }
          }
          *(_QWORD *)(v10 + 8) = *(_QWORD *)(v4 + 8);
        }
        *(_DWORD *)v10 = *(_DWORD *)v4;
      }
      v11 = (int *)((char *)v11 + 1);
      v10 += 32;
      v4 += 32;
    }
    while ( (int *)v5 != v11 );
    goto LABEL_24;
  }
}
