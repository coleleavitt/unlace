unsigned __int64 __fastcall sub_3E4380(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r13
  const char *v8; // r14
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  char *v14; // rax
  const char *v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rsi
  const char *v20; // rax
  __m128i v21; // xmm0
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // r15
  const char *v27; // r8
  _QWORD *v28; // rax
  const char *v29; // r8
  unsigned __int64 v30; // rcx
  char *v31; // rax
  unsigned int v32; // edx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rsi
  size_t v36; // r15
  const char *v37; // rsi
  __int64 v38; // rax
  const char *v39; // rsi
  __m128i v40; // xmm2
  __int64 v41; // rdx
  void *v42; // r12
  __int64 v43; // r13
  __int64 j; // rbp
  __int64 v45; // rax
  __int64 v46; // rdi
  __m128i v47; // xmm6
  char *v48; // rdx
  size_t v49; // rbp
  __int64 v50; // rbx
  char *v51; // rax
  __int64 v52; // rdi
  const char *v54; // rsi
  void *v55; // rax
  void *v56; // rsi
  struct _Unwind_Exception *v57; // rbp
  __m128i v58; // xmm0
  bool v59; // zf
  __int64 v60; // r14
  __int64 v61; // rdx
  __int64 i; // r15
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 *v65; // r13
  __int64 v66; // rdi
  __int64 v67; // rdi
  __m128i v68; // [rsp+0h] [rbp-88h] BYREF
  const char *v69; // [rsp+18h] [rbp-70h]
  __int64 v70; // [rsp+28h] [rbp-60h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v73; // [rsp+48h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_4E7588;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a2 == 1 )
  {
    v6 = 25;
    v7 = 24;
    v8 = "Stock comments: function";
  }
  else
  {
    if ( a2 != 2 )
    {
      v9 = a1 + 8;
      v6 = 22;
      v7 = 21;
      v8 = "Stock comments: block";
      goto LABEL_5;
    }
    v6 = 31;
    v7 = 30;
    v8 = "Stock comments: local variable";
  }
  v9 = a1 + 8;
LABEL_5:
  v68.m128i_i64[0] = v6;
  v10 = (_QWORD *)qvector_reserve(v9, 0, v6, 1);
  v12 = v68.m128i_i64[0];
  *(_QWORD *)(a1 + 8) = v10;
  v13 = (unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 16) = v12;
  *v10 = *(_QWORD *)v8;
  *(_QWORD *)((char *)v10 + v7 - 8) = *(_QWORD *)&v8[v7 - 8];
  v14 = (char *)v10 - v13;
  LODWORD(v12) = v7 + (_DWORD)v14;
  v15 = (const char *)(v8 - v14);
  v16 = 0;
  v17 = v12 & 0xFFFFFFF8;
  do
  {
    v18 = v16;
    v16 += 8;
    v19 = *(_QWORD *)&v15[v18];
    *(_QWORD *)(v13 + v18) = v19;
  }
  while ( v16 < v17 );
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + v7) = 0;
  v20 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v20 = *(const char **)(a1 + 8);
  *(_QWORD *)(a1 + 72) = v20;
  *(_OWORD *)(a1 + 48) = -1;
  v21 = _mm_loadl_epi64((const __m128i *)&off_4E9918);
  *(_QWORD *)(a1 + 32) = &unk_4EBE48;
  v22 = (_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 44) = (a3 + 3840) | 2;
  *(_DWORD *)(a1 + 40) = -16777212;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_DWORD *)(a1 + 104) = -1;
  *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v21, (__m128i)(unsigned __int64)&off_4E98E8);
  do
  {
    *v22 = 0;
    v22 += 3;
    *((_OWORD *)v22 - 1) = 0;
  }
  while ( v22 != (_QWORD *)(a1 + 208) );
  *(_DWORD *)(a1 + 208) = 0;
  v23 = *(unsigned int *)(a1 + 44);
  if ( ((*(_DWORD *)(a1 + 44) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 43) != 0xFF )
    {
      if ( !under_debugger )
      {
        v57 = (struct _Unwind_Exception *)interr(3449, v19, v23, ((*(_DWORD *)(a1 + 44) >> 19) & 0x3Fu) - 1, v11);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        v58 = _mm_loadl_epi64((const __m128i *)off_4E9908);
        *(_QWORD *)a1 = &unk_4ECA40;
        *(_QWORD *)(a1 + 32) = &unk_4ECA78;
        v59 = *(_QWORD *)(a1 + 248) == 0;
        *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v58, (__m128i)(unsigned __int64)&off_4ECB50);
        *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                                   _mm_loadl_epi64((const __m128i *)&off_4E9910),
                                   (__m128i)(unsigned __int64)&off_4ECB80);
        if ( !v59 )
        {
          v60 = *(_QWORD *)(a1 + 256);
          v61 = *(_QWORD *)(a1 + 248);
          for ( i = 0; v60 != i; ++i )
          {
            v63 = v61 + 32 * i;
            v64 = *(_QWORD *)(v63 + 8);
            if ( v64 )
            {
              *(_QWORD *)(v63 + 16) = 0;
              qfree(v64);
              v61 = *(_QWORD *)(a1 + 248);
            }
          }
          *(_QWORD *)(a1 + 256) = 0;
          qfree(v61);
        }
        *(_QWORD *)(a1 + 32) = &unk_4EBE48;
        v65 = (__int64 *)(a1 + 184);
        while ( 1 )
        {
          v66 = *v65;
          if ( *v65 )
          {
            v65[1] = 0;
            qfree(v66);
          }
          v65 -= 3;
          if ( (__int64 *)(a1 + 88) == v65 )
          {
            v67 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = &off_4E7588;
            if ( v67 )
            {
              *(_QWORD *)(a1 + 16) = 0;
              qfree(v67);
            }
            _Unwind_Resume(v57);
          }
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 43) = ((*(_DWORD *)(a1 + 44) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 44) = v23 & 0xFE07FFFF;
  }
  v24 = _mm_loadl_epi64((const __m128i *)off_4E98F8);
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)a1 = off_4E9770;
  *(_QWORD *)(a1 + 32) = off_4E97D0;
  *(_OWORD *)(a1 + 256) = 0;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v24, (__m128i)(unsigned __int64)&off_4E98A8);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4E9900),
                             (__m128i)(unsigned __int64)&off_4E98D8);
  if ( a2 == 1 )
  {
    *(_OWORD *)n = 0;
    v25 = 31;
    v26 = 30;
    v27 = "$ msre stock comments function";
    src = nullptr;
  }
  else
  {
    *(_OWORD *)n = 0;
    if ( a2 == 2 )
    {
      v25 = 27;
      v26 = 26;
      v27 = "$ msre stock comments lvar";
    }
    else
    {
      v25 = 28;
      v26 = 27;
      v27 = "$ msre stock comments block";
    }
    src = nullptr;
  }
  v68.m128i_i64[0] = v25;
  v69 = v27;
  v28 = (_QWORD *)qvector_reserve(&src, 0, v25, 1);
  v29 = v69;
  src = v28;
  v30 = (unsigned __int64)(v28 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  n[0] = v68.m128i_i64[0];
  *v28 = *(_QWORD *)v69;
  *(_QWORD *)((char *)v28 + v26 - 8) = *(_QWORD *)&v29[v26 - 8];
  v31 = (char *)v28 - v30;
  v32 = 0;
  v33 = v29 - v31;
  v34 = (v26 + (_DWORD)v31) & 0xFFFFFFF8;
  do
  {
    v35 = v32;
    v32 += 8;
    *(_QWORD *)(v30 + v35) = *(_QWORD *)(v33 + v35);
  }
  while ( v32 < v34 );
  *((_BYTE *)src + v26) = 0;
  v36 = n[0];
  *(_QWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  if ( v36 )
  {
    v55 = (void *)qalloc_or_throw(v36);
    *(_QWORD *)(a1 + 272) = v55;
    v56 = src;
    *(_QWORD *)(a1 + 288) = v36;
    memcpy(v55, v56, v36);
    *(_QWORD *)(a1 + 280) = v36;
    v37 = *(const char **)(a1 + 272);
    *(_QWORD *)(a1 + 296) = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 296) = -1;
    v37 = s1;
  }
  netnode_check(&v70, v37, 0, 0);
  v38 = *(_QWORD *)(a1 + 280);
  if ( v70 == -1 )
  {
    v54 = s1;
    if ( v38 )
      v54 = *(const char **)(a1 + 272);
    netnode_check(a1 + 296, v54, 0, 1);
  }
  else
  {
    v39 = s1;
    if ( v38 )
      v39 = *(const char **)(a1 + 272);
    netnode_check(&v70, v39, 0, 0);
    *(_QWORD *)(a1 + 296) = v70;
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  sub_3E3A00((__int64)&src, a1 + 272);
  v40 = _mm_loadu_si128((const __m128i *)n);
  v41 = *(_QWORD *)(a1 + 248);
  v42 = src;
  *(_OWORD *)n = 0;
  src = nullptr;
  v68 = v40;
  if ( v41 )
  {
    v43 = *(_QWORD *)(a1 + 256);
    if ( v43 )
    {
      for ( j = 0; j != v43; ++j )
      {
        v45 = v41 + 32 * j;
        v46 = *(_QWORD *)(v45 + 8);
        if ( v46 )
        {
          *(_QWORD *)(v45 + 16) = 0;
          qfree(v46);
          v41 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v41);
    v47 = _mm_load_si128(&v68);
    v48 = (char *)src;
    *(_QWORD *)(a1 + 248) = v42;
    *(__m128i *)(a1 + 256) = v47;
    if ( v48 )
    {
      v49 = n[0];
      if ( n[0] )
      {
        v50 = 0;
        do
        {
          v51 = &v48[32 * v50];
          v52 = *((_QWORD *)v51 + 1);
          if ( v52 )
          {
            *((_QWORD *)v51 + 2) = 0;
            qfree(v52);
            v48 = (char *)src;
          }
          ++v50;
        }
        while ( v49 != v50 );
      }
      n[0] = 0;
      qfree(v48);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) = v42;
    *(__m128i *)(a1 + 256) = v40;
  }
  return v73 - __readfsqword(0x28u);
}
