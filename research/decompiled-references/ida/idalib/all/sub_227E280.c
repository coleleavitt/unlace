__int64 __fastcall sub_227E280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v6; // r12
  __int64 v7; // rdx
  char *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13[3]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v4 = a3 - a2;
  if ( !v4 )
    return *(_QWORD *)(a1 + 40);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(char **)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 40);
  v10 = v7 + v6;
  if ( v7 < v7 + v6 )
  {
    if ( v10 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      v8 = (char *)realloc(*(void **)(a1 + 24), 8 * v10);
      if ( v8 )
      {
        *(_QWORD *)(a1 + 24) = v8;
        v9 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 32) = v10;
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 12;
        v9 = *(_QWORD *)(a1 + 40);
        v13[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
        v12 = _mm_loadl_epi64(v13);
        v8 = *(char **)(a1 + 24);
        *(__m128i *)a1 = _mm_unpacklo_epi64(v12, v12);
      }
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 16) )
        *(_DWORD *)(a1 + 16) = 12;
      v13[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
      v11 = _mm_loadl_epi64(v13);
      v9 = v3;
      *(__m128i *)a1 = _mm_unpacklo_epi64(v11, v11);
    }
  }
  memmove(&v8[8 * v9], &v8[8 * a2], 8 * v6);
  *(_QWORD *)(a1 + 40) += v6;
  return v3;
}
