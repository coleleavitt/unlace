unsigned __int64 __fastcall sub_4BF4F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 i; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  __m128i *v11; // r15
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  void *v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm3
  __m128i v22; // xmm0
  int v23; // r13d
  __int64 v24; // r14
  void *v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // r12
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v30; // r15
  void *v31; // rdi
  int v32; // eax
  __int64 v33; // rdi
  __m128i v34; // xmm0
  void *v35; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm4
  __int64 v38; // rax
  __int64 v40; // rcx
  __int64 v41; // r12
  __int64 v42; // rax
  __m128i v43; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v44; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v45; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+30h] [rbp-B8h]
  __int64 v47; // [rsp+38h] [rbp-B0h]
  __m128i v48; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v49; // [rsp+50h] [rbp-98h] BYREF
  int v50; // [rsp+60h] [rbp-88h]
  __int64 v51; // [rsp+68h] [rbp-80h]
  __int64 v52; // [rsp+70h] [rbp-78h]
  __m128i v53; // [rsp+78h] [rbp-70h]
  __m128i v54; // [rsp+88h] [rbp-60h]
  int v55; // [rsp+98h] [rbp-50h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-40h]

  v4 = (a3 - 1) / 2;
  v46 = a2;
  v45.m128i_i64[0] = a3;
  v56 = __readfsqword(0x28u);
  if ( a2 >= v4 )
  {
    v8 = v46;
    v10 = a1 + 96 * v46;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = 192 * (i + 1);
      v10 = a1 + v9;
      if ( *(_DWORD *)(a1 + v9 + 88) < *(_DWORD *)(a1 + v9 - 8) )
      {
        --v8;
        v9 = 96 * v8;
        v10 = a1 + 96 * v8;
      }
      v11 = (__m128i *)(a1 + 96 * i);
      if ( 96 * i != v9 )
      {
        v12 = (void *)v11[2].m128i_i64[1];
        if ( v12 )
        {
          qfree(v12);
          v11[2].m128i_i64[1] = 0;
        }
        *v11 = _mm_loadu_si128((const __m128i *)v10);
        v11[1] = _mm_loadu_si128((const __m128i *)(v10 + 16));
        v11[2].m128i_i32[0] = *(_DWORD *)(v10 + 32);
        v13 = *(_QWORD *)(v10 + 40);
        if ( v13 )
          v11[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = *(_QWORD *)(v10 + 48);
      v15 = _mm_loadu_si128((const __m128i *)(v10 + 56));
      *(_QWORD *)(v10 + 48) = 0;
      *(_OWORD *)(v10 + 56) = 0;
      v16 = (void *)v11[3].m128i_i64[0];
      if ( v16 )
      {
        v11[3].m128i_i64[1] = 0;
        v43.m128i_i64[0] = v14;
        v44 = v15;
        qfree(v16);
        v15 = _mm_load_si128(&v44);
        v14 = v43.m128i_i64[0];
      }
      v11[3].m128i_i64[0] = v14;
      *(__m128i *)((char *)v11 + 56) = v15;
      v11[4].m128i_i64[1] = *(_QWORD *)(v10 + 72);
      v11[5].m128i_i32[0] = *(_DWORD *)(v10 + 80);
      v11[5].m128i_i32[2] = *(_DWORD *)(v10 + 88);
      if ( v8 >= v4 )
        break;
    }
  }
  if ( (v45.m128i_i8[0] & 1) == 0 && (v45.m128i_i64[0] - 2) / 2 == v8 )
  {
    v40 = v8 + 1;
    v41 = 2 * (v8 + 1);
    v42 = v41 + 4 * v40;
    v8 = v41 - 1;
    sub_4B60D0((__m128i *)v10, a1 + 32 * v42 - 96);
    v10 = a1 + 96 * v8;
  }
  v17 = *(_DWORD *)(a4 + 32);
  v18 = *(_QWORD *)(a4 + 40);
  v48 = _mm_loadu_si128((const __m128i *)a4);
  v19 = _mm_loadu_si128((const __m128i *)(a4 + 16));
  v50 = v17;
  v44.m128i_i64[0] = v18;
  v49 = v19;
  if ( v18 )
    v44.m128i_i64[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v20 = *(_QWORD *)(a4 + 48);
  v21 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  *(_QWORD *)(a4 + 48) = 0;
  *(_OWORD *)(a4 + 56) = 0;
  v22 = _mm_loadu_si128((const __m128i *)(a4 + 72));
  v23 = *(_DWORD *)(a4 + 88);
  v47 = v20;
  v52 = v20;
  v55 = v23;
  v45 = v21;
  v53 = v21;
  v54 = v22;
  v24 = (v8 - 1) / 2;
  if ( v8 > v46 )
  {
    while ( 1 )
    {
      v30 = a1 + 96 * v24;
      v10 = a1 + 96 * v8;
      if ( *(_DWORD *)(v30 + 88) >= v23 )
        break;
      if ( 96 * v24 != 96 * v8 )
      {
        v25 = *(void **)(v10 + 40);
        if ( v25 )
        {
          qfree(v25);
          *(_QWORD *)(v10 + 40) = 0;
        }
        *(__m128i *)v10 = _mm_loadu_si128((const __m128i *)v30);
        *(__m128i *)(v10 + 16) = _mm_loadu_si128((const __m128i *)(v30 + 16));
        *(_DWORD *)(v10 + 32) = *(_DWORD *)(v30 + 32);
        v26 = *(_QWORD *)(v30 + 40);
        if ( v26 )
          *(_QWORD *)(v10 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = *(_QWORD *)(v30 + 48);
      v28 = _mm_loadu_si128((const __m128i *)(v30 + 56));
      *(_QWORD *)(v30 + 48) = 0;
      *(_OWORD *)(v30 + 56) = 0;
      v29 = *(void **)(v10 + 48);
      if ( v29 )
      {
        *(_QWORD *)(v10 + 56) = 0;
        v43 = v28;
        qfree(v29);
        v28 = _mm_load_si128(&v43);
      }
      *(_QWORD *)(v10 + 48) = v27;
      v8 = v24;
      *(__m128i *)(v10 + 56) = v28;
      *(_QWORD *)(v10 + 72) = *(_QWORD *)(v30 + 72);
      *(_DWORD *)(v10 + 80) = *(_DWORD *)(v30 + 80);
      *(_DWORD *)(v10 + 88) = *(_DWORD *)(v30 + 88);
      if ( v46 >= v24 )
      {
        v10 = a1 + 96 * v24;
        break;
      }
      v24 = (v24 - 1) / 2;
    }
  }
  v31 = *(void **)(v10 + 40);
  if ( v31 )
  {
    qfree(v31);
    *(_QWORD *)(v10 + 40) = 0;
  }
  v32 = v50;
  v33 = v44.m128i_i64[0];
  *(__m128i *)v10 = _mm_load_si128(&v48);
  v34 = _mm_load_si128(&v49);
  *(_DWORD *)(v10 + 32) = v32;
  *(__m128i *)(v10 + 16) = v34;
  if ( v33 )
    *(_QWORD *)(v10 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v35 = *(void **)(v10 + 48);
  v52 = 0;
  v53 = 0;
  if ( v35 )
  {
    *(_QWORD *)(v10 + 56) = 0;
    qfree(v35);
  }
  v36 = v47;
  v37 = _mm_load_si128(&v45);
  *(_DWORD *)(v10 + 88) = v23;
  *(_QWORD *)(v10 + 48) = v36;
  v38 = v54.m128i_i64[0];
  *(__m128i *)(v10 + 56) = v37;
  *(_QWORD *)(v10 + 72) = v38;
  *(_DWORD *)(v10 + 80) = v54.m128i_i32[2];
  v51 = v44.m128i_i64[0];
  sub_4BED10(&v48);
  return v56 - __readfsqword(0x28u);
}
