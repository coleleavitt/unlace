unsigned __int64 __fastcall sub_505260(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        const __m128i *a4,
        const __m128i *a5,
        unsigned int a6)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  size_t v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int8 v21; // r15
  unsigned int v22; // r13d
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int32 v30; // [rsp+Ch] [rbp-7Ch]
  __int8 v32; // [rsp+1Bh] [rbp-6Dh]
  _BYTE v34[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _BYTE v35[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v36[8]; // [rsp+48h] [rbp-40h] BYREF

  v36[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v36[0] - __readfsqword(0x28u);
  v11 = pack_dq(v34, v36, 0xF0F0F0F0F0F0F0F1LL * (a3 - *a2), v8, v9) - (_QWORD)v34;
  if ( v11 )
    sub_4FCC80(a1, v34, v11);
  v14 = pack_dq(v34, v36, 0xF0F0F0F0F0F0F0F1LL * ((char *)a5 - (char *)a4), v12, v13) - (_QWORD)v34;
  if ( v14 )
    sub_4FCC80(a1, v34, v14);
  if ( a5 == a4 )
  {
    v19 = a1[1];
  }
  else
  {
    do
    {
      v20 = _mm_loadu_si128(a4);
      v21 = a4->m128i_i8[12];
      v32 = a4[1].m128i_i8[0];
      v22 = _mm_cvtsi128_si32(v20);
      v30 = a4->m128i_u32[2];
      v23 = pack_dd(v34, v35, v22) - (_QWORD)v34;
      if ( v23 )
        sub_4FCC80(a1, v34, v23);
      v24 = pack_dd(v34, v35, v20.m128i_i32[1] - v22) - (_QWORD)v34;
      if ( v24 )
        sub_4FCC80(a1, v34, v24);
      v25 = pack_dd(v34, v35, v30) - (_QWORD)v34;
      if ( v25 )
        sub_4FCC80(a1, v34, v25);
      v26 = a1[1];
      v27 = *a1;
      if ( a1[2] < (unsigned __int64)(v26 + 1) )
      {
        v28 = qvector_reserve(a1, v27, v26 + 1, 1);
        *a1 = v28;
        v27 = v28;
        v26 = a1[1];
      }
      *(_BYTE *)(v27 + v26) = v21;
      v15 = a1[1];
      v16 = *a1;
      v17 = v15 + 1;
      v18 = v15 + 2;
      a1[1] = v17;
      if ( a1[2] < v18 )
      {
        v29 = qvector_reserve(a1, v16, v18, 1);
        *a1 = v29;
        v16 = v29;
        v17 = a1[1];
      }
      a4 = (const __m128i *)((char *)a4 + 17);
      *(_BYTE *)(v16 + v17) = v32;
      v19 = a1[1] + 1;
      a1[1] = v19;
    }
    while ( a5 != a4 );
  }
  return add_undo_record(a6, *a1, v19);
}

