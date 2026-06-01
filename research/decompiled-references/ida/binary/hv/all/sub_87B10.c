__int64 __fastcall sub_87B10(__m128i *a1, int a2)
{
  __m128i *v2; // rbp
  __m128i *v4; // rax
  int v5; // r15d
  __m128i *v6; // rdx
  __m128i *v7; // r11
  __m128i v8; // xmm0
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __m128i *v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r12
  _QWORD *v20; // r10
  __int64 v21; // r13
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  __m128i *v24; // r14
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __m128i **v28; // rcx
  __m128i **v29; // rcx
  _QWORD *v30; // rcx
  __m128i **v31; // rcx
  _QWORD *v32; // rdx
  __m128i **v33; // rcx
  __int64 v34; // rdi
  char v36; // [rsp+10h] [rbp-78h] BYREF
  __m128i v37; // [rsp+18h] [rbp-70h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v2 = a1 + 47;
  v4 = (__m128i *)a1[47].m128i_i64[0];
  v38 = __readfsqword(0x28u);
  v5 = a2;
  if ( v4 == &a1[47] )
    goto LABEL_18;
  v6 = v4 - 2;
  v7 = v4;
  v8 = (__m128i)(unsigned __int64)&a1[48];
  do
  {
    v14 = (__m128i *)v6[2].m128i_i64[0];
    if ( v14 == v2 )
      break;
    v15 = v6->m128i_i64[1];
    v16 = v6[1].m128i_u64[0];
    v17 = v14[-2].m128i_u64[1];
    v18 = v15 + v16;
    if ( v17 < v15 + v16 )
    {
      v19 = v14[-1].m128i_u64[0];
      v20 = (_QWORD *)v14->m128i_i64[0];
      if ( v2 == (__m128i *)v14->m128i_i64[0] )
      {
        if ( !a2 )
          break;
      }
      else if ( v18 + 1 >= *(v20 - 3) )
      {
        v30 = (_QWORD *)v14->m128i_i64[1];
        v20[1] = v30;
        *v30 = v20;
        v31 = (__m128i **)a1[48].m128i_i64[1];
        a1[48].m128i_i64[1] = (__int64)v14;
        *v31 = v14;
        *v14 = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)v31);
        goto LABEL_12;
      }
      v9 = v17 + v19 - v15;
      v10 = v17 - v15;
      if ( v17 + v19 - v18 <= 2 || v9 <= 7 || v10 <= 2 )
      {
        if ( v16 >= v19 )
        {
          v32 = (_QWORD *)v14->m128i_i64[1];
          v20[1] = v32;
          *v32 = v20;
          v33 = (__m128i **)a1[48].m128i_i64[1];
          v6 = (__m128i *)(v20 - 4);
          a1[48].m128i_i64[1] = (__int64)v14;
          *v33 = v14;
          *v14 = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)v33);
          goto LABEL_12;
        }
        v28 = (__m128i **)v6[2].m128i_i64[1];
        v14->m128i_i64[1] = (__int64)v28;
        *v28 = v14;
        v29 = (__m128i **)a1[48].m128i_i64[1];
        a1[48].m128i_i64[1] = (__int64)v7;
        *v29 = v7;
        v6[2] = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)v29);
      }
      else
      {
        v11 = v9 - (v9 >> 1);
        if ( v11 > 0x12 )
          v11 = 18;
        if ( v16 >= v11 )
        {
          if ( v19 >= v11 )
          {
            if ( v15 + v11 < v17 )
              v11 = v17 - v15;
            v6[1].m128i_i64[0] = v11;
            v34 = v14[-2].m128i_i64[1];
            v12 = v11 + v15 - v34;
            v13 = v14[-1].m128i_i64[0] - v12;
            v18 = v12 + v34;
          }
          else
          {
            v6[1].m128i_i64[0] = v10;
            v12 = 0;
            v13 = v14[-1].m128i_u64[0];
            v18 = v14[-2].m128i_u64[1];
          }
        }
        else
        {
          v12 = v18 - v17;
          v13 = v19 + v17 - v18;
        }
        v14[-1].m128i_i64[1] += v12;
        v14[-1].m128i_i64[0] = v13;
        v14[-2].m128i_i64[1] = v18;
      }
    }
    v6 = v14 - 2;
LABEL_12:
    v7 = v6 + 2;
  }
  while ( &v6[2] != v2 );
  v5 = a2;
  v4 = (__m128i *)a1[47].m128i_i64[0];
LABEL_18:
  v21 = 0;
  while ( v2 != v4 )
  {
    v22 = (_QWORD *)v4->m128i_i64[1];
    v23 = (_QWORD *)v4->m128i_i64[0];
    v24 = v4 - 2;
    v23[1] = v22;
    *v22 = v23;
    v25 = v4[-2].m128i_u64[1];
    v26 = a1[33].m128i_u64[0];
    if ( v26 < v25 )
    {
      v36 = 1;
      v37 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)(v25 - v26));
      if ( (unsigned int)sub_873A0((__int64)a1, (__m128i *)&v36) )
        return 12;
    }
    if ( (unsigned int)sub_873A0((__int64)a1, v24) )
      return 12;
    if ( v5 )
    {
      v4 = (__m128i *)a1[47].m128i_i64[0];
    }
    else
    {
      if ( (unsigned __int64)a1[6].m128i_i64[1] >> 1 < ++v21 )
        return 0;
      v4 = (__m128i *)a1[47].m128i_i64[0];
      if ( v2 == v4 || v2 == (__m128i *)v4->m128i_i64[0] || v2 == *(__m128i **)v4->m128i_i64[0] )
        return 0;
    }
  }
  return 0;
}

