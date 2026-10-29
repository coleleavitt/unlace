__int64 __fastcall sub_C7D60(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // eax
  size_t v8; // rbx
  void *v9; // r13
  __m128i si128; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rbp
  size_t v16; // rbx
  void *v17; // rax
  unsigned __int64 v18; // rdi
  int v19; // edx
  __int64 i; // rax
  __m128i v21[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( a2 )
  {
    v4 = 0;
    v5 = *(int *)(a1 + 44);
    if ( (int)v5 < 0 || (int)v5 >= *(_DWORD *)(dbg + 64LL) )
      return v4;
    if ( *(_BYTE *)(a1 + 32) != 0xFF )
    {
      v14 = sub_C73A0(a1);
      v15 = 32LL * *(int *)(a1 + 44) + a2;
      *(_QWORD *)(v15 + 8) ^= v14 & (*(_QWORD *)(v15 + 8) ^ (*(_QWORD *)(a3 + 8) << *(_BYTE *)(a1 + 32)));
      return 1;
    }
    v6 = 32 * v5 + a2;
    if ( (unsigned __int8)sub_C72E0(a1) )
    {
      v11 = sub_C73A0(a1);
      v12 = *(_QWORD *)(v6 + 8) & ~v11;
      *(_QWORD *)(v6 + 8) = v12;
      *(_QWORD *)(v6 + 8) = v12 | *(_QWORD *)(a3 + 8) & v11;
      return 1;
    }
    if ( *(_DWORD *)(a1 + 40) != -1 && *(int *)v6 >= 0 && *(_DWORD *)v6 == *(_DWORD *)a3 )
    {
      v18 = *(_QWORD *)(v6 + 16);
      v8 = *(_QWORD *)(a3 + 16);
      if ( v18 != v8 )
      {
        if ( v18 > v8 )
          v18 = *(_QWORD *)(a3 + 16);
        v19 = 0;
        for ( i = 0; v19 < v18; i = v19 )
        {
          ++v19;
          *(_BYTE *)(*(_QWORD *)(v6 + 8) + i) = *(_BYTE *)(*(_QWORD *)(a3 + 8) + i);
        }
        return 1;
      }
      if ( a3 != v6 )
        goto LABEL_13;
    }
    else if ( a3 != v6 )
    {
      v7 = *(_DWORD *)v6;
      if ( *(int *)a3 < -1 )
      {
        if ( v7 >= -1 && *(_QWORD *)(v6 + 8) )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree();
        }
        *(_QWORD *)(v6 + 8) = *(_QWORD *)(a3 + 8);
        goto LABEL_18;
      }
      if ( v7 < -1 )
      {
        *(_QWORD *)(v6 + 8) = 0;
        *(_OWORD *)(v6 + 16) = 0;
        v16 = *(_QWORD *)(a3 + 16);
        if ( v16 )
        {
          v17 = (void *)qalloc_or_throw();
          *(_QWORD *)(v6 + 24) = v16;
          *(_QWORD *)(v6 + 8) = v17;
          memcpy(v17, *(const void **)(a3 + 8), v16);
          *(_QWORD *)(v6 + 16) = v16;
        }
        goto LABEL_18;
      }
      v8 = *(_QWORD *)(a3 + 16);
LABEL_13:
      v9 = nullptr;
      si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
      if ( v8 )
      {
        v21[0] = si128;
        v9 = (void *)qalloc_or_throw();
        memcpy(v9, *(const void **)(a3 + 8), v8);
        si128 = _mm_load_si128(v21);
      }
      if ( *(_QWORD *)(v6 + 8) )
      {
        *(_QWORD *)(v6 + 16) = 0;
        v21[0] = si128;
        qfree();
        si128 = _mm_load_si128(v21);
      }
      *(_QWORD *)(v6 + 8) = v9;
      *(__m128i *)(v6 + 16) = si128;
LABEL_18:
      *(_DWORD *)v6 = *(_DWORD *)a3;
    }
    return 1;
  }
  return 0;
}

