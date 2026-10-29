unsigned __int64 __fastcall sub_4BFE50(__m128i *a1, __m128i *a2)
{
  __m128i *v3; // rbp
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // ecx
  __m128i *v6; // r15
  __int32 v7; // eax
  void *v8; // r13
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  unsigned __int64 v13; // rbx
  void *v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 v19; // r14
  __m128i v20; // xmm0
  __int64 v21; // rax
  void *v22; // rdi
  __int32 v23; // eax
  __m128i v24; // xmm0
  __int64 v25; // rax
  void *v26; // rdi
  __m128i v27; // xmm5
  __int64 v28; // rax
  void *v30; // rdi
  __m128i v31; // xmm6
  __m128i v32; // xmm7
  __m128i v33; // [rsp+0h] [rbp-E8h] BYREF
  __m128i *v34; // [rsp+10h] [rbp-D8h]
  __m128i *v35; // [rsp+18h] [rbp-D0h]
  __int64 v36; // [rsp+20h] [rbp-C8h]
  __int32 v37; // [rsp+2Ch] [rbp-BCh]
  __m128i v38; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v39; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v40; // [rsp+50h] [rbp-98h] BYREF
  __int32 v41; // [rsp+60h] [rbp-88h]
  __int64 v42; // [rsp+70h] [rbp-78h]
  __m128i v43; // [rsp+78h] [rbp-70h]
  __m128i v44; // [rsp+88h] [rbp-60h]
  int v45; // [rsp+98h] [rbp-50h]
  unsigned __int64 v46; // [rsp+A8h] [rbp-40h]

  v35 = a2;
  v46 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != &a1[6] )
  {
    v3 = a1 + 12;
    do
    {
      while ( 1 )
      {
        v4 = v3[-1].m128i_u32[0];
        v5 = a1[5].m128i_u32[0];
        v34 = v3;
        v6 = v3 - 6;
        if ( v4 < v5 || v5 >= v4 && v3[-2].m128i_i64[1] < (unsigned __int64)a1[4].m128i_i64[1] )
          break;
        sub_4BF940((__int64)v3[-6].m128i_i64);
LABEL_7:
        v3 += 6;
        if ( v35 == v34 )
          return v46 - __readfsqword(0x28u);
      }
      v7 = v3[-4].m128i_i32[0];
      v8 = (void *)v3[-4].m128i_i64[1];
      v39 = _mm_loadu_si128(v3 - 6);
      v9 = _mm_loadu_si128(v3 - 5);
      v41 = v7;
      v40 = v9;
      if ( v8 )
        v8 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
      v10 = v3[-3].m128i_i64[0];
      v11 = _mm_loadu_si128((__m128i *)((char *)v3 - 40));
      v12 = _mm_loadu_si128((__m128i *)((char *)v3 - 24));
      v3[-3].m128i_i64[0] = 0;
      v36 = v10;
      v42 = v10;
      LODWORD(v10) = v3[-1].m128i_i32[2];
      v38 = v11;
      v37 = v10;
      v45 = v10;
      v43 = v11;
      *(__m128i *)((char *)&v3[-3] + 8) = 0;
      v44 = v12;
      v13 = 0xAAAAAAAAAAAAAAABLL * (((char *)v6 - (char *)a1) >> 5);
      if ( (char *)v6 - (char *)a1 > 0 )
      {
        do
        {
          v14 = (void *)v6[2].m128i_i64[1];
          v6 -= 6;
          if ( v14 )
          {
            qfree(v14);
            v6[8].m128i_i64[1] = 0;
          }
          v15 = v6[2].m128i_i32[0];
          v16 = v6[2].m128i_i64[1];
          v6[6] = _mm_loadu_si128(v6);
          v17 = _mm_loadu_si128(v6 + 1);
          v6[8].m128i_i32[0] = v15;
          v6[7] = v17;
          if ( v16 )
            v6[8].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          v18 = (void *)v6[9].m128i_i64[0];
          v19 = v6[3].m128i_i64[0];
          v6[3].m128i_i64[0] = 0;
          v20 = _mm_loadu_si128((__m128i *)((char *)v6 + 56));
          *(__m128i *)((char *)&v6[3] + 8) = 0;
          if ( v18 )
          {
            v6[9].m128i_i64[1] = 0;
            v33 = v20;
            qfree(v18);
            v20 = _mm_load_si128(&v33);
          }
          v21 = v6[4].m128i_i64[1];
          v6[9].m128i_i64[0] = v19;
          *(__m128i *)((char *)v6 + 152) = v20;
          v6[10].m128i_i64[1] = v21;
          v6[11].m128i_i32[0] = v6[5].m128i_i32[0];
          v6[11].m128i_i32[2] = v6[5].m128i_i32[2];
          --v13;
        }
        while ( v13 );
      }
      v22 = (void *)a1[2].m128i_i64[1];
      if ( v22 )
      {
        qfree(v22);
        a1[2].m128i_i64[1] = 0;
      }
      v23 = v41;
      *a1 = _mm_load_si128(&v39);
      v24 = _mm_load_si128(&v40);
      a1[2].m128i_i32[0] = v23;
      a1[1] = v24;
      if ( !v8 )
      {
        v30 = (void *)a1[3].m128i_i64[0];
        v42 = 0;
        v43 = 0;
        if ( v30 )
        {
          a1[3].m128i_i64[1] = 0;
          qfree(v30);
          v31 = _mm_load_si128(&v38);
          a1[3].m128i_i64[0] = v36;
          *(__m128i *)((char *)a1 + 56) = v31;
        }
        else
        {
          v32 = _mm_load_si128(&v38);
          a1[3].m128i_i64[0] = v36;
          *(__m128i *)((char *)a1 + 56) = v32;
        }
        a1[4].m128i_i64[1] = v44.m128i_i64[0];
        a1[5].m128i_i32[0] = v44.m128i_i32[2];
        a1[5].m128i_i32[2] = v37;
        goto LABEL_7;
      }
      v25 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
      v26 = (void *)a1[3].m128i_i64[0];
      a1[2].m128i_i64[1] = v25;
      v42 = 0;
      v43 = 0;
      if ( v26 )
      {
        a1[3].m128i_i64[1] = 0;
        qfree(v26);
      }
      v27 = _mm_load_si128(&v38);
      v3 += 6;
      a1[3].m128i_i64[0] = v36;
      v28 = v44.m128i_i64[0];
      *(__m128i *)((char *)a1 + 56) = v27;
      a1[4].m128i_i64[1] = v28;
      a1[5].m128i_i32[0] = v44.m128i_i32[2];
      a1[5].m128i_i32[2] = v37;
      qfree(v8);
    }
    while ( v35 != v34 );
  }
  return v46 - __readfsqword(0x28u);
}
