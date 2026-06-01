__int64 __fastcall sub_BB6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v6; // edx
  __int64 v7; // rsi
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  int v14; // ebp
  int v15; // ebp
  __int64 v16; // rsi
  int v17; // edx
  __int64 v18; // r13
  void *v19; // r12
  __int64 v20; // rdx
  __m128i si128; // xmm0
  __int64 v22; // rdi
  int v23; // ebp
  __int64 v24; // rsi
  size_t v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30[3]; // [rsp+0h] [rbp-38h] BYREF

  result = *(_QWORD *)(a1 + 56);
  if ( !result )
  {
    *(_DWORD *)(a1 + 76) = 1;
    return result;
  }
  v6 = *(_DWORD *)result;
  if ( *(_DWORD *)result == 53 )
  {
    if ( *(_BYTE *)(result + 48) != 12 )
    {
      if ( !under_debugger )
        sub_383060(50039);
      goto LABEL_34;
    }
    v18 = *(_QWORD *)(result + 56);
    v19 = nullptr;
    v20 = *(_QWORD *)(v18 + 32);
    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
    if ( v20 )
    {
      v25 = 4 * v20;
      v30[0] = si128;
      v19 = (void *)qalloc_or_throw(4 * v20, a2, v20, a4);
      result = (__int64)memcpy(v19, *(const void **)(v18 + 24), v25);
      si128 = _mm_load_si128(v30);
    }
    v22 = *(_QWORD *)(a1 + 368);
    if ( v22 )
    {
      *(_QWORD *)(a1 + 376) = 0;
      v30[0] = si128;
      result = qfree(v22);
      si128 = _mm_load_si128(v30);
    }
    *(_QWORD *)(a1 + 368) = v19;
    *(_DWORD *)(a1 + 76) = 5;
    *(__m128i *)(a1 + 376) = si128;
  }
  else
  {
    if ( v6 <= 0x35 )
    {
      if ( v6 - 42 <= 0xA )
      {
        if ( *(_BYTE *)(result + 64) == 7 )
        {
          v7 = *(_QWORD *)(a1 + 368);
          v8 = *(_DWORD *)(a1 + 72) + 1;
          v9 = *(_QWORD *)(a1 + 376);
          if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v9 + 1) )
          {
            v27 = qvector_reserve(a1 + 368, v7, v9 + 1, 4);
            *(_QWORD *)(a1 + 368) = v27;
            v7 = v27;
            v9 = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v7 + 4 * v9) = v8;
          v10 = *(_QWORD *)(a1 + 376);
          v11 = *(_QWORD *)(a1 + 56);
          v12 = *(_QWORD *)(a1 + 368);
          result = v10 + 1;
          v13 = v10 + 2;
          *(_QWORD *)(a1 + 376) = result;
          v14 = *(_DWORD *)(v11 + 72);
          if ( *(_QWORD *)(a1 + 384) < v13 )
          {
            v26 = qvector_reserve(a1 + 368, v12, v13, 4);
            *(_QWORD *)(a1 + 368) = v26;
            v12 = v26;
            result = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v12 + 4 * result) = v14;
          *(_DWORD *)(a1 + 76) = 4;
          ++*(_QWORD *)(a1 + 376);
          return result;
        }
        if ( !under_debugger )
          sub_383060(50038);
LABEL_34:
        BUG();
      }
      goto LABEL_16;
    }
    if ( v6 != 55 )
    {
LABEL_16:
      v17 = *(_DWORD *)(a1 + 72);
      result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1);
      if ( v17 == (_DWORD)result )
      {
        *(_DWORD *)(a1 + 24) &= ~1u;
        *(_DWORD *)(a1 + 76) = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 376);
        v23 = v17 + 1;
        *(_DWORD *)(a1 + 76) = 3;
        v24 = *(_QWORD *)(a1 + 368);
        if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(result + 1) )
        {
          v29 = qvector_reserve(a1 + 368, v24, result + 1, 4);
          *(_QWORD *)(a1 + 368) = v29;
          v24 = v29;
          result = *(_QWORD *)(a1 + 376);
        }
        *(_DWORD *)(v24 + 4 * result) = v23;
        ++*(_QWORD *)(a1 + 376);
      }
      return result;
    }
    if ( *(_BYTE *)(result + 32) != 7 )
    {
      if ( !under_debugger )
        sub_383060(50037);
      goto LABEL_34;
    }
    v15 = *(_DWORD *)(result + 40);
    result = *(_QWORD *)(a1 + 376);
    v16 = *(_QWORD *)(a1 + 368);
    if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(result + 1) )
    {
      v28 = qvector_reserve(a1 + 368, v16, result + 1, 4);
      *(_QWORD *)(a1 + 368) = v28;
      v16 = v28;
      result = *(_QWORD *)(a1 + 376);
    }
    *(_DWORD *)(v16 + 4 * result) = v15;
    *(_DWORD *)(a1 + 76) = 3;
    ++*(_QWORD *)(a1 + 376);
  }
  return result;
}
