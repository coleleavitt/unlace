unsigned __int64 __fastcall sub_4DD2D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // r8
  __int64 i; // r15
  __int64 v11; // rbx
  __m128i *v12; // r13
  __m128i *v13; // r12
  int v14; // rax^4
  __m128i *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  const __m128i *v18; // r15
  __int64 v19; // r13
  int v20; // rax^4
  __m128i v21; // xmm0
  const __m128i *v23; // rdx
  __int64 v24; // [rsp+0h] [rbp-88h]
  int v25; // [rsp+4h] [rbp-84h]
  __int64 v26; // [rsp+8h] [rbp-80h]
  __int64 v27; // [rsp+18h] [rbp-70h]
  __int64 v28; // [rsp+20h] [rbp-68h]
  __m128i v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+40h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v8 = a1;
  v32 = __readfsqword(0x28u);
  v27 = (a3 - 1) / 2;
  v28 = a3 & 1;
  if ( a2 >= v27 )
  {
    v11 = a2;
    v13 = (__m128i *)(a1 + 24 * a2);
    if ( (a3 & 1) != 0 )
    {
      v30 = _mm_loadu_si128((const __m128i *)&a7);
      v31 = a8;
      goto LABEL_14;
    }
  }
  else
  {
    for ( i = a2; ; i = v11 )
    {
      v26 = v8;
      v11 = 2 * (i + 1) - 1;
      v12 = (__m128i *)(v8 + 48 * (i + 1));
      v13 = (__m128i *)(v8 + 24 * v11);
      v25 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a4 + 480LL))(a4, v12) >> 32;
      v14 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a4 + 480LL))(a4, v13) >> 32;
      v8 = v26;
      if ( v25 >= v14 )
      {
        v13 = v12;
        v11 = 2 * (i + 1);
      }
      v15 = (__m128i *)(v26 + 24 * i);
      *v15 = _mm_loadu_si128(v13);
      v15[1].m128i_i64[0] = v13[1].m128i_i64[0];
      if ( v11 >= v27 )
        break;
    }
    if ( v28 )
      goto LABEL_8;
  }
  if ( (a3 - 2) / 2 != v11 )
  {
LABEL_8:
    v16 = v11 - 1;
    goto LABEL_9;
  }
  v16 = 2 * v11;
  v11 = 2 * v11 + 1;
  v23 = (const __m128i *)(v8 + 24 * v11);
  *v13 = _mm_loadu_si128(v23);
  v13[1].m128i_i64[0] = v23[1].m128i_i64[0];
  v13 = (__m128i *)v23;
LABEL_9:
  v31 = a8;
  v30 = _mm_loadu_si128((const __m128i *)&a7);
  v17 = v16 / 2;
  if ( v11 > a2 )
  {
    while ( 1 )
    {
      v24 = v8;
      v18 = (const __m128i *)(v8 + 24 * v17);
      v19 = (*(__int64 (__fastcall **)(__int64, const __m128i *))(*(_QWORD *)a4 + 480LL))(a4, v18) >> 32;
      v20 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a4 + 480LL))(a4, &v30) >> 32;
      v8 = v24;
      v13 = (__m128i *)(v24 + 24 * v11);
      if ( (int)v19 >= v20 )
        break;
      v11 = v17;
      *v13 = _mm_loadu_si128(v18);
      v13[1].m128i_i64[0] = v18[1].m128i_i64[0];
      if ( a2 >= v17 )
      {
        v13 = (__m128i *)v18;
        break;
      }
      v17 = (v17 - 1) / 2;
    }
  }
LABEL_14:
  v21 = _mm_load_si128(&v30);
  v13[1].m128i_i64[0] = v31;
  *v13 = v21;
  return v32 - __readfsqword(0x28u);
}
