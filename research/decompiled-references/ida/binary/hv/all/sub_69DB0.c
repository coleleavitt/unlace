__int64 __fastcall sub_69DB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // r13
  const char *v6; // r13
  void *v7; // rdx
  __m128 v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rdi
  unsigned int v11; // ebx
  const char *v13; // r15
  void *v14; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __m128i v16; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a3 + 24);
  v17 = __readfsqword(0x28u);
  *(_QWORD *)(a2 + 48) = v3;
  if ( a3 + 32 != a2 + 56 )
    *(__m128i *)(a2 + 56) = _mm_loadu_si128((const __m128i *)(a3 + 32));
  if ( a3 != a2 + 24 )
  {
    v5 = *(_QWORD *)(a3 + 8);
    if ( v5 > 1 )
    {
      v13 = *(const char **)a3;
      v14 = *(void **)(a2 + 24);
      if ( *(_QWORD *)(a2 + 40) < v5 )
      {
        v14 = (void *)sub_96080(a2 + 24, *(_QWORD *)(a2 + 24), *(_QWORD *)(a3 + 8), 1);
        *(_QWORD *)(a2 + 24) = v14;
      }
      *(_QWORD *)(a2 + 32) = v5;
      memmove(v14, v13, v5 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 24) + v5 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 32) = 0;
    }
  }
  v6 = haystack;
  if ( *(_QWORD *)(a3 + 8) )
    v6 = *(const char **)a3;
  sub_694B0((__int64)&ptr, a1, v6, (__int64 *)(a2 + 48), 0, nullptr);
  if ( v16.m128i_i64[0] <= 1uLL )
  {
    v11 = 3;
  }
  else
  {
    v7 = *(void **)a2;
    v8 = _mm_loadh_ps((const double *)&v16.m128i_i64[1]);
    v9 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = ptr;
    *(__m128 *)(a2 + 8) = v8;
    v10 = *(_QWORD *)(a1 + 8);
    ptr = v7;
    v16 = v9;
    v11 = sub_69300(v10, a2 + 72, v6, nullptr);
  }
  if ( ptr )
  {
    v16.m128i_i64[0] = 0;
    j__free(ptr);
  }
  return v11;
}

