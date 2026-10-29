__int64 __fastcall sub_A56850(__int64 a1, __m128i *a2, _QWORD *a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __m128i si128; // xmm0
  __int64 v11; // rax
  __m128i v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  v6 = a2->m128i_i64[1];
  *(_QWORD *)(a1 + 8) = 0x800000000LL;
  v7 = (_QWORD *)a2->m128i_i64[0];
  while ( 1 )
  {
    *a3 |= v6;
    v11 = sub_F6B0F0(v7);
    if ( (a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) == v11 )
      break;
    v8 = *(unsigned int *)(a1 + 8);
    si128 = _mm_load_si128(a2);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v13 = v11;
      v12 = si128;
      sub_2237220(a1, v3, v8 + 1, 16);
      v8 = *(unsigned int *)(a1 + 8);
      v11 = v13;
      si128 = _mm_load_si128(&v12);
    }
    *(__m128i *)(*(_QWORD *)a1 + 16 * v8) = si128;
    v7 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    v6 = v11 & 7;
    ++*(_DWORD *)(a1 + 8);
    if ( (v11 & 8) != 0 )
    {
      v6 |= *(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL));
      v7 = (_QWORD *)*v7;
    }
    a2->m128i_i64[0] = (__int64)v7;
    a2->m128i_i64[1] = v6;
  }
  return a1;
}
