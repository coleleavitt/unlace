__int64 __fastcall sub_3818F0(__int64 a1, char a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rax
  char tinfo_property; // al
  char v7; // di
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm0
  unsigned int v12; // ebx
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  int v16; // ebx
  unsigned __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // [rsp+8h] [rbp-68h]
  __int64 v21; // [rsp+8h] [rbp-68h]
  __int64 v22; // [rsp+18h] [rbp-58h] BYREF
  __int64 v23; // [rsp+20h] [rbp-50h] BYREF
  __m128i v24; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-38h]

  v4 = 0;
  v25 = __readfsqword(0x28u);
  v22 = 0;
  copy_tinfo_t(&v22, a3);
  while ( 1 )
  {
    tinfo_property = get_tinfo_property(v22, 2);
    v7 = v22;
    if ( (tinfo_property & 0xF) != 0xA )
      break;
    v23 = 0;
    v23 = get_tinfo_property(v22, 9);
    if ( !(unsigned int)lexcompare_tinfo(v23, v22, 0) )
    {
      clear_tinfo_t(&v23);
      v7 = v22;
      break;
    }
    v5 = v22;
    ++v4;
    v22 = v23;
    v23 = v5;
    clear_tinfo_t(&v23);
  }
  if ( (v7 & 0x3F) == 0x3D && (a2 || (unsigned __int8)sub_328950(&v22)) )
  {
    v23 = 0;
    v24 = 0;
    print_tinfo(&v23, 0, 0, 0, 32, &v22, 0, 0);
    if ( v4 )
    {
      v14 = 2;
      v20 = v24.m128i_i64[0];
      if ( v24.m128i_i64[0] )
      {
        v14 = v24.m128i_i64[0] + 1;
        v20 = v24.m128i_i64[0] - 1;
      }
      v15 = v23;
      if ( v24.m128i_i64[1] < v14 )
      {
        v23 = qvector_reserve(&v23, v23, v14, 1);
        v15 = v23;
      }
      v24.m128i_i64[0] = v14;
      *(_BYTE *)(v15 + v20) = 32;
      *(_BYTE *)(v23 + v20 + 1) = 0;
      v16 = v4 - 1;
      if ( v16 >= 0 )
      {
        do
        {
          v18 = 2;
          v21 = v24.m128i_i64[0];
          if ( v24.m128i_i64[0] )
          {
            v18 = v24.m128i_i64[0] + 1;
            v21 = v24.m128i_i64[0] - 1;
          }
          v19 = v23;
          if ( v24.m128i_i64[1] < v18 )
          {
            v23 = qvector_reserve(&v23, v23, v18, 1);
            v19 = v23;
          }
          v24.m128i_i64[0] = v18;
          *(_BYTE *)(v19 + v21) = 42;
          *(_BYTE *)(v23 + v21 + 1) = 0;
        }
        while ( v16-- != 0 );
      }
    }
    v9 = *(_QWORD *)(a1 + 16);
    v10 = v23;
    v11 = _mm_loadu_si128(&v24);
    v23 = *(_QWORD *)a1;
    v8 = v23;
    *(_QWORD *)a1 = v10;
    v24.m128i_i64[1] = v9;
    *(__m128i *)(a1 + 8) = v11;
    if ( v8 )
    {
      v24.m128i_i64[0] = 0;
      qfree(v8);
    }
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  clear_tinfo_t(&v22);
  return v12;
}
