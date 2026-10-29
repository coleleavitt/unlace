signed __int64 __fastcall sub_4DD730(__m128i *a1, unsigned __int64 *a2, __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 *v7; // r12
  unsigned __int32 v8; // ecx
  __m128i *v9; // rbx
  __m128i *v10; // rax
  unsigned __int32 v11; // edx
  unsigned __int32 v12; // esi
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i *i; // rax
  unsigned __int32 v16; // edx
  unsigned __int32 v17; // ecx
  unsigned __int32 v18; // esi
  __int64 v19; // rsi
  __int32 v20; // edx
  unsigned __int64 v21; // rcx
  __int32 v22; // edx
  __int32 v23; // eax
  __int64 j; // rbx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int32 v27; // esi
  __int64 v28; // rcx
  __int64 v29; // rdx

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v4 = result >> 5;
    v5 = a3;
    v6 = ((char *)a2 - (char *)a1) >> 4;
    v7 = a2;
    while ( v5 )
    {
      v8 = a1[1].m128i_u32[2];
      --v5;
      v9 = a1 + 1;
      v10 = &a1[v4];
      v11 = v10->m128i_u32[2];
      if ( v8 < v11 || v11 >= v8 && a1[1].m128i_i64[0] < (unsigned __int64)v10->m128i_i64[0] )
      {
        v27 = *((_DWORD *)v7 - 2);
        if ( v11 < v27 || v27 >= v11 && v10->m128i_i64[0] < *(v7 - 2) )
        {
LABEL_40:
          v28 = a1->m128i_i64[0];
          v29 = a1->m128i_i64[1];
          *a1 = _mm_loadu_si128(v10);
          v10->m128i_i64[0] = v28;
          v10->m128i_i64[1] = v29;
          goto LABEL_10;
        }
        if ( v8 < v27 || v27 >= v8 && a1[1].m128i_i64[0] < *(v7 - 2) )
          goto LABEL_24;
      }
      else
      {
        v12 = *((_DWORD *)v7 - 2);
        if ( v8 >= v12 && (v12 < v8 || a1[1].m128i_i64[0] >= *(v7 - 2)) )
        {
          if ( v11 >= v12 && (v12 < v11 || v10->m128i_i64[0] >= *(v7 - 2)) )
            goto LABEL_40;
LABEL_24:
          v21 = a1->m128i_i64[0];
          v22 = a1->m128i_i32[2];
          v23 = a1->m128i_i32[3];
          *a1 = _mm_loadu_si128((const __m128i *)v7 - 1);
          *(v7 - 2) = v21;
          *((_DWORD *)v7 - 2) = v22;
          *((_DWORD *)v7 - 1) = v23;
          goto LABEL_10;
        }
      }
      v13 = a1->m128i_i64[1];
      v14 = _mm_loadu_si128(a1 + 1);
      a1[1].m128i_i64[0] = a1->m128i_i64[0];
      a1[1].m128i_i64[1] = v13;
      *a1 = v14;
LABEL_10:
      for ( i = (__m128i *)v7; ; i->m128i_i32[3] = v20 )
      {
        v16 = a1->m128i_u32[2];
        v17 = v9->m128i_u32[2];
        if ( v17 >= v16 )
        {
          if ( v16 < v17 )
            goto LABEL_16;
          goto LABEL_13;
        }
        while ( 1 )
        {
          do
          {
            v17 = v9[1].m128i_u32[2];
            ++v9;
          }
          while ( v17 < v16 );
          if ( v16 < v17 )
            break;
LABEL_13:
          if ( v9->m128i_i64[0] >= (unsigned __int64)a1->m128i_i64[0] )
            goto LABEL_16;
        }
        do
        {
          do
          {
LABEL_16:
            v18 = i[-1].m128i_u32[2];
            --i;
          }
          while ( v16 < v18 );
        }
        while ( v18 >= v16 && a1->m128i_i64[0] < (unsigned __int64)i->m128i_i64[0] );
        if ( v9 >= i )
          break;
        v19 = v9->m128i_i64[0];
        v20 = v9->m128i_i32[3];
        ++v9;
        v9[-1] = _mm_loadu_si128(i);
        i->m128i_i64[0] = v19;
        i->m128i_i32[2] = v17;
      }
      sub_4DD730(v9, v7, v5);
      result = (char *)v9 - (char *)a1;
      if ( (char *)v9 - (char *)a1 <= 256 )
        return result;
      v7 = (unsigned __int64 *)v9;
      v4 = result >> 5;
      v6 = v9 - a1;
    }
    for ( j = v4 - 1; ; --j )
    {
      sub_4DCBB0((__int64)a1, j, v6, a1[j].m128i_u64[0], a1[j].m128i_i64[1]);
      if ( !j )
        break;
    }
    for ( result = (char *)v7 - (char *)a1;
          (char *)v7 - (char *)a1 > 16;
          result = (signed __int64)sub_4DCBB0((__int64)a1, 0, ((char *)v7 - (char *)a1) >> 4, v25, v26) )
    {
      v7 -= 2;
      v25 = *v7;
      v26 = v7[1];
      *(__m128i *)v7 = _mm_loadu_si128(a1);
    }
  }
  return result;
}

