__int64 __fastcall sub_33980(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  unsigned __int64 v16; // r12
  __int16 v17; // cx
  const char *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned __int64 v25; // r12
  size_t v26; // r14
  __int64 v27; // r13
  __int64 v28; // r15
  _BYTE *v29; // rsi
  void *v30; // r12
  const char *v31; // rsi
  void *v32; // rax
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rbx
  void *v39; // rsi
  const char *v41; // rax
  const char *v42; // rbx
  size_t v43; // rax
  size_t v44; // r13
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // r13
  const void *v48; // r8
  void *v49; // rdi
  const void *v50; // r8
  void *v51; // rdi
  const void *v52; // r8
  void *v53; // rdi
  void *v54; // rdi
  size_t v55; // r15
  const void *v56; // rbx
  void *v57; // rdi
  __int64 v58; // rax
  const void *v59; // r8
  void *v60; // rdi
  const void *v61; // r8
  void *v62; // rdi
  char v63; // [rsp+0h] [rbp-138h]
  void *v64; // [rsp+8h] [rbp-130h]
  void *v65; // [rsp+8h] [rbp-130h]
  void *v66; // [rsp+8h] [rbp-130h]
  void *v67; // [rsp+8h] [rbp-130h]
  void *v68; // [rsp+8h] [rbp-130h]
  void *v69; // [rsp+8h] [rbp-130h]
  void *v70; // [rsp+10h] [rbp-128h] BYREF
  __int128 v71; // [rsp+18h] [rbp-120h]
  void *src; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v73[24]; // [rsp+38h] [rbp-100h] BYREF
  __int64 v74; // [rsp+50h] [rbp-E8h]
  void *v75; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v76; // [rsp+60h] [rbp-D8h]
  void *v77; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v78; // [rsp+78h] [rbp-C0h]
  void *dest; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v80; // [rsp+90h] [rbp-A8h]
  __int64 v81; // [rsp+A0h] [rbp-98h]
  void *v82; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v83; // [rsp+B0h] [rbp-88h]
  void *v84; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v85; // [rsp+C8h] [rbp-70h]
  __int64 v86; // [rsp+D8h] [rbp-60h]
  __int64 v87; // [rsp+E0h] [rbp-58h]
  __int64 v88; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v89; // [rsp+F8h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  if ( (dword_1671A4 & 0x100000) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 48);
    if ( v16 <= 1 )
    {
      sub_2A380(
        (int)"vault: trying to connect to %s\n",
        (__int64)haystack,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        v63);
    }
    else
    {
      v17 = *(_WORD *)(a1 + 64);
      v70 = nullptr;
      src = nullptr;
      v18 = *(const char **)(a1 + 40);
      v71 = 0;
      *(_OWORD *)v73 = 0;
      if ( v17 )
      {
        if ( *v18 != 91 )
          strchr(v18, 58);
        sub_17D80((char **)&src);
      }
      else
      {
        src = (void *)sub_96080(&src, 0, v16, 1);
        *(_QWORD *)v73 = v16;
        memmove(src, v18, v16 - 1);
        *((char *)src + v16 - 1) = 0;
      }
      v25 = *(_QWORD *)v73;
      if ( *(_QWORD *)v73 )
      {
        v26 = *(_QWORD *)v73 - 1LL;
        if ( *(_QWORD *)v73 != 1 )
        {
          v27 = v71;
          v28 = *(_QWORD *)v73 - 1LL;
          if ( (_QWORD)v71 )
          {
            v27 = v71 - 1;
            v28 = v26 + v71 - 1;
            v25 = *(_QWORD *)v73 + v71 - 1;
          }
          v29 = v70;
          if ( *((_QWORD *)&v71 + 1) < v25 )
          {
            v70 = (void *)sub_96080(&v70, v70, v25, 1);
            v29 = v70;
          }
          *(_QWORD *)&v71 = v25;
          v29[v28] = 0;
          memcpy((char *)v70 + v27, src, v26);
        }
      }
      if ( src )
      {
        *(_QWORD *)v73 = 0;
        j__free(src);
      }
      v30 = v70;
      v31 = haystack;
      if ( (_QWORD)v71 )
        v31 = (const char *)v70;
      sub_2A380(
        (int)"vault: trying to connect to %s\n",
        (__int64)v31,
        v19,
        v20,
        v21,
        v22,
        (__m128)0LL,
        a8,
        a9,
        a10,
        v23,
        v24,
        a13,
        a14,
        v63);
      if ( v30 )
        j__free(v30);
    }
  }
  v32 = (void *)sub_6CAE0((*(_DWORD *)(a1 + 200) & 1) == 0);
  v33 = *(_QWORD *)(a1 + 48);
  src = &qword_C0;
  v70 = v32;
  memset(v73, 0, sizeof(v73));
  v74 = 0;
  v75 = nullptr;
  v77 = nullptr;
  dest = nullptr;
  v81 = 0;
  v82 = nullptr;
  v84 = nullptr;
  v86 = 0;
  v87 = 0;
  v88 = 0xFFFFFFFFLL;
  v76 = 0;
  v78 = 0;
  v80 = 0;
  v83 = 0;
  v85 = 0;
  if ( v33 >= 2 )
  {
    v64 = *(void **)(a1 + 40);
    *(_QWORD *)v73 = sub_96080(v73, 0, v33, 1);
    *(_QWORD *)&v73[8] = v33;
    memmove(*(void **)v73, v64, v33 - 1);
    *(_BYTE *)(*(_QWORD *)v73 + v33 - 1) = 0;
  }
  v34 = *(_QWORD *)(a1 + 80);
  LOWORD(v74) = *(_WORD *)(a1 + 64);
  if ( v34 > 1 )
  {
    v50 = *(const void **)(a1 + 72);
    v51 = v75;
    if ( *((_QWORD *)&v76 + 1) < v34 )
    {
      v66 = *(void **)(a1 + 72);
      v75 = (void *)sub_96080(&v75, v75, v34, 1);
      v50 = v66;
      v51 = v75;
    }
    *(_QWORD *)&v76 = v34;
    memmove(v51, v50, v34 - 1);
    *((char *)v75 + v34 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v76 = 0;
  }
  v35 = *(_QWORD *)(a1 + 104);
  if ( v35 > 1 )
  {
    v52 = *(const void **)(a1 + 96);
    v53 = v77;
    if ( *((_QWORD *)&v78 + 1) < v35 )
    {
      v65 = *(void **)(a1 + 96);
      v77 = (void *)sub_96080(&v77, v77, *(_QWORD *)(a1 + 104), 1);
      v52 = v65;
      v53 = v77;
    }
    *(_QWORD *)&v78 = v35;
    memmove(v53, v52, v35 - 1);
    *((char *)v77 + v35 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v78 = 0;
  }
  if ( (*(_BYTE *)(a1 + 201) & 4) == 0 )
    goto LABEL_27;
  v45 = *(_QWORD *)(a1 + 128);
  if ( v45 > 1 )
  {
    v48 = *(const void **)(a1 + 120);
    v49 = dest;
    if ( *((_QWORD *)&v80 + 1) < v45 )
    {
      v67 = *(void **)(a1 + 120);
      dest = (void *)sub_96080(&dest, dest, *(_QWORD *)(a1 + 128), 1);
      v48 = v67;
      v49 = dest;
    }
    *(_QWORD *)&v80 = v45;
    memmove(v49, v48, v45 - 1);
    *((char *)dest + v45 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v80 = 0;
  }
  v46 = *(_QWORD *)(a1 + 160);
  LOWORD(v81) = *(_WORD *)(a1 + 144);
  if ( v46 > 1 )
  {
    v61 = *(const void **)(a1 + 152);
    v62 = v82;
    if ( *((_QWORD *)&v83 + 1) < v46 )
    {
      v69 = *(void **)(a1 + 152);
      v82 = (void *)sub_96080(&v82, v82, v46, 1);
      v61 = v69;
      v62 = v82;
    }
    *(_QWORD *)&v83 = v46;
    memmove(v62, v61, v46 - 1);
    *((char *)v82 + v46 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v83 = 0;
  }
  v47 = *(_QWORD *)(a1 + 184);
  if ( v47 > 1 )
  {
    v59 = *(const void **)(a1 + 176);
    v60 = v84;
    if ( *((_QWORD *)&v85 + 1) < v47 )
    {
      v68 = *(void **)(a1 + 176);
      v84 = (void *)sub_96080(&v84, v84, *(_QWORD *)(a1 + 184), 1);
      v59 = v68;
      v60 = v84;
    }
    *(_QWORD *)&v85 = v47;
    memmove(v60, v59, v47 - 1);
    *((char *)v84 + v47 - 1) = 0;
LABEL_27:
    if ( (unsigned __int64)v80 <= 1 )
      goto LABEL_30;
    v36 = *(_QWORD *)(a1 + 184);
    v37 = a1 + 32;
    if ( v36 <= 1 )
      goto LABEL_29;
    v56 = *(const void **)(a1 + 176);
    v57 = v84;
    if ( *((_QWORD *)&v85 + 1) < v36 )
    {
      v84 = (void *)sub_96080(&v84, v84, v36, 1);
      v57 = v84;
    }
    *(_QWORD *)&v85 = v36;
    memmove(v57, v56, v36 - 1);
    *((char *)v84 + v36 - 1) = 0;
    goto LABEL_30;
  }
  v37 = a1 + 32;
  *(_QWORD *)&v85 = 0;
  if ( (unsigned __int64)v80 > 1 )
LABEL_29:
    sub_72610(v37, &v84, 0);
LABEL_30:
  if ( (unsigned __int8)sub_6CB50(v70, &src) )
  {
    v38 = operator new(0x168u);
    v39 = v70;
    *(_QWORD *)(v38 + 8) = 0;
    *(_QWORD *)(v38 + 16) = 0;
    *(_QWORD *)v38 = &qword_1644F0[2];
    *(_QWORD *)(v38 + 24) = 0;
    *(_DWORD *)(v38 + 32) = 0;
    sub_30FD0(v38 + 40, (__int64)v39, v38);
    *(_QWORD *)v38 = &off_1641E8;
    *(_QWORD *)(v38 + 40) = &off_1643E8;
  }
  else
  {
    v41 = (const char *)sub_6CB30(v70);
    v42 = v41;
    if ( v41 && (v43 = strlen(v41), (v44 = v43) != 0) )
    {
      v54 = (void *)*a2;
      v55 = v43 + 1;
      if ( a2[2] < v43 + 1 )
      {
        v58 = sub_96080(a2, *a2, v43 + 1, 1);
        *a2 = v58;
        v54 = (void *)v58;
      }
      a2[1] = v55;
      memmove(v54, v42, v44);
      *(_BYTE *)(*a2 + v44) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    sub_6CBC0(&v70, 0xFFFFFFFFLL);
    v38 = 0;
  }
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    j__free(v84);
  }
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    j__free(v82);
  }
  if ( dest )
  {
    *(_QWORD *)&v80 = 0;
    j__free(dest);
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    j__free(v77);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    j__free(v75);
  }
  if ( *(_QWORD *)v73 )
  {
    *(_QWORD *)&v73[8] = 0;
    j__free(*(void **)v73);
  }
  return v38;
}

