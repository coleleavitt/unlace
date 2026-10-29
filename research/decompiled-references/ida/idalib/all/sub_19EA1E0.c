char __fastcall sub_19EA1E0(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __m128i *v9; // r13
  __int64 v11; // rdx
  __m128i *v12; // rbp
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __m128i *v15; // r15
  __m128i *v16; // r14
  __m128i *v17; // rbp
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v27; // r10
  __m128i v28; // xmm6
  __m128i v29; // xmm7
  char v30; // al
  char v31; // al
  __int128 v33; // [rsp-20h] [rbp-88h]
  __int128 v34; // [rsp-10h] [rbp-78h]
  __int64 v35; // [rsp+0h] [rbp-68h]

  v6 = (char *)a2 - (char *)a1;
  v35 = a3;
  if ( (char *)a2 - (char *)a1 > 512 )
  {
    v9 = a2;
    v11 = v6;
    if ( !a3 )
    {
      v17 = a2;
      goto LABEL_15;
    }
    while ( 1 )
    {
      --v35;
      v12 = &a1[2 * (v11 >> 6)];
      if ( sub_10246C0(a4, a1[3].m128i_i32[0], v12[1].m128i_i32[0]) )
      {
        if ( !sub_10246C0(a4, v12[1].m128i_i32[0], v9[-1].m128i_i32[0]) )
        {
          v30 = sub_10246C0(a4, a1[3].m128i_i32[0], v9[-1].m128i_i32[0]);
          v13 = _mm_loadu_si128(a1);
          v14 = _mm_loadu_si128(a1 + 1);
          if ( v30 )
            goto LABEL_23;
          goto LABEL_21;
        }
        v13 = _mm_loadu_si128(a1);
        v14 = _mm_loadu_si128(a1 + 1);
      }
      else
      {
        if ( sub_10246C0(a4, a1[3].m128i_i32[0], v9[-1].m128i_i32[0]) )
        {
          v13 = _mm_loadu_si128(a1);
          v14 = _mm_loadu_si128(a1 + 1);
LABEL_21:
          v28 = _mm_loadu_si128(a1 + 2);
          v29 = _mm_loadu_si128(a1 + 3);
          a1[2] = v13;
          a1[3] = v14;
          *a1 = v28;
          a1[1] = v29;
          goto LABEL_7;
        }
        v31 = sub_10246C0(a4, v12[1].m128i_i32[0], v9[-1].m128i_i32[0]);
        v13 = _mm_loadu_si128(a1);
        v14 = _mm_loadu_si128(a1 + 1);
        if ( v31 )
        {
LABEL_23:
          *a1 = _mm_loadu_si128(v9 - 2);
          a1[1] = _mm_loadu_si128(v9 - 1);
          v9[-2] = v13;
          v9[-1] = v14;
          goto LABEL_7;
        }
      }
      *a1 = _mm_loadu_si128(v12);
      a1[1] = _mm_loadu_si128(v12 + 1);
      *v12 = v13;
      v12[1] = v14;
LABEL_7:
      v15 = a1 + 2;
      v16 = v9;
      while ( 1 )
      {
        v17 = v15;
        if ( sub_10246C0(a4, v15[1].m128i_i32[0], a1[1].m128i_i32[0]) )
          goto LABEL_8;
        do
          v16 -= 2;
        while ( sub_10246C0(a4, a1[1].m128i_i32[0], v16[1].m128i_i32[0]) );
        if ( v15 >= v16 )
          break;
        v18 = _mm_loadu_si128(v15);
        v19 = _mm_loadu_si128(v15 + 1);
        *v15 = _mm_loadu_si128(v16);
        v15[1] = _mm_loadu_si128(v16 + 1);
        *v16 = v18;
        v16[1] = v19;
LABEL_8:
        v15 += 2;
      }
      LOBYTE(v6) = sub_19EA1E0(v15, v9, v35, a4);
      v11 = (char *)v15 - (char *)a1;
      if ( (char *)v15 - (char *)a1 <= 512 )
        return v6;
      v9 = v15;
      if ( !v35 )
      {
LABEL_15:
        v20 = v11 >> 5;
        v21 = ((v11 >> 5) - 2) >> 1;
        sub_19E9B50((__int64)a1, v21, v11 >> 5, a4, a5, a6, *(_OWORD *)&a1[2 * v21], *(_OWORD *)&a1[2 * v21 + 1]);
        do
        {
          --v21;
          sub_19E9B50((__int64)a1, v21, v20, a4, v22, v23, *(_OWORD *)&a1[2 * v21], *(_OWORD *)&a1[2 * v21 + 1]);
        }
        while ( v21 );
        do
        {
          v17 -= 2;
          v24 = v17->m128i_i64[0];
          v25 = v17->m128i_i64[1];
          v26 = v17[1].m128i_i64[0];
          v27 = v17[1].m128i_i64[1];
          *v17 = _mm_loadu_si128(a1);
          v17[1] = _mm_loadu_si128(a1 + 1);
          *((_QWORD *)&v34 + 1) = v27;
          *(_QWORD *)&v34 = v26;
          *((_QWORD *)&v33 + 1) = v25;
          *(_QWORD *)&v33 = v24;
          LOBYTE(v6) = sub_19E9B50((__int64)a1, 0, ((char *)v17 - (char *)a1) >> 5, a4, v22, v26, v33, v34);
        }
        while ( (char *)v17 - (char *)a1 > 32 );
        return v6;
      }
    }
  }
  return v6;
}
