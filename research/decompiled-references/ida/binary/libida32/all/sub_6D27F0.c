unsigned __int64 __fastcall sub_6D27F0(__int64 a1, __int32 a2, __int64 a3)
{
  int v3; // eax
  _QWORD *v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  __m128i v11; // xmm0
  void *v12; // r14
  __m128i v13; // xmm0
  size_t v14; // rbp
  void *v15; // rdi
  void *v16; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r12
  char *v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // rcx
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __int64 v28; // rcx
  void *v29; // rdi
  void *v30; // rdi
  void *v32; // r15
  void *v33; // rdi
  char *v34; // r13
  char *v35; // rdi
  size_t v36; // rax
  size_t v37; // r14
  void *v38; // rdi
  size_t v39; // r15
  __int64 v40; // rax
  __m128i v41; // [rsp+0h] [rbp-148h] BYREF
  __int64 v42; // [rsp+10h] [rbp-138h]
  __int64 v43; // [rsp+18h] [rbp-130h]
  void *v44; // [rsp+20h] [rbp-128h] BYREF
  __m128i v45; // [rsp+28h] [rbp-120h] BYREF
  char *s; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v47[24]; // [rsp+48h] [rbp-100h]
  __int64 v48; // [rsp+60h] [rbp-E8h]
  __int64 v49; // [rsp+68h] [rbp-E0h]
  void **p_ptr; // [rsp+70h] [rbp-D8h]
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+88h] [rbp-C0h]
  _BYTE v53[112]; // [rsp+98h] [rbp-B0h] BYREF
  unsigned __int64 v54; // [rsp+108h] [rbp-40h]

  v41.m128i_i32[0] = a2;
  v54 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a3 + 12);
  if ( v3 != 2994 && v3 != 5767 && ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 1LL) & 8) != 0 || v3 != 3189) )
  {
    sub_FA1F70(a1, v41.m128i_u32[0], a3);
    v6 = *(_QWORD **)(a1 + 16);
    v7 = v6[75];
    v8 = v6[76];
    if ( v8 < v7 + 1 )
    {
      v18 = qvector_reserve(v6 + 74, 0, v7 + 1, 64);
      v19 = v6[76];
      v6[76] = v8;
      v20 = v6[75];
      v42 = v18;
      v43 = v19;
      v21 = (char *)v6[74];
      v22 = v20 - 1;
      if ( v22 >= 0 )
      {
        v23 = v18;
        do
        {
          v24 = *(_QWORD *)v21;
          v25 = _mm_loadu_si128((const __m128i *)(v21 + 8));
          *(_QWORD *)v21 = 0;
          *(_OWORD *)(v21 + 8) = 0;
          *(_QWORD *)v23 = v24;
          *(__m128i *)(v23 + 8) = v25;
          v26 = *((_QWORD *)v21 + 3);
          v27 = _mm_loadu_si128((const __m128i *)v21 + 2);
          *((_QWORD *)v21 + 3) = 0;
          *(_QWORD *)(v23 + 24) = v26;
          *(__m128i *)(v23 + 32) = v27;
          v28 = *((_QWORD *)v21 + 6);
          *((_QWORD *)v21 + 5) = 0;
          *(_QWORD *)(v23 + 48) = v28;
          *(_QWORD *)(v23 + 56) = *((_QWORD *)v21 + 7);
          v29 = *((void **)v21 + 3);
          if ( v29 )
          {
            *((_QWORD *)v21 + 4) = 0;
            qfree(v29);
          }
          v30 = *(void **)v21;
          if ( *(_QWORD *)v21 )
          {
            *((_QWORD *)v21 + 1) = 0;
            qfree(v30);
          }
          v21 += 64;
          v23 += 64;
        }
        while ( v22-- != 0 );
        v21 = (char *)v6[74];
      }
      qfree(v21);
      v7 = v6[75];
      v6[74] = v42;
      v6[76] = v43;
    }
    else
    {
      v42 = v6[74];
    }
    v9 = (v7 << 6) + v42;
    *(_QWORD *)(v9 + 56) = 4;
    v10 = v9;
    *(_OWORD *)(v9 + 8) = 0;
    *(_OWORD *)(v9 + 32) = 0;
    v11 = _mm_cvtsi32_si128(v41.m128i_u32[0]);
    *(_QWORD *)v9 = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 48) = -1;
    ++v6[75];
    *(_QWORD *)(v9 + 56) = _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(*(_DWORD *)(a3 + 12))).m128i_u64[0];
    if ( *(_DWORD *)(a3 + 8) )
    {
      sub_FFEBC0(&s, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 2312LL), *(unsigned int *)(a3 + 8), 1);
      v34 = s;
      if ( s )
      {
        v35 = s;
        *(_QWORD *)(v10 + 48) = *(_QWORD *)&v47[4];
        v36 = strlen(v35);
        v37 = v36;
        if ( v36 )
        {
          v38 = *(void **)(v10 + 24);
          v39 = v36 + 1;
          if ( *(_QWORD *)(v10 + 40) < v36 + 1 )
          {
            v40 = qvector_reserve(v10 + 24, *(_QWORD *)(v10 + 24), v39, 1);
            *(_QWORD *)(v10 + 24) = v40;
            v38 = (void *)v40;
          }
          *(_QWORD *)(v10 + 32) = v39;
          memmove(v38, v34, v37);
          *(_BYTE *)(*(_QWORD *)(v10 + 24) + v37) = 0;
        }
        else
        {
          *(_QWORD *)(v10 + 32) = 0;
        }
      }
    }
    ptr = v53;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384060);
    sub_FA65E0(a3, &ptr);
    p_ptr = &ptr;
    v49 = 0x100000000LL;
    v12 = nullptr;
    *(_QWORD *)v47 = 2;
    *(_OWORD *)&v47[8] = 0;
    s = (char *)&off_2BC1F40;
    v48 = 0;
    sub_2257B70(&s, 0, 0, 0);
    v13 = 0;
    v14 = (size_t)p_ptr[1];
    if ( v14 )
    {
      v32 = *p_ptr;
      v33 = nullptr;
      v45 = 0;
      v44 = nullptr;
      if ( v14 != -1 )
      {
        v44 = (void *)qvector_reserve(&v44, 0, v14 + 1, 1);
        v33 = v44;
      }
      v45.m128i_i64[0] = v14 + 1;
      memmove(v33, v32, v14);
      *((_BYTE *)v44 + v14) = 0;
      v12 = v44;
      v13 = _mm_loadu_si128(&v45);
    }
    v44 = nullptr;
    v45 = 0;
    v15 = *(void **)v10;
    if ( *(_QWORD *)v10 )
    {
      *(_QWORD *)(v10 + 8) = 0;
      v41 = v13;
      qfree(v15);
      v13 = _mm_load_si128(&v41);
    }
    *(_QWORD *)v10 = v12;
    v16 = v44;
    *(__m128i *)(v10 + 8) = v13;
    if ( v16 )
    {
      v45.m128i_i64[0] = 0;
      qfree(v16);
    }
    s = (char *)&unk_2C4C288;
    sub_2257A60(&s);
    if ( ptr != v53 )
      free(ptr);
  }
  return v54 - __readfsqword(0x28u);
}

