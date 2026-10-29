unsigned __int64 __fastcall sub_4C2960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  void *v8; // r12
  __m128i v9; // xmm2
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // r13d
  void *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r15
  __m128i v16; // xmm0
  void *v17; // rdi
  void *v18; // rdi
  int v19; // eax
  __m128i v20; // xmm0
  __int64 v21; // rax
  void *v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm3
  void *v26; // rdi
  __m128i v27; // xmm4
  __int64 v28; // rax
  __m128i v29; // xmm5
  __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v32; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v33; // [rsp+20h] [rbp-98h] BYREF
  __m128i v34; // [rsp+30h] [rbp-88h] BYREF
  int v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+50h] [rbp-68h]
  __m128i v37; // [rsp+58h] [rbp-60h]
  __int64 v38; // [rsp+68h] [rbp-50h]
  int v39; // [rsp+70h] [rbp-48h]
  unsigned __int64 v40; // [rsp+78h] [rbp-40h]

  v7 = *(_DWORD *)(a1 + 32);
  v40 = __readfsqword(0x28u);
  v8 = *(void **)(a1 + 40);
  v33 = _mm_loadu_si128((const __m128i *)a1);
  v35 = v7;
  v34 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  if ( v8 )
    v8 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0;
  v11 = *(_QWORD *)(a1 + 72);
  v12 = *(_DWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 56) = 0;
  v36 = v10;
  v38 = v11;
  v39 = v12;
  v31 = v9;
  v37 = v9;
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
    v32 = v16;
    qfree(v17);
    v16 = _mm_load_si128(&v32);
  }
  *(_QWORD *)(a1 + 48) = v15;
  *(__m128i *)(a1 + 56) = v16;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  v18 = *(void **)(a2 + 40);
  if ( v18 )
  {
    qfree(v18);
    *(_QWORD *)(a2 + 40) = 0;
  }
  v19 = v35;
  *(__m128i *)a2 = _mm_load_si128(&v33);
  v20 = _mm_load_si128(&v34);
  *(_DWORD *)(a2 + 32) = v19;
  *(__m128i *)(a2 + 16) = v20;
  if ( v8 )
  {
    v21 = (*(__int64 (__fastcall **)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
            v8,
            a2,
            a3,
            a4,
            a5,
            a6,
            v31.m128i_i64[0],
            v31.m128i_i64[1],
            v32.m128i_i64[0],
            v32.m128i_i64[1],
            v33.m128i_i64[0],
            v33.m128i_i64[1],
            v34.m128i_i64[0],
            v34.m128i_i64[1]);
    v22 = *(void **)(a2 + 48);
    *(_QWORD *)(a2 + 40) = v21;
    v36 = 0;
    v37 = 0;
    if ( v22 )
    {
      *(_QWORD *)(a2 + 56) = 0;
      qfree(v22);
    }
    v23 = v38;
    v24 = _mm_load_si128(&v31);
    *(_QWORD *)(a2 + 48) = v10;
    *(_DWORD *)(a2 + 80) = v12;
    *(_QWORD *)(a2 + 72) = v23;
    *(__m128i *)(a2 + 56) = v24;
    qfree(v8);
  }
  else
  {
    v26 = *(void **)(a2 + 48);
    v36 = 0;
    v37 = 0;
    if ( v26 )
    {
      *(_QWORD *)(a2 + 56) = 0;
      qfree(v26);
      v27 = _mm_load_si128(&v31);
      v28 = v38;
      *(_QWORD *)(a2 + 48) = v10;
      *(_DWORD *)(a2 + 80) = v12;
      *(_QWORD *)(a2 + 72) = v28;
      *(__m128i *)(a2 + 56) = v27;
    }
    else
    {
      v29 = _mm_load_si128(&v31);
      v30 = v38;
      *(_QWORD *)(a2 + 48) = v10;
      *(_DWORD *)(a2 + 80) = v12;
      *(_QWORD *)(a2 + 72) = v30;
      *(__m128i *)(a2 + 56) = v29;
    }
  }
  return v40 - __readfsqword(0x28u);
}
