__m128i *__fastcall sub_2269670(__int64 a1, const __m128i *a2)
{
  bool v3; // zf
  __m128i *v4; // rax
  __m128i *result; // rax
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // esi
  __m128i v10; // xmm0
  __m128i *v11; // [rsp+0h] [rbp-28h] BYREF
  __m128i *v12; // [rsp+8h] [rbp-20h] BYREF

  v3 = (unsigned __int8)sub_22604A0((__int64 *)a1, (__int64)a2, &v11) == 0;
  v4 = v11;
  if ( !v3 )
    return v11 + 1;
  v6 = *(_DWORD *)(a1 + 8);
  v12 = v11;
  v7 = v6 + 1;
  v8 = *(_DWORD *)(a1 + 16);
  v9 = 2 * v8;
  if ( 4 * v7 >= 3 * v8 )
    goto LABEL_9;
  if ( v8 - *(_DWORD *)(a1 + 12) - v7 <= v8 >> 3 )
  {
    v9 = *(_DWORD *)(a1 + 16);
LABEL_9:
    sub_22694E0(a1, v9);
    sub_22604A0((__int64 *)a1, (__int64)a2, &v12);
    v7 = *(_DWORD *)(a1 + 8) + 1;
    v4 = v12;
  }
  v3 = v4->m128i_i64[0] == -1;
  *(_DWORD *)(a1 + 8) = v7;
  if ( !v3 )
    --*(_DWORD *)(a1 + 12);
  v10 = _mm_loadu_si128(a2);
  result = v4 + 1;
  result->m128i_i16[0] = 0;
  result[-1] = v10;
  return result;
}
