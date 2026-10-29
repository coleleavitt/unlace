__int64 __fastcall sub_8A38C0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r12
  __int16 v4; // cx
  const char *v5; // r13
  unsigned __int64 v6; // r12
  size_t v7; // r14
  __int64 v8; // r13
  __int64 v9; // r15
  _BYTE *v10; // rsi
  void *v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rbx
  void *v18; // rsi
  const char *v20; // rax
  const char *v21; // rbx
  size_t v22; // rax
  size_t v23; // r13
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r13
  const void *v27; // r8
  void *v28; // rdi
  const void *v29; // r8
  void *v30; // rdi
  const void *v31; // r8
  void *v32; // rdi
  void *v33; // rdi
  size_t v34; // r15
  const void *v35; // rbx
  void *v36; // rdi
  __int64 v37; // rax
  const void *v38; // r8
  void *v39; // rdi
  const void *v40; // r8
  void *v41; // rdi
  void *v42; // [rsp+8h] [rbp-130h]
  void *v43; // [rsp+8h] [rbp-130h]
  void *v44; // [rsp+8h] [rbp-130h]
  void *v45; // [rsp+8h] [rbp-130h]
  void *v46; // [rsp+8h] [rbp-130h]
  void *v47; // [rsp+8h] [rbp-130h]
  void *v48; // [rsp+10h] [rbp-128h] BYREF
  __int128 v49; // [rsp+18h] [rbp-120h]
  void *src; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v51[24]; // [rsp+38h] [rbp-100h] BYREF
  __int64 v52; // [rsp+50h] [rbp-E8h]
  void *v53; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v54; // [rsp+60h] [rbp-D8h]
  void *v55; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v56; // [rsp+78h] [rbp-C0h]
  void *dest; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v58; // [rsp+90h] [rbp-A8h]
  __int64 v59; // [rsp+A0h] [rbp-98h]
  void *v60; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v61; // [rsp+B0h] [rbp-88h]
  void *v62; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v63; // [rsp+C8h] [rbp-70h]
  __int64 v64; // [rsp+D8h] [rbp-60h]
  __int64 v65; // [rsp+E0h] [rbp-58h]
  __int64 v66; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+F8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( (*(_DWORD *)&debug & 0x100000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 > 1 )
    {
      v4 = *(_WORD *)(a1 + 64);
      v48 = nullptr;
      src = nullptr;
      v5 = *(const char **)(a1 + 40);
      v49 = 0;
      *(_OWORD *)v51 = 0;
      if ( v4 )
      {
        if ( *v5 != 91 )
          strchr(v5, 58);
        sub_3573A0((char **)&src);
      }
      else
      {
        src = (void *)qvector_reserve(&src, 0, v3, 1);
        *(_QWORD *)v51 = v3;
        memmove(src, v5, v3 - 1);
        *((char *)src + v3 - 1) = 0;
      }
      v6 = *(_QWORD *)v51;
      if ( *(_QWORD *)v51 )
      {
        v7 = *(_QWORD *)v51 - 1LL;
        if ( *(_QWORD *)v51 != 1 )
        {
          v8 = v49;
          v9 = *(_QWORD *)v51 - 1LL;
          if ( (_QWORD)v49 )
          {
            v8 = v49 - 1;
            v9 = v7 + v49 - 1;
            v6 = *(_QWORD *)v51 + v49 - 1;
          }
          v10 = v48;
          if ( *((_QWORD *)&v49 + 1) < v6 )
          {
            v48 = (void *)qvector_reserve(&v48, v48, v6, 1);
            v10 = v48;
          }
          *(_QWORD *)&v49 = v6;
          v10[v9] = 0;
          memcpy((char *)v48 + v8, src, v7);
        }
      }
      if ( src )
      {
        *(_QWORD *)v51 = 0;
        qfree(src);
      }
      sub_383DA0();
    }
    sub_383DA0();
  }
  v11 = (void *)sub_79DA20((*(_DWORD *)(a1 + 200) & 1) == 0);
  v12 = *(_QWORD *)(a1 + 48);
  src = off_C0;
  v48 = v11;
  memset(v51, 0, sizeof(v51));
  v52 = 0;
  v53 = nullptr;
  v55 = nullptr;
  dest = nullptr;
  v59 = 0;
  v60 = nullptr;
  v62 = nullptr;
  v64 = 0;
  v65 = 0;
  v66 = 0xFFFFFFFFLL;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v61 = 0;
  v63 = 0;
  if ( v12 >= 2 )
  {
    v42 = *(void **)(a1 + 40);
    *(_QWORD *)v51 = qvector_reserve(v51, 0, v12, 1);
    *(_QWORD *)&v51[8] = v12;
    memmove(*(void **)v51, v42, v12 - 1);
    *(_BYTE *)(*(_QWORD *)v51 + v12 - 1) = 0;
  }
  v13 = *(_QWORD *)(a1 + 80);
  LOWORD(v52) = *(_WORD *)(a1 + 64);
  if ( v13 > 1 )
  {
    v29 = *(const void **)(a1 + 72);
    v30 = v53;
    if ( *((_QWORD *)&v54 + 1) < v13 )
    {
      v44 = *(void **)(a1 + 72);
      v53 = (void *)qvector_reserve(&v53, v53, v13, 1);
      v29 = v44;
      v30 = v53;
    }
    *(_QWORD *)&v54 = v13;
    memmove(v30, v29, v13 - 1);
    *((char *)v53 + v13 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v54 = 0;
  }
  v14 = *(_QWORD *)(a1 + 104);
  if ( v14 > 1 )
  {
    v31 = *(const void **)(a1 + 96);
    v32 = v55;
    if ( *((_QWORD *)&v56 + 1) < v14 )
    {
      v43 = *(void **)(a1 + 96);
      v55 = (void *)qvector_reserve(&v55, v55, *(_QWORD *)(a1 + 104), 1);
      v31 = v43;
      v32 = v55;
    }
    *(_QWORD *)&v56 = v14;
    memmove(v32, v31, v14 - 1);
    *((char *)v55 + v14 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v56 = 0;
  }
  if ( (*(_BYTE *)(a1 + 201) & 4) == 0 )
    goto LABEL_24;
  v24 = *(_QWORD *)(a1 + 128);
  if ( v24 > 1 )
  {
    v27 = *(const void **)(a1 + 120);
    v28 = dest;
    if ( *((_QWORD *)&v58 + 1) < v24 )
    {
      v45 = *(void **)(a1 + 120);
      dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a1 + 128), 1);
      v27 = v45;
      v28 = dest;
    }
    *(_QWORD *)&v58 = v24;
    memmove(v28, v27, v24 - 1);
    *((char *)dest + v24 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v58 = 0;
  }
  v25 = *(_QWORD *)(a1 + 160);
  LOWORD(v59) = *(_WORD *)(a1 + 144);
  if ( v25 > 1 )
  {
    v40 = *(const void **)(a1 + 152);
    v41 = v60;
    if ( *((_QWORD *)&v61 + 1) < v25 )
    {
      v47 = *(void **)(a1 + 152);
      v60 = (void *)qvector_reserve(&v60, v60, v25, 1);
      v40 = v47;
      v41 = v60;
    }
    *(_QWORD *)&v61 = v25;
    memmove(v41, v40, v25 - 1);
    *((char *)v60 + v25 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v61 = 0;
  }
  v26 = *(_QWORD *)(a1 + 184);
  if ( v26 > 1 )
  {
    v38 = *(const void **)(a1 + 176);
    v39 = v62;
    if ( *((_QWORD *)&v63 + 1) < v26 )
    {
      v46 = *(void **)(a1 + 176);
      v62 = (void *)qvector_reserve(&v62, v62, *(_QWORD *)(a1 + 184), 1);
      v38 = v46;
      v39 = v62;
    }
    *(_QWORD *)&v63 = v26;
    memmove(v39, v38, v26 - 1);
    *((char *)v62 + v26 - 1) = 0;
LABEL_24:
    if ( (unsigned __int64)v58 <= 1 )
      goto LABEL_27;
    v15 = *(_QWORD *)(a1 + 184);
    v16 = a1 + 32;
    if ( v15 <= 1 )
      goto LABEL_26;
    v35 = *(const void **)(a1 + 176);
    v36 = v62;
    if ( *((_QWORD *)&v63 + 1) < v15 )
    {
      v62 = (void *)qvector_reserve(&v62, v62, v15, 1);
      v36 = v62;
    }
    *(_QWORD *)&v63 = v15;
    memmove(v36, v35, v15 - 1);
    *((char *)v62 + v15 - 1) = 0;
    goto LABEL_27;
  }
  v16 = a1 + 32;
  *(_QWORD *)&v63 = 0;
  if ( (unsigned __int64)v58 > 1 )
LABEL_26:
    vcred_do_load_proxy_password(v16, &v62, 0);
LABEL_27:
  if ( (unsigned __int8)sub_79DA90((__int64)v48) )
  {
    v17 = operator new(0x168u);
    v18 = v48;
    *(_QWORD *)(v17 + 8) = 0;
    *(_QWORD *)(v17 + 16) = 0;
    *(_QWORD *)v17 = &unk_2BD2600;
    *(_QWORD *)(v17 + 24) = 0;
    *(_DWORD *)(v17 + 32) = 0;
    sub_8A0F10(v17 + 40, (__int64)v18, v17);
    *(_QWORD *)v17 = &off_2BD2230;
    *(_QWORD *)(v17 + 40) = &off_2BD2430;
  }
  else
  {
    v20 = (const char *)sub_79DA70((__int64)v48);
    v21 = v20;
    if ( v20 && (v22 = strlen(v20), (v23 = v22) != 0) )
    {
      v33 = (void *)*a2;
      v34 = v22 + 1;
      if ( a2[2] < v22 + 1 )
      {
        v37 = qvector_reserve(a2, *a2, v22 + 1, 1);
        *a2 = v37;
        v33 = (void *)v37;
      }
      a2[1] = v34;
      memmove(v33, v21, v23);
      *(_BYTE *)(*a2 + v23) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    sub_79DB00(&v48);
    v17 = 0;
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  if ( dest )
  {
    *(_QWORD *)&v58 = 0;
    qfree(dest);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  if ( *(_QWORD *)v51 )
  {
    *(_QWORD *)&v51[8] = 0;
    qfree(*(void **)v51);
  }
  return v17;
}

