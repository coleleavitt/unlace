__m128i *__fastcall sub_2D2420(_QWORD *a1, double a2, double a3, __int64 a4, unsigned __int64 *a5, unsigned __int64 a6)
{
  __int64 v6; // rax
  __int64 i; // r13
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rbx
  __m128i *v14; // r12
  __m128i *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  const __m128i *v18; // r15
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int32 v22; // eax
  __int64 v24; // [rsp+8h] [rbp-F0h]
  unsigned __int64 j; // [rsp+8h] [rbp-F0h]
  _QWORD *v27; // [rsp+18h] [rbp-E0h]
  const __m128i *v30; // [rsp+38h] [rbp-C0h] BYREF
  __m128i v31; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-A8h]
  char v33[8]; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+60h] [rbp-98h]
  _QWORD v35[2]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v37[2]; // [rsp+98h] [rbp-60h] BYREF
  __int32 v38; // [rsp+A8h] [rbp-50h]
  int v39; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v40; // [rsp+B8h] [rbp-40h]

  v6 = a1[5];
  v40 = __readfsqword(0x28u);
  v27 = a1 + 5;
  if ( v6 )
  {
    v24 = a1[6];
    if ( v24 )
    {
      for ( i = 0; i != v24; ++i )
      {
        v8 = (__int64 *)(v6 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v10 = v8[1];
          if ( v10 )
          {
            v11 = 0;
            v12 = 0;
            do
            {
              v13 = v9 + v11;
              ++v12;
              v11 += 112;
              sub_118BA0(v13 + 88);
              sub_118BA0(v13 + 72);
              sub_118BA0(v13 + 56);
              v9 = *v8;
            }
            while ( v10 != v12 );
          }
          v8[1] = 0;
          qfree(v9);
          v6 = a1[5];
        }
      }
    }
    a1[6] = 0;
    qfree(v6);
    a1[5] = 0;
    a1[7] = 0;
  }
  a1[3] = v27;
  v14 = (__m128i *)sub_2BE7A0(a5, a6, a1[4]);
  if ( v14 )
  {
    v15 = (__m128i *)qalloc(16);
    v14 = v15;
    if ( !v15 )
      sub_4E45E(a2, a3);
    v15->m128i_i64[0] = 0;
    v15->m128i_i64[1] = 0;
    v16 = (_QWORD *)a1[3];
    for ( j = 0; j < v16[1]; ++j )
    {
      v17 = *v16 + 24 * j;
      v18 = *(const __m128i **)v17;
      v19 = *(_QWORD *)v17 + 112LL * *(_QWORD *)(v17 + 8);
      if ( v19 != *(_QWORD *)v17 )
      {
        do
        {
          v20 = _mm_loadu_si128(v18);
          v21 = v18[1].m128i_i64[0];
          v35[0] = 0xFFFFFFFF00000000LL;
          v31 = v20;
          v32 = v21;
          v35[1] = 0;
          v36[0] = 0xFFFFFFFF00000000LL;
          v36[1] = 0;
          v37[0] = 0xFFFFFFFF00000000LL;
          v37[1] = 0;
          v34 = 0;
          sub_1211A0((__int64)v33, (__int64)&v18[1].m128i_i64[1]);
          v22 = v18[6].m128i_i32[2];
          v39 = j;
          v38 = v22;
          v30 = &v31;
          *(_BYTE *)(sub_2D2260(v14, (__int64)&v31, &v30) + 144) = 1;
          v18 += 7;
          sub_118BA0((__int64)v37);
          sub_118BA0((__int64)v36);
          sub_118BA0((__int64)v35);
        }
        while ( (const __m128i *)v19 != v18 );
        v16 = (_QWORD *)a1[3];
      }
    }
  }
  return v14;
}
