__int64 __fastcall sub_6ECA10(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 v13; // rax
  char *v15; // r13
  size_t v16; // rax
  size_t v17; // r15
  size_t v18; // r12
  void *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rcx
  double v22; // xmm4_8
  double v23; // xmm5_8
  unsigned int v24; // r15d
  char *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbp
  char *v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  __int64 v32; // rdx
  char *v33; // rsi
  char *v34; // r15
  _DWORD *v35; // rax
  __int64 v36; // rax
  char *v37; // rsi
  char *v38; // rsi
  double v39; // xmm4_8
  double v40; // xmm5_8
  __int64 v41; // rsi
  const char *v42; // rcx
  int v43; // eax
  char v44; // dl
  char *v45; // rax
  __int64 v47; // [rsp+38h] [rbp-160h] BYREF
  void *v48; // [rsp+40h] [rbp-158h] BYREF
  __int128 v49; // [rsp+48h] [rbp-150h]
  char *s1; // [rsp+60h] [rbp-138h] BYREF
  __int64 v51; // [rsp+68h] [rbp-130h]
  void *v52; // [rsp+80h] [rbp-118h] BYREF
  __int128 v53; // [rsp+88h] [rbp-110h]
  void *v54[3]; // [rsp+A0h] [rbp-F8h] BYREF
  int v55; // [rsp+B8h] [rbp-E0h]
  __int16 v56; // [rsp+BCh] [rbp-DCh]
  void *v57; // [rsp+C0h] [rbp-D8h] BYREF
  __int128 v58; // [rsp+C8h] [rbp-D0h]
  __int64 v59; // [rsp+D8h] [rbp-C0h]
  __int64 v60; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+F0h] [rbp-A8h]
  void *ptr; // [rsp+100h] [rbp-98h]
  __int128 v64; // [rsp+108h] [rbp-90h]
  char v65; // [rsp+118h] [rbp-80h]
  __int64 v66; // [rsp+128h] [rbp-70h] BYREF
  char *s; // [rsp+130h] [rbp-68h] BYREF
  _QWORD v68[11]; // [rsp+140h] [rbp-58h] BYREF

  v13 = *(_QWORD *)(a4 + 40);
  v68[3] = __readfsqword(0x28u);
  v66 = v13;
  sub_FDEB80(&s, &v66);
  v15 = s;
  v48 = nullptr;
  v49 = 0;
  if ( !s
    || (v16 = strlen(s),
        v17 = v16 + 1,
        v18 = v16,
        v19 = (void *)qvector_reserve(&v48, 0, v16 + 1, 1),
        *(_QWORD *)&v49 = v17,
        v48 = v19,
        memmove(v19, v15, v18),
        *((_BYTE *)v48 + v18) = 0,
        v15 = s,
        s != (char *)v68) )
  {
    operator delete(v15, v68[0] + 1LL);
  }
  v57 = nullptr;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  ptr = nullptr;
  v65 = 16;
  v58 = 0;
  v62 = 0;
  v64 = 0;
  if ( (*(_BYTE *)(a4 + 58) & 4) != 0 )
  {
    v65 = 64;
  }
  else
  {
    v43 = getinf(99);
    v44 = v65 & 0xF;
    if ( (v43 & 0xFFFFFF0F) != 0 || v43 == 192 )
    {
      HIDWORD(v59) = v43;
      v65 = v44 | 0xC0;
    }
    else
    {
      HIDWORD(v59) = 0;
      v65 = v43 | v44;
    }
  }
  v20 = *(_QWORD *)(a4 + 80);
  sub_6D83C0((__int64)&s1, a1, v20);
  if ( v51 && !strcmp(s1, "instancetype") )
  {
    copy_tinfo_t(&v60);
    *(_OWORD *)v54 = 0;
    v47 = 0;
    v52 = nullptr;
    copy_tinfo_t(&v54[1]);
    v54[2] = nullptr;
    copy_tinfo_t(&v54[2]);
    v55 = 0;
    v56 = 0;
    clear_tinfo_t(&v52);
    clear_tinfo_t(&v47);
    copy_tinfo_t(v54);
    create_tinfo(&v60, 10, 10, v54);
    clear_tinfo_t(&v54[2]);
    clear_tinfo_t(&v54[1]);
    clear_tinfo_t(v54);
    if ( !(_BYTE)v60 )
    {
LABEL_9:
      v24 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    sub_6E4130((__int64 *)v54, a1, v20, v21, 0.0, a6, a7, a8, v22, v23, a11, a12);
    copy_tinfo_t(&v60);
    clear_tinfo_t(v54);
    if ( !(_BYTE)v60 )
      goto LABEL_9;
  }
  v32 = v58;
  v33 = (char *)v57;
  if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
  {
    v45 = (char *)qvector_reserve(&v57, v57, v58 + 1, 80);
    v32 = v58;
    v57 = v45;
    v33 = v45;
  }
  v34 = &v33[80 * v32];
  *(_DWORD *)v34 = 0;
  *((_QWORD *)v34 + 1) = 0;
  *((_QWORD *)v34 + 2) = 0;
  *(_QWORD *)&v58 = v58 + 1;
  *((_QWORD *)v34 + 5) = 0;
  *((_QWORD *)v34 + 8) = 0;
  *((_DWORD *)v34 + 18) = 0;
  *(_OWORD *)(v34 + 24) = 0;
  *((_OWORD *)v34 + 3) = 0;
  if ( (*(_BYTE *)(a4 + 58) & 2) != 0 )
  {
    v35 = (_DWORD *)qvector_reserve(v34 + 16, 0, 5, 1);
    *((_QWORD *)v34 + 3) = 5;
    *((_QWORD *)v34 + 2) = v35;
    *v35 = 1718379891;
    *(_BYTE *)(*((_QWORD *)v34 + 2) + 4LL) = 0;
    *(_OWORD *)v54 = 0;
    v47 = 0;
    v52 = nullptr;
    copy_tinfo_t(&v54[1]);
    v54[2] = nullptr;
    copy_tinfo_t(&v54[2]);
    v55 = 0;
    v56 = 0;
    clear_tinfo_t(&v52);
    clear_tinfo_t(&v47);
    copy_tinfo_t(v54);
    create_tinfo(v34 + 64, 10, 10, v54);
    clear_tinfo_t(&v54[2]);
    clear_tinfo_t(&v54[1]);
    clear_tinfo_t(v54);
  }
  else
  {
    sub_6DC6D0(a1, (__int64 *)v34 + 8, "id");
  }
  v36 = v58;
  v37 = (char *)v57;
  if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
  {
    v57 = (void *)qvector_reserve(&v57, v57, v58 + 1, 80);
    v37 = (char *)v57;
    v36 = v58;
  }
  v38 = &v37[80 * v36];
  *(_DWORD *)v38 = 0;
  v38 += 64;
  *((_QWORD *)v38 - 7) = 0;
  *((_QWORD *)v38 - 6) = 0;
  *((_QWORD *)v38 - 3) = 0;
  *(_QWORD *)v38 = 0;
  *((_DWORD *)v38 + 2) = 0;
  *(_OWORD *)(v38 - 40) = 0;
  *((_OWORD *)v38 - 1) = 0;
  *(_QWORD *)&v58 = v58 + 1;
  sub_6DC6D0(a1, (__int64 *)v38, "SEL");
  v24 = sub_6E7770(
          a1,
          (__int64 *)&v57,
          *(__int64 **)(a4 + 96),
          *(unsigned int *)(a4 + 104),
          a4,
          (__m128)0LL,
          a6,
          a7,
          a8,
          v39,
          v40,
          a11,
          a12);
  if ( !(_BYTE)v24 )
    goto LABEL_9;
  v47 = 0;
  create_tinfo(&v47, 12, 12, &v57);
  v41 = *a3;
  v52 = nullptr;
  v53 = 0;
  if ( (v41 & 0x100) != 0 )
    get_tinfo_pdata(&v52, v41, 0);
  memset(v54, 0, sizeof(v54));
  sub_35A790((char **)v54);
  v42 = haystack;
  if ( v54[1] )
    v42 = (const char *)v54[0];
  sub_6DF2F0(a1, &v47, 0, v42, nullptr, a2, 0);
  if ( v54[0] )
  {
    v54[1] = nullptr;
    qfree(v54[0]);
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  clear_tinfo_t(&v47);
LABEL_10:
  if ( s1 )
  {
    v51 = 0;
    qfree(s1);
  }
  if ( ptr )
  {
    *(_QWORD *)&v64 = 0;
    qfree(ptr);
  }
  cleanup_argloc(&v61);
  clear_tinfo_t(&v60);
  v25 = (char *)v57;
  if ( v57 )
  {
    v26 = v58;
    if ( (_QWORD)v58 )
    {
      v27 = 0;
      do
      {
        v28 = &v25[80 * v27];
        clear_tinfo_t(v28 + 64);
        v29 = *((void **)v28 + 5);
        if ( v29 )
        {
          *((_QWORD *)v28 + 6) = 0;
          qfree(v29);
        }
        v30 = *((void **)v28 + 2);
        if ( v30 )
        {
          *((_QWORD *)v28 + 3) = 0;
          qfree(v30);
        }
        ++v27;
        cleanup_argloc(v28);
        v25 = (char *)v57;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v58 = 0;
    qfree(v25);
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  return v24;
}
