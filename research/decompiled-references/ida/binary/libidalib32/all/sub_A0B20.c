__int64 __fastcall sub_A0B20(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbp
  int v12; // eax
  size_t v13; // r13
  __m128i si128; // xmm0
  size_t v15; // rbx
  void *v16; // rax
  __m128i v17[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 192);
  if ( !v4 )
    return 0;
  v5 = a1 + 184;
  v7 = a1 + 184;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v4 + 16);
      v9 = *(_QWORD *)(v4 + 24);
      if ( *(_DWORD *)(v4 + 32) >= a2 )
        break;
      v4 = *(_QWORD *)(v4 + 24);
      if ( !v9 )
        goto LABEL_6;
    }
    v7 = v4;
    v4 = *(_QWORD *)(v4 + 16);
  }
  while ( v8 );
LABEL_6:
  result = 0;
  if ( v5 != v7 && *(_DWORD *)(v7 + 32) <= a2 && *(_QWORD *)(v7 + 48) )
  {
    if ( a4 )
    {
      v11 = *(_QWORD *)(v7 + 40) + 32LL * a3;
      if ( a4 != v11 )
      {
        v12 = *(_DWORD *)a4;
        if ( *(int *)v11 < -1 )
        {
          if ( v12 >= -1 && *(_QWORD *)(a4 + 8) )
          {
            *(_QWORD *)(a4 + 16) = 0;
            qfree();
          }
          *(_QWORD *)(a4 + 8) = *(_QWORD *)(v11 + 8);
        }
        else if ( v12 < -1 )
        {
          *(_QWORD *)(a4 + 8) = 0;
          *(_OWORD *)(a4 + 16) = 0;
          v15 = *(_QWORD *)(v11 + 16);
          if ( v15 )
          {
            v16 = (void *)qalloc_or_throw();
            *(_QWORD *)(a4 + 24) = v15;
            *(_QWORD *)(a4 + 8) = v16;
            memcpy(v16, *(const void **)(v11 + 8), v15);
            *(_QWORD *)(a4 + 16) = v15;
          }
        }
        else
        {
          v13 = *(_QWORD *)(v11 + 16);
          si128 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
          if ( v13 )
          {
            v17[0] = si128;
            v4 = qalloc_or_throw();
            memcpy((void *)v4, *(const void **)(v11 + 8), v13);
            si128 = _mm_load_si128(v17);
          }
          if ( *(_QWORD *)(a4 + 8) )
          {
            *(_QWORD *)(a4 + 16) = 0;
            v17[0] = si128;
            qfree();
            si128 = _mm_load_si128(v17);
          }
          *(_QWORD *)(a4 + 8) = v4;
          *(__m128i *)(a4 + 16) = si128;
        }
        *(_DWORD *)a4 = *(_DWORD *)v11;
      }
    }
    return 1;
  }
  return result;
}

