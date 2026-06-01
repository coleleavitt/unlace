unsigned __int64 __fastcall sub_4078D0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  void *v4; // rax
  void *v5; // rax
  __m128i v6; // xmm1
  void *v7; // rax
  bool v8; // zf
  __int64 *v9; // rbx
  __int64 v10; // rax
  void *v11; // rdi
  __int64 v12; // r13
  __m128i v13; // xmm0
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // r13
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // rax
  _QWORD *v22; // rbp
  void *v23; // rdi
  void *v24; // rbx
  __m128i v25; // xmm0
  void *v26; // rdi
  void *v27; // rbx
  __m128i v28; // xmm0
  void *v29; // rdi
  __m128i v30; // xmm1
  void *v31; // rbx
  __m128i v32; // xmm1
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v38; // [rsp+10h] [rbp-98h] BYREF
  void *v39; // [rsp+20h] [rbp-88h]
  __m128i v40; // [rsp+28h] [rbp-80h] BYREF
  void *v41; // [rsp+38h] [rbp-70h]
  __m128i v42; // [rsp+40h] [rbp-68h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h]
  __m128i v44; // [rsp+58h] [rbp-50h] BYREF
  __int64 v45; // [rsp+68h] [rbp-40h]
  unsigned __int64 v46; // [rsp+78h] [rbp-30h]

  v2 = _mm_loadu_si128((const __m128i *)a1);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v46 = __readfsqword(0x28u);
  v4 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v38 = v2;
  v39 = v4;
  v5 = *(void **)(a1 + 40);
  v42 = v3;
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v41 = v5;
  v7 = *(void **)(a1 + 64);
  v40 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 40) = 0;
  ptr = v7;
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v44 = v6;
  *(_OWORD *)(a1 + 72) = 0;
  v8 = *(_QWORD *)(a2 + 16) == 0;
  v45 = *(_QWORD *)(a1 + 88);
  if ( v8 )
LABEL_24:
    std::__throw_bad_function_call();
  v9 = (__int64 *)(a1 - 96);
  while ( (*(int (__fastcall **)(__int64, __m128i *, __int64 *))(a2 + 24))(a2, &v38, v9) < 0 )
  {
    v10 = *v9;
    v11 = (void *)v9[14];
    v12 = v9[2];
    v13 = _mm_loadu_si128((const __m128i *)(v9 + 3));
    *(_OWORD *)(v9 + 3) = 0;
    v9[12] = v10;
    v14 = v9[1];
    v9[2] = 0;
    v9[13] = v14;
    if ( v11 )
    {
      v9[15] = 0;
      v37 = v13;
      qfree(v11);
      v13 = _mm_load_si128(&v37);
    }
    v15 = (void *)v9[17];
    v9[14] = v12;
    *(__m128i *)(v9 + 15) = v13;
    v16 = v9[5];
    v17 = _mm_loadu_si128((const __m128i *)v9 + 3);
    v9[5] = 0;
    *((_OWORD *)v9 + 3) = 0;
    if ( v15 )
    {
      v9[18] = 0;
      v37 = v17;
      qfree(v15);
      v17 = _mm_load_si128(&v37);
    }
    v18 = (void *)v9[20];
    v9[17] = v16;
    *((__m128i *)v9 + 9) = v17;
    v19 = v9[8];
    v20 = _mm_loadu_si128((const __m128i *)(v9 + 9));
    v9[8] = 0;
    *(_OWORD *)(v9 + 9) = 0;
    if ( v18 )
    {
      v9[21] = 0;
      v37 = v20;
      qfree(v18);
      v20 = _mm_load_si128(&v37);
    }
    v21 = v9[11];
    v9[20] = v19;
    v9 -= 12;
    *(__m128i *)(v9 + 33) = v20;
    v9[35] = v21;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_24;
  }
  v22 = v9 + 12;
  *((__m128i *)v9 + 6) = _mm_load_si128(&v38);
  v23 = (void *)v9[14];
  v24 = v39;
  v39 = nullptr;
  v25 = _mm_loadu_si128(&v40);
  v40 = 0;
  if ( v23 )
  {
    v22[3] = 0;
    v37 = v25;
    qfree(v23);
    v25 = _mm_load_si128(&v37);
  }
  v26 = (void *)v22[5];
  v22[2] = v24;
  *(__m128i *)(v22 + 3) = v25;
  v27 = v41;
  v28 = _mm_load_si128(&v42);
  v41 = nullptr;
  v42 = 0;
  if ( v26 )
  {
    v22[6] = 0;
    v37 = v28;
    qfree(v26);
    v28 = _mm_load_si128(&v37);
  }
  v29 = (void *)v22[8];
  *((__m128i *)v22 + 3) = v28;
  v30 = _mm_loadu_si128(&v44);
  v22[5] = v27;
  v31 = ptr;
  v44 = 0;
  ptr = nullptr;
  if ( v29 )
  {
    v22[9] = 0;
    v37 = v30;
    qfree(v29);
    v32 = _mm_load_si128(&v37);
    v33 = v45;
    v22[8] = v31;
    v34 = ptr;
    v22[11] = v33;
    *(__m128i *)(v22 + 9) = v32;
    if ( v34 )
    {
      v44.m128i_i64[0] = 0;
      qfree(v34);
    }
  }
  else
  {
    v36 = v45;
    v22[8] = v31;
    *(__m128i *)(v22 + 9) = v30;
    v22[11] = v36;
  }
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    qfree(v41);
  }
  if ( v39 )
  {
    v40.m128i_i64[0] = 0;
    qfree(v39);
  }
  return v46 - __readfsqword(0x28u);
}
