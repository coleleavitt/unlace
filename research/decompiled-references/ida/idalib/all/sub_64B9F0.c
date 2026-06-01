__int64 __fastcall sub_64B9F0(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdi
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i v18; // xmm0
  unsigned int v19; // esi
  __int64 v20; // rdi
  int v21; // r8d

  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 52);
    v5 = *(_QWORD *)(a1 + 32);
    if ( v4 != 0x7FFFFFFF )
      break;
LABEL_10:
    v10 = *(unsigned int *)(a1 + 20);
    v11 = 2 * v10;
    v12 = a2 + v10 + 0xFFFF;
    LOWORD(v12) = 0;
    if ( 2 * v10 < v12 )
      v11 = v12;
    if ( (unsigned __int64)(v11 - (a2 + v10) - 1) < 0xF )
      v11 += (__int64)&stru_10000;
    v13 = qrealloc_or_throw(v5, v11);
    ++*(_DWORD *)(a1 + 12);
    *(_QWORD *)(a1 + 32) = v13;
    *(_DWORD *)(a1 + 20) = v11;
    sub_647120(a1, v13 + v10, v11 - v10);
    if ( !*(_DWORD *)(a1 + 16) && (*(_BYTE *)(a1 + 8) & 1) != 0 )
      sub_64B100(a1, 0, v14, v15, v16, v17);
  }
  v6 = *(_DWORD *)(a1 + 52);
  while ( 1 )
  {
    result = v5 + v6;
    v8 = *(unsigned int *)(result + 4) - a2;
    if ( !v8 )
    {
      v9 = *(int *)(result + 8);
      if ( (_DWORD)v9 == v6 )
      {
        *(_DWORD *)(a1 + 52) = 0x7FFFFFFF;
      }
      else
      {
        *(_DWORD *)(v5 + *(int *)(result + 12) + 8) = v9;
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + v9 + 12) = *(_DWORD *)(result + 12);
        if ( *(_DWORD *)(a1 + 52) == v6 )
          *(_DWORD *)(a1 + 52) = *(_DWORD *)(result + 8);
      }
      return result;
    }
    if ( v8 > 15 )
      break;
    v6 = *(_DWORD *)(result + 8);
    if ( v4 == v6 )
      goto LABEL_10;
  }
  ++*(_DWORD *)(a1 + 12);
  v18 = _mm_loadl_epi64((const __m128i *)(result + 8));
  v19 = a2 + v6;
  v20 = (int)a2 + v6 + v5;
  v21 = _mm_cvtsi128_si32(v18);
  *(_DWORD *)v20 = 2147483646;
  *(_DWORD *)(v20 + 4) = v8;
  if ( v6 == v21 )
  {
    *(_QWORD *)(v20 + 8) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v19), 224).m128i_u64[0];
  }
  else
  {
    *(_QWORD *)(v20 + 8) = v18.m128i_i64[0];
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + _mm_cvtsi128_si32(_mm_shuffle_epi32(v18, 229)) + 8LL) = v19;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + v21 + 12LL) = v19;
  }
  *(_DWORD *)(a1 + 52) = v19;
  return result;
}
