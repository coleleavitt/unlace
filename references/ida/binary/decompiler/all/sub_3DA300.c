__int64 __fastcall sub_3DA300(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  const char *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rbp
  __m128i v15; // xmm1
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rsi
  __m128i *v20; // rax
  __m128i *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  const __m128i *v25; // rdi
  __m128i v26; // xmm1
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __m128i v30; // xmm0
  bool v31; // cf
  __int64 v32; // rax
  __int64 v33; // rcx
  const __m128i *v34; // rdi
  __int64 v35; // r15
  __m128i v36; // xmm1
  __int64 v37; // rdx
  __int64 v38; // rcx
  const __m128i *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rsi
  __m128i v42; // xmm0
  __m128i v43; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v45; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v46[3]; // [rsp+30h] [rbp-88h] BYREF
  char v47; // [rsp+48h] [rbp-70h]
  __int64 v48; // [rsp+50h] [rbp-68h] BYREF
  __int64 v49; // [rsp+58h] [rbp-60h]
  __m128i v50; // [rsp+60h] [rbp-58h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v45 = 0;
  v44 = 0;
  if ( (unsigned __int8)sub_37E420(
                          (unsigned int)&v44,
                          1023,
                          (unsigned int)&unk_419691,
                          (unsigned int)"Please enter the new stock comment",
                          a5,
                          a6)
    && (sub_3D7170((__int64)&v44, 32), v45.m128i_i64[0] > 1uLL) )
  {
    sub_3D9420((__int64)v46, (__int64)a1[17].m128i_i64, (__int64)&v44);
    if ( v47 )
    {
      v12 = s1;
      if ( v46[1] )
        v12 = (const char *)v46[0];
      sub_3D9CB0(
        a1,
        (__int64)v12,
        (int)"insertion",
        v9,
        v10,
        v11,
        v43.m128i_i64[0],
        v43.m128i_i64[1],
        v44,
        v45.m128i_i64[0]);
      if ( v46[0] )
        qfree();
    }
    else
    {
      v13 = v44;
      v14 = v46[0];
      v15 = _mm_loadu_si128(&v45);
      v16 = a1[16].m128i_i64[0];
      v44 = 0;
      v17 = a1[15].m128i_u64[1];
      v48 = v46[0];
      v49 = v13;
      v18 = a1[16].m128i_u64[1];
      v19 = v16 + 1;
      v50 = v15;
      v45 = 0;
      if ( (unsigned __int64)&v48 < v17 || (unsigned __int64)&v48 >= v17 + 32 * v18 )
      {
        if ( v18 < v19 )
        {
          v43 = v15;
          v22 = qvector_reserve();
          v23 = a1[16].m128i_i64[0];
          v24 = a1[16].m128i_i64[1];
          v17 = v22;
          a1[16].m128i_i64[1] = v18;
          v25 = (const __m128i *)a1[15].m128i_i64[1];
          v26 = _mm_load_si128(&v43);
          v27 = v23 - 1;
          if ( v27 >= 0 )
          {
            do
            {
              v28 = v25->m128i_i64[0];
              v22 += 32;
              v25 += 2;
              *(_QWORD *)(v22 - 32) = v28;
              v29 = v25[-2].m128i_i64[1];
              v30 = _mm_loadu_si128(v25 - 1);
              v25[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v22 - 24) = v29;
              *(__m128i *)(v22 - 16) = v30;
              v25[-1].m128i_i64[1] = 0;
              v31 = v27-- == 0;
            }
            while ( !v31 );
          }
          v43 = v26;
          qfree();
          a1[15].m128i_i64[1] = v17;
          v16 = a1[16].m128i_i64[0];
          a1[16].m128i_i64[1] = v24;
          v15 = _mm_load_si128(&v43);
        }
        v21 = (__m128i *)(32 * v16 + v17);
        v21->m128i_i64[0] = v14;
        v21->m128i_i64[1] = v13;
        v21[1] = v15;
      }
      else
      {
        v49 = 0;
        v50 = 0;
        if ( v18 < v19 )
        {
          v43 = v15;
          v32 = qvector_reserve();
          v33 = a1[16].m128i_i64[0];
          v17 = v32;
          v34 = (const __m128i *)a1[15].m128i_i64[1];
          v35 = a1[16].m128i_i64[1];
          v36 = _mm_load_si128(&v43);
          a1[16].m128i_i64[1] = v18;
          v37 = v32;
          v38 = v33 - 1;
          v39 = v34;
          if ( v38 >= 0 )
          {
            do
            {
              v40 = v39->m128i_i64[0];
              v37 += 32;
              v39 += 2;
              *(_QWORD *)(v37 - 32) = v40;
              v41 = v39[-2].m128i_i64[1];
              v42 = _mm_loadu_si128(v39 - 1);
              v39[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v37 - 24) = v41;
              *(__m128i *)(v37 - 16) = v42;
              v39[-1].m128i_i64[1] = 0;
              v31 = v38-- == 0;
            }
            while ( !v31 );
          }
          v43 = v36;
          qfree();
          a1[15].m128i_i64[1] = v17;
          v15 = _mm_load_si128(&v43);
          a1[16].m128i_i64[1] = v35;
          v16 = a1[16].m128i_i64[0];
        }
        v20 = (__m128i *)(v17 + 32 * v16);
        v20->m128i_i64[0] = v14;
        v20->m128i_i64[1] = v13;
        v20[1] = v15;
      }
      ++a1[16].m128i_i64[0];
      a2 = 0;
    }
  }
  else
  {
    a2 = -1;
  }
  if ( v44 )
  {
    v45.m128i_i64[0] = 0;
    qfree();
  }
  return a2;
}
