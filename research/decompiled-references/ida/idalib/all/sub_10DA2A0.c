__m128i *__fastcall sub_10DA2A0(__m128i *a1, __int64 *a2, __int64 a3)
{
  void **v3; // r12
  void **v4; // rbx
  __int64 v6; // rax
  unsigned __int8 *v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  void *v10; // [rsp+0h] [rbp-B8h] BYREF
  void **v11; // [rsp+8h] [rbp-B0h]
  void *v12[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int8 *v14[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128i v15; // [rsp+50h] [rbp-68h] BYREF
  __m128i v16; // [rsp+60h] [rbp-58h] BYREF
  __int64 v17; // [rsp+70h] [rbp-48h]

  sub_21B7150(&v10, a3, 3090);
  if ( ((char *)v11 - (_BYTE *)v10) >> 5 )
  {
    if ( ((char *)v11 - (_BYTE *)v10) >> 5 == 1 )
    {
      v6 = *((_QWORD *)v10 + 1);
      v12[0] = v13;
      sub_10D8CD0(v12, *(_BYTE **)v10, *(_QWORD *)v10 + v6);
      sub_22B9ED0(v14, v12);
      if ( v12[0] != v13 )
        operator delete(v12[0]);
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( (__m128i *)v14[0] == &v15 )
      {
        a1[1] = _mm_load_si128(&v15);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)v14[0];
        a1[1].m128i_i64[0] = v15.m128i_i64[0];
      }
      v7 = v14[1];
      v8 = _mm_load_si128(&v16);
      a1[3].m128i_i8[8] = 1;
      a1->m128i_i64[1] = (__int64)v7;
      v9 = v17;
      a1[2] = v8;
      a1[3].m128i_i64[0] = v9;
    }
    else
    {
      sub_FC70B0((__int64)v14, *a2, 0, 452);
      sub_AEA040((__int64)v14);
      a1[3].m128i_i8[8] = 0;
    }
  }
  else
  {
    sub_FC70B0((__int64)v14, *a2, 0, 389);
    sub_10D8830(v14, (__int64)&byte_22F0C30);
    sub_AEA040((__int64)v14);
    a1[3].m128i_i8[8] = 0;
  }
  v3 = v11;
  v4 = (void **)v10;
  if ( v11 != v10 )
  {
    do
    {
      while ( *v4 != v4 + 2 )
      {
        operator delete(*v4);
        v4 += 4;
        if ( v3 == v4 )
          goto LABEL_7;
      }
      v4 += 4;
    }
    while ( v3 != v4 );
LABEL_7:
    v4 = (void **)v10;
  }
  if ( v4 )
    operator delete(v4);
  return a1;
}
