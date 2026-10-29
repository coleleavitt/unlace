unsigned __int64 __fastcall sub_4A4070(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __m128i v3; // xmm0
  void *v4; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rsi
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rax
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
  __m128i v30; // xmm0
  __int64 v31; // rdx
  void *v32; // rdi
  void *v33; // rbp
  __m128i v34; // xmm0
  void *v35; // rdi
  void *v36; // rbp
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rax
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __m128i v43; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v44; // [rsp+10h] [rbp-C8h] BYREF
  void *v45; // [rsp+20h] [rbp-B8h]
  __m128i v46; // [rsp+28h] [rbp-B0h] BYREF
  void *ptr; // [rsp+38h] [rbp-A0h]
  __m128i v48; // [rsp+40h] [rbp-98h] BYREF
  __int64 v49; // [rsp+50h] [rbp-88h] BYREF
  __m128i v50; // [rsp+58h] [rbp-80h] BYREF
  __m128i v51; // [rsp+68h] [rbp-70h] BYREF
  __m128i v52; // [rsp+78h] [rbp-60h] BYREF
  __int64 v53; // [rsp+88h] [rbp-50h]
  __int64 v54; // [rsp+90h] [rbp-48h]
  char v55; // [rsp+98h] [rbp-40h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-30h]

  v2 = a1;
  v3 = _mm_loadu_si128((const __m128i *)a1);
  v4 = *(void **)(a1 + 16);
  v56 = __readfsqword(0x28u);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v44 = v3;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v45 = v4;
  v8 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v46 = v7;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  ptr = v8;
  v49 = 0;
  v48 = v6;
  copy_tinfo_t(&v49);
  v9 = *(_QWORD *)(a1 + 120);
  v10 = *(_QWORD *)(a1 + 128);
  v50 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v12 = *(_QWORD *)(a1 - 144);
  v53 = v9;
  LOBYTE(v9) = *(_BYTE *)(a1 + 136);
  v54 = v10;
  v13 = *a2;
  v51 = v11;
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 104));
  v55 = v9;
  v52 = v14;
  v15 = *(_QWORD *)(v13 + 8 * v44.m128i_i64[0]);
  if ( v15 == -1 )
  {
LABEL_15:
    if ( !under_debugger )
      interr(2166);
    BUG();
  }
  while ( 1 )
  {
    v31 = *(_QWORD *)(v13 + 8 * v12);
    if ( v31 == -1 )
      goto LABEL_15;
    if ( v31 <= v15 )
      break;
    v16 = *(_QWORD *)(v2 - 144);
    v17 = *(void **)(v2 + 16);
    v18 = *(_QWORD *)(v2 - 128);
    v19 = _mm_loadu_si128((const __m128i *)(v2 - 120));
    *(_OWORD *)(v2 - 120) = 0;
    *(_QWORD *)v2 = v16;
    v20 = *(_QWORD *)(v2 - 136);
    *(_QWORD *)(v2 - 128) = 0;
    *(_QWORD *)(v2 + 8) = v20;
    if ( v17 )
    {
      *(_QWORD *)(v2 + 24) = 0;
      v43 = v19;
      qfree(v17);
      v19 = _mm_load_si128(&v43);
    }
    v21 = *(void **)(v2 + 40);
    *(_QWORD *)(v2 + 16) = v18;
    *(__m128i *)(v2 + 24) = v19;
    v22 = *(_QWORD *)(v2 - 104);
    v23 = _mm_loadu_si128((const __m128i *)(v2 - 96));
    *(_QWORD *)(v2 - 104) = 0;
    *(_OWORD *)(v2 - 96) = 0;
    if ( v21 )
    {
      *(_QWORD *)(v2 + 48) = 0;
      v43 = v23;
      qfree(v21);
      v23 = _mm_load_si128(&v43);
    }
    *(_QWORD *)(v2 + 40) = v22;
    *(__m128i *)(v2 + 48) = v23;
    copy_tinfo_t(v2 + 64);
    v24 = *(_DWORD *)(v2 - 24);
    v25 = _mm_loadu_si128((const __m128i *)(v2 - 72));
    v2 -= 144;
    v26 = v44.m128i_i64[0];
    v12 = *(_QWORD *)(v2 - 144);
    *(_DWORD *)(v2 + 264) = v24;
    v27 = *(_DWORD *)(v2 + 128);
    *(__m128i *)(v2 + 216) = v25;
    v28 = _mm_loadu_si128((const __m128i *)(v2 + 88));
    *(_DWORD *)(v2 + 272) = v27;
    v29 = *(_DWORD *)(v2 + 132);
    *(__m128i *)(v2 + 232) = v28;
    v30 = _mm_loadu_si128((const __m128i *)(v2 + 104));
    *(_DWORD *)(v2 + 276) = v29;
    LOBYTE(v29) = *(_BYTE *)(v2 + 136);
    *(__m128i *)(v2 + 248) = v30;
    *(_BYTE *)(v2 + 280) = v29;
    v13 = *a2;
    v15 = *(_QWORD *)(*a2 + 8 * v26);
    if ( v15 == -1 )
      goto LABEL_15;
  }
  v32 = *(void **)(v2 + 16);
  v33 = v45;
  v45 = nullptr;
  *(__m128 *)v2 = _mm_loadh_ps((const double *)&v44.m128i_i64[1]);
  v34 = _mm_loadu_si128(&v46);
  v46 = 0;
  if ( v32 )
  {
    *(_QWORD *)(v2 + 24) = 0;
    v43 = v34;
    qfree(v32);
    v34 = _mm_load_si128(&v43);
  }
  v35 = *(void **)(v2 + 40);
  *(_QWORD *)(v2 + 16) = v33;
  *(__m128i *)(v2 + 24) = v34;
  v36 = ptr;
  v37 = _mm_load_si128(&v48);
  ptr = nullptr;
  v48 = 0;
  if ( v35 )
  {
    *(_QWORD *)(v2 + 48) = 0;
    v43 = v37;
    qfree(v35);
    v37 = _mm_load_si128(&v43);
  }
  *(_QWORD *)(v2 + 40) = v36;
  *(__m128i *)(v2 + 48) = v37;
  copy_tinfo_t(v2 + 64);
  v38 = _mm_loadu_si128(&v50);
  *(_DWORD *)(v2 + 120) = v53;
  v39 = v54;
  *(__m128i *)(v2 + 72) = v38;
  v40 = _mm_loadu_si128(&v51);
  *(_QWORD *)(v2 + 128) = v39;
  LOBYTE(v39) = v55;
  *(__m128i *)(v2 + 88) = v40;
  v41 = _mm_loadu_si128(&v52);
  *(_BYTE *)(v2 + 136) = v39;
  *(__m128i *)(v2 + 104) = v41;
  sub_379560(&v44);
  return v56 - __readfsqword(0x28u);
}
