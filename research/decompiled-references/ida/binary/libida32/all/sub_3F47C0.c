unsigned __int64 __fastcall sub_3F47C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm1
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  bool v7; // zf
  __int64 *v8; // rbx
  int v9; // eax
  void *v10; // rdi
  __int64 v11; // r13
  __m128i v12; // xmm0
  int v13; // eax
  void *v14; // rdi
  __int64 v15; // r13
  __m128i v16; // xmm0
  void *v17; // rdi
  __int64 v18; // r13
  __m128i v19; // xmm0
  __int64 v20; // rax
  _QWORD *v21; // rbp
  __m128i v22; // xmm0
  void *v23; // rdi
  void *v24; // rbx
  void *v25; // rdi
  void *v26; // rbx
  __m128i v27; // xmm0
  void *v28; // rdi
  __m128i v29; // xmm1
  void *v30; // rbx
  __m128i v31; // xmm1
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v35; // rax
  __m128i v36; // [rsp+0h] [rbp-98h] BYREF
  __int64 v37; // [rsp+10h] [rbp-88h] BYREF
  void *v38; // [rsp+18h] [rbp-80h]
  __m128i v39; // [rsp+20h] [rbp-78h] BYREF
  void *v40; // [rsp+30h] [rbp-68h]
  __m128i v41; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+48h] [rbp-50h]
  __m128i v43; // [rsp+50h] [rbp-48h] BYREF
  __int64 v44; // [rsp+60h] [rbp-38h]
  unsigned __int64 v45; // [rsp+68h] [rbp-30h]

  v45 = __readfsqword(0x28u);
  v2 = *a1;
  v41 = _mm_loadu_si128((const __m128i *)(a1 + 5));
  v3 = _mm_loadu_si128((const __m128i *)a1 + 4);
  v37 = v2;
  v4 = (void *)a1[1];
  v39 = _mm_loadu_si128((const __m128i *)a1 + 1);
  v38 = v4;
  v5 = (void *)a1[4];
  a1[1] = 0;
  v40 = v5;
  v6 = (void *)a1[7];
  a1[4] = 0;
  ptr = v6;
  a1[7] = 0;
  *((_OWORD *)a1 + 1) = 0;
  *(_OWORD *)(a1 + 5) = 0;
  v43 = v3;
  *((_OWORD *)a1 + 4) = 0;
  v7 = *(_QWORD *)(a2 + 16) == 0;
  v44 = a1[10];
  if ( v7 )
LABEL_24:
    std::__throw_bad_function_call();
  v8 = a1 - 11;
  while ( (*(int (__fastcall **)(__int64, __int64 *, __int64 *))(a2 + 24))(a2, &v37, v8) < 0 )
  {
    v9 = *(_DWORD *)v8;
    v10 = (void *)v8[12];
    v11 = v8[1];
    v12 = _mm_loadu_si128((const __m128i *)v8 + 1);
    *((_OWORD *)v8 + 1) = 0;
    *((_DWORD *)v8 + 22) = v9;
    v13 = *((_DWORD *)v8 + 1);
    v8[1] = 0;
    *((_DWORD *)v8 + 23) = v13;
    if ( v10 )
    {
      v8[13] = 0;
      v36 = v12;
      qfree(v10);
      v12 = _mm_load_si128(&v36);
    }
    v14 = (void *)v8[15];
    v8[12] = v11;
    *(__m128i *)(v8 + 13) = v12;
    v15 = v8[4];
    v16 = _mm_loadu_si128((const __m128i *)(v8 + 5));
    v8[4] = 0;
    *(_OWORD *)(v8 + 5) = 0;
    if ( v14 )
    {
      v8[16] = 0;
      v36 = v16;
      qfree(v14);
      v16 = _mm_load_si128(&v36);
    }
    v17 = (void *)v8[18];
    v8[15] = v15;
    *((__m128i *)v8 + 8) = v16;
    v18 = v8[7];
    v19 = _mm_loadu_si128((const __m128i *)v8 + 4);
    v8[7] = 0;
    *((_OWORD *)v8 + 4) = 0;
    if ( v17 )
    {
      v8[19] = 0;
      v36 = v19;
      qfree(v17);
      v19 = _mm_load_si128(&v36);
    }
    v20 = v8[10];
    v8[18] = v18;
    v8 -= 11;
    *((__m128i *)v8 + 15) = v19;
    v8[32] = v20;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_24;
  }
  v21 = v8 + 11;
  v22 = _mm_load_si128(&v39);
  v39 = 0;
  v8[11] = v37;
  v23 = (void *)v8[12];
  v24 = v38;
  v38 = nullptr;
  if ( v23 )
  {
    v21[2] = 0;
    v36 = v22;
    qfree(v23);
    v22 = _mm_load_si128(&v36);
  }
  v25 = (void *)v21[4];
  v21[1] = v24;
  *((__m128i *)v21 + 1) = v22;
  v26 = v40;
  v27 = _mm_loadu_si128(&v41);
  v40 = nullptr;
  v41 = 0;
  if ( v25 )
  {
    v21[5] = 0;
    v36 = v27;
    qfree(v25);
    v27 = _mm_load_si128(&v36);
  }
  v28 = (void *)v21[7];
  *(__m128i *)(v21 + 5) = v27;
  v29 = _mm_load_si128(&v43);
  v21[4] = v26;
  v30 = ptr;
  v43 = 0;
  ptr = nullptr;
  if ( v28 )
  {
    v21[8] = 0;
    v36 = v29;
    qfree(v28);
    v31 = _mm_load_si128(&v36);
    v32 = v44;
    v21[7] = v30;
    v33 = ptr;
    v21[10] = v32;
    *((__m128i *)v21 + 4) = v31;
    if ( v33 )
    {
      v43.m128i_i64[0] = 0;
      qfree(v33);
    }
  }
  else
  {
    v35 = v44;
    v21[7] = v30;
    *((__m128i *)v21 + 4) = v29;
    v21[10] = v35;
  }
  if ( v40 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v40);
  }
  if ( v38 )
  {
    v39.m128i_i64[0] = 0;
    qfree(v38);
  }
  return v45 - __readfsqword(0x28u);
}

