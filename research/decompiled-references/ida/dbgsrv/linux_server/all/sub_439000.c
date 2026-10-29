/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439000
// Address: 0x0000000000439000

//----- (0000000000439000) ----------------------------------------------------
unsigned __int64 __fastcall sub_439000(_QWORD *a1, __int32 a2, __int64 a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  const char *v10; // rsi
  const char *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r13
  __m128i *v14; // r12
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i *v19; // rbp
  __m128i v20; // xmm0
  __m128i *v21; // r12
  void *v23; // rax
  const char *v24; // rsi
  __m128i *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbp
  __m128i *v28; // rdi
  __int64 v29; // rdx
  __int32 v30; // ecx
  __int64 v31; // rcx
  __m128i v32; // xmm0
  bool v33; // cf
  __m128i *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rbp
  __m128i *v37; // rdi
  __int64 v38; // xmm1_8
  __int64 v39; // rdx
  __int64 v40; // xmm2_8
  __int32 v41; // ecx
  __int64 v42; // rcx
  __m128i v43; // xmm0
  const char *v44; // rbp
  void *v45; // rax
  __m128i v46; // [rsp+0h] [rbp-78h] BYREF
  __int32 v47; // [rsp+10h] [rbp-68h] BYREF
  void *v48; // [rsp+18h] [rbp-60h]
  __m128i v49; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+38h] [rbp-40h]

  v5 = a1[12];
  v6 = *(_QWORD *)(a3 + 8);
  v50 = __readfsqword(0x28u);
  if ( !v5 )
    goto LABEL_7;
  v8 = a1[11] + 32 * v5 - 32;
  v9 = *(_QWORD *)(v8 + 16);
  if ( v6 )
  {
    v10 = *(const char **)a3;
    v11 = s1;
    if ( v9 )
      v11 = *(const char **)(v8 + 8);
  }
  else
  {
    v10 = s1;
    if ( !v9 )
      return v50 - __readfsqword(0x28u);
    v11 = *(const char **)(v8 + 8);
  }
  if ( !strcmp(v11, v10) )
    return v50 - __readfsqword(0x28u);
  if ( *(_DWORD *)v8 == a2 )
  {
    if ( v8 + 8 != a3 )
    {
      if ( v6 > 1 )
      {
        v44 = *(const char **)a3;
        v45 = *(void **)(v8 + 8);
        if ( *(_QWORD *)(v8 + 24) < v6 )
        {
          v45 = sub_481540(v8 + 8, *(void **)(v8 + 8), v6, 1u);
          *(_QWORD *)(v8 + 8) = v45;
        }
        *(_QWORD *)(v8 + 16) = v6;
        memmove(v45, v44, v6 - 1);
        *(_BYTE *)(*(_QWORD *)(v8 + 8) + v6 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v8 + 16) = 0;
      }
    }
  }
  else
  {
LABEL_7:
    v47 = a2;
    v12 = (__int64)(a1 + 11);
    v13 = 0;
    v48 = nullptr;
    v49 = 0;
    if ( v6 )
    {
      v46.m128i_i64[0] = (__int64)(a1 + 11);
      v23 = sub_4814F0(v6);
      v24 = *(const char **)a3;
      v49.m128i_i64[1] = v6;
      v48 = v23;
      v13 = (__int64)v23;
      memcpy(v23, v24, v6);
      v49.m128i_i64[0] = v6;
      v5 = a1[12];
      v12 = (__int64)(a1 + 11);
    }
    v14 = (__m128i *)a1[11];
    v15 = a1[13];
    v16 = v5 + 1;
    if ( &v47 < (__int32 *)v14 || &v47 >= v14[2 * v15].m128i_i32 )
    {
      if ( v15 < v16 )
      {
        v25 = (__m128i *)sub_481540(v12, nullptr, v16, 0x20u);
        v26 = a1[12];
        v27 = a1[13];
        v14 = v25;
        a1[13] = v15;
        v28 = (__m128i *)a1[11];
        v29 = v26 - 1;
        if ( v29 >= 0 )
        {
          do
          {
            v30 = v28->m128i_i32[0];
            v25 += 2;
            v28 += 2;
            v25[-2].m128i_i32[0] = v30;
            v31 = v28[-2].m128i_i64[1];
            v32 = _mm_loadu_si128(v28 - 1);
            v28[-2].m128i_i64[1] = 0;
            v25[-2].m128i_i64[1] = v31;
            v25[-1] = v32;
            v28[-1].m128i_i64[1] = 0;
            v33 = v29-- == 0;
          }
          while ( !v33 );
          v28 = (__m128i *)a1[11];
        }
        j__free(v28);
        a1[13] = v27;
        v5 = a1[12];
        a1[11] = v14;
      }
      v20 = _mm_load_si128(&v49);
      v21 = &v14[2 * v5];
      v21->m128i_i32[0] = a2;
      v21->m128i_i64[1] = v13;
      v21[1] = v20;
    }
    else
    {
      v17 = _mm_loadl_epi64(&v49);
      v18 = _mm_loadl_epi64((const __m128i *)&v49.m128i_u64[1]);
      v48 = nullptr;
      v49 = 0;
      if ( v15 < v16 )
      {
        v46.m128i_i64[0] = v17.m128i_i64[0];
        v46.m128i_i64[1] = v18.m128i_i64[0];
        v34 = (__m128i *)sub_481540(v12, nullptr, v16, 0x20u);
        v35 = a1[12];
        v36 = a1[13];
        v14 = v34;
        a1[13] = v15;
        v37 = (__m128i *)a1[11];
        v38 = v46.m128i_i64[0];
        v39 = v35 - 1;
        v40 = v46.m128i_i64[1];
        if ( v39 >= 0 )
        {
          do
          {
            v41 = v37->m128i_i32[0];
            v34 += 2;
            v37 += 2;
            v34[-2].m128i_i32[0] = v41;
            v42 = v37[-2].m128i_i64[1];
            v43 = _mm_loadu_si128(v37 - 1);
            v37[-2].m128i_i64[1] = 0;
            v34[-2].m128i_i64[1] = v42;
            v34[-1] = v43;
            v37[-1].m128i_i64[1] = 0;
            v33 = v39-- == 0;
          }
          while ( !v33 );
          v37 = (__m128i *)a1[11];
        }
        v46.m128i_i64[1] = v40;
        v46.m128i_i64[0] = v38;
        j__free(v37);
        a1[13] = v36;
        v18 = _mm_loadl_epi64((const __m128i *)&v46.m128i_u64[1]);
        v5 = a1[12];
        v17 = _mm_loadl_epi64(&v46);
        a1[11] = v14;
      }
      v19 = &v14[2 * v5];
      v19->m128i_i32[0] = a2;
      v19->m128i_i64[1] = v13;
      v19[1] = _mm_unpacklo_epi64(v17, v18);
    }
    ++a1[12];
  }
  return v50 - __readfsqword(0x28u);
}
