__int64 __fastcall sub_B7C70(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edx
  __int64 v4; // rsi
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  int v11; // ebp
  int v12; // ebp
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // r13
  void *v16; // r12
  unsigned __int64 v17; // rdx
  __m128i si128; // xmm0
  __int64 v19; // rdi
  int v20; // ebp
  __int64 v21; // rsi
  size_t v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27[3]; // [rsp+0h] [rbp-38h] BYREF

  result = *(_QWORD *)(a1 + 56);
  if ( !result )
  {
    *(_DWORD *)(a1 + 76) = 1;
    return result;
  }
  v3 = *(_DWORD *)result;
  if ( *(_DWORD *)result == 53 )
  {
    if ( *(_BYTE *)(result + 48) != 12 )
    {
      if ( !under_debugger )
        sub_37EEE0(50039);
      goto LABEL_34;
    }
    v15 = *(_QWORD *)(result + 56);
    v16 = nullptr;
    v17 = *(_QWORD *)(v15 + 32);
    si128 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
    if ( v17 )
    {
      v22 = 4 * v17;
      v27[0] = si128;
      v16 = (void *)qalloc_or_throw(4 * v17);
      result = (__int64)memcpy(v16, *(const void **)(v15 + 24), v22);
      si128 = _mm_load_si128(v27);
    }
    v19 = *(_QWORD *)(a1 + 368);
    if ( v19 )
    {
      *(_QWORD *)(a1 + 376) = 0;
      v27[0] = si128;
      result = qfree(v19);
      si128 = _mm_load_si128(v27);
    }
    *(_QWORD *)(a1 + 368) = v16;
    *(_DWORD *)(a1 + 76) = 5;
    *(__m128i *)(a1 + 376) = si128;
  }
  else
  {
    if ( v3 <= 0x35 )
    {
      if ( v3 - 42 <= 0xA )
      {
        if ( *(_BYTE *)(result + 64) == 7 )
        {
          v4 = *(_QWORD *)(a1 + 368);
          v5 = *(_DWORD *)(a1 + 72) + 1;
          v6 = *(_QWORD *)(a1 + 376);
          if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v6 + 1) )
          {
            v24 = qvector_reserve(a1 + 368, v4, v6 + 1, 4);
            *(_QWORD *)(a1 + 368) = v24;
            v4 = v24;
            v6 = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v4 + 4 * v6) = v5;
          v7 = *(_QWORD *)(a1 + 376);
          v8 = *(_QWORD *)(a1 + 56);
          v9 = *(_QWORD *)(a1 + 368);
          result = v7 + 1;
          v10 = v7 + 2;
          *(_QWORD *)(a1 + 376) = result;
          v11 = *(_DWORD *)(v8 + 72);
          if ( *(_QWORD *)(a1 + 384) < v10 )
          {
            v23 = qvector_reserve(a1 + 368, v9, v10, 4);
            *(_QWORD *)(a1 + 368) = v23;
            v9 = v23;
            result = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v9 + 4 * result) = v11;
          *(_DWORD *)(a1 + 76) = 4;
          ++*(_QWORD *)(a1 + 376);
          return result;
        }
        if ( !under_debugger )
          sub_37EEE0(50038);
LABEL_34:
        BUG();
      }
      goto LABEL_16;
    }
    if ( v3 != 55 )
    {
LABEL_16:
      v14 = *(_DWORD *)(a1 + 72);
      result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1);
      if ( v14 == (_DWORD)result )
      {
        *(_DWORD *)(a1 + 24) &= ~1u;
        *(_DWORD *)(a1 + 76) = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 376);
        v20 = v14 + 1;
        *(_DWORD *)(a1 + 76) = 3;
        v21 = *(_QWORD *)(a1 + 368);
        if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(result + 1) )
        {
          v26 = qvector_reserve(a1 + 368, v21, result + 1, 4);
          *(_QWORD *)(a1 + 368) = v26;
          v21 = v26;
          result = *(_QWORD *)(a1 + 376);
        }
        *(_DWORD *)(v21 + 4 * result) = v20;
        ++*(_QWORD *)(a1 + 376);
      }
      return result;
    }
    if ( *(_BYTE *)(result + 32) != 7 )
    {
      if ( !under_debugger )
        sub_37EEE0(50037);
      goto LABEL_34;
    }
    v12 = *(_DWORD *)(result + 40);
    result = *(_QWORD *)(a1 + 376);
    v13 = *(_QWORD *)(a1 + 368);
    if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(result + 1) )
    {
      v25 = qvector_reserve(a1 + 368, v13, result + 1, 4);
      *(_QWORD *)(a1 + 368) = v25;
      v13 = v25;
      result = *(_QWORD *)(a1 + 376);
    }
    *(_DWORD *)(v13 + 4 * result) = v12;
    *(_DWORD *)(a1 + 76) = 3;
    ++*(_QWORD *)(a1 + 376);
  }
  return result;
}
