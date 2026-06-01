unsigned __int64 __fastcall sub_49C2C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // r15d
  __int64 v8; // r14
  __int64 func; // rax
  __int64 v10; // rdi
  __m128i si128; // xmm3
  __m128i v12; // xmm5
  __int64 v13; // r12
  __int64 v14; // rax
  __m128i v15; // xmm0
  size_t v16; // rbp
  void *v17; // rdi
  char *v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  char *v21; // rbp
  void *v22; // rdi
  void *v23; // rdi
  void *v25; // rax
  void *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r14
  size_t v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __int64 v35; // rbp
  char *v36; // r13
  __m128i v37; // xmm0
  size_t v38; // r15
  void *v39; // rax
  void *v40; // rax
  __int64 v41; // [rsp+8h] [rbp-F0h]
  __m128 v43; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B0h] BYREF
  __int64 (__fastcall **v47)(); // [rsp+50h] [rbp-A8h]
  void *ptr; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+60h] [rbp-98h]
  __m128i v50; // [rsp+70h] [rbp-88h] BYREF
  __int64 v51; // [rsp+80h] [rbp-78h]
  __int64 v52; // [rsp+88h] [rbp-70h]
  __int64 v53; // [rsp+90h] [rbp-68h]
  void *src; // [rsp+98h] [rbp-60h] BYREF
  size_t n[3]; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v56; // [rsp+B8h] [rbp-40h]

  v44 = a2;
  v45 = a3;
  v56 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = 0;
  if ( *(int *)(v3 + 28) > 0 )
  {
    v41 = 0;
    do
    {
      v4 = operator new(0x98u);
      ptr = nullptr;
      v5 = v4;
      v6 = *(int *)(*(_QWORD *)(a1 + 8) + 4LL * (int)v41 + 16);
      v51 = 0;
      v47 = off_2B2C9B0;
      v52 = 1;
      v7 = v6;
      v53 = v45;
      src = nullptr;
      v49 = 0;
      v50 = 0;
      *(_OWORD *)n = 0;
      v8 = switch_dbctx(v6);
      v46 = 0;
      func = get_func(v53);
      if ( (unsigned __int8)get_func_frame(&v46, func) && !(unsigned __int8)get_tinfo_details(v46, 13, &ptr) )
        get_tinfo_details(v46, 141, &ptr);
      v10 = *(_QWORD *)(v8 + 1672);
      v43 = _mm_loadh_ps((const double *)&v44);
      sub_5BC010(v10, &src, v53);
      clear_tinfo_t(&v46);
      si128 = _mm_load_si128((const __m128i *)&v43);
      v12 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v13 = v49;
      *(_QWORD *)v5 = &off_2B2C9E8;
      *(_DWORD *)(v5 + 8) = v7;
      *(_DWORD *)(v5 + 12) = -1;
      *(_QWORD *)(v5 + 48) = &off_2BFAE90;
      *(_QWORD *)(v5 + 56) = 0;
      *(__m128i *)(v5 + 16) = v12;
      *(__m128i *)(v5 + 32) = si128;
      *(_OWORD *)(v5 + 64) = 0;
      if ( v13 )
      {
        v27 = qalloc_or_throw(144 * v13);
        *(_QWORD *)(v5 + 56) = v27;
        v28 = v27;
        v29 = 0;
        *(_QWORD *)(v5 + 72) = v13;
        while ( 1 )
        {
          v35 = 144 * v29 + v28;
          v36 = (char *)ptr + 144 * v29;
          v37 = _mm_loadu_si128((const __m128i *)v36);
          *(_QWORD *)(v35 + 16) = 0;
          *(_OWORD *)(v35 + 24) = 0;
          *(__m128i *)v35 = v37;
          v38 = *((_QWORD *)v36 + 3);
          if ( v38 )
          {
            v39 = (void *)qalloc_or_throw(*((_QWORD *)v36 + 3));
            *(_QWORD *)(v35 + 16) = v39;
            *(_QWORD *)(v35 + 32) = v38;
            memcpy(v39, *((const void **)v36 + 2), v38);
            *(_QWORD *)(v35 + 24) = v38;
          }
          *(_QWORD *)(v35 + 40) = 0;
          *(_OWORD *)(v35 + 48) = 0;
          v30 = *((_QWORD *)v36 + 6);
          if ( v30 )
          {
            v40 = (void *)qalloc_or_throw(*((_QWORD *)v36 + 6));
            *(_QWORD *)(v35 + 40) = v40;
            *(_QWORD *)(v35 + 56) = v30;
            memcpy(v40, *((const void **)v36 + 5), v30);
            *(_QWORD *)(v35 + 48) = v30;
          }
          *(_QWORD *)(v35 + 64) = 0;
          copy_tinfo_t(v35 + 64);
          v31 = *((_QWORD *)v36 + 15);
          ++v29;
          v32 = *((_QWORD *)v36 + 16);
          *(__m128i *)(v35 + 72) = _mm_loadu_si128((const __m128i *)(v36 + 72));
          v33 = _mm_loadu_si128((const __m128i *)(v36 + 88));
          *(_QWORD *)(v35 + 120) = v31;
          LOBYTE(v31) = v36[136];
          *(__m128i *)(v35 + 88) = v33;
          v34 = _mm_loadu_si128((const __m128i *)(v36 + 104));
          *(_QWORD *)(v35 + 128) = v32;
          *(_BYTE *)(v35 + 136) = v31;
          *(__m128i *)(v35 + 104) = v34;
          if ( v13 == v29 )
            break;
          v28 = *(_QWORD *)(v5 + 56);
        }
        *(_QWORD *)(v5 + 64) = v13;
      }
      v14 = v51;
      v15 = _mm_load_si128(&v50);
      *(_QWORD *)(v5 + 120) = 0;
      v16 = n[0];
      *(_OWORD *)(v5 + 128) = 0;
      *(_QWORD *)(v5 + 96) = v14;
      LODWORD(v14) = v52;
      *(__m128i *)(v5 + 80) = v15;
      *(_DWORD *)(v5 + 104) = v14;
      *(_QWORD *)(v5 + 48) = off_2B2C9B0;
      *(_QWORD *)(v5 + 112) = v53;
      if ( v16 )
      {
        v25 = (void *)qalloc_or_throw(v16);
        *(_QWORD *)(v5 + 120) = v25;
        v26 = src;
        *(_QWORD *)(v5 + 136) = v16;
        memcpy(v25, v26, v16);
        *(_QWORD *)(v5 + 128) = v16;
      }
      v17 = src;
      *(_BYTE *)(v5 + 144) = 0;
      v47 = off_2B2C9B0;
      if ( v17 )
      {
        n[0] = 0;
        qfree(v17);
      }
      v18 = (char *)ptr;
      v47 = (__int64 (__fastcall **)())&off_2BFAE90;
      if ( ptr )
      {
        v19 = v49;
        if ( (_QWORD)v49 )
        {
          v20 = 0;
          do
          {
            v21 = &v18[144 * v20];
            clear_tinfo_t(v21 + 64);
            v22 = *((void **)v21 + 5);
            if ( v22 )
            {
              *((_QWORD *)v21 + 6) = 0;
              qfree(v22);
            }
            v23 = *((void **)v21 + 2);
            if ( v23 )
            {
              *((_QWORD *)v21 + 3) = 0;
              qfree(v23);
            }
            ++v20;
            v18 = (char *)ptr;
          }
          while ( v19 != v20 );
        }
        *(_QWORD *)&v49 = 0;
        qfree(v18);
      }
      *(_QWORD *)v5 = &off_2B2CAA0;
      *(_DWORD *)(v5 + 12) = v41;
      *(_QWORD *)(a1 + 8 * v41++ + 56) = v5;
    }
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) > (int)v41 );
  }
  return v56 - __readfsqword(0x28u);
}
