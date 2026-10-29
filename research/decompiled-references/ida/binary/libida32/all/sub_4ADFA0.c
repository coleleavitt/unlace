unsigned __int64 __fastcall sub_4ADFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v8; // r12
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
  void *v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm3
  __m128i v24; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v25; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v26; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v27; // [rsp+30h] [rbp-98h] BYREF
  int v28; // [rsp+40h] [rbp-88h]
  __int64 v29; // [rsp+48h] [rbp-80h]
  __int64 v30; // [rsp+50h] [rbp-78h]
  __m128i v31; // [rsp+58h] [rbp-70h]
  __m128i v32; // [rsp+68h] [rbp-60h]
  int v33; // [rsp+78h] [rbp-50h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v7 = *(_DWORD *)(a1 + 32);
  v34 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 40);
  v26 = _mm_loadu_si128((const __m128i *)a1);
  v28 = v7;
  v27 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  if ( v8 )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0;
  v11 = *(_DWORD *)(a1 + 88);
  *(_OWORD *)(a1 + 56) = 0;
  v30 = v10;
  v33 = v11;
  v24 = v9;
  v31 = v9;
  v32 = _mm_loadu_si128((const __m128i *)(a1 + 72));
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
    v25 = v15;
    qfree(v16);
    v15 = _mm_load_si128(&v25);
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
  v18 = v28;
  *(__m128i *)a2 = _mm_load_si128(&v26);
  v19 = _mm_load_si128(&v27);
  *(_DWORD *)(a2 + 32) = v18;
  *(__m128i *)(a2 + 16) = v19;
  if ( v8 )
    *(_QWORD *)(a2 + 40) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
                             v8,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6,
                             v24.m128i_i64[0],
                             v24.m128i_i64[1],
                             v25.m128i_i64[0],
                             v25.m128i_i64[1],
                             v26.m128i_i64[0],
                             v26.m128i_i64[1],
                             v27.m128i_i64[0],
                             v27.m128i_i64[1]);
  v20 = *(void **)(a2 + 48);
  v30 = 0;
  v31 = 0;
  if ( v20 )
  {
    *(_QWORD *)(a2 + 56) = 0;
    qfree(v20);
  }
  v21 = v32.m128i_i64[0];
  v22 = _mm_load_si128(&v24);
  *(_QWORD *)(a2 + 48) = v10;
  *(_DWORD *)(a2 + 88) = v11;
  *(_QWORD *)(a2 + 72) = v21;
  LODWORD(v21) = v32.m128i_i32[2];
  *(__m128i *)(a2 + 56) = v22;
  *(_DWORD *)(a2 + 80) = v21;
  v29 = v8;
  sub_4A82A0(&v26);
  return v34 - __readfsqword(0x28u);
}

