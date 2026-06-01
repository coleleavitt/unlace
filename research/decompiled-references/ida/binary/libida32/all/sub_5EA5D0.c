__int64 __fastcall sub_5EA5D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  signed __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v11; // rcx
  __m128i v12; // xmm0

  v3 = *(_QWORD *)(a1 + 40) + 48 * a2;
  v4 = *(void **)(v3 + 24);
  if ( v4 )
  {
    *(_QWORD *)(v3 + 32) = 0;
    qfree(v4);
  }
  v5 = *(void **)v3;
  if ( *(_QWORD *)v3 )
  {
    *(_QWORD *)(v3 + 8) = 0;
    qfree(v5);
  }
  v6 = *(_QWORD *)(a1 + 48);
  result = v3 + 48;
  v8 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 40) + 48 * v6 - v3) >> 4) - 2;
  if ( v8 >= 0 )
  {
    do
    {
      v9 = *(_QWORD *)result;
      v10 = _mm_loadu_si128((const __m128i *)(result + 8));
      *(_OWORD *)(result + 8) = 0;
      result += 48;
      *(_QWORD *)(result - 48) = 0;
      *(_QWORD *)(result - 96) = v9;
      v11 = *(_QWORD *)(result - 24);
      *(__m128i *)(result - 88) = v10;
      v12 = _mm_loadu_si128((const __m128i *)(result - 16));
      *(_QWORD *)(result - 72) = v11;
      *(_QWORD *)(result - 24) = 0;
      *(__m128i *)(result - 64) = v12;
      *(_QWORD *)(result - 8) = 0;
    }
    while ( v8-- != 0 );
    v6 = *(_QWORD *)(a1 + 48);
  }
  *(_QWORD *)(a1 + 48) = v6 - 1;
  return result;
}

