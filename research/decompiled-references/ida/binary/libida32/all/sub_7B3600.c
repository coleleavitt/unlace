__int64 __fastcall sub_7B3600(_QWORD **a1, int a2, __int64 *a3)
{
  _QWORD *v5; // r14
  __int64 *v6; // rbx
  __int64 license_manager; // rax
  __int64 v8; // r15
  const void *v9; // rsi
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  __int64 v12; // r13
  bool v13; // cc
  size_t v14; // r15
  __int16 v15; // ax
  __int64 v16; // rax
  size_t v17; // r15
  __int16 v18; // cx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r15
  size_t v21; // r8
  unsigned __int64 v22; // r15
  size_t v23; // r8
  _QWORD *v24; // r15
  unsigned __int64 v25; // r8
  const char *v26; // r9
  const char *v27; // r8
  int v28; // eax
  bool v29; // r14
  char v30; // r13
  void (__fastcall *v31)(_QWORD *); // rdx
  __int64 v33; // rax
  void *v34; // r8
  size_t v35; // r9
  const char *v36; // rax
  const char *v37; // r12
  size_t v38; // rax
  size_t v39; // r13
  const void *v40; // r9
  void *v41; // rax
  const void *v42; // r9
  void *v43; // rax
  void *v44; // rdi
  void *v45; // rdi
  size_t v46; // r14
  __int64 v47; // rax
  int *v48; // [rsp+0h] [rbp-1A0h]
  unsigned __int8 v49; // [rsp+0h] [rbp-1A0h]
  unsigned __int8 v50; // [rsp+0h] [rbp-1A0h]
  __int64 v51; // [rsp+8h] [rbp-198h]
  __int16 v52; // [rsp+10h] [rbp-190h]
  size_t v53; // [rsp+10h] [rbp-190h]
  size_t v54; // [rsp+10h] [rbp-190h]
  void *v55; // [rsp+18h] [rbp-188h]
  void *v56; // [rsp+18h] [rbp-188h]
  void *v57; // [rsp+18h] [rbp-188h]
  size_t v58; // [rsp+20h] [rbp-180h]
  size_t v59; // [rsp+20h] [rbp-180h]
  size_t v60; // [rsp+20h] [rbp-180h]
  __int64 v61; // [rsp+30h] [rbp-170h] BYREF
  void *v62; // [rsp+38h] [rbp-168h] BYREF
  __int128 v63; // [rsp+40h] [rbp-160h]
  void *v64; // [rsp+58h] [rbp-148h] BYREF
  __int128 v65; // [rsp+60h] [rbp-140h]
  void *src; // [rsp+78h] [rbp-128h] BYREF
  size_t n[2]; // [rsp+80h] [rbp-120h]
  __int16 v68; // [rsp+90h] [rbp-110h]
  __m256i v69; // [rsp+98h] [rbp-108h] BYREF
  __int16 v70; // [rsp+B8h] [rbp-E8h]
  void *v71; // [rsp+C0h] [rbp-E0h]
  __int128 v72; // [rsp+C8h] [rbp-D8h]
  void *v73; // [rsp+D8h] [rbp-C8h]
  __int128 v74; // [rsp+E0h] [rbp-C0h]
  void *v75; // [rsp+F0h] [rbp-B0h] BYREF
  __int128 v76; // [rsp+F8h] [rbp-A8h]
  __int16 v77; // [rsp+108h] [rbp-98h]
  void *v78; // [rsp+110h] [rbp-90h] BYREF
  __int128 v79; // [rsp+118h] [rbp-88h]
  void *dest; // [rsp+128h] [rbp-78h] BYREF
  __int128 v81; // [rsp+130h] [rbp-70h]
  __int64 v82; // [rsp+140h] [rbp-60h]
  __int64 v83; // [rsp+148h] [rbp-58h]
  int v84; // [rsp+150h] [rbp-50h]
  unsigned __int64 v85; // [rsp+160h] [rbp-40h]

  v5 = *a1;
  v85 = __readfsqword(0x28u);
  v6 = a3;
  v63 = 0;
  v62 = nullptr;
  if ( !a3 )
    v6 = (__int64 *)&v62;
  license_manager = get_license_manager();
  v8 = license_manager;
  if ( !license_manager
    || (v9 = nullptr,
        (v48 = (int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(
                        license_manager,
                        0,
                        0)) == nullptr) )
  {
    LODWORD(v5) = 0;
    goto LABEL_64;
  }
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 104LL);
  if ( v10 == sub_383B00 )
    v51 = v8 + 360;
  else
    v51 = v10(v8);
  v11 = sub_5E4460(a2);
  v12 = v11;
  src = nullptr;
  v68 = 0;
  *(_OWORD *)n = 0;
  v13 = *(_QWORD *)(v11 + 16) <= 1u;
  memset(&v69, 0, 24);
  if ( v13 )
  {
    v9 = nullptr;
    v33 = qvector_reserve(&v69, 0, 10, 1);
    v69.m256i_i64[0] = v33;
    v69.m256i_i64[1] = 10;
    *(_QWORD *)v33 = 0x736F686C61636F6CLL;
    *(_BYTE *)(v33 + 8) = 116;
    v34 = (void *)v69.m256i_i64[0];
    *(_BYTE *)(v69.m256i_i64[0] + 9) = 0;
    v14 = v69.m256i_u64[1];
    if ( v69.m256i_i64[1] )
    {
      v35 = v69.m256i_i64[1] - 1;
      if ( v69.m256i_i64[1] != 1 )
      {
LABEL_91:
        v44 = src;
        if ( n[1] < v14 )
        {
          v57 = v34;
          v54 = v35;
          src = (void *)qvector_reserve(&src, src, v14, 1);
          v34 = v57;
          v44 = src;
          v35 = v54;
        }
        v9 = v34;
        v53 = v35;
        n[0] = v14;
        memmove(v44, v34, v35);
        *((_BYTE *)src + v53) = 0;
        v34 = (void *)v69.m256i_i64[0];
        goto LABEL_70;
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(v11 + 16);
    if ( !v14 )
    {
      n[0] = 0;
      goto LABEL_10;
    }
    v69.m256i_i64[0] = qalloc_or_throw(*(_QWORD *)(v11 + 16), nullptr);
    v69.m256i_i64[2] = v14;
    v9 = *(const void **)(v12 + 8);
    memcpy((void *)v69.m256i_i64[0], v9, v14);
    v69.m256i_i64[1] = v14;
    v34 = (void *)v69.m256i_i64[0];
    v35 = v14 - 1;
    if ( v14 != 1 )
      goto LABEL_91;
  }
  n[0] = 0;
LABEL_70:
  if ( v34 )
  {
    v69.m256i_i64[1] = 0;
    qfree(v34);
  }
LABEL_10:
  v15 = *(_WORD *)(v12 + 32);
  if ( !v15 )
    v15 = 443;
  v68 = v15;
  if ( (*(_DWORD *)&debug & 0x800000) != 0 )
  {
    memset(&v69, 0, 24);
    if ( n[0] )
    {
      if ( *(_BYTE *)src != 91 )
        strchr((const char *)src, 58);
    }
    sub_3573A0((char **)&v69);
    sub_383DA0();
  }
  v16 = sub_79DA20((*(_DWORD *)(v12 + 168) & 1) == 0);
  v17 = n[0];
  v61 = v16;
  v18 = v68;
  v69.m256i_i64[0] = 192;
  memset(&v69.m256i_u64[1], 0, 24);
  if ( n[0] )
  {
    v52 = v68;
    v69.m256i_i64[1] = qalloc_or_throw(n[0], (const char *)v9);
    v69.m256i_i64[3] = v17;
    memcpy((void *)v69.m256i_i64[1], src, v17);
    v69.m256i_i64[2] = v17;
    v18 = v52;
  }
  v70 = v18;
  v71 = nullptr;
  v73 = nullptr;
  v75 = nullptr;
  v77 = 0;
  v78 = nullptr;
  dest = nullptr;
  v82 = 0;
  v83 = 0;
  v84 = -1;
  v72 = 0;
  v74 = 0;
  v76 = 0;
  v79 = 0;
  v81 = 0;
  if ( &v75 != (void **)(v12 + 88) )
  {
    v19 = *(_QWORD *)(v12 + 96);
    if ( v19 > 1 )
    {
      v55 = *(void **)(v12 + 88);
      v75 = (void *)qvector_reserve(&v75, 0, *(_QWORD *)(v12 + 96), 1);
      *(_QWORD *)&v76 = v19;
      memmove(v75, v55, v19 - 1);
      *((char *)v75 + v19 - 1) = 0;
    }
  }
  v77 = *(_WORD *)(v12 + 112);
  if ( &v78 != (void **)(v12 + 120) )
  {
    v20 = *(_QWORD *)(v12 + 128);
    if ( v20 && (v21 = v20 - 1, v20 != 1) )
    {
      v42 = *(const void **)(v12 + 120);
      v43 = v78;
      if ( *((_QWORD *)&v79 + 1) < v20 )
      {
        v59 = *(_QWORD *)(v12 + 120);
        v43 = (void *)qvector_reserve(&v78, v78, *(_QWORD *)(v12 + 128), 1);
        v78 = v43;
        v42 = (const void *)v59;
        v21 = v20 - 1;
      }
      *(_QWORD *)&v79 = v20;
      memmove(v43, v42, v21);
      *((char *)v78 + v20 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v79 = 0;
    }
  }
  if ( &dest != (void **)(v12 + 144) )
  {
    v22 = *(_QWORD *)(v12 + 152);
    if ( v22 && (v23 = v22 - 1, v22 != 1) )
    {
      v40 = *(const void **)(v12 + 144);
      v41 = dest;
      if ( *((_QWORD *)&v81 + 1) < v22 )
      {
        v60 = *(_QWORD *)(v12 + 144);
        v41 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v12 + 152), 1);
        dest = v41;
        v40 = (const void *)v60;
        v23 = v22 - 1;
      }
      *(_QWORD *)&v81 = v22;
      memmove(v41, v40, v23);
      *((char *)dest + v22 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v81 = 0;
    }
  }
  if ( !(unsigned __int8)sub_79DA90(v61) )
  {
    v36 = (const char *)sub_79DA70(v61);
    v37 = v36;
    if ( v36 && (v38 = strlen(v36), (v39 = v38) != 0) )
    {
      v45 = (void *)*v6;
      v46 = v38 + 1;
      if ( v6[2] < v38 + 1 )
      {
        v47 = qvector_reserve(v6, *v6, v38 + 1, 1);
        *v6 = v47;
        v45 = (void *)v47;
      }
      v6[1] = v46;
      memmove(v45, v37, v39);
      *(_BYTE *)(*v6 + v39) = 0;
    }
    else
    {
      v6[1] = 0;
    }
    sub_79DB00(&v61);
    if ( a2 != 2 )
LABEL_48:
      sub_365330();
    LODWORD(v5) = 0;
    goto LABEL_50;
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, v61);
    v24 = v5;
  }
  else
  {
    v24 = (_QWORD *)operator new(0xB8u);
    sub_7B1C40((__int64)v24, a2, v61);
  }
  v25 = *(_QWORD *)(v12 + 72);
  v64 = nullptr;
  v65 = 0;
  if ( v25 > 1 )
  {
    if ( &v64 == (void **)(v12 + 64) )
      goto LABEL_73;
    v58 = v25;
    v56 = *(void **)(v12 + 64);
    v64 = (void *)qvector_reserve(&v64, 0, v25, 1);
    *(_QWORD *)&v65 = v58;
    memmove(v64, v56, v58 - 1);
    *((char *)v64 + v58 - 1) = 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64, void **, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v64, v6);
  }
  if ( !(_QWORD)v65 )
  {
LABEL_73:
    v26 = haystack;
    goto LABEL_35;
  }
  v26 = (const char *)v64;
LABEL_35:
  v27 = haystack;
  if ( *(_QWORD *)(v12 + 48) )
    v27 = *(const char **)(v12 + 40);
  v28 = sub_7B1D00((__int64)v24, v51, v48, v6, v27, v26);
  v29 = v5 == nullptr;
  v30 = v28 ^ 1;
  if ( (unsigned __int8)v28 != 1 && v29 )
  {
    if ( v24 )
    {
      v49 = v28;
      v31 = *(void (__fastcall **)(_QWORD *))(*v24 + 16LL);
      if ( v31 == sub_7B0A50 )
      {
        sub_7B0940(v24);
        operator delete(v24, 0xB8u);
      }
      else
      {
        v31(v24);
      }
      v28 = v49;
    }
    v24 = nullptr;
  }
  if ( v64 )
  {
    v50 = v28;
    *(_QWORD *)&v65 = 0;
    qfree(v64);
    v28 = v50;
  }
  if ( a2 != 2 && v30 )
    goto LABEL_48;
  LOBYTE(v5) = v28 & v29;
  if ( (_BYTE)v5 )
    *a1 = v24;
  else
    LODWORD(v5) = v28;
LABEL_50:
  if ( dest )
  {
    *(_QWORD *)&v81 = 0;
    qfree(dest);
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  if ( v69.m256i_i64[1] )
  {
    v69.m256i_i64[2] = 0;
    qfree((void *)v69.m256i_i64[1]);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
LABEL_64:
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  return (unsigned int)v5;
}

