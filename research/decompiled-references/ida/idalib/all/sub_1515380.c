void __fastcall sub_1515380(const __m128i *a1, __int64 a2, unsigned int a3, __int64 a4, __m128i a5)
{
  unsigned __int16 v8; // ax
  unsigned __int32 v9; // r12d
  __int64 v10; // rdi
  __int8 v11; // al
  __int64 v12; // rdi
  __m128i si128; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  size_t v17; // rax
  unsigned __int64 v18; // r8
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rbp
  _QWORD *v27; // rax
  _BYTE *v28; // rax
  signed __int64 v29; // rdx
  _BYTE *v30; // rax
  signed __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdi
  __m128i v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  const __m128i *v39; // rdx
  __m128i *v40; // rax
  size_t v41; // rax
  unsigned __int64 v42; // rax
  __int64 *v43; // rdi
  _BYTE *v44; // rax
  signed __int64 v45; // rdx
  _BYTE *v46; // rax
  signed __int64 v47; // rdx
  _BYTE *v48; // rax
  signed __int64 v49; // rdx
  unsigned int v50; // eax
  _BYTE *v51; // rax
  signed __int64 v52; // rdx
  _BYTE *v53; // rax
  signed __int64 v54; // rdx
  _BYTE *v55; // rax
  signed __int64 v56; // rdx
  __int64 *v57; // rdi
  _BYTE *v58; // rax
  signed __int64 v59; // rdx
  _BYTE *v60; // rax
  signed __int64 v61; // rdx
  unsigned __int64 v62; // r12
  __int64 v63; // rdi
  __int64 v64; // rsi
  void *s1; // [rsp+10h] [rbp-128h]
  void *s1c; // [rsp+10h] [rbp-128h]
  void *s1a; // [rsp+10h] [rbp-128h]
  unsigned __int64 s1b; // [rsp+10h] [rbp-128h]
  unsigned __int32 v69; // [rsp+1Ch] [rbp-11Ch]
  char v70; // [rsp+2Ah] [rbp-10Eh] BYREF
  unsigned __int8 v71; // [rsp+2Bh] [rbp-10Dh] BYREF
  int v72; // [rsp+2Ch] [rbp-10Ch] BYREF
  unsigned __int16 v73; // [rsp+30h] [rbp-108h] BYREF
  const __m128i *v74; // [rsp+38h] [rbp-100h] BYREF
  void *ptr; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v76; // [rsp+48h] [rbp-F0h]
  _BYTE v77[24]; // [rsp+58h] [rbp-E0h] BYREF
  __m128i *v78; // [rsp+70h] [rbp-C8h] BYREF
  __int8 v79; // [rsp+78h] [rbp-C0h]
  const __m128i *v80; // [rsp+80h] [rbp-B8h]
  int v81; // [rsp+88h] [rbp-B0h]
  __int16 v82; // [rsp+8Ch] [rbp-ACh]
  __int64 (__fastcall *v83)(__int64); // [rsp+90h] [rbp-A8h]
  __int64 v84; // [rsp+98h] [rbp-A0h]
  __int64 v85; // [rsp+A0h] [rbp-98h]
  void *v86; // [rsp+B0h] [rbp-88h] BYREF
  __m128i v87; // [rsp+B8h] [rbp-80h]

  v8 = a1[5].m128i_u16[4];
  v9 = a1[1].m128i_u32[0];
  v74 = a1;
  v73 = v8;
  sub_1514860((__int64)a1, a2, a3, a4);
  v10 = *(unsigned int *)(a2 + 8);
  if ( !(_DWORD)v10 )
    goto LABEL_27;
  v70 = 0;
  v71 = 0;
  if ( !(unsigned __int8)sub_20F8580(v10, a3, &v70, &v71) )
  {
    sub_1564820(&v86, a1, v9, 2161);
    v44 = (_BYTE *)sub_20F4520(*(unsigned int *)(a2 + 8));
    sub_AEC220((unsigned __int8 **)&v86, v44, v45);
    v46 = (_BYTE *)sub_20F3F70(a3);
    sub_AEC220((unsigned __int8 **)&v86, v46, v47);
    sub_AEA040((__int64)&v86);
    sub_1564820(&v86, a1, v9, 2043);
    v48 = (_BYTE *)sub_20F4520(*(unsigned int *)(a2 + 8));
    sub_AEC220((unsigned __int8 **)&v86, v48, v49);
    v50 = sub_20F3F50(*(unsigned int *)(a2 + 8));
    v51 = (_BYTE *)sub_20F3F70(v50);
    sub_AEC220((unsigned __int8 **)&v86, v51, v52);
    sub_1503AF0((unsigned __int8 **)&v86, v71);
    goto LABEL_26;
  }
  if ( !v71 )
  {
    v32 = sub_20F6430(*(unsigned int *)(a2 + 8));
    v33 = *(unsigned int *)(a2 + 8);
    LODWORD(v86) = v32;
    v34.m128i_i64[0] = sub_20F4520(v33);
    v35 = *(unsigned int *)(a2 + 28);
    v87 = v34;
    v36 = *(unsigned int *)(a2 + 24);
    v37 = v36 + 1;
    if ( v36 + 1 > v35 )
    {
      v62 = *(_QWORD *)(a2 + 16);
      v63 = a2 + 16;
      v64 = a2 + 32;
      if ( v62 <= (unsigned __int64)&v86 && (unsigned __int64)&v86 < v62 + 24 * v36 )
      {
        sub_2237220(v63, v64, v37, 24);
        v38 = *(_QWORD *)(a2 + 16);
        v36 = *(unsigned int *)(a2 + 24);
        v39 = (const __m128i *)((char *)&v86 + v38 - v62);
      }
      else
      {
        sub_2237220(v63, v64, v37, 24);
        v38 = *(_QWORD *)(a2 + 16);
        v36 = *(unsigned int *)(a2 + 24);
        v39 = (const __m128i *)&v86;
      }
    }
    else
    {
      v38 = *(_QWORD *)(a2 + 16);
      v39 = (const __m128i *)&v86;
    }
    v40 = (__m128i *)(v38 + 24 * v36);
    *v40 = _mm_loadu_si128(v39);
    v40[1].m128i_i64[0] = v39[1].m128i_i64[0];
    ++*(_DWORD *)(a2 + 24);
    return;
  }
  if ( a1[2].m128i_i16[0] != 22 )
  {
    sub_1564820(&v86, a1, v9, 2162);
    v28 = (_BYTE *)sub_20F4520(*(unsigned int *)(a2 + 8));
    sub_AEC220((unsigned __int8 **)&v86, v28, v29);
    v30 = (_BYTE *)sub_20F3F70(a3);
    sub_AEC220((unsigned __int8 **)&v86, v30, v31);
LABEL_26:
    sub_AEA040((__int64)&v86);
    goto LABEL_27;
  }
  if ( *(_DWORD *)(a2 + 8) == 13 )
  {
    LODWORD(v78) = 0;
    v41 = j__strlen("user condition");
    v42 = sub_1509090(a1, (__int64)"user condition", a5, v41, &v78, 0);
    if ( v42 > 1 )
    {
      LODWORD(v86) = 71;
      *(_QWORD *)a2 = v42 & 0xFFFFFFFFFFFFFFFELL;
      v87.m128i_i64[0] = (__int64)"<condition>";
      v87.m128i_i64[1] = 11;
      sub_1506480(a2 + 16, (const __m128i *)&v86);
      return;
    }
LABEL_27:
    sub_15047B0(&v73, (__int64 *)&v74);
    return;
  }
  v80 = a1;
  v78 = (__m128i *)&a1[122];
  v11 = a1[122].m128i_i8[0];
  a1[122].m128i_i8[0] = 1;
  v79 = v11;
  v83 = sub_146A990;
  v82 = 449;
  v81 = 1507350;
  v84 = 0;
  v85 = 0;
  sub_1503860((__int64)&v78);
  v12 = a1->m128i_i64[1];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v69 = a1[1].m128i_u32[0];
  ptr = v77;
  v76 = si128;
  v14 = sub_145C740(v12, (__int64)a1[1].m128i_i64, (__int64 *)&ptr, nullptr);
  v16 = v15;
  s1 = (void *)v14;
  v17 = j__strlen("score");
  if ( v17 == v16 && (!v17 || !memcmp(s1, "score", v17)) )
  {
    v43 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v43, a1[1].m128i_i32);
    v72 = 0;
    s1a = (void *)sub_1509090(a1, (__int64)s1, si128, v16, &v72, 0);
    if ( a1[2].m128i_i16[0] == 62 )
    {
      sub_1504200((__int64)a1);
    }
    else
    {
      sub_1564840(&v86, a1, &a1[1], 2167);
      sub_1503D30((unsigned __int8 **)&v86, (__int64)"':'");
      sub_1503D30((unsigned __int8 **)&v86, (__int64)"score expression");
      sub_AEA040((__int64)&v86);
    }
    v18 = (unsigned __int64)s1a;
  }
  else
  {
    v18 = 0;
  }
  if ( ptr != v77 )
  {
    s1c = (void *)v18;
    free(ptr);
    v18 = (unsigned __int64)s1c;
  }
  if ( v70 )
  {
    if ( v18 > 1 )
      *(_QWORD *)a2 = v18 & 0xFFFFFFFFFFFFFFFELL;
  }
  else if ( v18 )
  {
    s1b = v18;
    if ( v18 == 1 )
    {
      sub_1564820(&v86, a1, v69, 2160);
      v58 = (_BYTE *)sub_20F4520(*(unsigned int *)(a2 + 8));
      sub_AEC220((unsigned __int8 **)&v86, v58, v59);
      v60 = (_BYTE *)sub_20F3F70(a3);
      sub_AEC220((unsigned __int8 **)&v86, v60, v61);
      sub_1503D30((unsigned __int8 **)&v86, (__int64)"<invalid>");
    }
    else
    {
      sub_1564820(&v86, a1, v69, 2160);
      v53 = (_BYTE *)sub_20F4520(*(unsigned int *)(a2 + 8));
      sub_AEC220((unsigned __int8 **)&v86, v53, v54);
      v55 = (_BYTE *)sub_20F3F70(a3);
      sub_AEC220((unsigned __int8 **)&v86, v55, v56);
      sub_AE9DF0((unsigned __int8 **)&v86, s1b & 0xFFFFFFFFFFFFFFFELL, 0xFu);
    }
    sub_AEA040((__int64)&v86);
  }
  v19 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v86 = nullptr;
  v87 = v19;
  while ( 1 )
  {
    sub_1514F60(a1, a2, a3, (__int64)&v86, v19);
    if ( a1[2].m128i_i16[0] != 66 )
      break;
    v57 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v57, a1[1].m128i_i32);
  }
  sub_14808E0((__int64)&v78, (__int64 *)a2, v20, v21, v22, v23);
  if ( v87.m128i_i32[1] )
  {
    v24 = (char *)v86;
    if ( v87.m128i_i32[0] )
    {
      v25 = 0;
      v26 = 8LL * (unsigned int)(v87.m128i_i32[0] - 1) + 8;
      do
      {
        v27 = *(_QWORD **)&v24[v25];
        if ( v27 != (_QWORD *)-8LL )
        {
          if ( v27 )
          {
            operator delete(*(_QWORD *)&v24[v25], *v27 + 17LL, 8);
            v24 = (char *)v86;
          }
        }
        v25 += 8;
      }
      while ( v25 != v26 );
    }
  }
  else
  {
    v24 = (char *)v86;
  }
  free(v24);
  v78->m128i_i8[0] = v79;
}
