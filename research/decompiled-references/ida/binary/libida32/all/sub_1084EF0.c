void __fastcall sub_1084EF0(_BYTE *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __m128i *v5; // rsi
  _QWORD *v6; // rsi
  __int64 v7; // r15
  void **v8; // rbx
  __int64 v9; // rbp
  void **v10; // rbx
  void **v11; // rdi
  _QWORD *v12; // [rsp+8h] [rbp-80h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-78h] BYREF
  char v14; // [rsp+18h] [rbp-70h]
  _QWORD *v15; // [rsp+20h] [rbp-68h] BYREF
  char v16; // [rsp+28h] [rbp-60h]
  __m128i v17; // [rsp+30h] [rbp-58h] BYREF
  __m128i v18[4]; // [rsp+40h] [rbp-48h] BYREF

  sub_228A9E0(&v13, a1, a2, 1, 1);
  if ( (v14 & 1) != 0 )
  {
    v4 = v13;
    v13 = nullptr;
    if ( v4 )
    {
      v15 = v4;
      sub_9E1A20(&v17, &v15);
      if ( v15 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
      v17.m128i_i64[0] = (__int64)v18;
      if ( a1 )
      {
        sub_1081240(&v17, a1, (__int64)&a1[a2]);
        v5 = *(__m128i **)(a3 + 8);
        if ( v5 != *(__m128i **)(a3 + 16) )
        {
LABEL_7:
          v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
          if ( (__m128i *)v17.m128i_i64[0] == v18 )
          {
            v5[1] = _mm_load_si128(v18);
          }
          else
          {
            v5->m128i_i64[0] = v17.m128i_i64[0];
            v5[1].m128i_i64[0] = v18[0].m128i_i64[0];
          }
          v5->m128i_i64[1] = v17.m128i_i64[1];
          *(_QWORD *)(a3 + 8) += 32LL;
          goto LABEL_10;
        }
      }
      else
      {
        v17.m128i_i64[1] = 0;
        v5 = *(__m128i **)(a3 + 8);
        v18[0].m128i_i8[0] = 0;
        if ( v5 != *(__m128i **)(a3 + 16) )
          goto LABEL_7;
      }
      sub_A5EC30((void ***)a3, v5, &v17);
      v11 = (void **)v17.m128i_i64[0];
      if ( (__m128i *)v17.m128i_i64[0] == v18 )
        goto LABEL_10;
LABEL_29:
      operator delete(v11);
      goto LABEL_10;
    }
  }
  sub_228A9E0(&v15, "rv64i", 5, 1, 1);
  v6 = v15;
  if ( (v16 & 1) != 0 )
  {
    v15 = nullptr;
    if ( v6 )
    {
      v12 = v6;
      v6 = &v12;
      sub_9E1A20(&v17, &v12);
      if ( v12 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
    }
  }
  sub_22875F0(&v17, v6, 1, 1);
  sub_1084820((void ***)a3, *(_QWORD *)(a3 + 8), (char *)v17.m128i_i64[0], (char *)v17.m128i_i64[1]);
  v7 = v17.m128i_i64[1];
  v8 = (void **)v17.m128i_i64[0];
  if ( v17.m128i_i64[1] != v17.m128i_i64[0] )
  {
    do
    {
      while ( *v8 != v8 + 2 )
      {
        operator delete(*v8);
        v8 += 4;
        if ( v8 == (void **)v7 )
          goto LABEL_18;
      }
      v8 += 4;
    }
    while ( (void **)v7 != v8 );
LABEL_18:
    v8 = (void **)v17.m128i_i64[0];
  }
  if ( v8 )
    operator delete(v8);
  sub_1083470((__int64)&v15);
  sub_22875F0(&v17, v13, 1, 1);
  sub_1084820((void ***)a3, *(_QWORD *)(a3 + 8), (char *)v17.m128i_i64[0], (char *)v17.m128i_i64[1]);
  v9 = v17.m128i_i64[1];
  v10 = (void **)v17.m128i_i64[0];
  if ( v17.m128i_i64[1] != v17.m128i_i64[0] )
  {
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 += 4;
        if ( (void **)v9 == v10 )
          goto LABEL_24;
      }
      v10 += 4;
    }
    while ( (void **)v9 != v10 );
LABEL_24:
    v10 = (void **)v17.m128i_i64[0];
  }
  if ( v10 )
  {
    v11 = v10;
    goto LABEL_29;
  }
LABEL_10:
  sub_1083470((__int64)&v13);
}

