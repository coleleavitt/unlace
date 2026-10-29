unsigned __int64 __fastcall sub_595A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 i; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // r15
  void *v15; // rdi
  void (__fastcall *v16)(__int128 *, __int64, __int64); // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // edx
  void *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // r12
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 *v27; // rbp
  void *v28; // rdi
  __int64 v29; // xmm0_8
  __int64 v30; // xmm1_8
  void *v31; // rdi
  int v32; // eax
  __int64 v33; // rax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // r15
  __int64 v40; // r12
  __m128i v41; // xmm0
  void *v42; // rdi
  __int64 v43; // r13
  unsigned __int64 v44; // xmm1_8
  __m128i v45; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+10h] [rbp-B8h]
  __int64 v47; // [rsp+18h] [rbp-B0h]
  __int64 v48; // [rsp+20h] [rbp-A8h]
  __int64 v49; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __m128i v51; // [rsp+38h] [rbp-90h]
  int v52; // [rsp+48h] [rbp-80h]
  __int64 v53; // [rsp+50h] [rbp-78h]
  __int128 v54; // [rsp+60h] [rbp-68h] BYREF
  __m128i v55; // [rsp+70h] [rbp-58h]
  unsigned __int64 v56; // [rsp+88h] [rbp-40h]

  v5 = (a3 - 1) / 2;
  v46 = a2;
  v48 = a3;
  v49 = a4;
  v56 = __readfsqword(0x28u);
  if ( a2 >= v5 )
  {
    v9 = v46;
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 80 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 40) < 0 )
      {
        --v9;
        v11 = a1 + 40 * v9;
      }
      v12 = *(_QWORD *)v11;
      v13 = _mm_loadu_si128((const __m128i *)(v11 + 8));
      v14 = a1 + 40 * i;
      *(_QWORD *)v11 = 0;
      *(_OWORD *)(v11 + 8) = 0;
      v15 = *(void **)v14;
      if ( *(_QWORD *)v14 )
      {
        *(_QWORD *)(v14 + 8) = 0;
        v47 = v12;
        v45 = v13;
        qfree(v15);
        v12 = v47;
        v13 = _mm_load_si128(&v45);
      }
      *(_QWORD *)v14 = v12;
      *(__m128i *)(v14 + 8) = v13;
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(v11 + 24);
      *(_QWORD *)(v14 + 32) = *(_QWORD *)(v11 + 32);
      if ( v9 >= v5 )
        break;
    }
  }
  if ( (v48 & 1) == 0 && (v48 - 2) / 2 == v9 )
  {
    v37 = 2 * (v9 + 1);
    v38 = a1 + 80 * (v9 + 1) - 40;
    v39 = a1 + 40 * v9;
    v40 = *(_QWORD *)v38;
    v41 = _mm_loadu_si128((const __m128i *)(v38 + 8));
    *(_QWORD *)v38 = 0;
    *(_OWORD *)(v38 + 8) = 0;
    v42 = *(void **)v39;
    if ( *(_QWORD *)v39 )
    {
      *(_QWORD *)(v39 + 8) = 0;
      v47 = v37;
      v45 = v41;
      qfree(v42);
      v37 = v47;
      v41 = _mm_load_si128(&v45);
    }
    *(_QWORD *)v39 = v40;
    v9 = v37 - 1;
    *(__m128i *)(v39 + 8) = v41;
    *(_DWORD *)(v39 + 24) = *(_DWORD *)(v38 + 24);
    *(_QWORD *)(v39 + 32) = *(_QWORD *)(v38 + 32);
  }
  v16 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a5 + 16);
  v55 = 0u;
  v54 = 0;
  if ( v16 )
  {
    v16(&v54, a5, 2);
    v55 = _mm_loadu_si128((const __m128i *)(a5 + 16));
  }
  v17 = v49;
  v18 = v46;
  v19 = *(_DWORD *)(v49 + 24);
  v20 = *(void **)v49;
  *(_QWORD *)v49 = 0;
  v21 = _mm_loadu_si128((const __m128i *)(v17 + 8));
  *(_OWORD *)(v17 + 8) = 0;
  v52 = v19;
  v22 = *(_QWORD *)(v17 + 32);
  ptr = v20;
  v53 = v22;
  v51 = v21;
  v23 = (v9 - 1) / 2;
  if ( v9 > v18 )
  {
    while ( 1 )
    {
      v27 = (__int64 *)(a1 + 40 * v23);
      if ( !v55.m128i_i64[0] )
        std::__throw_bad_function_call();
      v43 = a1 + 40 * v9;
      if ( ((int (__fastcall *)(__int128 *, __int64, void **))v55.m128i_i64[1])(&v54, a1 + 40 * v23, &ptr) >= 0 )
      {
        v20 = ptr;
        v44 = v51.m128i_u64[1];
        v21.m128i_i64[0] = v51.m128i_i64[0];
        goto LABEL_23;
      }
      v24 = *v27;
      v25 = _mm_loadu_si128((const __m128i *)(v27 + 1));
      *v27 = 0;
      *(_OWORD *)(v27 + 1) = 0;
      v26 = *(void **)v43;
      if ( *(_QWORD *)v43 )
      {
        *(_QWORD *)(v43 + 8) = 0;
        v45 = v25;
        qfree(v26);
        v25 = _mm_load_si128(&v45);
      }
      *(_QWORD *)v43 = v24;
      v9 = v23;
      *(__m128i *)(v43 + 8) = v25;
      *(_DWORD *)(v43 + 24) = *((_DWORD *)v27 + 6);
      *(_QWORD *)(v43 + 32) = v27[4];
      if ( v46 >= v23 )
        break;
      v23 = (v23 - 1) / 2;
    }
    v20 = ptr;
    v21.m128i_i64[0] = v51.m128i_i64[0];
    v43 = a1 + 40 * v23;
    v44 = v51.m128i_u64[1];
  }
  else
  {
    v43 = a1 + 40 * v9;
    v44 = _mm_srli_si128(v21, 8).m128i_u64[0];
  }
LABEL_23:
  v28 = *(void **)v43;
  ptr = nullptr;
  v51 = 0;
  if ( v28 )
  {
    *(_QWORD *)(v43 + 8) = 0;
    v46 = (__int64)v20;
    v47 = v44;
    v45.m128i_i64[0] = v21.m128i_i64[0];
    qfree(v28);
    v29 = v45.m128i_i64[0];
    v30 = v47;
    v31 = ptr;
    *(_QWORD *)v43 = v46;
    v32 = v52;
    *(_QWORD *)(v43 + 8) = v29;
    *(_DWORD *)(v43 + 24) = v32;
    v33 = v53;
    *(_QWORD *)(v43 + 16) = v30;
    *(_QWORD *)(v43 + 32) = v33;
    if ( v31 )
    {
      v51.m128i_i64[0] = 0;
      qfree(v31);
    }
  }
  else
  {
    *(_QWORD *)v43 = v20;
    v35 = v52;
    *(_QWORD *)(v43 + 8) = v21.m128i_i64[0];
    *(_DWORD *)(v43 + 24) = v35;
    v36 = v53;
    *(_QWORD *)(v43 + 16) = v44;
    *(_QWORD *)(v43 + 32) = v36;
  }
  if ( v55.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v55.m128i_i64[0])(&v54, &v54, 3);
  return v56 - __readfsqword(0x28u);
}

