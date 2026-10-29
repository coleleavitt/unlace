unsigned __int64 __fastcall sub_51F050(_QWORD *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rcx
  const char *v7; // rsi
  __int64 v8; // rbx
  int v9; // eax
  size_t v10; // r12
  size_t v11; // r12
  __int64 v12; // r12
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  void *v17; // rcx
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __m128i v21; // xmm6
  __int64 v22; // rax
  __int64 v23; // rbx
  void *v24; // rbx
  __int64 v25; // rbx
  void *v26; // rax
  __m128i v27; // xmm0
  void *v28; // rax
  __int64 v29; // rax
  char *v30; // r14
  __int64 v31; // rbp
  __int64 v32; // rbp
  unsigned __int64 v33; // r13
  __int64 v34; // rcx
  __m128i v35; // xmm0
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rcx
  void *v39; // rdi
  void *v40; // rdi
  bool v41; // cf
  __int64 v42; // rax
  void *v43; // rax
  const void *v44; // rsi
  void *v45; // rax
  __int64 v46; // r13
  __int64 v47; // rax
  char *v48; // rbp
  __int64 v49; // r13
  unsigned __int64 v50; // r14
  __int64 v51; // rsi
  __m128i v52; // xmm0
  __int64 v53; // rsi
  __m128i v54; // xmm0
  __int64 v55; // rsi
  void *v56; // rdi
  void *v57; // rdi
  __int64 v58; // rax
  int v59; // [rsp+Ch] [rbp-10Ch]
  __m128i v60; // [rsp+10h] [rbp-108h] BYREF
  void **v61; // [rsp+20h] [rbp-F8h]
  __int64 v62; // [rsp+28h] [rbp-F0h]
  __m128i v63; // [rsp+30h] [rbp-E8h] BYREF
  void *v64; // [rsp+40h] [rbp-D8h]
  __int64 v65; // [rsp+48h] [rbp-D0h]
  void *v66; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v67; // [rsp+58h] [rbp-C0h] BYREF
  void *v68; // [rsp+68h] [rbp-B0h]
  __m128i v69; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+80h] [rbp-98h]
  int v71; // [rsp+88h] [rbp-90h]
  void *v72; // [rsp+90h] [rbp-88h]
  __m128i v73; // [rsp+98h] [rbp-80h]
  void *v74; // [rsp+A8h] [rbp-70h]
  __m128i v75; // [rsp+B0h] [rbp-68h]
  __int64 v76; // [rsp+C0h] [rbp-58h]
  int v77; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v78; // [rsp+D8h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  if ( a3 < a2[1] )
  {
    v4 = *a2;
    v7 = (const char *)a3;
    v8 = v4 + 56 * a3;
    v9 = sub_403BD0(a2, a3);
    v10 = *(_QWORD *)(v8 + 8);
    v66 = nullptr;
    v59 = v9;
    v67 = 0;
    if ( v10 )
    {
      v45 = (void *)qalloc_or_throw(v10, v7);
      v7 = *(const char **)v8;
      v67.m128i_i64[1] = v10;
      v66 = v45;
      memcpy(v45, v7, v10);
      v67.m128i_i64[0] = v10;
    }
    v11 = *(_QWORD *)(v8 + 32);
    v68 = nullptr;
    v69 = 0;
    if ( v11 )
    {
      v43 = (void *)qalloc_or_throw(v11, v7);
      v44 = *(const void **)(v8 + 24);
      v68 = v43;
      v69.m128i_i64[1] = v11;
      memcpy(v43, v44, v11);
      v69.m128i_i64[0] = v11;
    }
    v12 = *(_QWORD *)(v8 + 48);
    v13 = a1[15];
    v14 = a1[17];
    v61 = &v66;
    v71 = v59;
    v15 = a1[16];
    v70 = v12;
    v16 = v15 + 1;
    if ( (unsigned __int64)&v66 < v13 || (unsigned __int64)v61 >= v13 + (v14 << 6) )
    {
      if ( v14 < v16 )
      {
        v13 = qvector_reserve(a1 + 15, 0, v16, 64);
        v29 = a1[17];
        v30 = (char *)a1[15];
        a1[17] = v14;
        v31 = a1[16];
        v60.m128i_i64[0] = v29;
        v32 = v31 - 1;
        if ( v32 >= 0 )
        {
          v33 = v13;
          do
          {
            v34 = *(_QWORD *)v30;
            v35 = _mm_loadu_si128((const __m128i *)(v30 + 8));
            *(_QWORD *)v30 = 0;
            *(_OWORD *)(v30 + 8) = 0;
            *(_QWORD *)v33 = v34;
            *(__m128i *)(v33 + 8) = v35;
            v36 = *((_QWORD *)v30 + 3);
            v37 = _mm_loadu_si128((const __m128i *)v30 + 2);
            *((_QWORD *)v30 + 3) = 0;
            *(_QWORD *)(v33 + 24) = v36;
            *(__m128i *)(v33 + 32) = v37;
            v38 = *((_QWORD *)v30 + 6);
            *((_QWORD *)v30 + 5) = 0;
            *(_QWORD *)(v33 + 48) = v38;
            *(_DWORD *)(v33 + 56) = *((_DWORD *)v30 + 14);
            v39 = *((void **)v30 + 3);
            if ( v39 )
            {
              *((_QWORD *)v30 + 4) = 0;
              qfree(v39);
            }
            v40 = *(void **)v30;
            if ( *(_QWORD *)v30 )
            {
              *((_QWORD *)v30 + 1) = 0;
              qfree(v40);
            }
            v30 += 64;
            v33 += 64LL;
            v41 = v32-- == 0;
          }
          while ( !v41 );
          v30 = (char *)a1[15];
        }
        qfree(v30);
        v42 = v60.m128i_i64[0];
        a1[15] = v13;
        a1[17] = v42;
        v15 = a1[16];
      }
      v25 = (v15 << 6) + v13;
      v26 = v66;
      *(__m128i *)(v25 + 8) = _mm_loadu_si128(&v67);
      v27 = _mm_load_si128(&v69);
      *(_QWORD *)v25 = v26;
      v28 = v68;
      *(_QWORD *)(v25 + 48) = v12;
      *(_QWORD *)(v25 + 24) = v28;
      *(__m128i *)(v25 + 32) = v27;
      *(_DWORD *)(v25 + 56) = v59;
    }
    else
    {
      v17 = v66;
      v18 = _mm_loadu_si128(&v67);
      v66 = nullptr;
      v19 = _mm_load_si128(&v69);
      v67 = 0;
      v62 = (__int64)v17;
      v72 = v17;
      v76 = v12;
      v64 = v68;
      v74 = v68;
      v68 = nullptr;
      v77 = v59;
      v60 = v18;
      v73 = v18;
      v63 = v19;
      v75 = v19;
      v69 = 0;
      if ( v14 < v16 )
      {
        v13 = qvector_reserve(a1 + 15, 0, v16, 64);
        v46 = a1[16];
        v47 = a1[17];
        a1[17] = v14;
        v48 = (char *)a1[15];
        v65 = v47;
        v49 = v46 - 1;
        if ( v49 >= 0 )
        {
          v50 = v13;
          do
          {
            v51 = *(_QWORD *)v48;
            v52 = _mm_loadu_si128((const __m128i *)(v48 + 8));
            *(_QWORD *)v48 = 0;
            *(_OWORD *)(v48 + 8) = 0;
            *(_QWORD *)v50 = v51;
            *(__m128i *)(v50 + 8) = v52;
            v53 = *((_QWORD *)v48 + 3);
            v54 = _mm_loadu_si128((const __m128i *)v48 + 2);
            *((_QWORD *)v48 + 3) = 0;
            *(_QWORD *)(v50 + 24) = v53;
            *(__m128i *)(v50 + 32) = v54;
            v55 = *((_QWORD *)v48 + 6);
            *((_QWORD *)v48 + 5) = 0;
            *(_QWORD *)(v50 + 48) = v55;
            *(_DWORD *)(v50 + 56) = *((_DWORD *)v48 + 14);
            v56 = *((void **)v48 + 3);
            if ( v56 )
            {
              *((_QWORD *)v48 + 4) = 0;
              qfree(v56);
            }
            v57 = *(void **)v48;
            if ( *(_QWORD *)v48 )
            {
              *((_QWORD *)v48 + 1) = 0;
              qfree(v57);
            }
            v48 += 64;
            v50 += 64LL;
            v41 = v49-- == 0;
          }
          while ( !v41 );
          v48 = (char *)a1[15];
        }
        qfree(v48);
        v58 = v65;
        a1[15] = v13;
        a1[17] = v58;
        v15 = a1[16];
      }
      v20 = _mm_load_si128(&v60);
      v21 = _mm_load_si128(&v63);
      v22 = v13 + (v15 << 6);
      v23 = v62;
      *(_QWORD *)(v22 + 48) = v12;
      *(_QWORD *)v22 = v23;
      v24 = v64;
      *(__m128i *)(v22 + 8) = v20;
      *(_QWORD *)(v22 + 24) = v24;
      *(__m128i *)(v22 + 32) = v21;
      *(_DWORD *)(v22 + 56) = v59;
    }
    ++a1[16];
  }
  return v78 - __readfsqword(0x28u);
}

