void __fastcall sub_11C67F0(char a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __m128i *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __m128i *v8; // rsi
  void *v9; // rdi
  __m128i v10; // [rsp+0h] [rbp-68h] BYREF
  __m128i v11; // [rsp+10h] [rbp-58h] BYREF
  __m128i v12; // [rsp+20h] [rbp-48h] BYREF
  __m128i v13; // [rsp+30h] [rbp-38h] BYREF
  __int16 v14; // [rsp+40h] [rbp-28h]

  if ( a1 )
  {
    v12.m128i_i64[0] = (__int64)&v13;
    if ( a2 )
    {
      sub_11BA8E0(&v12, a2, (__int64)&a2[a3]);
    }
    else
    {
      v12.m128i_i64[1] = 0;
      v13.m128i_i8[0] = 0;
    }
    v5 = *(__m128i **)(a4 + 8);
    if ( v5 != *(__m128i **)(a4 + 16) )
    {
      v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
      if ( (__m128i *)v12.m128i_i64[0] == &v13 )
      {
        v5[1] = _mm_load_si128(&v13);
      }
      else
      {
        v5->m128i_i64[0] = v12.m128i_i64[0];
        v5[1].m128i_i64[0] = v13.m128i_i64[0];
      }
      v5->m128i_i64[1] = v12.m128i_i64[1];
      *(_QWORD *)(a4 + 8) += 32LL;
      return;
    }
    sub_A82970((void ***)a4, v5, &v12);
    v9 = (void *)v12.m128i_i64[0];
    if ( (__m128i *)v12.m128i_i64[0] == &v13 )
      return;
LABEL_17:
    operator delete(v9);
    return;
  }
  v6 = (__int64)a2;
  v7 = a3;
  if ( a3 )
  {
    v7 = a3 - 1;
    v6 = (__int64)(a2 + 1);
  }
  v13.m128i_i64[0] = v6;
  v14 = 1283;
  v12.m128i_i64[0] = (__int64)"!";
  v13.m128i_i64[1] = v7;
  sub_2253560(&v10, &v12);
  v8 = *(__m128i **)(a4 + 8);
  if ( v8 == *(__m128i **)(a4 + 16) )
  {
    sub_A82970((void ***)a4, v8, &v10);
    v9 = (void *)v10.m128i_i64[0];
    if ( (__m128i *)v10.m128i_i64[0] == &v11 )
      return;
    goto LABEL_17;
  }
  v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
  if ( (__m128i *)v10.m128i_i64[0] == &v11 )
  {
    v8[1] = _mm_load_si128(&v11);
  }
  else
  {
    v8->m128i_i64[0] = v10.m128i_i64[0];
    v8[1].m128i_i64[0] = v11.m128i_i64[0];
  }
  v8->m128i_i64[1] = v10.m128i_i64[1];
  *(_QWORD *)(a4 + 8) += 32LL;
}
