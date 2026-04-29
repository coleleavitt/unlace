__int64 __fastcall sub_84600(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v7; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __m128i v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+20h] [rbp-38h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 32);
  v5 = a3[1];
  v18 = __readfsqword(0x28u);
  if ( v4 != v5 )
  {
    v17 = 0;
    v15 = 0;
    v16 = 0;
    if ( v4 >= v5 )
    {
      v9 = *a3;
      v10 = a3[2];
      if ( (unsigned __int64)&v15 < *a3 || (unsigned __int64)&v15 >= v9 + 40 * v10 )
      {
        if ( v10 < v4 )
        {
          *a3 = qvector_reserve(a3, v9, v4, 40);
          v5 = a3[1];
        }
        v13 = 40 * v5;
        if ( v5 < v4 )
        {
          do
          {
            v14 = *a3;
            ++v5;
            *(__m128i *)(v14 + v13) = _mm_load_si128(&v15);
            *(__m128i *)(v14 + v13 + 16) = _mm_load_si128(&v16);
            *(_QWORD *)(v14 + v13 + 32) = v17;
            v13 += 40;
          }
          while ( v4 != v5 );
        }
      }
      else
      {
        if ( v10 < v4 )
        {
          *a3 = qvector_reserve(a3, v9, v4, 40);
          v5 = a3[1];
        }
        if ( v5 < v4 )
        {
          v11 = 40 * v5;
          do
          {
            ++v5;
            v12 = v11 + *a3;
            v11 += 40;
            *(_BYTE *)(v12 + 32) = 0;
            *(_OWORD *)v12 = 0;
            *(_OWORD *)(v12 + 16) = 0;
          }
          while ( v4 != v5 );
        }
      }
    }
    a3[1] = v4;
    v5 = *(_QWORD *)(a1 + 32);
  }
  v7 = 0;
  if ( !v5 )
    return 1;
  while ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __m128i *))(a2 + 128))(
             *(_QWORD *)(a1 + 40),
             v7,
             *a3 + 40 * v7 + 32,
             *a3 + 40 * v7,
             *a3 + 40 * v7 + 8,
             *a3 + 40 * v7 + 16,
             *a3 + 40 * v7 + 24,
             &v15) )
  {
    if ( (unsigned __int64)++v7 >= *(_QWORD *)(a1 + 32) )
      return 1;
  }
  return 0;
}
