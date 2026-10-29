unsigned __int64 __fastcall sub_51D1A0(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        const __m128i *a4,
        const __m128i *a5,
        unsigned int a6)
{
  size_t v9; // rax
  size_t v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm0
  __int8 v16; // r15
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int8 v27; // [rsp+1Bh] [rbp-7Dh]
  _BYTE v29[10]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _QWORD v30[8]; // [rsp+58h] [rbp-40h] BYREF

  v30[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v30[0] - __readfsqword(0x28u);
  v9 = pack_dq(v29, v30, 0xF83E0F83E0F83E1LL * (a3 - *a2)) - (_QWORD)v29;
  if ( v9 )
    sub_514800(a1, v29, v9);
  v10 = pack_dq(v29, v30, 0xF83E0F83E0F83E1LL * ((char *)a5 - (char *)a4)) - (_QWORD)v29;
  if ( v10 )
    sub_514800(a1, v29, v10);
  if ( a5 == a4 )
  {
    v24 = a1[1];
  }
  else
  {
    do
    {
      v15 = _mm_loadu_si128(a4);
      v16 = a4[1].m128i_i8[8];
      v27 = a4[2].m128i_i8[0];
      v25 = a4[1].m128i_i64[0];
      v17 = pack_dq(v29, v30, v15.m128i_i64[0]) - (_QWORD)v29;
      if ( v17 )
        sub_514800(a1, v29, v17);
      v18 = pack_dq(v29, v30, v15.m128i_i64[1] - v15.m128i_i64[0]) - (_QWORD)v29;
      if ( v18 )
        sub_514800(a1, v29, v18);
      v19 = pack_dq(v29, v30, v25) - (_QWORD)v29;
      if ( v19 )
        sub_514800(a1, v29, v19);
      v20 = a1[1];
      v21 = *a1;
      if ( a1[2] < (unsigned __int64)(v20 + 1) )
      {
        v22 = qvector_reserve(a1, v21, v20 + 1, 1);
        *a1 = v22;
        v21 = v22;
        v20 = a1[1];
      }
      *(_BYTE *)(v21 + v20) = v16;
      v11 = a1[1];
      v12 = *a1;
      v13 = v11 + 1;
      v14 = v11 + 2;
      a1[1] = v13;
      if ( a1[2] < v14 )
      {
        v23 = qvector_reserve(a1, v12, v14, 1);
        *a1 = v23;
        v12 = v23;
        v13 = a1[1];
      }
      a4 = (const __m128i *)((char *)a4 + 33);
      *(_BYTE *)(v12 + v13) = v27;
      v24 = a1[1] + 1;
      a1[1] = v24;
    }
    while ( a5 != a4 );
  }
  return add_undo_record(a6, *a1, v24);
}
