__int64 __fastcall sub_32480(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // rdx
  _DWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  __m128i v16; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    v9 = *(_DWORD **)a2;
    v10 = 0;
    while ( *v9 != a3 )
    {
      if ( *v9 <= a3 )
      {
        ++v10;
        v9 += 2;
        if ( v10 != v8 )
          continue;
      }
      goto LABEL_9;
    }
    if ( v9[1]-- == 1 )
    {
      memmove(
        (void *)(8 * v10 + *(_QWORD *)a2),
        (const void *)(8 * v10 + *(_QWORD *)a2 + 8),
        8LL * *(_QWORD *)(a2 + 8) - 8 - 8 * v10);
      --*(_QWORD *)(a2 + 8);
      *(_BYTE *)a1 = 1;
    }
    else
    {
      *(_BYTE *)a1 = 0;
    }
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
LABEL_9:
    sub_64B50(
      (unsigned int)&v15,
      *(_QWORD *)(a2 + 24),
      (unsigned int)"incoming_state_counts_t(%d)::decrement",
      a3,
      a5,
      a6);
    v12 = v15;
    v13 = _mm_loadu_si128(&v16);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v12;
    *(__m128i *)(a1 + 8) = v13;
  }
  return a1;
}
