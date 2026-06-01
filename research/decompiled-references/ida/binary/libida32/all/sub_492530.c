unsigned __int64 __fastcall sub_492530(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __m128i v4; // xmm0
  void *v5; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  void *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rdx
  char v11; // al
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __m128i v16; // xmm0
  void *v17; // rdi
  __int64 v18; // r12
  __m128i v19; // xmm0
  void *v20; // rdi
  __m128i v21; // xmm0
  void *v22; // rdi
  void *v23; // rbp
  __m128i v24; // xmm0
  void *v25; // rdi
  void *v26; // rbp
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm0
  __m128i v32; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v33; // [rsp+10h] [rbp-B8h] BYREF
  void *v34; // [rsp+20h] [rbp-A8h]
  __m128i v35; // [rsp+28h] [rbp-A0h] BYREF
  void *ptr; // [rsp+38h] [rbp-90h]
  __m128i v37; // [rsp+40h] [rbp-88h] BYREF
  __int64 v38; // [rsp+50h] [rbp-78h] BYREF
  __m128i v39; // [rsp+58h] [rbp-70h] BYREF
  __m128i v40; // [rsp+68h] [rbp-60h] BYREF
  __int64 v41; // [rsp+78h] [rbp-50h]
  __int64 v42; // [rsp+80h] [rbp-48h]
  char v43; // [rsp+88h] [rbp-40h]
  unsigned __int64 v44; // [rsp+98h] [rbp-30h]

  v2 = a1 + 64;
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5 = *(void **)(a1 + 16);
  v44 = __readfsqword(0x28u);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v33 = v4;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v34 = v5;
  v8 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v35 = v7;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  ptr = v8;
  v38 = 0;
  v37 = v6;
  copy_tinfo_t(&v38);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v10 = *(_QWORD *)(a1 + 112);
  v41 = *(_QWORD *)(a1 + 104);
  v11 = *(_BYTE *)(a1 + 120);
  v39 = v9;
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v43 = v11;
  v13 = *a2;
  v40 = v12;
  *(_QWORD *)a1 = v13;
  v14 = a2[1];
  v42 = v10;
  *(_QWORD *)(a1 + 8) = v14;
  v15 = a2[2];
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  a2[2] = 0;
  *(_OWORD *)(a2 + 3) = 0;
  v17 = *(void **)(a1 + 16);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v32 = v16;
    qfree(v17);
    v16 = _mm_load_si128(&v32);
  }
  *(_QWORD *)(a1 + 16) = v15;
  *(__m128i *)(a1 + 24) = v16;
  v18 = a2[5];
  v19 = _mm_loadu_si128((const __m128i *)a2 + 3);
  a2[5] = 0;
  *((_OWORD *)a2 + 3) = 0;
  v20 = *(void **)(a1 + 40);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v32 = v19;
    qfree(v20);
    v19 = _mm_load_si128(&v32);
  }
  *(_QWORD *)(a1 + 40) = v18;
  *(__m128i *)(a1 + 48) = v19;
  copy_tinfo_t(v2);
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 9));
  *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 11));
  v21 = _mm_load_si128(&v33);
  *(_DWORD *)(a1 + 104) = *((_DWORD *)a2 + 26);
  *(_DWORD *)(a1 + 112) = *((_DWORD *)a2 + 28);
  *(_DWORD *)(a1 + 116) = *((_DWORD *)a2 + 29);
  *(_BYTE *)(a1 + 120) = *((_BYTE *)a2 + 120);
  v22 = (void *)a2[2];
  v23 = v34;
  *(__m128i *)a2 = v21;
  v24 = _mm_loadu_si128(&v35);
  v34 = nullptr;
  v35 = 0;
  if ( v22 )
  {
    a2[3] = 0;
    v32 = v24;
    qfree(v22);
    v24 = _mm_load_si128(&v32);
  }
  v25 = (void *)a2[5];
  a2[2] = (__int64)v23;
  *(__m128i *)(a2 + 3) = v24;
  v26 = ptr;
  v27 = _mm_load_si128(&v37);
  ptr = nullptr;
  v37 = 0;
  if ( v25 )
  {
    a2[6] = 0;
    v32 = v27;
    qfree(v25);
    v27 = _mm_load_si128(&v32);
  }
  a2[5] = (__int64)v26;
  *((__m128i *)a2 + 3) = v27;
  copy_tinfo_t(a2 + 8);
  v28 = _mm_loadu_si128(&v39);
  *((_DWORD *)a2 + 26) = v41;
  v29 = v42;
  *(__m128i *)(a2 + 9) = v28;
  v30 = _mm_loadu_si128(&v40);
  a2[14] = v29;
  LOBYTE(v29) = v43;
  *(__m128i *)(a2 + 11) = v30;
  *((_BYTE *)a2 + 120) = v29;
  sub_375BF0(&v33);
  return v44 - __readfsqword(0x28u);
}

