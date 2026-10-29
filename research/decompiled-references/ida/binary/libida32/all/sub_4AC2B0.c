unsigned __int64 __fastcall sub_4AC2B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v8; // r12
  __m128i v9; // xmm2
  __int64 v10; // r14
  int v11; // eax
  int v12; // r13d
  void *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r15
  __m128i v16; // xmm0
  void *v17; // rdi
  void *v18; // rdi
  int v19; // eax
  __m128i v20; // xmm0
  void *v21; // rdi
  int v22; // eax
  __m128i v23; // xmm3
  __m128i v25; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v26; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v27; // [rsp+20h] [rbp-98h] BYREF
  __m128i v28; // [rsp+30h] [rbp-88h] BYREF
  int v29; // [rsp+40h] [rbp-78h]
  __int64 v30; // [rsp+48h] [rbp-70h]
  __int64 v31; // [rsp+50h] [rbp-68h]
  __m128i v32; // [rsp+58h] [rbp-60h]
  int v33; // [rsp+68h] [rbp-50h]
  int v34; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v35; // [rsp+78h] [rbp-40h]

  v7 = *(_DWORD *)(a1 + 32);
  v35 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 40);
  v27 = _mm_loadu_si128((const __m128i *)a1);
  v29 = v7;
  v28 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  if ( v8 )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0;
  v11 = *(_DWORD *)(a1 + 72);
  v12 = *(_DWORD *)(a1 + 76);
  *(_OWORD *)(a1 + 56) = 0;
  v31 = v10;
  v33 = v11;
  v34 = v12;
  v25 = v9;
  v32 = v9;
  if ( a2 != a1 )
  {
    v13 = *(void **)(a1 + 40);
    if ( v13 )
    {
      qfree(v13);
      *(_QWORD *)(a1 + 40) = 0;
    }
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a2);
    *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(a2 + 16));
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
    v14 = *(_QWORD *)(a2 + 40);
    if ( v14 )
      *(_QWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *(_QWORD *)(a2 + 48);
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *(_QWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 56) = 0;
  v17 = *(void **)(a1 + 48);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    v26 = v16;
    qfree(v17);
    v16 = _mm_load_si128(&v26);
  }
  *(_QWORD *)(a1 + 48) = v15;
  *(__m128i *)(a1 + 56) = v16;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  v18 = *(void **)(a2 + 40);
  if ( v18 )
  {
    qfree(v18);
    *(_QWORD *)(a2 + 40) = 0;
  }
  v19 = v29;
  *(__m128i *)a2 = _mm_load_si128(&v27);
  v20 = _mm_load_si128(&v28);
  *(_DWORD *)(a2 + 32) = v19;
  *(__m128i *)(a2 + 16) = v20;
  if ( v8 )
    *(_QWORD *)(a2 + 40) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
                             v8,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6,
                             v25.m128i_i64[0],
                             v25.m128i_i64[1],
                             v26.m128i_i64[0],
                             v26.m128i_i64[1],
                             v27.m128i_i64[0],
                             v27.m128i_i64[1],
                             v28.m128i_i64[0],
                             v28.m128i_i64[1]);
  v21 = *(void **)(a2 + 48);
  v31 = 0;
  v32 = 0;
  if ( v21 )
  {
    *(_QWORD *)(a2 + 56) = 0;
    qfree(v21);
  }
  v22 = v33;
  v23 = _mm_load_si128(&v25);
  *(_QWORD *)(a2 + 48) = v10;
  *(_DWORD *)(a2 + 76) = v12;
  *(_DWORD *)(a2 + 72) = v22;
  *(__m128i *)(a2 + 56) = v23;
  v30 = v8;
  sub_4A9B00(&v27);
  return v35 - __readfsqword(0x28u);
}

