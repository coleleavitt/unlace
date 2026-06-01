__int64 __fastcall sub_5AA1C0(__m128i *a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned int *i; // r12
  __m128i v9; // xmm0
  unsigned int *v10; // rdi
  char *v11; // rbx
  unsigned __int32 v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // ecx
  unsigned __int64 v15; // xmm1_8
  unsigned int v16; // edx
  unsigned int v17; // esi
  unsigned int *v18; // rax
  __int64 j; // rbx
  unsigned int v20; // ecx

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 64 )
  {
    v4 = result >> 3;
    v5 = a3;
    v6 = ((char *)a2 - (char *)a1) >> 2;
    for ( i = a2; v5; v6 = (v11 - (char *)a1) >> 2 )
    {
      v9 = _mm_loadl_epi64(a1);
      v10 = (unsigned int *)a1 + v4;
      --v5;
      v11 = &a1->m128i_i8[4];
      v12 = *v10;
      v13 = *(i - 1);
      v14 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v9, 229));
      v15 = _mm_shuffle_epi32(v9, 225).m128i_u64[0];
      v16 = _mm_cvtsi128_si32(v9);
      if ( v14 >= *v10 )
      {
        if ( v14 >= v13 )
        {
          if ( v12 >= v13 )
          {
LABEL_25:
            a1->m128i_i32[0] = v12;
            *v10 = v16;
            v16 = a1->m128i_u32[1];
            v14 = a1->m128i_i32[0];
            v17 = *(i - 1);
            goto LABEL_7;
          }
LABEL_16:
          a1->m128i_i32[0] = v13;
          v17 = v16;
          *(i - 1) = v16;
          v14 = a1->m128i_i32[0];
          v16 = a1->m128i_u32[1];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v12 < v13 )
          goto LABEL_25;
        if ( v14 < v13 )
          goto LABEL_16;
      }
      a1->m128i_i64[0] = v15;
      v17 = *(i - 1);
LABEL_7:
      v18 = i;
      while ( 1 )
      {
        while ( v16 < v14 )
        {
          v16 = *((_DWORD *)v11 + 1);
          v11 += 4;
        }
        for ( --v18; v14 < v17; --v18 )
          v17 = *(v18 - 1);
        if ( v11 >= (char *)v18 )
          break;
        *(_DWORD *)v11 = v17;
        v11 += 4;
        v17 = *(v18 - 1);
        *v18 = v16;
        v16 = *(_DWORD *)v11;
        v14 = a1->m128i_i32[0];
      }
      sub_5AA1C0(v11, i, v5);
      result = v11 - (char *)a1;
      if ( v11 - (char *)a1 <= 64 )
        return result;
      i = (unsigned int *)v11;
      v4 = result >> 3;
    }
    for ( j = v4 - 1; ; --j )
    {
      sub_5A9D00((__int64)a1, j, v6, a1->m128i_u32[j]);
      if ( !j )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 4;
          result = sub_5A9D00((__int64)a1, 0, ((char *)i - (char *)a1) >> 2, v20) )
    {
      v20 = *--i;
      *i = a1->m128i_i32[0];
    }
  }
  return result;
}

