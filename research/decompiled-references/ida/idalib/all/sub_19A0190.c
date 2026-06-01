__int64 __fastcall sub_19A0190(__int64 a1, __int32 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r8
  __m128i *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v8; // rdx
  const __m128i *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rsi
  __int32 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v4 = *(unsigned int *)(a1 + 12);
  v5 = (__m128i *)(*(_QWORD *)a1 + 24 * v2);
  if ( v2 >= v4 )
  {
    v8 = v2 + 1;
    v12 = a2;
    v9 = (const __m128i *)&v12;
    v13 = 0;
    v14 = 0;
    if ( v4 < v8 )
    {
      v11 = a1 + 16;
      if ( v3 > (unsigned __int64)&v12 || v5 <= (__m128i *)&v12 )
      {
        sub_2237220(a1, v11, v8, 24);
        v5 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
      }
      else
      {
        sub_2237220(a1, v11, v8, 24);
        v9 = (const __m128i *)((char *)&v12 + *(_QWORD *)a1 - v3);
        v5 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
      }
    }
    *v5 = _mm_loadu_si128(v9);
    v5[1].m128i_i64[0] = v9[1].m128i_i64[0];
    v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v10;
    return *(_QWORD *)a1 + 24 * v10 - 24;
  }
  else
  {
    v5[1].m128i_i64[0] = 0;
    v6 = (unsigned int)(v2 + 1);
    v5->m128i_i32[0] = a2;
    v5->m128i_i64[1] = 0;
    *(_DWORD *)(a1 + 8) = v6;
    return *(_QWORD *)a1 + 24 * v6 - 24;
  }
}
