void __fastcall sub_1F61960(__int64 *a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // r12d
  int v11; // r15d
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rcx
  const __m128i *v15; // rdx
  __m128i *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  int v19; // r13d
  int v20; // r12d
  __int64 v21; // rax
  void **v22; // rax
  void *v23; // r8
  void *v24; // r9
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  void **v29; // rcx
  __m128i *v30; // rax
  __m128i *v31; // rdx
  unsigned int v32; // r15d
  unsigned __int64 v33; // rax
  int i; // r13d
  __int64 *v35; // rdi
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rdx
  _QWORD *v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  __m128i *v52; // rax
  __m128i *v53; // rdx
  void **v54; // r12
  void **v55; // rbp
  void **v56; // rbp
  void **v57; // rbx
  __int64 v58; // rdx
  _BYTE *v59; // [rsp+10h] [rbp-918h]
  void **v60; // [rsp+10h] [rbp-918h]
  void *v61; // [rsp+10h] [rbp-918h]
  void *v62; // [rsp+28h] [rbp-900h]
  _BYTE *v63; // [rsp+40h] [rbp-8E8h]
  __int64 v64; // [rsp+40h] [rbp-8E8h]
  __int64 v65; // [rsp+40h] [rbp-8E8h]
  __int64 v66; // [rsp+48h] [rbp-8E0h]
  void *v67[2]; // [rsp+50h] [rbp-8D8h] BYREF
  __int64 v68; // [rsp+60h] [rbp-8C8h] BYREF
  void *v69[2]; // [rsp+70h] [rbp-8B8h] BYREF
  __int64 v70; // [rsp+80h] [rbp-8A8h] BYREF
  void *v71; // [rsp+90h] [rbp-898h] BYREF
  __int64 v72; // [rsp+98h] [rbp-890h]
  _BYTE v73[128]; // [rsp+A0h] [rbp-888h] BYREF
  void *v74; // [rsp+120h] [rbp-808h] BYREF
  __int64 v75; // [rsp+128h] [rbp-800h]
  _BYTE v76[256]; // [rsp+130h] [rbp-7F8h] BYREF
  void *ptr; // [rsp+230h] [rbp-6F8h] BYREF
  __int64 v78; // [rsp+238h] [rbp-6F0h]
  _BYTE v79[256]; // [rsp+240h] [rbp-6E8h] BYREF
  void *v80; // [rsp+340h] [rbp-5E8h] BYREF
  __int64 v81; // [rsp+348h] [rbp-5E0h]
  _BYTE v82[384]; // [rsp+350h] [rbp-5D8h] BYREF
  void **v83; // [rsp+4D0h] [rbp-458h] BYREF
  __int64 v84; // [rsp+4D8h] [rbp-450h]
  _BYTE v85[512]; // [rsp+4E0h] [rbp-448h] BYREF
  void *v86; // [rsp+6E0h] [rbp-248h] BYREF
  __int64 v87; // [rsp+6E8h] [rbp-240h]
  _BYTE v88[568]; // [rsp+6F0h] [rbp-238h] BYREF

  sub_1F58570(a1, (__int64)a2);
  v4 = sub_1EE7490(*a1);
  v5 = *a1;
  a2[10] = v4;
  v6 = sub_1EE7490(v5);
  v7 = *a1;
  a2[11] = v6;
  v8 = *(unsigned int *)(v7 + 24);
  *(_DWORD *)(v7 + 24) = v8 + 1;
  a2[16] = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8);
  sub_1EAC540((__m128i **)v67, (__int64 *)(v7 + 32), (_DWORD *)(v7 + 24));
  v9 = (unsigned int)a2[16];
  v80 = v82;
  v10 = v9;
  v81 = 0x1000000000LL;
  if ( v9 > 0x10 )
  {
    sub_2237220(&v80, v82, v9, 24);
    v10 = a2[16];
  }
  v11 = 0;
  if ( v10 )
  {
    do
    {
      sub_1EE50A0(
        (__int64)&v86,
        *(_QWORD **)(*a1 + 8),
        *(_QWORD *)(*a1 + 16),
        (__int64 *)(*a1 + 32),
        (unsigned int *)(*a1 + 24));
      v12 = (unsigned int)v81;
      v13 = (unsigned int)v81 + 1LL;
      if ( v13 > HIDWORD(v81) )
      {
        if ( v80 > &v86 || &v86 >= (void **)((char *)v80 + 24 * (unsigned int)v81) )
        {
          sub_2237220(&v80, v82, v13, 24);
          v14 = (char *)v80;
          v12 = (unsigned int)v81;
          v15 = (const __m128i *)&v86;
        }
        else
        {
          v59 = v80;
          sub_2237220(&v80, v82, v13, 24);
          v14 = (char *)v80;
          v12 = (unsigned int)v81;
          v15 = (const __m128i *)((char *)v80 + (char *)&v86 - v59);
        }
      }
      else
      {
        v14 = (char *)v80;
        v15 = (const __m128i *)&v86;
      }
      ++v11;
      v16 = (__m128i *)&v14[24 * v12];
      *v16 = _mm_loadu_si128(v15);
      v17 = v15[1].m128i_i64[0];
      LODWORD(v81) = v81 + 1;
      v16[1].m128i_i64[0] = v17;
    }
    while ( v11 != v10 );
  }
  v18 = (unsigned int)a2[6];
  v83 = (void **)v85;
  v19 = v18;
  v84 = 0x1000000000LL;
  v74 = v76;
  v75 = 0x1000000000LL;
  if ( v18 > 0x10 )
  {
    sub_A8C1F0((__int64)&v83, v18);
    v58 = (unsigned int)a2[6];
    v19 = v58;
    if ( HIDWORD(v75) < (unsigned int)v58 )
    {
      sub_2237220(&v74, v76, v58, 16);
      v19 = a2[6];
    }
  }
  v20 = 0;
  if ( v19 )
  {
    do
    {
      sub_1EAC540((__m128i **)&v86, (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
      v27 = (unsigned int)v84;
      v28 = (unsigned int)v84 + 1LL;
      if ( v28 > HIDWORD(v84) )
      {
        if ( v83 > &v86 || (v60 = v83, &v86 >= &v83[4 * (unsigned int)v84]) )
        {
          sub_A8C1F0((__int64)&v83, v28);
          v29 = v83;
          v27 = (unsigned int)v84;
          v30 = (__m128i *)&v86;
        }
        else
        {
          sub_A8C1F0((__int64)&v83, v28);
          v29 = v83;
          v27 = (unsigned int)v84;
          v30 = (__m128i *)((char *)v83 + (char *)&v86 - (char *)v60);
        }
      }
      else
      {
        v29 = v83;
        v30 = (__m128i *)&v86;
      }
      v31 = (__m128i *)&v29[4 * v27];
      v31->m128i_i64[0] = (__int64)v31[1].m128i_i64;
      if ( (__m128i *)v30->m128i_i64[0] == &v30[1] )
      {
        v31[1] = _mm_loadu_si128(v30 + 1);
      }
      else
      {
        v31->m128i_i64[0] = v30->m128i_i64[0];
        v31[1].m128i_i64[0] = v30[1].m128i_i64[0];
      }
      v31->m128i_i64[1] = v30->m128i_i64[1];
      v30->m128i_i64[0] = (__int64)v30[1].m128i_i64;
      v30->m128i_i64[1] = 0;
      v30[1].m128i_i8[0] = 0;
      v21 = (unsigned int)(v84 + 1);
      LODWORD(v84) = v84 + 1;
      if ( v86 != v88 )
      {
        operator delete(v86);
        v21 = (unsigned int)v84;
      }
      v22 = &v83[4 * v21 - 4];
      v23 = v22[1];
      v24 = *v22;
      v25 = (unsigned int)v75 + 1LL;
      if ( v25 > HIDWORD(v75) )
      {
        v62 = *v22;
        v61 = v22[1];
        sub_2237220(&v74, v76, v25, 16);
        v23 = v61;
        v26 = (char *)v74 + 16 * (unsigned int)v75;
        *v26 = v62;
      }
      else
      {
        v26 = (char *)v74 + 16 * (unsigned int)v75;
        *v26 = v24;
      }
      ++v20;
      v26[1] = v23;
      LODWORD(v75) = v75 + 1;
    }
    while ( v20 != v19 );
  }
  v32 = a2[4] + a2[5];
  v86 = v88;
  v72 = 0x1000000000LL;
  v87 = 0x1000000000LL;
  v78 = 0x1000000000LL;
  v33 = 16;
  v71 = v73;
  ptr = v79;
  if ( v32 > 0x10 )
  {
    sub_2237220(&v71, v73, v32, 8);
    v33 = HIDWORD(v87);
  }
  if ( v32 > v33 )
    sub_A8C1F0((__int64)&v86, v32);
  if ( v32 > (unsigned __int64)HIDWORD(v78) )
    sub_2237220(&ptr, v79, v32, 16);
  if ( v32 )
  {
    for ( i = 0; i != v32; ++i )
    {
      v43 = *(_QWORD *)(*a1 + 8);
      v44 = *(_QWORD *)(*(_QWORD *)(v43 + 13064) + 8LL * *(unsigned int *)(v43 + 13072) - 8);
      v45 = HIDWORD(v72);
      --*(_DWORD *)(v43 + 13072);
      v46 = (unsigned int)v72;
      v47 = (unsigned int)v72 + 1LL;
      if ( v47 > v45 )
      {
        v65 = v44;
        sub_2237220(&v71, v73, v47, 8);
        v46 = (unsigned int)v72;
        v44 = v65;
      }
      *((_QWORD *)v71 + v46) = v44;
      v48 = *a1;
      LODWORD(v72) = v72 + 1;
      sub_1EAC540((__m128i **)v69, (__int64 *)(v48 + 32), (_DWORD *)(v48 + 24));
      v49 = (unsigned int)v87;
      v50 = (unsigned int)v87 + 1LL;
      if ( v50 > HIDWORD(v87) )
      {
        if ( v86 > v69 || (v63 = v86, v69 >= (void **)((char *)v86 + 32 * (unsigned int)v87)) )
        {
          sub_A8C1F0((__int64)&v86, v50);
          v51 = (char *)v86;
          v49 = (unsigned int)v87;
          v52 = (__m128i *)v69;
        }
        else
        {
          sub_A8C1F0((__int64)&v86, v50);
          v51 = (char *)v86;
          v49 = (unsigned int)v87;
          v52 = (__m128i *)((char *)v86 + (char *)v69 - v63);
        }
      }
      else
      {
        v51 = (char *)v86;
        v52 = (__m128i *)v69;
      }
      v53 = (__m128i *)&v51[32 * v49];
      v53->m128i_i64[0] = (__int64)v53[1].m128i_i64;
      if ( (__m128i *)v52->m128i_i64[0] == &v52[1] )
      {
        v53[1] = _mm_loadu_si128(v52 + 1);
      }
      else
      {
        v53->m128i_i64[0] = v52->m128i_i64[0];
        v53[1].m128i_i64[0] = v52[1].m128i_i64[0];
      }
      v53->m128i_i64[1] = v52->m128i_i64[1];
      v52->m128i_i64[0] = (__int64)v52[1].m128i_i64;
      v35 = (__int64 *)v69[0];
      v52->m128i_i64[1] = 0;
      v52[1].m128i_i8[0] = 0;
      v36 = (unsigned int)(v87 + 1);
      LODWORD(v87) = v87 + 1;
      if ( v35 != &v70 )
      {
        operator delete(v35);
        v36 = (unsigned int)v87;
      }
      v37 = (__int64 *)((char *)v86 + 32 * v36 - 32);
      v38 = v37[1];
      v39 = *v37;
      v40 = (unsigned int)v78 + 1LL;
      if ( v40 > HIDWORD(v78) )
      {
        v66 = *v37;
        v64 = v37[1];
        sub_2237220(&ptr, v79, v40, 16);
        v38 = v64;
        v41 = (char *)ptr + 16 * (unsigned int)v78;
        *v41 = v66;
      }
      else
      {
        v41 = (char *)ptr + 16 * (unsigned int)v78;
        *v41 = v39;
      }
      v41[1] = v38;
      v42 = v78 + 1;
      LODWORD(v78) = v78 + 1;
    }
  }
  else
  {
    v42 = v78;
  }
  sub_EF0420(
    (__int64)a2,
    *(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL),
    v67[0],
    (size_t)v67[1],
    v80,
    (unsigned int)v81,
    (__int64)ptr,
    v42,
    v71,
    (unsigned int)v72,
    (char *)v74,
    (unsigned int)v75);
  if ( ptr != v79 )
    free(ptr);
  v54 = (void **)v86;
  v55 = (void **)((char *)v86 + 32 * (unsigned int)v87);
  if ( v86 != v55 )
  {
    do
    {
      while ( 1 )
      {
        v55 -= 4;
        if ( *v55 == v55 + 2 )
          break;
        operator delete(*v55);
        if ( v54 == v55 )
          goto LABEL_46;
      }
    }
    while ( v54 != v55 );
LABEL_46:
    v55 = (void **)v86;
  }
  if ( v55 != (void **)v88 )
    free(v55);
  if ( v71 != v73 )
    free(v71);
  if ( v74 != v76 )
    free(v74);
  v56 = v83;
  v57 = &v83[4 * (unsigned int)v84];
  if ( v83 != v57 )
  {
    do
    {
      while ( 1 )
      {
        v57 -= 4;
        if ( *v57 == v57 + 2 )
          break;
        operator delete(*v57);
        if ( v56 == v57 )
          goto LABEL_56;
      }
    }
    while ( v56 != v57 );
LABEL_56:
    v57 = v83;
  }
  if ( v57 != (void **)v85 )
    free(v57);
  if ( v80 != v82 )
    free(v80);
  if ( v67[0] != &v68 )
    operator delete(v67[0]);
}
