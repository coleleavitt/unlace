unsigned __int64 __fastcall sub_4AA170(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  int v22; // r13d
  __int64 v23; // r14
  void *v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r12
  __m128i v27; // xmm0
  void *v28; // rdi
  __int64 v29; // r15
  void *v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  __m128i v33; // xmm0
  void *v34; // rdi
  __int64 v35; // rax
  __m128i v36; // xmm4
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rax
  __m128i v41; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v42; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v43; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-A8h]
  __int64 v45; // [rsp+38h] [rbp-A0h]
  __m128i v46; // [rsp+40h] [rbp-98h] BYREF
  __m128i v47; // [rsp+50h] [rbp-88h] BYREF
  int v48; // [rsp+60h] [rbp-78h]
  __int64 v49; // [rsp+68h] [rbp-70h]
  __int64 v50; // [rsp+70h] [rbp-68h]
  __m128i v51; // [rsp+78h] [rbp-60h]
  int v52; // [rsp+88h] [rbp-50h]
  int v53; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v54; // [rsp+98h] [rbp-40h]

  v4 = (a3 - 1) / 2;
  v44 = a2;
  v43.m128i_i64[0] = a3;
  v54 = __readfsqword(0x28u);
  if ( a2 >= v4 )
  {
    v8 = v44;
    v10 = a1 + 80 * v44;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = 160 * (i + 1);
      v10 = a1 + v9;
      if ( *(_DWORD *)(a1 + v9 + 76) < *(_DWORD *)(a1 + v9 - 4) )
      {
        --v8;
        v9 = 80 * v8;
        v10 = a1 + 80 * v8;
      }
      v11 = (__m128i *)(a1 + 80 * i);
      if ( 80 * i != v9 )
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
        v41.m128i_i64[0] = v14;
        v42 = v15;
        qfree(v16);
        v15 = _mm_load_si128(&v42);
        v14 = v41.m128i_i64[0];
      }
      v11[3].m128i_i64[0] = v14;
      *(__m128i *)((char *)v11 + 56) = v15;
      v11[4].m128i_i32[2] = *(_DWORD *)(v10 + 72);
      v11[4].m128i_i32[3] = *(_DWORD *)(v10 + 76);
      if ( v8 >= v4 )
        break;
    }
  }
  if ( (v43.m128i_i8[0] & 1) == 0 && (v43.m128i_i64[0] - 2) / 2 == v8 )
  {
    v38 = v8 + 1;
    v39 = 2 * (v8 + 1);
    v40 = v39 + 8 * v38;
    v8 = v39 - 1;
    sub_4A0C40((__m128i *)v10, a1 + 16 * v40 - 80);
    v10 = a1 + 80 * v8;
  }
  v17 = *(_DWORD *)(a4 + 32);
  v18 = *(_QWORD *)(a4 + 40);
  v46 = _mm_loadu_si128((const __m128i *)a4);
  v19 = _mm_loadu_si128((const __m128i *)(a4 + 16));
  v48 = v17;
  v42.m128i_i64[0] = v18;
  v47 = v19;
  if ( v18 )
    v42.m128i_i64[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v20 = *(_QWORD *)(a4 + 48);
  v21 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  *(_QWORD *)(a4 + 48) = 0;
  *(_OWORD *)(a4 + 56) = 0;
  v45 = v20;
  v50 = v20;
  LODWORD(v20) = *(_DWORD *)(a4 + 72);
  v22 = *(_DWORD *)(a4 + 76);
  v43 = v21;
  v52 = v20;
  v53 = v22;
  v51 = v21;
  v23 = (v8 - 1) / 2;
  if ( v8 > v44 )
  {
    while ( 1 )
    {
      v29 = a1 + 80 * v23;
      v10 = a1 + 80 * v8;
      if ( *(_DWORD *)(v29 + 76) >= v22 )
        break;
      if ( 80 * v23 != 80 * v8 )
      {
        v24 = *(void **)(v10 + 40);
        if ( v24 )
        {
          qfree(v24);
          *(_QWORD *)(v10 + 40) = 0;
        }
        *(__m128i *)v10 = _mm_loadu_si128((const __m128i *)v29);
        *(__m128i *)(v10 + 16) = _mm_loadu_si128((const __m128i *)(v29 + 16));
        *(_DWORD *)(v10 + 32) = *(_DWORD *)(v29 + 32);
        v25 = *(_QWORD *)(v29 + 40);
        if ( v25 )
          *(_QWORD *)(v10 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v26 = *(_QWORD *)(v29 + 48);
      v27 = _mm_loadu_si128((const __m128i *)(v29 + 56));
      *(_QWORD *)(v29 + 48) = 0;
      *(_OWORD *)(v29 + 56) = 0;
      v28 = *(void **)(v10 + 48);
      if ( v28 )
      {
        *(_QWORD *)(v10 + 56) = 0;
        v41 = v27;
        qfree(v28);
        v27 = _mm_load_si128(&v41);
      }
      *(_QWORD *)(v10 + 48) = v26;
      v8 = v23;
      *(__m128i *)(v10 + 56) = v27;
      *(_DWORD *)(v10 + 72) = *(_DWORD *)(v29 + 72);
      *(_DWORD *)(v10 + 76) = *(_DWORD *)(v29 + 76);
      if ( v44 >= v23 )
      {
        v10 = a1 + 80 * v23;
        break;
      }
      v23 = (v23 - 1) / 2;
    }
  }
  v30 = *(void **)(v10 + 40);
  if ( v30 )
  {
    qfree(v30);
    *(_QWORD *)(v10 + 40) = 0;
  }
  v31 = v48;
  v32 = v42.m128i_i64[0];
  *(__m128i *)v10 = _mm_load_si128(&v46);
  v33 = _mm_load_si128(&v47);
  *(_DWORD *)(v10 + 32) = v31;
  *(__m128i *)(v10 + 16) = v33;
  if ( v32 )
    *(_QWORD *)(v10 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v34 = *(void **)(v10 + 48);
  v50 = 0;
  v51 = 0;
  if ( v34 )
  {
    *(_QWORD *)(v10 + 56) = 0;
    qfree(v34);
  }
  v35 = v45;
  v36 = _mm_load_si128(&v43);
  *(_DWORD *)(v10 + 76) = v22;
  *(_QWORD *)(v10 + 48) = v35;
  LODWORD(v35) = v52;
  *(__m128i *)(v10 + 56) = v36;
  *(_DWORD *)(v10 + 72) = v35;
  v49 = v42.m128i_i64[0];
  sub_4A9B00(&v46);
  return v54 - __readfsqword(0x28u);
}

