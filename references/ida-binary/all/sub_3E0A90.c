__int64 __fastcall sub_3E0A90(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rsi
  __m128i v4; // xmm0
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-48h] BYREF
  __m128i v38; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v39; // [rsp+28h] [rbp-20h]

  v1 = xmmword_8D0DE8;
  v39 = __readfsqword(0x28u);
  if ( !(_QWORD)xmmword_8D0DE8 )
  {
    v3 = qword_8D0DE0;
    v38.m128i_i8[8] = 1;
    v38.m128i_i64[0] = (__int64)"watch:JumpTo";
    if ( (unsigned __int64)&v38 < qword_8D0DE0
      || (unsigned __int64)&v38 >= qword_8D0DE0 + 16LL * *((_QWORD *)&xmmword_8D0DE8 + 1) )
    {
      if ( !*((_QWORD *)&xmmword_8D0DE8 + 1) )
      {
        v25 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, 1, 16);
        v1 = xmmword_8D0DE8;
        qword_8D0DE0 = v25;
        v3 = v25;
      }
      *(__m128i *)(v3 + 16 * v1) = _mm_load_si128(&v38);
    }
    else
    {
      v4 = _mm_load_si128(&v38);
      if ( !*((_QWORD *)&xmmword_8D0DE8 + 1) )
      {
        v37 = v4;
        v32 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, 1, 16);
        v1 = xmmword_8D0DE8;
        v4 = _mm_load_si128(&v37);
        qword_8D0DE0 = v32;
        v3 = v32;
      }
      *(__m128i *)(v3 + 16 * v1) = v4;
    }
    v5 = qword_8D0DE0;
    v38.m128i_i8[8] = 1;
    v38.m128i_i64[0] = (__int64)"watch:CopyValue";
    v6 = xmmword_8D0DE8 + 1;
    v7 = xmmword_8D0DE8 + 2;
    *(_QWORD *)&xmmword_8D0DE8 = xmmword_8D0DE8 + 1;
    if ( (unsigned __int64)&v38 < qword_8D0DE0
      || (unsigned __int64)&v38 >= qword_8D0DE0 + 16LL * *((_QWORD *)&xmmword_8D0DE8 + 1) )
    {
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v7 )
      {
        v28 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v7, 16);
        v6 = xmmword_8D0DE8;
        qword_8D0DE0 = v28;
        v5 = v28;
      }
      *(__m128i *)(v5 + 16 * v6) = _mm_load_si128(&v38);
    }
    else
    {
      v8 = _mm_load_si128(&v38);
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v7 )
      {
        v37 = v8;
        v33 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v7, 16);
        v6 = xmmword_8D0DE8;
        v8 = _mm_load_si128(&v37);
        qword_8D0DE0 = v33;
        v5 = v33;
      }
      *(__m128i *)(v5 + 16 * v6) = v8;
    }
    v9 = qword_8D0DE0;
    v38.m128i_i8[8] = 1;
    v38.m128i_i64[0] = (__int64)"watch:CopyLoc";
    v10 = xmmword_8D0DE8 + 1;
    v11 = xmmword_8D0DE8 + 2;
    *(_QWORD *)&xmmword_8D0DE8 = xmmword_8D0DE8 + 1;
    if ( (unsigned __int64)&v38 < qword_8D0DE0
      || (unsigned __int64)&v38 >= qword_8D0DE0 + 16LL * *((_QWORD *)&xmmword_8D0DE8 + 1) )
    {
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v11 )
      {
        v27 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v11, 16);
        v10 = xmmword_8D0DE8;
        qword_8D0DE0 = v27;
        v9 = v27;
      }
      *(__m128i *)(v9 + 16 * v10) = _mm_load_si128(&v38);
    }
    else
    {
      v12 = _mm_load_si128(&v38);
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v11 )
      {
        v37 = v12;
        v34 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v11, 16);
        v10 = xmmword_8D0DE8;
        v12 = _mm_load_si128(&v37);
        qword_8D0DE0 = v34;
        v9 = v34;
      }
      *(__m128i *)(v9 + 16 * v10) = v12;
    }
    v13 = qword_8D0DE0;
    v38.m128i_i8[8] = 1;
    v38.m128i_i64[0] = (__int64)"watch:CopyLine";
    v14 = xmmword_8D0DE8 + 1;
    v15 = xmmword_8D0DE8 + 2;
    *(_QWORD *)&xmmword_8D0DE8 = xmmword_8D0DE8 + 1;
    if ( (unsigned __int64)&v38 < qword_8D0DE0
      || (unsigned __int64)&v38 >= qword_8D0DE0 + 16LL * *((_QWORD *)&xmmword_8D0DE8 + 1) )
    {
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v15 )
      {
        v30 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v15, 16);
        v14 = xmmword_8D0DE8;
        qword_8D0DE0 = v30;
        v13 = v30;
      }
      *(__m128i *)(v13 + 16 * v14) = _mm_load_si128(&v38);
    }
    else
    {
      v16 = _mm_load_si128(&v38);
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v15 )
      {
        v37 = v16;
        v35 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v15, 16);
        v14 = xmmword_8D0DE8;
        v16 = _mm_load_si128(&v37);
        qword_8D0DE0 = v35;
        v13 = v35;
      }
      *(__m128i *)(v13 + 16 * v14) = v16;
    }
    v17 = qword_8D0DE0;
    v38.m128i_i8[8] = 1;
    v38.m128i_i64[0] = (__int64)"watch:Del";
    v18 = xmmword_8D0DE8 + 1;
    v19 = xmmword_8D0DE8 + 2;
    *(_QWORD *)&xmmword_8D0DE8 = xmmword_8D0DE8 + 1;
    if ( (unsigned __int64)&v38 < qword_8D0DE0
      || (unsigned __int64)&v38 >= qword_8D0DE0 + 16LL * *((_QWORD *)&xmmword_8D0DE8 + 1) )
    {
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v19 )
      {
        v29 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v19, 16);
        v18 = xmmword_8D0DE8;
        qword_8D0DE0 = v29;
        v17 = v29;
      }
      *(__m128i *)(v17 + 16 * v18) = _mm_load_si128(&v38);
    }
    else
    {
      v20 = _mm_load_si128(&v38);
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v19 )
      {
        v37 = v20;
        v36 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v19, 16);
        v18 = xmmword_8D0DE8;
        v20 = _mm_load_si128(&v37);
        qword_8D0DE0 = v36;
        v17 = v36;
      }
      *(__m128i *)(v17 + 16 * v18) = v20;
    }
    v21 = qword_8D0DE0;
    v38.m128i_i8[8] = 1;
    v38.m128i_i64[0] = (__int64)"watch:Edit";
    v22 = xmmword_8D0DE8 + 1;
    v23 = xmmword_8D0DE8 + 2;
    *(_QWORD *)&xmmword_8D0DE8 = xmmword_8D0DE8 + 1;
    if ( (unsigned __int64)&v38 < qword_8D0DE0
      || (unsigned __int64)&v38 >= qword_8D0DE0 + 16LL * *((_QWORD *)&xmmword_8D0DE8 + 1) )
    {
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v23 )
      {
        v26 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v23, 16);
        v22 = xmmword_8D0DE8;
        qword_8D0DE0 = v26;
        v21 = v26;
      }
      *(__m128i *)(v21 + 16 * v22) = _mm_load_si128(&v38);
    }
    else
    {
      v24 = _mm_load_si128(&v38);
      if ( *((_QWORD *)&xmmword_8D0DE8 + 1) < v23 )
      {
        v37 = v24;
        v31 = qvector_reserve(&qword_8D0DE0, qword_8D0DE0, v23, 16);
        v22 = xmmword_8D0DE8;
        v24 = _mm_load_si128(&v37);
        qword_8D0DE0 = v31;
        v21 = v31;
      }
      *(__m128i *)(v21 + 16 * v22) = v24;
    }
    *(_QWORD *)&xmmword_8D0DE8 = xmmword_8D0DE8 + 1;
  }
  return sub_531B30(10, a1, &qword_8D0DE0);
}
