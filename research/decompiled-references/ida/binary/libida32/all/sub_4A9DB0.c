unsigned __int64 __fastcall sub_4A9DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 i; // rcx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __m128i *v12; // rbp
  void *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rax
  __m128i v16; // xmm0
  void *v17; // rdi
  int v18; // eax
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rax
  unsigned int v22; // r12d
  __m128i v23; // xmm2
  __int64 v24; // rdx
  int v25; // r13d
  __int64 v26; // rax
  void *v27; // rdi
  int v28; // eax
  __m128i v29; // xmm0
  void *v30; // rdi
  __int64 v31; // rax
  __m128i v32; // xmm3
  __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v38; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+28h] [rbp-B0h]
  __int64 v40; // [rsp+30h] [rbp-A8h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  __m128i v42; // [rsp+40h] [rbp-98h] BYREF
  __m128i v43; // [rsp+50h] [rbp-88h] BYREF
  int v44; // [rsp+60h] [rbp-78h]
  __int64 v45; // [rsp+68h] [rbp-70h]
  __int64 v46; // [rsp+70h] [rbp-68h]
  __m128i v47; // [rsp+78h] [rbp-60h]
  unsigned int v48; // [rsp+88h] [rbp-50h]
  int v49; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v50; // [rsp+98h] [rbp-40h]

  v5 = (a3 - 1) / 2;
  v39 = a2;
  v40 = a3;
  v50 = __readfsqword(0x28u);
  if ( a2 >= v5 )
  {
    v8 = v39;
    v10 = a1 + 80 * v39;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = 160 * (i + 1);
      v10 = a1 + v9;
      if ( *(_DWORD *)(a1 + v9 + 72) < *(_DWORD *)(a1 + v9 - 8) )
      {
        --v8;
        v9 = 80 * v8;
        v10 = a1 + 80 * v8;
      }
      v11 = 80 * i;
      v12 = (__m128i *)(a1 + v11);
      if ( v11 != v9 )
      {
        v13 = (void *)v12[2].m128i_i64[1];
        if ( v13 )
        {
          qfree(v13);
          v12[2].m128i_i64[1] = 0;
        }
        *v12 = _mm_loadu_si128((const __m128i *)v10);
        v12[1] = _mm_loadu_si128((const __m128i *)(v10 + 16));
        v12[2].m128i_i32[0] = *(_DWORD *)(v10 + 32);
        v14 = *(_QWORD *)(v10 + 40);
        if ( v14 )
          v12[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = *(_QWORD *)(v10 + 48);
      v16 = _mm_loadu_si128((const __m128i *)(v10 + 56));
      *(_QWORD *)(v10 + 48) = 0;
      *(_OWORD *)(v10 + 56) = 0;
      v17 = (void *)v12[3].m128i_i64[0];
      if ( v17 )
      {
        v12[3].m128i_i64[1] = 0;
        v37.m128i_i64[0] = v15;
        v38 = v16;
        qfree(v17);
        v16 = _mm_load_si128(&v38);
        v15 = v37.m128i_i64[0];
      }
      v12[3].m128i_i64[0] = v15;
      *(__m128i *)((char *)v12 + 56) = v16;
      v12[4].m128i_i32[2] = *(_DWORD *)(v10 + 72);
      v12[4].m128i_i32[3] = *(_DWORD *)(v10 + 76);
      if ( v8 >= v5 )
        break;
    }
  }
  if ( (v40 & 1) == 0 && (v40 - 2) / 2 == v8 )
  {
    v34 = v8 + 1;
    v35 = 2 * (v8 + 1);
    v36 = v35 + 8 * v34;
    v8 = v35 - 1;
    sub_4A0C40((__m128i *)v10, a1 + 16 * v36 - 80);
    v10 = a1 + 80 * v8;
  }
  v18 = *(_DWORD *)(a4 + 32);
  v19 = *(_QWORD *)(a4 + 40);
  v42 = _mm_loadu_si128((const __m128i *)a4);
  v20 = _mm_loadu_si128((const __m128i *)(a4 + 16));
  v44 = v18;
  v43 = v20;
  if ( v19 )
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v21 = *(_QWORD *)(a4 + 48);
  v22 = *(_DWORD *)(a4 + 72);
  v23 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  v24 = v39;
  *(_OWORD *)(a4 + 56) = 0;
  v38.m128i_i64[0] = v21;
  v46 = v21;
  *(_QWORD *)(a4 + 48) = 0;
  v25 = *(_DWORD *)(a4 + 76);
  v37 = v23;
  v49 = v25;
  v26 = (v8 - 1) / 2;
  v47 = v23;
  if ( v8 > v24 )
  {
    while ( 1 )
    {
      v10 = a1 + 80 * v8;
      if ( *(_DWORD *)(a1 + 80 * v26 + 72) >= v22 )
        break;
      v41 = v26;
      v40 = a1 + 80 * v26;
      sub_4A0C40((__m128i *)(a1 + 80 * v8), v40);
      v8 = v41;
      if ( v39 >= v41 )
      {
        v10 = v40;
        break;
      }
      v26 = (v41 - 1) / 2;
    }
  }
  v27 = *(void **)(v10 + 40);
  if ( v27 )
  {
    qfree(v27);
    *(_QWORD *)(v10 + 40) = 0;
  }
  v28 = v44;
  *(__m128i *)v10 = _mm_load_si128(&v42);
  v29 = _mm_load_si128(&v43);
  *(_DWORD *)(v10 + 32) = v28;
  *(__m128i *)(v10 + 16) = v29;
  if ( v19 )
    *(_QWORD *)(v10 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v30 = *(void **)(v10 + 48);
  v46 = 0;
  v47 = 0;
  if ( v30 )
  {
    *(_QWORD *)(v10 + 56) = 0;
    qfree(v30);
  }
  v31 = v38.m128i_i64[0];
  v32 = _mm_load_si128(&v37);
  *(_DWORD *)(v10 + 72) = v22;
  *(_DWORD *)(v10 + 76) = v25;
  *(_QWORD *)(v10 + 48) = v31;
  *(__m128i *)(v10 + 56) = v32;
  v45 = v19;
  v48 = v22;
  sub_4A9B00(&v42);
  return v50 - __readfsqword(0x28u);
}

