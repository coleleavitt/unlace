__int64 __fastcall sub_8BA640(__int64 **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v6; // rax
  __m128i *v7; // rcx
  unsigned __int64 v8; // rdx
  __m128i *v9; // r14
  __int64 *v10; // rax
  unsigned __int64 *v11; // rax
  __m128i *v12; // r13
  unsigned __int64 *v13; // rcx
  __m128i *v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __m128i *v19; // rcx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __m128i *v23; // rdx
  __m128i *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __m128i *v27; // rax
  __m128i *v28; // r13
  __m128i *v29; // rax
  __int64 *v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i *dest; // [rsp+0h] [rbp-68h]
  __m128i v35; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+20h] [rbp-48h]
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( a2 >= a3 || !a1[3] )
    return 0;
  v6 = sub_8B8C20(a1, a2);
  v7 = (__m128i *)a1[11];
  v8 = 0;
  v9 = (__m128i *)v6;
  v10 = a1[2];
  if ( v7 != v9 )
    v8 = 0xAAAAAAAAAAAAAAABLL * (((char *)v9 - (char *)v10) >> 3);
  v11 = sub_8B8B40(a1, a3, v8, 0xAAAAAAAAAAAAAAABLL * (((char *)v7 - (char *)v10) >> 3));
  v12 = (__m128i *)a1[11];
  v13 = &v9[1].m128i_u64[1];
  v14 = (__m128i *)v11;
  if ( v12 == v9 )
    v13 = (unsigned __int64 *)a1[2];
  if ( v13 == v11 )
    return 0;
  if ( a1[2] != (__int64 *)v11 )
    v12 = (__m128i *)(v11 - 3);
  v15 = a2;
  dest = (__m128i *)v13;
  if ( *v13 >= a2 )
    v15 = *v13;
  v16 = v13[2] + 4 * (v15 - *v13);
  v17 = v12->m128i_u64[1];
  if ( a3 <= v17 )
    v17 = a3;
  v18 = sub_8BA4F0(a1, v16, v12[1].m128i_i64[0] + 4 * (v17 - v12->m128i_i64[0]));
  v19 = dest;
  v20 = v18;
  v21 = dest->m128i_i64[0];
  if ( dest == v12 )
  {
    v26 = v12->m128i_u64[1];
    if ( v21 >= a2 )
    {
      if ( a3 >= v26 )
      {
        if ( dest != (__m128i *)a1[11] )
        {
          v31 = (__int64 *)memmove(dest, &dest[1].m128i_u64[1], (char *)&a1[2][3 * (_QWORD)a1[3]] - (char *)dest - 24);
          v32 = (__int64)a1[3] - 1;
          a1[3] = (__int64 *)v32;
          v33 = (__int64)&a1[2][3 * v32];
          for ( a1[11] = (__int64 *)v33; v31 != a1[11]; v31 += 3 )
          {
            v31[2] -= v20;
            if ( (__int64 *)v33 == v31 )
              break;
          }
        }
      }
      else
      {
        dest->m128i_i64[0] = a3;
        v29 = (__m128i *)a1[11];
        if ( v29 != dest )
        {
          v30 = &dest[1].m128i_i64[1];
          if ( v29 != (__m128i *)&dest[1].m128i_u64[1] )
          {
            do
            {
              v30[2] -= v20;
              if ( v29 == (__m128i *)v30 )
                break;
              v30 += 3;
            }
            while ( v30 != a1[11] );
          }
        }
      }
    }
    else
    {
      v12->m128i_i64[1] = a2;
      if ( a3 < v26 )
      {
        v36 = v16;
        v35 = _mm_unpacklo_epi64((__m128i)a3, (__m128i)v26);
        v12 = sub_8B8CE0(a1, &v35);
      }
      v27 = (__m128i *)a1[11];
      if ( v27 != v12 )
      {
        v28 = (__m128i *)((char *)v12 + 24);
        if ( v27 != v28 )
        {
          do
          {
            v28[1].m128i_i64[0] -= v20;
            if ( v27 == v28 )
              break;
            v28 = (__m128i *)((char *)v28 + 24);
          }
          while ( v28 != (__m128i *)a1[11] );
        }
      }
    }
  }
  else
  {
    if ( v21 < a2 )
    {
      dest->m128i_i64[1] = a2;
      v19 = (__m128i *)((char *)dest + 24);
    }
    if ( a3 < v12->m128i_i64[1] )
    {
      v22 = a3 - v12->m128i_i64[0];
      v12->m128i_i64[0] = a3;
      v14 = v12;
      v12[1].m128i_i64[0] += 4 * v22;
    }
    v23 = (__m128i *)a1[11];
    v24 = v14;
    if ( v23 != v14 )
    {
      do
      {
        v24[1].m128i_i64[0] -= v20;
        if ( v23 == v24 )
          break;
        v24 = (__m128i *)((char *)v24 + 24);
      }
      while ( v24 != (__m128i *)a1[11] );
    }
    v25 = (unsigned __int64)a1[3]
        + 0x5555555555555555LL
        * (((char *)v14 - (_BYTE *)memmove(v19, v14, (char *)&a1[2][3 * (_QWORD)a1[3]] - (char *)v14)) >> 3);
    a1[3] = (__int64 *)v25;
    a1[11] = &a1[2][3 * v25];
  }
  return 1;
}
