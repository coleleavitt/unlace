void __fastcall sub_A1E6E0(__m128i *a1, __int64 a2)
{
  bool v3; // zf
  __m128i *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rdx
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  void *v9; // [rsp+0h] [rbp-78h] BYREF
  void *v10; // [rsp+8h] [rbp-70h]
  __m128i v11; // [rsp+10h] [rbp-68h] BYREF
  void *v12[2]; // [rsp+20h] [rbp-58h] BYREF
  __m128i v13; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+40h] [rbp-38h]

  if ( !*(_BYTE *)(a2 + 16) )
  {
    v3 = a1[9].m128i_i8[0] == 0;
    v14 = 0;
    if ( v3 )
      return;
    a1[9].m128i_i8[0] = 0;
    v4 = (__m128i *)a1[7].m128i_i64[0];
    if ( v4 == &a1[8] )
      return;
    operator delete(v4);
    if ( !v14 )
      return;
    v5 = v12[0];
    if ( v12[0] == &v13 )
      return;
LABEL_14:
    operator delete(v5);
    return;
  }
  v6 = *(_QWORD *)a2 + *(_QWORD *)(a2 + 8);
  v7 = *(_BYTE **)a2;
  v9 = &v11;
  sub_A1D0B0(&v9, v7, v6);
  v12[0] = &v13;
  if ( v9 == &v11 )
  {
    v13 = _mm_load_si128(&v11);
  }
  else
  {
    v12[0] = v9;
    v13.m128i_i64[0] = v11.m128i_i64[0];
  }
  v8 = (__int64)v10;
  v11.m128i_i8[0] = 0;
  v3 = a1[9].m128i_i8[0] == 0;
  v9 = &v11;
  v12[1] = v10;
  v10 = nullptr;
  v14 = 1;
  if ( v3 )
  {
    a1[7].m128i_i64[0] = (__int64)a1[8].m128i_i64;
    if ( v12[0] == &v13 )
    {
      a1[8] = _mm_load_si128(&v13);
    }
    else
    {
      a1[7].m128i_i64[0] = (__int64)v12[0];
      a1[8].m128i_i64[0] = v13.m128i_i64[0];
    }
    a1[7].m128i_i64[1] = v8;
    a1[9].m128i_i8[0] = 1;
  }
  else
  {
    sub_9E6D90((__int64)a1[7].m128i_i64, v12);
    if ( v14 && v12[0] != &v13 )
      operator delete(v12[0]);
  }
  v5 = v9;
  if ( v9 != &v11 )
    goto LABEL_14;
}

