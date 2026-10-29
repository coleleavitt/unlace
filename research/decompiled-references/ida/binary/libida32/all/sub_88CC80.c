unsigned __int64 __fastcall sub_88CC80(__int64 a1, _QWORD *a2, int a3, int a4, __int64 a5)
{
  _QWORD *v5; // r15
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  void *v10; // r13
  __m128i v11; // xmm0
  void *v12; // rdi
  __int64 v13; // r13
  unsigned __int64 v14; // r11
  char *v15; // rcx
  __int64 v16; // rbp
  __int64 i; // r14
  char *v18; // rdx
  void *v19; // rdi
  __m128i v20; // xmm2
  unsigned __int64 v21; // r13
  char v22; // al
  bool v23; // zf
  __int64 *v25; // rbp
  __int64 v26; // r14
  _QWORD *v27; // rbx
  __int64 v28; // r12
  _QWORD *j; // r14
  void (*v30)(); // rax
  _QWORD *v31; // rbp
  void *v32; // rax
  size_t v33; // r8
  const void *v34; // r10
  void *v35; // rax
  const void *v36; // rbp
  __int64 v37; // rax
  const void *v38; // r11
  __int128 v39; // xmm0
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rsi
  size_t v43; // rbx
  __int64 v44; // rdi
  void *v45; // rax
  const void **v46; // rsi
  size_t v47; // rbp
  void *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rsi
  __m128i v52; // [rsp+0h] [rbp-A8h] BYREF
  int v53; // [rsp+14h] [rbp-94h]
  int v54; // [rsp+18h] [rbp-90h]
  char v55; // [rsp+1Fh] [rbp-89h]
  __int64 v56; // [rsp+20h] [rbp-88h]
  const void *v57; // [rsp+28h] [rbp-80h]
  const void **v58; // [rsp+30h] [rbp-78h]
  __int64 v59; // [rsp+38h] [rbp-70h]
  __int64 v60; // [rsp+48h] [rbp-60h] BYREF
  int v61; // [rsp+50h] [rbp-58h] BYREF
  __int16 v62; // [rsp+54h] [rbp-54h]
  __int64 v63; // [rsp+58h] [rbp-50h]
  int v64; // [rsp+60h] [rbp-48h]
  int v65; // [rsp+64h] [rbp-44h]
  unsigned __int64 v66; // [rsp+68h] [rbp-40h]

  v5 = a2;
  v53 = a3;
  v54 = a4;
  v59 = a5;
  v66 = __readfsqword(0x28u);
  v56 = a1 + 200;
  if ( *(_DWORD *)a2 == *(_DWORD *)(a1 + 200) && *((_WORD *)a2 + 2) == *(_WORD *)(v56 + 4) )
    v55 = *(_BYTE *)(a1 + 352) ^ v53;
  else
    v55 = 1;
  v7 = a1 + 232;
  *(_DWORD *)(a1 + 200) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 204) = *((_WORD *)a2 + 2);
  *(_DWORD *)(a1 + 208) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(a1 + 212) = *((_DWORD *)a2 + 3);
  *(_DWORD *)(a1 + 216) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(a1 + 220) = *((_DWORD *)a2 + 5);
  *(_QWORD *)(a1 + 224) = a2[3];
  if ( (_QWORD *)(a1 + 232) != a2 + 4 )
  {
    v8 = a2[5];
    if ( v8 > 1 )
    {
      v31 = (_QWORD *)a2[4];
      v32 = *(void **)(a1 + 232);
      if ( *(_QWORD *)(a1 + 248) < v8 )
      {
        v32 = (void *)qvector_reserve(v7, *(_QWORD *)(a1 + 232), a2[5], 1);
        *(_QWORD *)(a1 + 232) = v32;
      }
      *(_QWORD *)(a1 + 240) = v8;
      a2 = v31;
      memmove(v32, v31, v8 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 232) + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 240) = 0;
    }
  }
  v9 = v5[8];
  v10 = nullptr;
  v11 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( v9 )
  {
    v52 = v11;
    v47 = 40 * v9;
    v48 = (void *)qalloc_or_throw(40 * v9, (const char *)a2);
    a2 = (_QWORD *)v5[7];
    v10 = v48;
    memcpy(v48, a2, v47);
    v11 = _mm_load_si128(&v52);
  }
  v12 = *(void **)(a1 + 256);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    v52 = v11;
    qfree(v12);
    v11 = _mm_load_si128(&v52);
  }
  *(_QWORD *)(a1 + 256) = v10;
  v13 = 0;
  *(__m128i *)(a1 + 264) = v11;
  v14 = v5[11];
  v52 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
  if ( v14 )
  {
    v57 = (const void *)v14;
    v36 = nullptr;
    v37 = qalloc_or_throw(24 * v14, (const char *)a2);
    v38 = v57;
    v39 = 0;
    v13 = v37;
    v40 = v37;
    do
    {
      v41 = v5[10];
      *(_QWORD *)v40 = 0;
      *(_OWORD *)(v40 + 8) = v39;
      v42 = v41 + 24LL * (_QWORD)v36;
      v43 = *(_QWORD *)(v42 + 8);
      if ( v43 )
      {
        v44 = *(_QWORD *)(v42 + 8);
        v57 = v38;
        v58 = (const void **)(v41 + 24LL * (_QWORD)v36);
        v45 = (void *)qalloc_or_throw(v44, (const char *)v42);
        v46 = v58;
        *(_QWORD *)(v40 + 16) = v43;
        *(_QWORD *)v40 = v45;
        memcpy(v45, *v46, v43);
        *(_QWORD *)(v40 + 8) = v43;
        v38 = v57;
        v39 = 0;
      }
      v36 = (char *)v36 + 1;
      v40 += 24;
    }
    while ( v38 != v36 );
  }
  v15 = *(char **)(a1 + 280);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 288);
    if ( v16 )
    {
      for ( i = 0; i != v16; ++i )
      {
        v18 = &v15[24 * i];
        v19 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v19);
          v15 = *(char **)(a1 + 280);
        }
      }
    }
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v15);
  }
  v20 = _mm_load_si128(&v52);
  *(_QWORD *)(a1 + 280) = v13;
  *(__m128i *)(a1 + 288) = v20;
  *(_QWORD *)(a1 + 304) = v5[13];
  *(_QWORD *)(a1 + 312) = v5[14];
  *(_QWORD *)(a1 + 320) = v5[15];
  if ( (_QWORD *)(a1 + 328) != v5 + 16 )
  {
    v21 = v5[17];
    if ( !v21 || (v33 = v21 - 1, v21 == 1) )
    {
      *(_QWORD *)(a1 + 336) = 0;
    }
    else
    {
      v34 = (const void *)v5[16];
      v35 = *(void **)(a1 + 328);
      if ( *(_QWORD *)(a1 + 344) < v21 )
      {
        v50 = v5[17];
        v51 = *(_QWORD *)(a1 + 328);
        v57 = (const void *)v5[16];
        v52.m128i_i64[0] = v21 - 1;
        v35 = (void *)qvector_reserve(a1 + 328, v51, v50, 1);
        v34 = v57;
        v33 = v52.m128i_i64[0];
        *(_QWORD *)(a1 + 328) = v35;
      }
      *(_QWORD *)(a1 + 336) = v21;
      memmove(v35, v34, v33);
      *(_BYTE *)(*(_QWORD *)(a1 + 328) + v21 - 1) = 0;
    }
  }
  v22 = v53;
  v23 = v55 == 0;
  *(_BYTE *)(a1 + 504) = 0;
  *(_BYTE *)(a1 + 352) = v22;
  if ( (!v23 || (v54 & 2) != 0) && (v54 & 1) == 0 )
  {
    v60 = 0;
    v25 = nullptr;
    if ( (_BYTE)v53 )
    {
      v49 = *(_DWORD *)(a1 + 200);
      v25 = &v60;
      v65 = 0;
      v61 = v49;
      v62 = *(_WORD *)(a1 + 204);
      v63 = *(_QWORD *)(a1 + 212);
      v64 = *(_DWORD *)(a1 + 220);
      sub_88C280(a1, &v60, (__int64)&v61);
    }
    v26 = *(_QWORD *)(a1 + 392);
    v27 = *(_QWORD **)(a1 + 384);
    v28 = a1 + 40;
    for ( j = &v27[2 * v26]; j != v27; v27 += 2 )
    {
      v30 = *(void (**)())(*(_QWORD *)*v27 + 24LL);
      if ( v30 != nullsub_272 )
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *, __int64))v30)(*v27, v28, v56, v25, v59);
    }
  }
  return v66 - __readfsqword(0x28u);
}

