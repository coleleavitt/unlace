unsigned __int64 __fastcall sub_487660(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // r15d
  __int64 v8; // r14
  __int64 func; // rax
  __int64 v10; // rdi
  void **p_src; // rsi
  __m128i si128; // xmm3
  __m128i v13; // xmm5
  __int64 v14; // r13
  __int64 v15; // rax
  __m128i v16; // xmm0
  size_t v17; // rbp
  void *v18; // rdi
  char *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rbp
  char *v22; // r12
  void *v23; // rdi
  void *v24; // rdi
  int v25; // edx
  void *v27; // rax
  void *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // r12
  size_t v32; // r15
  __m128i v33; // xmm0
  __int64 v34; // rdx
  char v35; // al
  __m128i v36; // xmm0
  __int64 v37; // rbp
  char *v38; // r14
  __m128i v39; // xmm0
  size_t v40; // r15
  void *v41; // rax
  void *v42; // rax
  __int64 v43; // [rsp+0h] [rbp-E8h]
  __m128 v45; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+20h] [rbp-C8h] BYREF
  int v47; // [rsp+28h] [rbp-C0h]
  unsigned int v48; // [rsp+2Ch] [rbp-BCh]
  __int64 v49; // [rsp+38h] [rbp-B0h] BYREF
  __int64 (__fastcall **v50)(); // [rsp+40h] [rbp-A8h]
  void *ptr; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v52; // [rsp+50h] [rbp-98h]
  __m128i v53; // [rsp+60h] [rbp-88h] BYREF
  __int64 v54; // [rsp+70h] [rbp-78h]
  __int64 v55; // [rsp+78h] [rbp-70h]
  unsigned int v56; // [rsp+80h] [rbp-68h]
  void *src; // [rsp+88h] [rbp-60h] BYREF
  size_t n[3]; // [rsp+90h] [rbp-58h]
  unsigned __int64 v59; // [rsp+A8h] [rbp-40h]

  v46 = a2;
  v48 = a3;
  v59 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = 0;
  if ( *(int *)(v3 + 28) > 0 )
  {
    v43 = 0;
    do
    {
      v47 = v43;
      v4 = operator new(0x98u);
      ptr = nullptr;
      v5 = v4;
      v6 = *(int *)(*(_QWORD *)(a1 + 8) + 4LL * (int)v43 + 16);
      v54 = 0;
      v50 = off_2B029F0;
      v55 = 1;
      v7 = v6;
      v56 = v48;
      src = nullptr;
      v52 = 0;
      v53 = 0;
      *(_OWORD *)n = 0;
      v8 = switch_dbctx(v6);
      v49 = 0;
      func = get_func(v56);
      if ( (unsigned __int8)get_func_frame(&v49, func) && !(unsigned __int8)get_tinfo_details(v49, 13, &ptr) )
        get_tinfo_details(v49, 141, &ptr);
      v10 = *(_QWORD *)(v8 + 1480);
      p_src = &src;
      v45 = _mm_loadh_ps((const double *)&v46);
      sub_5A1A70(v10, &src, v56);
      clear_tinfo_t(&v49);
      si128 = _mm_load_si128((const __m128i *)&v45);
      v13 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v14 = v52;
      *(_QWORD *)v5 = &off_2B02A28;
      *(_DWORD *)(v5 + 8) = v7;
      *(_DWORD *)(v5 + 12) = -1;
      *(_QWORD *)(v5 + 48) = &off_2BD0E90;
      *(_QWORD *)(v5 + 56) = 0;
      *(__m128i *)(v5 + 16) = v13;
      *(__m128i *)(v5 + 32) = si128;
      *(_OWORD *)(v5 + 64) = 0;
      if ( v14 )
      {
        v29 = qalloc_or_throw(v14 << 7, (const char *)&src);
        *(_QWORD *)(v5 + 56) = v29;
        v30 = v29;
        v31 = 0;
        *(_QWORD *)(v5 + 72) = v14;
        while ( 1 )
        {
          v37 = (v31 << 7) + v30;
          v38 = (char *)ptr + 128 * v31;
          v39 = _mm_loadu_si128((const __m128i *)v38);
          *(_QWORD *)(v37 + 16) = 0;
          *(_OWORD *)(v37 + 24) = 0;
          *(__m128i *)v37 = v39;
          v40 = *((_QWORD *)v38 + 3);
          if ( v40 )
          {
            v41 = (void *)qalloc_or_throw(*((_QWORD *)v38 + 3), (const char *)p_src);
            *(_QWORD *)(v37 + 16) = v41;
            *(_QWORD *)(v37 + 32) = v40;
            p_src = *((void ***)v38 + 2);
            memcpy(v41, p_src, v40);
            *(_QWORD *)(v37 + 24) = v40;
          }
          *(_QWORD *)(v37 + 40) = 0;
          *(_OWORD *)(v37 + 48) = 0;
          v32 = *((_QWORD *)v38 + 6);
          if ( v32 )
          {
            v42 = (void *)qalloc_or_throw(*((_QWORD *)v38 + 6), (const char *)p_src);
            *(_QWORD *)(v37 + 40) = v42;
            *(_QWORD *)(v37 + 56) = v32;
            memcpy(v42, *((const void **)v38 + 5), v32);
            *(_QWORD *)(v37 + 48) = v32;
          }
          *(_QWORD *)(v37 + 64) = 0;
          p_src = (void **)(v38 + 64);
          copy_tinfo_t(v37 + 64);
          v33 = _mm_loadu_si128((const __m128i *)(v38 + 72));
          ++v31;
          v34 = *((_QWORD *)v38 + 14);
          *(_QWORD *)(v37 + 104) = *((_QWORD *)v38 + 13);
          v35 = v38[120];
          *(__m128i *)(v37 + 72) = v33;
          v36 = _mm_loadu_si128((const __m128i *)(v38 + 88));
          *(_QWORD *)(v37 + 112) = v34;
          *(_BYTE *)(v37 + 120) = v35;
          *(__m128i *)(v37 + 88) = v36;
          if ( v14 == v31 )
            break;
          v30 = *(_QWORD *)(v5 + 56);
        }
        *(_QWORD *)(v5 + 64) = v14;
      }
      v15 = v54;
      v16 = _mm_load_si128(&v53);
      *(_QWORD *)(v5 + 120) = 0;
      v17 = n[0];
      *(_OWORD *)(v5 + 128) = 0;
      *(_QWORD *)(v5 + 96) = v15;
      LODWORD(v15) = v55;
      *(__m128i *)(v5 + 80) = v16;
      *(_DWORD *)(v5 + 104) = v15;
      *(_QWORD *)(v5 + 48) = off_2B029F0;
      *(_DWORD *)(v5 + 112) = v56;
      if ( v17 )
      {
        v27 = (void *)qalloc_or_throw(v17, (const char *)p_src);
        *(_QWORD *)(v5 + 120) = v27;
        v28 = src;
        *(_QWORD *)(v5 + 136) = v17;
        memcpy(v27, v28, v17);
        *(_QWORD *)(v5 + 128) = v17;
      }
      v18 = src;
      *(_BYTE *)(v5 + 144) = 0;
      v50 = off_2B029F0;
      if ( v18 )
      {
        n[0] = 0;
        qfree(v18);
      }
      v19 = (char *)ptr;
      v50 = (__int64 (__fastcall **)())&off_2BD0E90;
      if ( ptr )
      {
        v20 = v52;
        if ( (_QWORD)v52 )
        {
          v21 = 0;
          do
          {
            v22 = &v19[128 * v21];
            clear_tinfo_t(v22 + 64);
            v23 = *((void **)v22 + 5);
            if ( v23 )
            {
              *((_QWORD *)v22 + 6) = 0;
              qfree(v23);
            }
            v24 = *((void **)v22 + 2);
            if ( v24 )
            {
              *((_QWORD *)v22 + 3) = 0;
              qfree(v24);
            }
            ++v21;
            v19 = (char *)ptr;
          }
          while ( v20 != v21 );
        }
        *(_QWORD *)&v52 = 0;
        qfree(v19);
      }
      v25 = v47;
      *(_QWORD *)v5 = &off_2B02AE0;
      *(_DWORD *)(v5 + 12) = v25;
      *(_QWORD *)(a1 + 8 * v43++ + 56) = v5;
    }
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) > (int)v43 );
  }
  return v59 - __readfsqword(0x28u);
}

