unsigned __int64 __fastcall sub_4C49E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  void *v8; // r12
  __m128i v9; // xmm2
  __int64 v10; // r14
  int v11; // r13d
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r15
  __m128i v15; // xmm0
  void *v16; // rdi
  void *v17; // rdi
  int v18; // eax
  __m128i v19; // xmm0
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm3
  void *v25; // rdi
  __m128i v26; // xmm4
  __int64 v27; // rax
  __m128i v28; // xmm5
  __m128i v29; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v30; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v31; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v32; // [rsp+30h] [rbp-98h] BYREF
  int v33; // [rsp+40h] [rbp-88h]
  __int64 v34; // [rsp+50h] [rbp-78h]
  __m128i v35; // [rsp+58h] [rbp-70h]
  __m128i v36; // [rsp+68h] [rbp-60h]
  int v37; // [rsp+78h] [rbp-50h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v7 = *(_DWORD *)(a1 + 32);
  v38 = __readfsqword(0x28u);
  v8 = *(void **)(a1 + 40);
  v31 = _mm_loadu_si128((const __m128i *)a1);
  v33 = v7;
  v32 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  if ( v8 )
    v8 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0;
  v11 = *(_DWORD *)(a1 + 88);
  *(_OWORD *)(a1 + 56) = 0;
  v34 = v10;
  v37 = v11;
  v29 = v9;
  v35 = v9;
  v36 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  if ( a2 != a1 )
  {
    v12 = *(void **)(a1 + 40);
    if ( v12 )
    {
      qfree(v12);
      *(_QWORD *)(a1 + 40) = 0;
    }
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a2);
    *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(a2 + 16));
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
    v13 = *(_QWORD *)(a2 + 40);
    if ( v13 )
      *(_QWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *(_QWORD *)(a2 + 48);
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *(_QWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 56) = 0;
  v16 = *(void **)(a1 + 48);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    v30 = v15;
    qfree(v16);
    v15 = _mm_load_si128(&v30);
  }
  *(_QWORD *)(a1 + 48) = v14;
  *(__m128i *)(a1 + 56) = v15;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  v17 = *(void **)(a2 + 40);
  if ( v17 )
  {
    qfree(v17);
    *(_QWORD *)(a2 + 40) = 0;
  }
  v18 = v33;
  *(__m128i *)a2 = _mm_load_si128(&v31);
  v19 = _mm_load_si128(&v32);
  *(_DWORD *)(a2 + 32) = v18;
  *(__m128i *)(a2 + 16) = v19;
  if ( v8 )
  {
    v20 = (*(__int64 (__fastcall **)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
            v8,
            a2,
            a3,
            a4,
            a5,
            a6,
            v29.m128i_i64[0],
            v29.m128i_i64[1],
            v30.m128i_i64[0],
            v30.m128i_i64[1],
            v31.m128i_i64[0],
            v31.m128i_i64[1],
            v32.m128i_i64[0],
            v32.m128i_i64[1]);
    v21 = *(void **)(a2 + 48);
    *(_QWORD *)(a2 + 40) = v20;
    v34 = 0;
    v35 = 0;
    if ( v21 )
    {
      *(_QWORD *)(a2 + 56) = 0;
      qfree(v21);
    }
    v22 = v36.m128i_i64[0];
    v23 = _mm_load_si128(&v29);
    *(_QWORD *)(a2 + 48) = v10;
    *(_DWORD *)(a2 + 88) = v11;
    *(_QWORD *)(a2 + 72) = v22;
    LODWORD(v22) = v36.m128i_i32[2];
    *(__m128i *)(a2 + 56) = v23;
    *(_DWORD *)(a2 + 80) = v22;
    qfree(v8);
  }
  else
  {
    v25 = *(void **)(a2 + 48);
    v34 = 0;
    v35 = 0;
    if ( v25 )
    {
      *(_QWORD *)(a2 + 56) = 0;
      qfree(v25);
      v26 = _mm_load_si128(&v29);
      *(_QWORD *)(a2 + 48) = v10;
      *(__m128i *)(a2 + 56) = v26;
    }
    else
    {
      v28 = _mm_load_si128(&v29);
      *(_QWORD *)(a2 + 48) = v10;
      *(__m128i *)(a2 + 56) = v28;
    }
    v27 = v36.m128i_i64[0];
    *(_DWORD *)(a2 + 88) = v11;
    *(_QWORD *)(a2 + 72) = v27;
    *(_DWORD *)(a2 + 80) = v36.m128i_i32[2];
  }
  return v38 - __readfsqword(0x28u);
}
