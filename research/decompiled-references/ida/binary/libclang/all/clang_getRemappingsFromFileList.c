__int64 *__fastcall clang_getRemappingsFromFileList(const char **a1, __int64 a2)
{
  const char **v2; // r12
  char *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rsi
  char *v12; // r15
  const char **v13; // rbx
  const char *v14; // rdi
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _BYTE *v20; // rdx
  __int64 v21; // rdi
  char *v22; // r13
  char *v23; // rbx
  __int64 v24; // rax
  _BYTE *v25; // rax
  _QWORD *v26; // r13
  _QWORD *v27; // rbx
  _QWORD *v28; // rdi
  _QWORD *v29; // r13
  _QWORD *v30; // rbx
  _QWORD *v31; // rdi
  _QWORD *v32; // r13
  _QWORD *v33; // rbx
  _QWORD *v34; // rdi
  _QWORD *v35; // r13
  _QWORD *v36; // rbx
  _QWORD *v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rbx
  void *v42; // rdi
  __int64 *v43; // rdi
  _QWORD v44[2]; // [rsp+10h] [rbp-2D8h] BYREF
  void *v45[2]; // [rsp+20h] [rbp-2C8h]
  void *v46[2]; // [rsp+30h] [rbp-2B8h]
  __int128 v47; // [rsp+40h] [rbp-2A8h]
  void *v48[2]; // [rsp+50h] [rbp-298h]
  void *v49[2]; // [rsp+60h] [rbp-288h]
  __int128 v50; // [rsp+70h] [rbp-278h]
  void *v51[2]; // [rsp+80h] [rbp-268h]
  __int64 v52; // [rsp+90h] [rbp-258h]
  void *ptr; // [rsp+A0h] [rbp-248h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-240h]
  _BYTE v55[568]; // [rsp+B0h] [rbp-238h] BYREF

  v2 = a1;
  v3 = getenv("LIBCLANG_LOGGING");
  v4 = operator new(0x18u);
  *(_QWORD *)(v4 + 16) = 0;
  v7 = (__int64 *)v4;
  *(_OWORD *)v4 = 0;
  if ( (_DWORD)a2 )
  {
    if ( a1 )
    {
      v11 = (unsigned int)a2;
      *(_OWORD *)v45 = 0;
      v12 = v55;
      ptr = v55;
      v13 = &a1[v11];
      v44[0] = &off_4A33B80;
      v44[1] = 0;
      v54 = 0x2000000000LL;
      *(_OWORD *)v46 = 0;
      v52 = 0;
      v47 = 0;
      *(_OWORD *)v48 = 0;
      *(_OWORD *)v49 = 0;
      v50 = 0;
      *(_OWORD *)v51 = 0;
      if ( (unsigned __int64)v11 > 32 )
      {
        sub_25D6060(&ptr, v55, (v11 * 8) >> 3, 16);
        v12 = (char *)ptr + 16 * (unsigned int)v54;
      }
      do
      {
        while ( 1 )
        {
          v14 = *v2;
          *(_QWORD *)v12 = *v2;
          if ( !v14 )
            break;
          ++v2;
          v12 += 16;
          *((_QWORD *)v12 - 1) = strlen(v14);
          if ( v13 == v2 )
            goto LABEL_11;
        }
        ++v2;
        *((_QWORD *)v12 + 1) = 0;
        v12 += 16;
      }
      while ( v13 != v2 );
LABEL_11:
      LODWORD(v54) = ((v11 * 8) >> 3) + v54;
      v15 = (const char *)ptr;
      if ( (unsigned __int8)sub_1F63F00(v7, ptr, (unsigned int)v54, v44) && v3 )
      {
        v18 = sub_26260E0(v7, v15, v16, v17);
        v20 = *(_BYTE **)(v18 + 32);
        v21 = v18;
        if ( *(_QWORD *)(v18 + 24) - (_QWORD)v20 <= 0x28u )
        {
          v15 = "Error by clang_getRemappingsFromFileList\n";
          sub_26240F0(v18, "Error by clang_getRemappingsFromFileList\n", 41);
        }
        else
        {
          *(__m128i *)v20 = _mm_load_si128((const __m128i *)&xmmword_3C7E180);
          *((__m128i *)v20 + 1) = _mm_load_si128((const __m128i *)&xmmword_3C7E1F0);
          *(__m128i *)(v20 + 25) = _mm_load_si128((const __m128i *)&xmmword_3C7E200);
          *(_QWORD *)(v18 + 32) += 41LL;
        }
        v22 = (char *)v45[0];
        v23 = (char *)v45[1];
        while ( v23 != v22 )
        {
          while ( 1 )
          {
            v24 = sub_26260E0(v21, v15, v20, v19);
            v15 = *((const char **)v22 + 1);
            v21 = sub_26240F0(v24, v15, *((_QWORD *)v22 + 2));
            v25 = *(_BYTE **)(v21 + 32);
            if ( (unsigned __int64)v25 >= *(_QWORD *)(v21 + 24) )
              break;
            v20 = v25 + 1;
            v22 += 40;
            *(_QWORD *)(v21 + 32) = v25 + 1;
            *v25 = 10;
            if ( v23 == v22 )
              goto LABEL_20;
          }
          v15 = byte_9 + 1;
          v22 += 40;
          sub_26239D0(v21, 10);
        }
      }
LABEL_20:
      if ( ptr != v55 )
        free(ptr);
      v44[0] = &off_4A33B80;
      if ( v51[0] )
        operator delete(v51[0], v52 - (unsigned __int64)v51[0]);
      v26 = (_QWORD *)v50;
      v27 = v49[1];
      if ( (void *)v50 != v49[1] )
      {
        do
        {
          v28 = (_QWORD *)v27[1];
          if ( v28 != v27 + 3 )
            operator delete(v28, v27[3] + 1LL);
          v27 += 5;
        }
        while ( v26 != v27 );
        v27 = v49[1];
      }
      if ( v27 )
        operator delete(v27, *((_QWORD *)&v50 + 1) - (_QWORD)v27);
      v29 = v48[1];
      v30 = v48[0];
      if ( v48[1] != v48[0] )
      {
        do
        {
          v31 = (_QWORD *)v30[1];
          if ( v31 != v30 + 3 )
            operator delete(v31, v30[3] + 1LL);
          v30 += 5;
        }
        while ( v29 != v30 );
        v30 = v48[0];
      }
      if ( v30 )
        operator delete(v30, (char *)v49[0] - (char *)v30);
      v32 = (_QWORD *)v47;
      v33 = v46[1];
      if ( (void *)v47 != v46[1] )
      {
        do
        {
          v34 = (_QWORD *)v33[1];
          if ( v34 != v33 + 3 )
            operator delete(v34, v33[3] + 1LL);
          v33 += 5;
        }
        while ( v32 != v33 );
        v33 = v46[1];
      }
      if ( v33 )
        operator delete(v33, *((_QWORD *)&v47 + 1) - (_QWORD)v33);
      v35 = v45[1];
      v36 = v45[0];
      if ( v45[1] != v45[0] )
      {
        do
        {
          v37 = (_QWORD *)v36[1];
          if ( v37 != v36 + 3 )
            operator delete(v37, v36[3] + 1LL);
          v36 += 5;
        }
        while ( v35 != v36 );
        v36 = v45[0];
      }
      if ( v36 )
        operator delete(v36, (char *)v46[0] - (char *)v36);
      sub_C65020(v44);
    }
    else
    {
      if ( v3 )
      {
        v38 = sub_26260E0(24, a2, v5, v6);
        v39 = *(_QWORD *)(v38 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v38 + 24) - v39) <= 0x3E )
        {
          sub_26240F0(v38, "clang_getRemappingsFromFileList was called with NULL filePaths\n", 63);
        }
        else
        {
          *(__m128i *)v39 = _mm_load_si128((const __m128i *)&xmmword_3C7E150);
          *(__m128i *)(v39 + 16) = _mm_load_si128((const __m128i *)&xmmword_3C7E1B0);
          *(__m128i *)(v39 + 32) = _mm_load_si128((const __m128i *)&xmmword_3C7E1C0);
          *(__m128i *)(v39 + 47) = _mm_load_si128((const __m128i *)&xmmword_3C7E1E0);
          *(_QWORD *)(v38 + 32) += 63LL;
        }
        v40 = v7[1];
        v41 = *v7;
        if ( v40 != *v7 )
        {
          do
          {
            v42 = *(void **)(v41 + 32);
            if ( v42 != (void *)(v41 + 48) )
              operator delete(v42, *(_QWORD *)(v41 + 48) + 1LL);
            if ( *(_QWORD *)v41 != v41 + 16 )
              operator delete(*(void **)v41, *(_QWORD *)(v41 + 16) + 1LL);
            v41 += 64;
          }
          while ( v41 != v40 );
          v41 = *v7;
        }
        if ( v41 )
          operator delete((void *)v41, v7[2] - v41);
      }
      v43 = v7;
      v7 = nullptr;
      operator delete(v43, 0x18u);
    }
  }
  else if ( v3 )
  {
    v8 = sub_26260E0(24, a2, v5, v6);
    v9 = *(_QWORD *)(v8 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v8 + 24) - v9) <= 0x3A )
    {
      sub_26240F0(v8, "clang_getRemappingsFromFileList was called with numFiles=0\n", 59);
    }
    else
    {
      *(__m128i *)v9 = _mm_load_si128((const __m128i *)&xmmword_3C7E150);
      *(__m128i *)(v9 + 16) = _mm_load_si128((const __m128i *)&xmmword_3C7E1B0);
      *(__m128i *)(v9 + 32) = _mm_load_si128((const __m128i *)&xmmword_3C7E1C0);
      *(__m128i *)(v9 + 43) = _mm_load_si128((const __m128i *)&xmmword_3C7E1D0);
      *(_QWORD *)(v8 + 32) += 59LL;
    }
  }
  return v7;
}

