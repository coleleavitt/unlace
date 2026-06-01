unsigned __int64 __fastcall sub_3E4380(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r13
  const char *v7; // r14
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  char *v12; // rax
  const char *v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  const char *v17; // rax
  __m128i v18; // xmm0
  _QWORD *v19; // rax
  unsigned int v20; // edx
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // r15
  const char *v24; // r8
  _QWORD *v25; // rax
  const char *v26; // r8
  unsigned __int64 v27; // rcx
  char *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rsi
  size_t v33; // r15
  __m128i v34; // xmm2
  __int64 v35; // rdx
  void *v36; // r12
  __int64 v37; // r13
  __int64 j; // rbp
  __int64 v39; // rax
  __int64 v40; // rdi
  __m128i v41; // xmm6
  char *v42; // rdx
  size_t v43; // rbp
  __int64 v44; // rbx
  char *v45; // rax
  __int64 v46; // rdi
  void *v48; // rax
  void *v49; // rsi
  struct _Unwind_Exception *v50; // rbp
  __m128i v51; // xmm0
  bool v52; // zf
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 i; // r15
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 *v58; // r13
  __int64 v59; // rdi
  __int64 v60; // rdi
  __m128i v61; // [rsp+0h] [rbp-88h] BYREF
  const char *v62; // [rsp+18h] [rbp-70h]
  __int64 v63; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v66; // [rsp+48h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_4E7588;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a2 == 1 )
  {
    v5 = 25;
    v6 = 24;
    v7 = "Stock comments: function";
  }
  else
  {
    if ( a2 != 2 )
    {
      v8 = a1 + 8;
      v5 = 22;
      v6 = 21;
      v7 = "Stock comments: block";
      goto LABEL_5;
    }
    v5 = 31;
    v6 = 30;
    v7 = "Stock comments: local variable";
  }
  v8 = a1 + 8;
LABEL_5:
  v61.m128i_i64[0] = v5;
  v9 = (_QWORD *)qvector_reserve(v8, 0, v5, 1);
  v10 = v61.m128i_i64[0];
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (unsigned __int64)(v9 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 16) = v10;
  *v9 = *(_QWORD *)v7;
  *(_QWORD *)((char *)v9 + v6 - 8) = *(_QWORD *)&v7[v6 - 8];
  v12 = (char *)v9 - v11;
  LODWORD(v10) = v6 + (_DWORD)v12;
  v13 = (const char *)(v7 - v12);
  v14 = 0;
  v15 = v10 & 0xFFFFFFF8;
  do
  {
    v16 = v14;
    v14 += 8;
    *(_QWORD *)(v11 + v16) = *(_QWORD *)&v13[v16];
  }
  while ( v14 < v15 );
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) = 0;
  v17 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v17 = *(const char **)(a1 + 8);
  *(_QWORD *)(a1 + 72) = v17;
  *(_OWORD *)(a1 + 48) = -1;
  v18 = _mm_loadl_epi64((const __m128i *)&off_4E9918);
  *(_QWORD *)(a1 + 32) = &unk_4EBE48;
  v19 = (_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 44) = (a3 + 3840) | 2;
  *(_DWORD *)(a1 + 40) = -16777212;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_DWORD *)(a1 + 104) = -1;
  *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v18, (__m128i)(unsigned __int64)&off_4E98E8);
  do
  {
    *v19 = 0;
    v19 += 3;
    *((_OWORD *)v19 - 1) = 0;
  }
  while ( v19 != (_QWORD *)(a1 + 208) );
  *(_DWORD *)(a1 + 208) = 0;
  v20 = *(_DWORD *)(a1 + 44);
  if ( ((v20 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 43) != 0xFF )
    {
      if ( !under_debugger )
      {
        v50 = (struct _Unwind_Exception *)interr();
        if ( src )
        {
          n[0] = 0;
          qfree((__int64)src);
        }
        v51 = _mm_loadl_epi64((const __m128i *)off_4E9908);
        *(_QWORD *)a1 = &unk_4ECA40;
        *(_QWORD *)(a1 + 32) = &unk_4ECA78;
        v52 = *(_QWORD *)(a1 + 248) == 0;
        *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v51, (__m128i)(unsigned __int64)&off_4ECB50);
        *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                                   _mm_loadl_epi64((const __m128i *)&off_4E9910),
                                   (__m128i)(unsigned __int64)&off_4ECB80);
        if ( !v52 )
        {
          v53 = *(_QWORD *)(a1 + 256);
          v54 = *(_QWORD *)(a1 + 248);
          for ( i = 0; v53 != i; ++i )
          {
            v56 = v54 + 32 * i;
            v57 = *(_QWORD *)(v56 + 8);
            if ( v57 )
            {
              *(_QWORD *)(v56 + 16) = 0;
              qfree(v57);
              v54 = *(_QWORD *)(a1 + 248);
            }
          }
          *(_QWORD *)(a1 + 256) = 0;
          qfree(v54);
        }
        *(_QWORD *)(a1 + 32) = &unk_4EBE48;
        v58 = (__int64 *)(a1 + 184);
        while ( 1 )
        {
          v59 = *v58;
          if ( *v58 )
          {
            v58[1] = 0;
            qfree(v59);
          }
          v58 -= 3;
          if ( (__int64 *)(a1 + 88) == v58 )
          {
            v60 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = &off_4E7588;
            if ( v60 )
            {
              *(_QWORD *)(a1 + 16) = 0;
              qfree(v60);
            }
            _Unwind_Resume(v50);
          }
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 43) = ((v20 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 44) = v20 & 0xFE07FFFF;
  }
  v21 = _mm_loadl_epi64((const __m128i *)off_4E98F8);
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)a1 = off_4E9770;
  *(_QWORD *)(a1 + 32) = off_4E97D0;
  *(_OWORD *)(a1 + 256) = 0;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v21, (__m128i)(unsigned __int64)&off_4E98A8);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4E9900),
                             (__m128i)(unsigned __int64)&off_4E98D8);
  if ( a2 == 1 )
  {
    *(_OWORD *)n = 0;
    v22 = 31;
    v23 = 30;
    v24 = "$ msre stock comments function";
    src = nullptr;
  }
  else
  {
    *(_OWORD *)n = 0;
    if ( a2 == 2 )
    {
      v22 = 27;
      v23 = 26;
      v24 = "$ msre stock comments lvar";
    }
    else
    {
      v22 = 28;
      v23 = 27;
      v24 = "$ msre stock comments block";
    }
    src = nullptr;
  }
  v61.m128i_i64[0] = v22;
  v62 = v24;
  v25 = (_QWORD *)qvector_reserve((__int64)&src, 0, v22, 1);
  v26 = v62;
  src = v25;
  v27 = (unsigned __int64)(v25 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  n[0] = v61.m128i_i64[0];
  *v25 = *(_QWORD *)v62;
  *(_QWORD *)((char *)v25 + v23 - 8) = *(_QWORD *)&v26[v23 - 8];
  v28 = (char *)v25 - v27;
  LODWORD(v29) = 0;
  v30 = v26 - v28;
  v31 = (v23 + (_DWORD)v28) & 0xFFFFFFF8;
  do
  {
    v32 = (unsigned int)v29;
    v29 = (unsigned int)(v29 + 8);
    *(_QWORD *)(v27 + v32) = *(_QWORD *)(v30 + v32);
  }
  while ( (unsigned int)v29 < v31 );
  *((_BYTE *)src + v23) = 0;
  v33 = n[0];
  *(_QWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  if ( v33 )
  {
    v48 = (void *)qalloc_or_throw(v33, v32, v29, v27);
    *(_QWORD *)(a1 + 272) = v48;
    v49 = src;
    *(_QWORD *)(a1 + 288) = v33;
    memcpy(v48, v49, v33);
    *(_QWORD *)(a1 + 280) = v33;
  }
  *(_QWORD *)(a1 + 296) = -1;
  netnode_check();
  netnode_check();
  if ( v63 != -1 )
    *(_QWORD *)(a1 + 296) = v63;
  if ( src )
  {
    n[0] = 0;
    qfree((__int64)src);
  }
  sub_3E3A00((__int64)&src);
  v34 = _mm_loadu_si128((const __m128i *)n);
  v35 = *(_QWORD *)(a1 + 248);
  v36 = src;
  *(_OWORD *)n = 0;
  src = nullptr;
  v61 = v34;
  if ( v35 )
  {
    v37 = *(_QWORD *)(a1 + 256);
    if ( v37 )
    {
      for ( j = 0; j != v37; ++j )
      {
        v39 = v35 + 32 * j;
        v40 = *(_QWORD *)(v39 + 8);
        if ( v40 )
        {
          *(_QWORD *)(v39 + 16) = 0;
          qfree(v40);
          v35 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v35);
    v41 = _mm_load_si128(&v61);
    v42 = (char *)src;
    *(_QWORD *)(a1 + 248) = v36;
    *(__m128i *)(a1 + 256) = v41;
    if ( v42 )
    {
      v43 = n[0];
      if ( n[0] )
      {
        v44 = 0;
        do
        {
          v45 = &v42[32 * v44];
          v46 = *((_QWORD *)v45 + 1);
          if ( v46 )
          {
            *((_QWORD *)v45 + 2) = 0;
            qfree(v46);
            v42 = (char *)src;
          }
          ++v44;
        }
        while ( v43 != v44 );
      }
      n[0] = 0;
      qfree((__int64)v42);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) = v36;
    *(__m128i *)(a1 + 256) = v34;
  }
  return v66 - __readfsqword(0x28u);
}
