__int64 __fastcall sub_E3BD0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  unsigned int tinfo_property; // eax
  __int64 v7; // rdi
  __int64 (*v8)(); // rcx
  unsigned int tinfo_details; // ebp
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 (*v14)(); // rcx
  int v15; // eax
  __int64 v16; // rdi
  char *v17; // rbp
  unsigned __int64 v18; // rax
  signed __int64 v19; // r9
  void *v20; // rax
  __m128i v21; // xmm0
  void *v22; // rax
  __m128i v23; // xmm1
  char *v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rsi
  char *v28; // rdi
  unsigned __int64 v29; // r13
  __int64 v30; // rbx
  char *v31; // r15
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // r13
  __int64 v36; // r12
  _QWORD *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rdi
  int v40; // r9d
  char *v41; // rax
  size_t n; // [rsp+18h] [rbp-1C0h]
  size_t na; // [rsp+18h] [rbp-1C0h]
  __int64 nc; // [rsp+18h] [rbp-1C0h]
  __int64 nb; // [rsp+18h] [rbp-1C0h]
  signed __int64 v46; // [rsp+28h] [rbp-1B0h]
  int v47; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v48; // [rsp+38h] [rbp-1A0h]
  void *v49; // [rsp+40h] [rbp-198h]
  __int128 v50; // [rsp+48h] [rbp-190h]
  void *v51; // [rsp+58h] [rbp-180h]
  __int128 v52; // [rsp+60h] [rbp-178h]
  __int64 v53; // [rsp+70h] [rbp-168h] BYREF
  int v54; // [rsp+78h] [rbp-160h]
  _QWORD v55[2]; // [rsp+80h] [rbp-158h] BYREF
  void *v56; // [rsp+90h] [rbp-148h]
  __m128i v57; // [rsp+98h] [rbp-140h] BYREF
  void *v58; // [rsp+A8h] [rbp-130h]
  __m128i v59; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-118h] BYREF
  int v61; // [rsp+C8h] [rbp-110h]
  __int64 v62; // [rsp+D0h] [rbp-108h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-100h]
  __int64 v64; // [rsp+E8h] [rbp-F0h]
  __int64 v65; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-E0h] BYREF
  __int128 v67; // [rsp+100h] [rbp-D8h]
  __int64 v68; // [rsp+110h] [rbp-C8h]
  __int128 v69; // [rsp+118h] [rbp-C0h]
  char v70; // [rsp+128h] [rbp-B0h]
  void *src; // [rsp+130h] [rbp-A8h] BYREF
  unsigned __int64 v72; // [rsp+138h] [rbp-A0h]
  unsigned __int64 v73; // [rsp+140h] [rbp-98h]
  char v74[8]; // [rsp+150h] [rbp-88h] BYREF
  char v75[24]; // [rsp+158h] [rbp-80h] BYREF
  __int64 v76; // [rsp+170h] [rbp-68h]
  __int64 v77; // [rsp+178h] [rbp-60h]
  unsigned __int64 v78; // [rsp+198h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 296);
  v78 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v4, 20);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v8 = *(__int64 (**)())(*(_QWORD *)v7 + 360LL);
  if ( v8 == sub_D5F40 )
    return 0;
  v11 = tinfo_property;
  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD))v8)(v7, tinfo_property, 0) == -1
    || !(unsigned __int8)sub_36EC60(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 320), 1) )
  {
    return 0;
  }
  sub_CC450(a1 + 88, v11);
  v12 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  v13 = *(_QWORD *)(v12 + 112);
  v14 = *(__int64 (**)())(*(_QWORD *)v13 + 360LL);
  v15 = -1;
  if ( v14 != sub_D5F40 )
    v15 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v14)(v13, v11, 0);
  *(_DWORD *)(a1 + 288) = v15;
  if ( !(unsigned __int8)sub_D9D30(a1 + 88, a2) )
    return 0;
  v16 = *(_QWORD *)(a1 + 296);
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 16;
  v63 = 0;
  v67 = 0;
  v69 = 0;
  tinfo_details = get_tinfo_details(v16, 12, &v62);
  if ( (_BYTE)tinfo_details )
  {
    if ( (v64 & 2) == 0 && (!(_QWORD)v63 || (*(_BYTE *)(v62 + 72) & 2) == 0) )
    {
      v47 = 0;
      v48 = 0;
      v49 = nullptr;
      v51 = nullptr;
      v53 = 0;
      v54 = 3;
      v50 = 0;
      v52 = 0;
      copy_tinfo_t(&v53, &v65);
      if ( (get_tinfo_property(v53, 2) & 0xF) != 0xA )
      {
        if ( (get_tinfo_property(v53, 2) & 0x2F) == 0xD )
          v54 |= 4u;
        sub_326AD0(&src, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v53);
        copy_tinfo_t(&v53, &src);
        clear_tinfo_t(&src);
        copy_tinfo_t(&v65, &v53);
      }
      sub_E3940((__int64)&src, (__int64)&v62);
      LODWORD(v55[0]) = 0;
      v17 = (char *)src;
      copy_argloc(v55, &v47);
      v56 = nullptr;
      v57 = 0;
      if ( (_QWORD)v50 )
      {
        nb = v50;
        v56 = (void *)qalloc_or_throw(v50);
        v57.m128i_i64[1] = nb;
        memcpy(v56, v49, nb);
        v57.m128i_i64[0] = nb;
      }
      v58 = nullptr;
      v59 = 0;
      if ( (_QWORD)v52 )
      {
        nc = v52;
        v58 = (void *)qalloc_or_throw(v52);
        v59.m128i_i64[1] = nc;
        memcpy(v58, v51, nc);
        v59.m128i_i64[0] = nc;
      }
      v60 = 0;
      copy_tinfo_t(&v60, &v53);
      v61 = v54;
      v18 = v72;
      v19 = v17 - (_BYTE *)src;
      if ( v73 < v72 + 1 )
      {
        v46 = v17 - (_BYTE *)src;
        v41 = (char *)qvector_reserve(&src, src, v72 + 1, 80);
        v19 = v46;
        src = v41;
        v17 = &v41[v46];
        v18 = v72;
      }
      memmove(v17 + 80, v17, 80 * v18 - v19);
      *(_DWORD *)v17 = 0;
      copy_argloc(v17, v55);
      v20 = v56;
      v56 = nullptr;
      v21 = _mm_loadu_si128(&v57);
      *((_QWORD *)v17 + 2) = v20;
      *(__m128i *)(v17 + 24) = v21;
      v22 = v58;
      v23 = _mm_load_si128(&v59);
      v57 = 0;
      v58 = nullptr;
      v59 = 0;
      *((_QWORD *)v17 + 5) = v22;
      *((_QWORD *)v17 + 8) = 0;
      *((__m128i *)v17 + 3) = v23;
      copy_tinfo_t(v17 + 64, &v60);
      *((_DWORD *)v17 + 18) = v61;
      ++v72;
      clear_tinfo_t(&v60);
      if ( v58 )
      {
        v59.m128i_i64[0] = 0;
        qfree(v58);
      }
      if ( v56 )
      {
        v57.m128i_i64[0] = 0;
        qfree(v56);
      }
      cleanup_argloc(v55);
      if ( (unsigned __int8)calc_arglocs(&src) )
      {
        v24 = (char *)src;
        if ( *(_DWORD *)src != 3 || *(_DWORD *)(a1 + 288) != *((unsigned __int16 *)src + 4) )
          goto LABEL_32;
        if ( v72 > 1 )
        {
          v25 = 0;
          v26 = 1;
          while ( 1 )
          {
            n = v26;
            v27 = v25 + v62;
            v25 += 80;
            if ( (unsigned int)compare_arglocs(&v24[v25], v27) )
              goto LABEL_32;
            v26 = n + 1;
            if ( n + 1 >= v72 )
              break;
            v24 = (char *)src;
          }
        }
      }
      tinfo_details = create_tinfo(a1 + 296, 12, 12, &src);
      if ( (_BYTE)tinfo_details )
      {
        na = *(_QWORD *)(a1 + 16);
        if ( a3 )
        {
          sub_326AD0(v55, *(_QWORD *)(na + 112), a1 + 296);
        }
        else
        {
          v55[0] = 0;
          copy_tinfo_t(v55, a1 + 296);
        }
        sub_37BE10(na, *(_QWORD *)(a1 + 320), (unsigned int)v55, 1, 1, v40);
        clear_tinfo_t(v55);
        goto LABEL_33;
      }
LABEL_32:
      tinfo_details = 0;
LABEL_33:
      if ( v76 )
      {
        v77 = 0;
        qfree(v76);
      }
      cleanup_argloc(v75);
      clear_tinfo_t(v74);
      v28 = (char *)src;
      if ( src )
      {
        v29 = v72;
        if ( v72 )
        {
          v30 = 0;
          do
          {
            v31 = &v28[80 * v30];
            clear_tinfo_t(v31 + 64);
            v32 = *((_QWORD *)v31 + 5);
            if ( v32 )
            {
              *((_QWORD *)v31 + 6) = 0;
              qfree(v32);
            }
            v33 = *((_QWORD *)v31 + 2);
            if ( v33 )
            {
              *((_QWORD *)v31 + 3) = 0;
              qfree(v33);
            }
            ++v30;
            cleanup_argloc(v31);
            v28 = (char *)src;
          }
          while ( v29 != v30 );
        }
        v72 = 0;
        qfree(v28);
      }
      clear_tinfo_t(&v53);
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        qfree(v51);
      }
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree(v49);
      }
      cleanup_argloc(&v47);
      goto LABEL_50;
    }
    tinfo_details = 0;
  }
LABEL_50:
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  cleanup_argloc(&v66);
  clear_tinfo_t(&v65);
  v34 = v62;
  if ( v62 )
  {
    v35 = v63;
    if ( (_QWORD)v63 )
    {
      v36 = 0;
      do
      {
        v37 = (_QWORD *)(v34 + 80 * v36);
        clear_tinfo_t(v37 + 8);
        v38 = v37[5];
        if ( v38 )
        {
          v37[6] = 0;
          qfree(v38);
        }
        v39 = v37[2];
        if ( v39 )
        {
          v37[3] = 0;
          qfree(v39);
        }
        ++v36;
        cleanup_argloc(v37);
        v34 = v62;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v63 = 0;
    qfree(v34);
  }
  return tinfo_details;
}
