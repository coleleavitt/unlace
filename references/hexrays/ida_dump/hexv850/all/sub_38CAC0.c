unsigned __int64 __fastcall sub_38CAC0(__int64 a1, __int64 *a2, int *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rdi
  __int64 v10; // rax
  __m128i v11; // xmm0
  void *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  unsigned int tinfo_property; // eax
  const char *v16; // rax
  bool v17; // zf
  const char *v18; // r15
  char v19; // al
  int v20; // eax
  char *v21; // rax
  const char *v22; // r14
  size_t v23; // r10
  __int64 v24; // rbx
  size_t v25; // r11
  __int64 v26; // rdx
  __int64 v27; // rsi
  size_t v28; // r9
  const void *v29; // r15
  void *v30; // rdi
  __int64 v32; // rbx
  void *v33; // r14
  void *v34; // rdi
  size_t v35; // [rsp+20h] [rbp-1A0h]
  __int64 v36; // [rsp+30h] [rbp-190h]
  size_t v37; // [rsp+30h] [rbp-190h]
  __int64 v39; // [rsp+40h] [rbp-180h] BYREF
  char v40[8]; // [rsp+48h] [rbp-178h] BYREF
  void *dest; // [rsp+50h] [rbp-170h] BYREF
  __int128 v42; // [rsp+58h] [rbp-168h]
  void *v43; // [rsp+70h] [rbp-150h] BYREF
  __int128 v44; // [rsp+78h] [rbp-148h]
  const char *v45; // [rsp+90h] [rbp-130h] BYREF
  __int128 v46; // [rsp+98h] [rbp-128h]
  __int64 (__fastcall **v47)(); // [rsp+B0h] [rbp-110h]
  __m128i v48; // [rsp+B8h] [rbp-108h]
  __int64 v49; // [rsp+C8h] [rbp-F8h]
  __int16 v50; // [rsp+D0h] [rbp-F0h]
  __int64 v51; // [rsp+D8h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-E0h] BYREF
  int v53; // [rsp+E8h] [rbp-D8h]
  void *src; // [rsp+F0h] [rbp-D0h] BYREF
  void *v55[2]; // [rsp+F8h] [rbp-C8h]
  __int128 v56; // [rsp+108h] [rbp-B8h]
  __int64 v57; // [rsp+118h] [rbp-A8h]
  __int128 v58; // [rsp+120h] [rbp-A0h]
  __int128 v59[3]; // [rsp+130h] [rbp-90h] BYREF
  __int64 v60; // [rsp+160h] [rbp-60h]
  int v61; // [rsp+168h] [rbp-58h]
  __int64 v62; // [rsp+170h] [rbp-50h]
  char v63; // [rsp+178h] [rbp-48h]
  unsigned __int64 v64; // [rsp+188h] [rbp-38h]

  v8 = *a2;
  v64 = __readfsqword(0x28u);
  if ( v8 )
  {
    a2[1] = 0;
    qfree(v8);
    *a2 = 0;
    a2[2] = 0;
  }
  v10 = *(_QWORD *)(a4 + 24);
  v11 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v51 = 0;
  v49 = v10;
  LOWORD(v10) = *(_WORD *)(a4 + 32);
  v48 = v11;
  v50 = v10;
  v47 = &off_4BA4F8;
  copy_tinfo_t(&v51, a4 + 40);
  v52 = 0;
  copy_tinfo_t(&v52, a4 + 48);
  v12 = (void *)*(unsigned int *)(a4 + 56);
  dest = nullptr;
  v43 = nullptr;
  v53 = (int)v12;
  v39 = 0;
  v42 = 0;
  v44 = 0;
  if ( (_BYTE)v52 )
  {
    if ( (v52 & 0x100) != 0 )
    {
      get_tinfo_pdata(&dest, v52, 0);
      if ( v53 == -1 )
        goto LABEL_32;
      v32 = v42;
      if ( (unsigned __int64)v42 >= 2 )
      {
        v33 = dest;
        v34 = v43;
        if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)v42 )
        {
          v43 = (void *)qvector_reserve(&v43, v43, v42, 1);
          v34 = v43;
        }
        *(_QWORD *)&v44 = v32;
        memmove(v34, v33, v32 - 1);
        *((char *)v43 + v32 - 1) = 0;
        goto LABEL_32;
      }
    }
    else if ( (_DWORD)v12 == -1 )
    {
LABEL_32:
      copy_tinfo_t(&v39, &v52);
      goto LABEL_10;
    }
    *(_QWORD *)&v44 = 0;
    goto LABEL_32;
  }
  src = v12;
  v55[0] = nullptr;
  v55[1] = nullptr;
  v57 = 0;
  v60 = 1;
  v61 = -1;
  v62 = 0;
  v63 = 0;
  v56 = 0;
  v58 = 0;
  v59[0] = 0;
  find_tinfo_udt_member(&src, v51, 1);
  v13 = v56;
  if ( !(_QWORD)v56 || (v28 = v56 - 1, (_QWORD)v56 == 1) )
  {
    *(_QWORD *)&v42 = 0;
  }
  else
  {
    v29 = v55[1];
    v30 = dest;
    if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)v56 )
    {
      v37 = v56 - 1;
      dest = (void *)qvector_reserve(&dest, dest, v56, 1);
      v28 = v37;
      v30 = dest;
    }
    *(_QWORD *)&v42 = v13;
    memmove(v30, v29, v28);
    *((char *)dest + v13 - 1) = 0;
  }
  copy_tinfo_t(&v39, &v51);
  clear_tinfo_t(v59);
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  if ( v55[1] )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55[1]);
  }
LABEL_10:
  v14 = v39;
  v45 = nullptr;
  v46 = 0;
  if ( (v39 & 0x100) != 0 )
  {
    get_tinfo_pdata(&v45, v39, 0);
    v14 = v39;
  }
  tinfo_property = get_tinfo_property(v14, 8);
  if ( tinfo_property && (unsigned __int8)get_numbered_type(0, tinfo_property, v40, &src, 0, 0, 0) )
    deserialize_tinfo(&v39, 0, v40, &src, 0, 0);
  src = nullptr;
  v16 = s1;
  *(_OWORD *)v55 = 0;
  if ( (_QWORD)v46 )
    v16 = v45;
  print_tinfo(&src, 0, 2, 0, 15, &v39, v16, 0);
  if ( (unsigned __int64)v44 > 1 )
    sub_F5F10(a2, (__int64)"CAPTION %s\n", (const char *)v43);
  if ( (unsigned __int64)v42 > 1 )
    sub_F5F10(a2, (__int64)"HIGHLIGHT %s\n", (const char *)dest);
  v17 = v55[0] == nullptr;
  *a3 = 0;
  if ( !v17 )
  {
    v18 = (const char *)src;
    v19 = *(_BYTE *)src;
    while ( v19 )
    {
      v21 = strchr(v18, 10);
      v22 = v21 + 1;
      if ( !v21 )
        v22 = &v18[strlen(v18)];
      v23 = v22 - v18;
      v24 = a2[1];
      v25 = v22 - v18;
      if ( v24 )
      {
        --v24;
        v25 = v23 + v24;
      }
      v26 = v25 + 1;
      v27 = *a2;
      if ( a2[2] < v25 + 1 )
      {
        v35 = v25;
        v36 = v25 + 1;
        v27 = qvector_reserve(a2, v27, v26, 1);
        v25 = v35;
        v23 = v22 - v18;
        v26 = v36;
        *a2 = v27;
      }
      a2[1] = v26;
      *(_BYTE *)(v27 + v25) = 0;
      memmove((void *)(*a2 + v24), v18, v23);
      v20 = *a3 + 1;
      *a3 = v20;
      if ( v20 > a6 )
        break;
      v19 = *v22;
      v18 = v22;
    }
  }
  if ( src )
  {
    v55[0] = nullptr;
    qfree(src);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  clear_tinfo_t(&v39);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  if ( dest )
  {
    *(_QWORD *)&v42 = 0;
    qfree(dest);
  }
  v47 = &off_4BA4F8;
  clear_tinfo_t(&v52);
  clear_tinfo_t(&v51);
  return v64 - __readfsqword(0x28u);
}
