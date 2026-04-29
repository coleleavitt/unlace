unsigned __int64 __fastcall sub_2A7F80(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 (__fastcall **v14)(); // [rsp+0h] [rbp-98h] BYREF
  __m128i v15; // [rsp+8h] [rbp-90h] BYREF
  int v16; // [rsp+18h] [rbp-80h]
  __m128i v17; // [rsp+20h] [rbp-78h] BYREF
  int v18; // [rsp+30h] [rbp-68h]
  __m128i v19; // [rsp+48h] [rbp-50h] BYREF
  __m128i v20; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-20h]

  v2 = a1[1];
  v21 = __readfsqword(0x28u);
  v15.m128i_i32[2] = -1;
  v15.m128i_i64[0] = -1;
  v16 = 0;
  v17.m128i_i64[0] = -1;
  v17.m128i_i32[2] = -1;
  v18 = -2;
  v14 = off_4ADC38;
  if ( a2 < v2 )
  {
LABEL_9:
    a1[1] = a2;
    return v21 - __readfsqword(0x28u);
  }
  if ( v2 < a2 )
  {
    v4 = *a1;
    v5 = a1[2];
    if ( (unsigned __int64)&v14 < *a1 || (unsigned __int64)&v14 >= v4 + 56 * v5 )
    {
      if ( v5 >= a2 || (v4 = qvector_reserve(a1, v4, a2, 56), v2 = a1[1], *a1 = v4, v2 < a2) )
      {
        v6 = _mm_loadu_si128(&v15);
        v7 = _mm_load_si128(&v17);
        v8 = 56 * v2;
        while ( 1 )
        {
          v9 = v8 + v4;
          ++v2;
          v8 += 56;
          *(_DWORD *)(v9 + 24) = 0;
          *(_DWORD *)(v9 + 48) = -2;
          *(_QWORD *)v9 = off_4ADC38;
          *(__m128i *)(v9 + 8) = v6;
          *(__m128i *)(v9 + 32) = v7;
          if ( a2 == v2 )
            break;
          v4 = *a1;
        }
      }
    }
    else
    {
      v19 = _mm_loadu_si128(&v15);
      v20 = _mm_load_si128(&v17);
      if ( v5 >= a2 || (v4 = qvector_reserve(a1, v4, a2, 56), v2 = a1[1], *a1 = v4, v2 < a2) )
      {
        v10 = _mm_loadu_si128(&v19);
        v11 = _mm_load_si128(&v20);
        v12 = 56 * v2;
        while ( 1 )
        {
          v13 = v12 + v4;
          ++v2;
          v12 += 56;
          *(_DWORD *)(v13 + 24) = 0;
          *(_DWORD *)(v13 + 48) = -2;
          *(_QWORD *)v13 = off_4ADC38;
          *(__m128i *)(v13 + 8) = v10;
          *(__m128i *)(v13 + 32) = v11;
          if ( a2 == v2 )
            break;
          v4 = *a1;
        }
      }
    }
    goto LABEL_9;
  }
  return v21 - __readfsqword(0x28u);
}
