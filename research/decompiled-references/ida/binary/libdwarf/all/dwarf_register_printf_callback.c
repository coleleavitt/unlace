__int64 __fastcall dwarf_register_printf_callback(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  void *v6; // rdi
  int v7; // r13d
  int v8; // r12d
  __int64 v9; // r14
  __int64 v11; // [rsp+0h] [rbp-48h]
  __int64 v12; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 10800);
  v5 = *(_QWORD *)(a2 + 10808);
  v6 = *(void **)(a2 + 10816);
  v7 = *(_DWORD *)(a2 + 10824);
  v8 = *(_DWORD *)(a2 + 10828);
  v9 = *(_QWORD *)(a2 + 10832);
  if ( a3 )
  {
    if ( a3[1].m128i_i32[3] )
    {
      if ( v8 )
      {
        *(__m128i *)(a2 + 10800) = _mm_loadu_si128(a3);
        *(__m128i *)(a2 + 10816) = _mm_loadu_si128(a3 + 1);
        *(_QWORD *)(a2 + 10832) = a3[2].m128i_i64[0];
      }
      else
      {
        v12 = a1;
        v11 = *(_QWORD *)(a2 + 10800);
        free(v6);
        v4 = v11;
        v6 = nullptr;
        a1 = v12;
        *(__m128i *)(a2 + 10800) = _mm_loadu_si128(a3);
        *(__m128i *)(a2 + 10816) = _mm_loadu_si128(a3 + 1);
        *(_QWORD *)(a2 + 10832) = a3[2].m128i_i64[0];
      }
    }
    else
    {
      *(__m128i *)(a2 + 10800) = _mm_loadu_si128(a3);
      *(__m128i *)(a2 + 10816) = _mm_loadu_si128(a3 + 1);
      *(_QWORD *)(a2 + 10832) = a3[2].m128i_i64[0];
      if ( v8 )
      {
        *(_DWORD *)(a2 + 10824) = 0;
        *(_QWORD *)(a2 + 10816) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 10824) = v7;
        *(_QWORD *)(a2 + 10816) = v6;
      }
    }
  }
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 24) = v7;
  *(_DWORD *)(a1 + 28) = v8;
  *(_QWORD *)(a1 + 32) = v9;
  return a1;
}

