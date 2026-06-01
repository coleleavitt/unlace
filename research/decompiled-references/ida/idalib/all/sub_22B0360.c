void __fastcall sub_22B0360(__int64 a1, _BYTE *a2, unsigned __int64 a3, char a4)
{
  char v5; // r12
  __m128i *v6; // rsi
  char *v7; // rcx
  __m128i *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v11[2]; // [rsp+10h] [rbp-58h] BYREF
  char v12; // [rsp+20h] [rbp-48h] BYREF
  __m128i v13; // [rsp+30h] [rbp-38h] BYREF
  __m128i v14[2]; // [rsp+40h] [rbp-28h] BYREF

  v10[0] = (unsigned __int64)a2;
  v10[1] = a3;
  if ( a3 )
  {
    if ( ((*a2 - 43) & 0xFD) != 0 )
    {
      sub_2246450((unsigned __int64 *)v11, v10);
      v7 = "+";
      if ( !a4 )
        v7 = "-";
      v8 = (__m128i *)sub_99BDC0(v11, 0, 0, v7, 1u);
      v13.m128i_i64[0] = (__int64)v14;
      if ( (__m128i *)v8->m128i_i64[0] == &v8[1] )
      {
        v14[0] = _mm_loadu_si128(v8 + 1);
      }
      else
      {
        v13.m128i_i64[0] = v8->m128i_i64[0];
        v14[0].m128i_i64[0] = v8[1].m128i_i64[0];
      }
      v9 = v8->m128i_i64[1];
      v8[1].m128i_i8[0] = 0;
      v5 = 1;
      v13.m128i_i64[1] = v9;
      v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
      v8->m128i_i64[1] = 0;
    }
    else
    {
      v5 = 0;
      sub_2246450((unsigned __int64 *)&v13, v10);
    }
    v6 = *(__m128i **)(a1 + 8);
    if ( v6 == *(__m128i **)(a1 + 16) )
    {
      sub_A82970((void ***)a1, v6, &v13);
      if ( (__m128i *)v13.m128i_i64[0] != v14 )
        operator delete((void *)v13.m128i_i64[0]);
    }
    else
    {
      v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
      if ( (__m128i *)v13.m128i_i64[0] == v14 )
      {
        v6[1] = _mm_load_si128(v14);
      }
      else
      {
        v6->m128i_i64[0] = v13.m128i_i64[0];
        v6[1].m128i_i64[0] = v14[0].m128i_i64[0];
      }
      v6->m128i_i64[1] = v13.m128i_i64[1];
      *(_QWORD *)(a1 + 8) += 32LL;
    }
    if ( v5 )
    {
      if ( v11[0] != &v12 )
        operator delete(v11[0]);
    }
  }
}
