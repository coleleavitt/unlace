__int64 __fastcall sub_2364E0(__int64 a1, const char *a2, __int64 a3)
{
  unsigned int v4; // edx
  __int64 v5; // rax
  char *v6; // rbp
  int v7; // eax
  size_t v8; // rbx
  void *v9; // r13
  __m128i si128; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // rax
  const char *v16; // rbp
  size_t v17; // rbx
  void *v18; // rax
  unsigned __int64 v19; // rdi
  int v20; // edx
  __int64 i; // rax
  __int64 v22; // rdi
  void *v23; // rax
  __m128i v24[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( a2 )
  {
    v4 = 0;
    v5 = *(int *)(a1 + 44);
    if ( (int)v5 < 0 || (int)v5 >= *(_DWORD *)(dbg + 64) )
      return v4;
    if ( *(_BYTE *)(a1 + 32) != 0xFF )
    {
      v15 = sub_235E50(a1);
      v16 = &a2[32 * *(int *)(a1 + 44)];
      *((_QWORD *)v16 + 1) ^= v15 & (*((_QWORD *)v16 + 1) ^ (*(_QWORD *)(a3 + 8) << *(_BYTE *)(a1 + 32)));
      return 1;
    }
    v6 = (char *)&a2[32 * v5];
    if ( (unsigned __int8)sub_235DE0(a1) )
    {
      v12 = sub_235E50(a1);
      v13 = *((_QWORD *)v6 + 1) & ~v12;
      *((_QWORD *)v6 + 1) = v13;
      *((_QWORD *)v6 + 1) = v13 | *(_QWORD *)(a3 + 8) & v12;
      return 1;
    }
    if ( *(_DWORD *)(a1 + 40) != -1 && *(int *)v6 >= 0 && *(_DWORD *)v6 == *(_DWORD *)a3 )
    {
      v19 = *((_QWORD *)v6 + 2);
      v8 = *(_QWORD *)(a3 + 16);
      if ( v19 != v8 )
      {
        if ( v19 > v8 )
          v19 = *(_QWORD *)(a3 + 16);
        v20 = 0;
        for ( i = 0; v20 < v19; i = v20 )
        {
          ++v20;
          *(_BYTE *)(*((_QWORD *)v6 + 1) + i) = *(_BYTE *)(*(_QWORD *)(a3 + 8) + i);
        }
        return 1;
      }
      if ( (char *)a3 != v6 )
        goto LABEL_13;
    }
    else if ( (char *)a3 != v6 )
    {
      v7 = *(_DWORD *)v6;
      if ( *(int *)a3 < -1 )
      {
        if ( v7 >= -1 )
        {
          v22 = *((_QWORD *)v6 + 1);
          if ( v22 )
          {
            *((_QWORD *)v6 + 2) = 0;
            qfree(v22, a2);
          }
        }
        *((_QWORD *)v6 + 1) = *(_QWORD *)(a3 + 8);
        goto LABEL_18;
      }
      if ( v7 < -1 )
      {
        *((_QWORD *)v6 + 1) = 0;
        *((_OWORD *)v6 + 1) = 0;
        v17 = *(_QWORD *)(a3 + 16);
        if ( v17 )
        {
          v18 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 16));
          *((_QWORD *)v6 + 3) = v17;
          *((_QWORD *)v6 + 1) = v18;
          memcpy(v18, *(const void **)(a3 + 8), v17);
          *((_QWORD *)v6 + 2) = v17;
        }
        goto LABEL_18;
      }
      v8 = *(_QWORD *)(a3 + 16);
LABEL_13:
      v9 = nullptr;
      si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
      if ( v8 )
      {
        v24[0] = si128;
        v23 = (void *)qalloc_or_throw(v8);
        a2 = *(const char **)(a3 + 8);
        v9 = v23;
        memcpy(v23, a2, v8);
        si128 = _mm_load_si128(v24);
      }
      v11 = *((_QWORD *)v6 + 1);
      if ( v11 )
      {
        *((_QWORD *)v6 + 2) = 0;
        v24[0] = si128;
        qfree(v11, a2);
        si128 = _mm_load_si128(v24);
      }
      *((_QWORD *)v6 + 1) = v9;
      *((__m128i *)v6 + 1) = si128;
LABEL_18:
      *(_DWORD *)v6 = *(_DWORD *)a3;
    }
    return 1;
  }
  return 0;
}
