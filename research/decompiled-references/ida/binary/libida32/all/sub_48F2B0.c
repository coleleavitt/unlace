unsigned __int64 __fastcall sub_48F2B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __m128i v3; // xmm0
  void *v4; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  void *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // r13
  __m128i v19; // xmm0
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // r13
  __m128i v23; // xmm0
  int v24; // eax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  int v27; // eax
  __m128i v28; // xmm0
  int v29; // eax
  int v30; // edx
  void *v31; // rdi
  void *v32; // rbp
  __m128i v33; // xmm0
  void *v34; // rdi
  void *v35; // rbp
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // rax
  __m128i v39; // xmm0
  __m128i v41; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v42; // [rsp+10h] [rbp-B8h] BYREF
  void *v43; // [rsp+20h] [rbp-A8h]
  __m128i v44; // [rsp+28h] [rbp-A0h] BYREF
  void *ptr; // [rsp+38h] [rbp-90h]
  __m128i v46; // [rsp+40h] [rbp-88h] BYREF
  __int64 v47; // [rsp+50h] [rbp-78h] BYREF
  __m128i v48; // [rsp+58h] [rbp-70h] BYREF
  __m128i v49; // [rsp+68h] [rbp-60h] BYREF
  __int64 v50; // [rsp+78h] [rbp-50h]
  __int64 v51; // [rsp+80h] [rbp-48h]
  char v52; // [rsp+88h] [rbp-40h]
  unsigned __int64 v53; // [rsp+98h] [rbp-30h]

  v2 = a1;
  v3 = _mm_loadu_si128((const __m128i *)a1);
  v4 = *(void **)(a1 + 16);
  v53 = __readfsqword(0x28u);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v42 = v3;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v43 = v4;
  v8 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v44 = v7;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  ptr = v8;
  v47 = 0;
  v46 = v6;
  copy_tinfo_t(&v47);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v10 = *(_QWORD *)(a1 + 112);
  v50 = *(_QWORD *)(a1 + 104);
  v11 = *(_BYTE *)(a1 + 120);
  v51 = v10;
  v12 = *a2;
  v48 = v9;
  v13 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v14 = *(_QWORD *)(a1 - 128);
  v52 = v11;
  v49 = v13;
  v15 = *(_DWORD *)(v12 + 4 * v42.m128i_i64[0]);
  if ( v15 == -1 )
  {
LABEL_15:
    if ( !under_debugger )
      interr(2166);
    BUG();
  }
  while ( 1 )
  {
    v30 = *(_DWORD *)(v12 + 4 * v14);
    if ( v30 == -1 )
      goto LABEL_15;
    if ( v30 <= v15 )
      break;
    v16 = *(_QWORD *)(v2 - 128);
    v17 = *(void **)(v2 + 16);
    v18 = *(_QWORD *)(v2 - 112);
    v19 = _mm_loadu_si128((const __m128i *)(v2 - 104));
    *(_OWORD *)(v2 - 104) = 0;
    *(_QWORD *)v2 = v16;
    v20 = *(_QWORD *)(v2 - 120);
    *(_QWORD *)(v2 - 112) = 0;
    *(_QWORD *)(v2 + 8) = v20;
    if ( v17 )
    {
      *(_QWORD *)(v2 + 24) = 0;
      v41 = v19;
      qfree(v17);
      v19 = _mm_load_si128(&v41);
    }
    v21 = *(void **)(v2 + 40);
    *(_QWORD *)(v2 + 16) = v18;
    *(__m128i *)(v2 + 24) = v19;
    v22 = *(_QWORD *)(v2 - 88);
    v23 = _mm_loadu_si128((const __m128i *)(v2 - 80));
    *(_QWORD *)(v2 - 88) = 0;
    *(_OWORD *)(v2 - 80) = 0;
    if ( v21 )
    {
      *(_QWORD *)(v2 + 48) = 0;
      v41 = v23;
      qfree(v21);
      v23 = _mm_load_si128(&v41);
    }
    *(_QWORD *)(v2 + 40) = v22;
    *(__m128i *)(v2 + 48) = v23;
    copy_tinfo_t(v2 + 64);
    v24 = *(_DWORD *)(v2 - 24);
    v25 = _mm_loadu_si128((const __m128i *)(v2 - 56));
    v2 -= 128;
    v26 = v42.m128i_i64[0];
    v14 = *(_QWORD *)(v2 - 128);
    *(_DWORD *)(v2 + 232) = v24;
    v27 = *(_DWORD *)(v2 + 112);
    *(__m128i *)(v2 + 200) = v25;
    v28 = _mm_loadu_si128((const __m128i *)(v2 + 88));
    *(_DWORD *)(v2 + 240) = v27;
    v29 = *(_DWORD *)(v2 + 116);
    *(__m128i *)(v2 + 216) = v28;
    *(_DWORD *)(v2 + 244) = v29;
    *(_BYTE *)(v2 + 248) = *(_BYTE *)(v2 + 120);
    v12 = *a2;
    v15 = *(_DWORD *)(*a2 + 4 * v26);
    if ( v15 == -1 )
      goto LABEL_15;
  }
  v31 = *(void **)(v2 + 16);
  v32 = v43;
  v43 = nullptr;
  *(__m128 *)v2 = _mm_loadh_ps((const double *)&v42.m128i_i64[1]);
  v33 = _mm_loadu_si128(&v44);
  v44 = 0;
  if ( v31 )
  {
    *(_QWORD *)(v2 + 24) = 0;
    v41 = v33;
    qfree(v31);
    v33 = _mm_load_si128(&v41);
  }
  v34 = *(void **)(v2 + 40);
  *(_QWORD *)(v2 + 16) = v32;
  *(__m128i *)(v2 + 24) = v33;
  v35 = ptr;
  v36 = _mm_load_si128(&v46);
  ptr = nullptr;
  v46 = 0;
  if ( v34 )
  {
    *(_QWORD *)(v2 + 48) = 0;
    v41 = v36;
    qfree(v34);
    v36 = _mm_load_si128(&v41);
  }
  *(_QWORD *)(v2 + 40) = v35;
  *(__m128i *)(v2 + 48) = v36;
  copy_tinfo_t(v2 + 64);
  v37 = _mm_loadu_si128(&v48);
  *(_DWORD *)(v2 + 104) = v50;
  v38 = v51;
  *(__m128i *)(v2 + 72) = v37;
  v39 = _mm_loadu_si128(&v49);
  *(_QWORD *)(v2 + 112) = v38;
  LOBYTE(v38) = v52;
  *(__m128i *)(v2 + 88) = v39;
  *(_BYTE *)(v2 + 120) = v38;
  sub_375BF0(&v42);
  return v53 - __readfsqword(0x28u);
}

