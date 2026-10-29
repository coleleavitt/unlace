__int64 __fastcall sub_1EE50A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4, unsigned int *a5)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  char *v25; // rcx
  __m128i *v26; // rdx
  __m128i *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // r13
  const void *v30; // rbp
  __int64 v31; // r12
  void *v32; // rax
  void *v33; // rcx
  _DWORD *v34; // rdi
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // r10
  __int64 v40; // rax
  void *v41; // rcx
  void *v42; // r8
  size_t v43; // r10
  int v44; // eax
  _DWORD *v45; // rdi
  const void *v46; // r14
  void *v47; // rax
  void *v48; // rax
  int n; // [rsp+8h] [rbp-F0h]
  size_t na; // [rsp+8h] [rbp-F0h]
  size_t nc; // [rsp+8h] [rbp-F0h]
  void *nb; // [rsp+8h] [rbp-F0h]
  int v53; // [rsp+10h] [rbp-E8h]
  size_t v54; // [rsp+10h] [rbp-E8h]
  __int64 v55; // [rsp+18h] [rbp-E0h]
  _BYTE *v56; // [rsp+28h] [rbp-D0h]
  __m128i v57; // [rsp+30h] [rbp-C8h] BYREF
  int v58; // [rsp+40h] [rbp-B8h]
  void *src[2]; // [rsp+50h] [rbp-A8h] BYREF
  _DWORD v60[38]; // [rsp+60h] [rbp-98h] BYREF

  v8 = a1;
  v9 = *a5;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *a5 = v9 + 1;
  v10 = sub_1EE4770((__int64)a2, a3, *(_QWORD *)(*a4 + 8 * v9));
  v11 = *a5;
  v12 = *a4;
  *(_DWORD *)a1 = v10;
  v13 = *(_QWORD *)(v12 + 8 * v11);
  *a5 = v11 + 2;
  v14 = *(_QWORD *)(v12 + 8LL * (unsigned int)(v11 + 1));
  *(_WORD *)(a1 + 16) = v13;
  *(_WORD *)(a1 + 18) = v14;
  if ( sub_10CCDE0(v13) )
  {
    v15 = *a5;
    *a5 = v15 + 1;
    *(_DWORD *)(a1 + 4) = sub_1EE4770((__int64)a2, a3, *(_QWORD *)(*a4 + 8 * v15));
    v16 = 1LL << ((unsigned __int8)v13 + 86);
    if ( (v16 & 0x403C00001LL) == 0 )
    {
      v17 = (__int64 *)(a2[17] + 128LL);
      if ( (v16 & 4) != 0 )
      {
        v39 = sub_9C3B30(v17, 48, 4u);
        *(_QWORD *)(v39 + 8) = 0;
        *(_QWORD *)(v39 + 16) = 0;
        v40 = *a5;
        na = v39;
        *a5 = v40 + 1;
        *(_DWORD *)v39 = *(_QWORD *)(*a4 + 8 * v40);
        sub_1EAC540((__m128i **)src, a4, a5);
        v41 = src[1];
        v42 = nullptr;
        v43 = na;
        if ( src[1] )
        {
          v54 = na;
          v46 = src[0];
          nb = src[1];
          v47 = (void *)sub_9C3B30((__int64 *)(a2[17] + 128LL), (__int64)src[1], 0);
          v48 = memmove(v47, v46, (size_t)nb);
          v43 = v54;
          v41 = nb;
          v42 = v48;
        }
        *(_QWORD *)(v43 + 8) = v42;
        *(_QWORD *)(v43 + 16) = v41;
        nc = v43;
        sub_1EE50A0(&v57, a2, a3, a4, a5);
        v44 = v58;
        *(__m128i *)(nc + 24) = _mm_load_si128(&v57);
        *(_DWORD *)(nc + 40) = v44;
        v45 = src[0];
        *(_QWORD *)(v8 + 8) = nc;
        if ( v45 != v60 )
          operator delete(v45);
      }
      else
      {
        v18 = sub_9C3B30(v17, 64, 4u);
        *(_QWORD *)(v18 + 48) = 0;
        v19 = v18;
        *(_QWORD *)(v18 + 56) = 0;
        sub_1EE50A0(src, a2, a3, a4, a5);
        *(__m128i *)v19 = _mm_load_si128((const __m128i *)src);
        *(_DWORD *)(v19 + 16) = v60[0];
        sub_1EE50A0(src, a2, a3, a4, a5);
        *(__m128i *)(v19 + 24) = _mm_load_si128((const __m128i *)src);
        *(_DWORD *)(v19 + 40) = v60[0];
        v20 = *a5;
        *a5 = v20 + 1;
        v21 = *(_QWORD *)(*a4 + 8 * v20);
        src[0] = v60;
        src[1] = (void *)0x400000000LL;
        n = v21;
        if ( (unsigned int)v21 > 4uLL )
        {
          v53 = v21;
          sub_2237220(src, v60, (unsigned int)v21, 24);
          LODWORD(v21) = v53;
        }
        if ( (_DWORD)v21 )
        {
          v55 = v8;
          v22 = 0;
          do
          {
            sub_1EE50A0(&v57, a2, a3, a4, a5);
            v23 = LODWORD(src[1]);
            v24 = LODWORD(src[1]) + 1LL;
            if ( v24 > HIDWORD(src[1]) )
            {
              if ( src[0] > &v57 || &v57 >= (__m128i *)((char *)src[0] + 24 * LODWORD(src[1])) )
              {
                sub_2237220(src, v60, v24, 24);
                v25 = (char *)src[0];
                v23 = LODWORD(src[1]);
                v26 = &v57;
              }
              else
              {
                v56 = src[0];
                sub_2237220(src, v60, v24, 24);
                v23 = LODWORD(src[1]);
                v25 = (char *)src[0];
                v26 = (__m128i *)((char *)src[0] + (char *)&v57 - v56);
              }
            }
            else
            {
              v25 = (char *)src[0];
              v26 = &v57;
            }
            ++v22;
            v27 = (__m128i *)&v25[24 * v23];
            *v27 = _mm_loadu_si128(v26);
            v27[1].m128i_i64[0] = v26[1].m128i_i64[0];
            v28 = ++LODWORD(src[1]);
          }
          while ( n != v22 );
          v8 = v55;
        }
        else
        {
          v28 = (unsigned int)src[1];
        }
        v29 = v28;
        v30 = src[0];
        v31 = 24LL * v28;
        v32 = (void *)sub_1EC2080((__int64 *)(a2[17] + 128LL), v31, 3u);
        v33 = v32;
        if ( v31 )
          v33 = memmove(v32, v30, v31);
        *(_QWORD *)(v19 + 48) = v33;
        *(_QWORD *)(v19 + 56) = v29;
        v34 = src[0];
        *(_QWORD *)(v8 + 8) = v19;
        if ( v34 != v60 )
          free(v34);
      }
    }
  }
  else
  {
    v36 = *a4;
    v37 = *a5;
    *(_DWORD *)(a1 + 4) = *(_QWORD *)(*a4 + 8LL * *a5);
    *a5 = v37 + 2;
    v38 = sub_1EE2BD0(a2, a3, *(_QWORD *)(v36 + 8LL * (v37 + 1)));
    if ( v38 )
      *(_QWORD *)(a1 + 8) = v38;
  }
  return v8;
}
