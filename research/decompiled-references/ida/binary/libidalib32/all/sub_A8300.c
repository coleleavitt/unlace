void __fastcall sub_A8300(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  int v6; // ebx
  _BYTE *v7; // rdi
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // r13
  size_t v11; // rdx
  void *v12; // r15
  __m128i si128; // xmm0
  int v14; // eax
  size_t v15; // r15
  void *v16; // rax
  __int64 v17; // rax
  size_t n[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-40h]

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
    v5 = *(int *)(dbg + 64LL);
    v6 = *(_DWORD *)(dbg + 64LL);
    if ( (v5 + 7) >> 3 )
    {
      v19 = a1 + 24;
      v17 = qvector_reserve();
      *(_QWORD *)a1 = v17;
      v3 = (void *)v17;
    }
    *(_QWORD *)(a1 + 8) = (v5 + 7) >> 3;
    v7 = memset(v3, 255, v5 >> 3);
    v8 = v6 & 7;
    if ( v8 )
    {
      v7[v5 >> 3] |= (unsigned __int8)(1 << v8) - 1;
      v19 = a1 + 24;
      sub_A7EC0((__int64 *)(a1 + 24), v5);
    }
    else
    {
      v19 = a1 + 24;
      sub_A7EC0((__int64 *)(a1 + 24), v5);
      if ( !v5 )
      {
LABEL_24:
        sub_9E2E0((_QWORD *)a1);
        return;
      }
    }
    v9 = *(_QWORD *)(a1 + 24);
    v10 = 0;
    do
    {
      if ( v9 != v4 )
      {
        v14 = *(_DWORD *)v9;
        if ( *(int *)v4 >= -1 )
        {
          if ( v14 < -1 )
          {
            *(_QWORD *)(v9 + 8) = 0;
            *(_OWORD *)(v9 + 16) = 0;
            v15 = *(_QWORD *)(v4 + 16);
            if ( v15 )
            {
              v16 = (void *)qalloc_or_throw();
              *(_QWORD *)(v9 + 8) = v16;
              *(_QWORD *)(v9 + 24) = v15;
              memcpy(v16, *(const void **)(v4 + 8), v15);
              *(_QWORD *)(v9 + 16) = v15;
            }
          }
          else
          {
            v11 = *(_QWORD *)(v4 + 16);
            v12 = nullptr;
            if ( v11 )
            {
              n[0] = *(_QWORD *)(v4 + 16);
              v12 = (void *)qalloc_or_throw();
              memcpy(v12, *(const void **)(v4 + 8), n[0]);
              v11 = n[0];
            }
            si128 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
            if ( *(_QWORD *)(v9 + 8) )
            {
              *(_QWORD *)(v9 + 16) = 0;
              *(__m128i *)n = si128;
              qfree();
              si128 = _mm_load_si128((const __m128i *)n);
            }
            *(_QWORD *)(v9 + 8) = v12;
            *(__m128i *)(v9 + 16) = si128;
          }
        }
        else
        {
          if ( v14 >= -1 )
          {
            if ( *(_QWORD *)(v9 + 8) )
            {
              *(_QWORD *)(v9 + 16) = 0;
              qfree();
            }
          }
          *(_QWORD *)(v9 + 8) = *(_QWORD *)(v4 + 8);
        }
        *(_DWORD *)v9 = *(_DWORD *)v4;
      }
      ++v10;
      v9 += 32;
      v4 += 32;
    }
    while ( v5 != v10 );
    goto LABEL_24;
  }
}

