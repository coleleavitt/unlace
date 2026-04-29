unsigned __int64 __fastcall sub_1A7B0(__int64 *a1, _QWORD *a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v9; // rbx
  __m128i *v10; // r8
  __int64 v11; // r14
  unsigned __int64 *v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __m128i v17; // xmm0
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // [rsp+0h] [rbp-78h] BYREF
  __m128i *v24; // [rsp+18h] [rbp-60h]
  __m128i v25; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a3 <= a4 )
  {
    v4 = a2[1];
    if ( (int)v4 - 1 > 0 )
    {
      v9 = 0;
      v10 = &v25;
      v11 = 16 * ((unsigned int)(v4 - 2) + 1LL);
      do
      {
        v12 = (unsigned __int64 *)(*a2 + v9);
        v13 = *((_DWORD *)v12 + 2);
        if ( a4 >= v13 && a3 <= v13 )
        {
          v14 = *(_QWORD *)(*a2 + v9 + 16);
          if ( *v12 != v14 )
          {
            v15 = a1[1];
            v16 = *a1;
            v17 = _mm_unpacklo_epi64((__m128i)*v12, (__m128i)v14);
            v18 = a1[2];
            v25 = v17;
            v19 = v15 + 1;
            if ( (unsigned __int64)v10 >= v16 && (unsigned __int64)v10 < v16 + 16 * v18 )
            {
              if ( v18 < v19 )
              {
                v23 = v17;
                v24 = v10;
                v22 = qvector_reserve(a1, v16, v15 + 1, 16);
                v10 = v24;
                v17 = _mm_load_si128(&v23);
                *a1 = v22;
                v16 = v22;
                v15 = a1[1];
              }
              *(__m128i *)(v16 + 16 * v15) = v17;
            }
            else
            {
              if ( v18 < v19 )
              {
                v23.m128i_i64[0] = (__int64)v10;
                v21 = qvector_reserve(a1, v16, v15 + 1, 16);
                v10 = (__m128i *)v23.m128i_i64[0];
                *a1 = v21;
                v16 = v21;
                v15 = a1[1];
              }
              *(__m128i *)(v16 + 16 * v15) = _mm_load_si128(&v25);
            }
            ++a1[1];
          }
        }
        v9 += 16;
      }
      while ( v11 != v9 );
    }
  }
  return v26 - __readfsqword(0x28u);
}
