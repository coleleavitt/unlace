__int64 __fastcall sub_786170(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  void *v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rbx
  __int64 v8; // rdx
  void *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rdx
  void *v15; // rax
  void *v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // rax
  void *v19; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm0
  void *ptr; // [rsp+8h] [rbp-1A0h]
  void *ptra; // [rsp+8h] [rbp-1A0h]
  __int64 v25; // [rsp+10h] [rbp-198h]
  __int64 v26; // [rsp+20h] [rbp-188h]
  __int64 v27; // [rsp+28h] [rbp-180h]
  char v28; // [rsp+36h] [rbp-172h]
  char v29; // [rsp+37h] [rbp-171h]
  __int64 v30; // [rsp+38h] [rbp-170h]
  unsigned int v31; // [rsp+54h] [rbp-154h]
  const char *v32; // [rsp+58h] [rbp-150h] BYREF
  void *v33; // [rsp+60h] [rbp-148h]
  __m128i v34; // [rsp+68h] [rbp-140h] BYREF
  void *v35; // [rsp+80h] [rbp-128h] BYREF
  __int128 v36; // [rsp+88h] [rbp-120h]
  __int64 v37; // [rsp+98h] [rbp-110h]
  __int64 v38; // [rsp+A0h] [rbp-108h]
  __int128 v39; // [rsp+A8h] [rbp-100h]
  __m128i v40; // [rsp+C0h] [rbp-E8h] BYREF
  __m128i v41; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v42; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v43; // [rsp+F0h] [rbp-B8h] BYREF
  __m128i v44; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v45; // [rsp+110h] [rbp-98h] BYREF
  __m128i v46; // [rsp+120h] [rbp-88h] BYREF
  __m128i v47; // [rsp+130h] [rbp-78h] BYREF
  __m128i v48; // [rsp+140h] [rbp-68h] BYREF
  __m128i v49; // [rsp+150h] [rbp-58h] BYREF
  __m128i v50; // [rsp+160h] [rbp-48h] BYREF
  __m128i v51; // [rsp+170h] [rbp-38h] BYREF
  __int64 v52; // [rsp+180h] [rbp-28h]
  unsigned __int64 v53; // [rsp+188h] [rbp-20h]

  v53 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 560);
  v36 = 0;
  v35 = nullptr;
  v37 = 0;
  v38 = 0;
  v25 = v2;
  v39 = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 552);
    v40 = _mm_loadu_si128((const __m128i *)(a1 + 360));
    v52 = v3;
    v41 = _mm_loadu_si128((const __m128i *)(a1 + 376));
    v42 = _mm_loadu_si128((const __m128i *)(a1 + 392));
    v43 = _mm_loadu_si128((const __m128i *)(a1 + 408));
    v44 = _mm_loadu_si128((const __m128i *)(a1 + 424));
    v45 = _mm_loadu_si128((const __m128i *)(a1 + 440));
    v46 = _mm_loadu_si128((const __m128i *)(a1 + 456));
    v47 = _mm_loadu_si128((const __m128i *)(a1 + 472));
    v48 = _mm_loadu_si128((const __m128i *)(a1 + 488));
    v49 = _mm_loadu_si128((const __m128i *)(a1 + 504));
    v50 = _mm_loadu_si128((const __m128i *)(a1 + 520));
    v51 = _mm_loadu_si128((const __m128i *)(a1 + 536));
  }
  v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 560) = &v35;
  v5 = *(void **)(a1 + 56);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  *(_QWORD *)(a1 + 56) = 0;
  v26 = v4;
  v7 = *(_QWORD *)(a1 + 224);
  v33 = v5;
  v8 = *(_QWORD *)(a1 + 272);
  v27 = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 144);
  *(_QWORD *)(a1 + 216) = sub_77ED40;
  v28 = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 84);
  *(_QWORD *)(a1 + 224) = &v32;
  v29 = v7;
  v32 = &byte_22CD811;
  v9 = *(void **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 84) = 1;
  *(_BYTE *)(a1 + 568) = 0;
  ptr = v9;
  v10 = *(_QWORD *)(a1 + 280);
  v34 = v6;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  v30 = v8;
  v31 = _setjmp((struct __jmp_buf_tag *)(a1 + 360));
  if ( v31 )
    set_qerrno(v31, a2);
  else
    sub_786060(a1, a2, 1u, v11, v12, v13);
  if ( !v31 && ((_WORD)v37 != 1 || *(_BYTE *)(a1 + 568)) )
    v31 = set_qerrno(47, a2);
  *(_BYTE *)(a1 + 84) = v29;
  v14 = *(void **)(a1 + 264);
  *(_BYTE *)(a1 + 144) = v28;
  *(_QWORD *)(a1 + 216) = v26;
  *(_QWORD *)(a1 + 224) = v27;
  v15 = ptr;
  ptra = v14;
  *(_QWORD *)(a1 + 264) = v15;
  *(_QWORD *)(a1 + 272) = v30;
  *(_QWORD *)(a1 + 280) = v10;
  while ( *(_QWORD *)(a1 + 64) )
    sub_77EF90(a1);
  v16 = *(void **)(a1 + 56);
  v17 = _mm_loadu_si128(&v34);
  v34.m128i_i64[0] = 0;
  v18 = *(_QWORD *)(a1 + 72);
  v19 = v33;
  v33 = v16;
  *(_QWORD *)(a1 + 56) = v19;
  v34.m128i_i64[1] = v18;
  *(__m128i *)(a1 + 64) = v17;
  if ( v25 )
  {
    v20 = v52;
    *(__m128i *)(a1 + 360) = _mm_load_si128(&v40);
    v21 = _mm_load_si128(&v41);
    *(_QWORD *)(a1 + 552) = v20;
    *(__m128i *)(a1 + 376) = v21;
    *(__m128i *)(a1 + 392) = _mm_load_si128(&v42);
    *(__m128i *)(a1 + 408) = _mm_load_si128(&v43);
    *(__m128i *)(a1 + 424) = _mm_load_si128(&v44);
    *(__m128i *)(a1 + 440) = _mm_load_si128(&v45);
    *(__m128i *)(a1 + 456) = _mm_load_si128(&v46);
    *(__m128i *)(a1 + 472) = _mm_load_si128(&v47);
    *(__m128i *)(a1 + 488) = _mm_load_si128(&v48);
    *(__m128i *)(a1 + 504) = _mm_load_si128(&v49);
    *(__m128i *)(a1 + 520) = _mm_load_si128(&v50);
    *(__m128i *)(a1 + 536) = _mm_load_si128(&v51);
  }
  *(_QWORD *)(a1 + 560) = v25;
  if ( ptra )
    qfree(ptra);
  if ( v16 )
    qfree(v16);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  return v31;
}

