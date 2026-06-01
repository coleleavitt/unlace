__int64 __fastcall sub_7D78C0(_QWORD **a1, int a2, __int64 *a3)
{
  _QWORD *v4; // r14
  __int64 *v5; // rbx
  __int64 license_manager; // rax
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  __int64 v10; // r13
  bool v11; // cc
  size_t v12; // r15
  __int16 v13; // ax
  __int64 v14; // rax
  size_t v15; // r15
  __int16 v16; // cx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r15
  size_t v19; // r8
  unsigned __int64 v20; // r15
  size_t v21; // r8
  _QWORD *v22; // r15
  unsigned __int64 v23; // r8
  const char *v24; // r9
  const char *v25; // r8
  int v26; // eax
  bool v27; // r14
  char v28; // r13
  void (__fastcall *v29)(_QWORD *); // rdx
  __int64 v31; // rax
  void *v32; // r8
  size_t v33; // r9
  const char *v34; // rax
  const char *v35; // r12
  size_t v36; // rax
  size_t v37; // r13
  const void *v38; // r9
  void *v39; // rax
  const void *v40; // r9
  void *v41; // rax
  void *v42; // rdi
  void *v43; // rdi
  size_t v44; // r14
  __int64 v45; // rax
  int *v46; // [rsp+0h] [rbp-1A0h]
  unsigned __int8 v47; // [rsp+0h] [rbp-1A0h]
  unsigned __int8 v48; // [rsp+0h] [rbp-1A0h]
  __int64 v49; // [rsp+8h] [rbp-198h]
  __int16 v50; // [rsp+10h] [rbp-190h]
  size_t v51; // [rsp+10h] [rbp-190h]
  size_t v52; // [rsp+10h] [rbp-190h]
  void *v53; // [rsp+18h] [rbp-188h]
  void *v54; // [rsp+18h] [rbp-188h]
  void *v55; // [rsp+18h] [rbp-188h]
  size_t v56; // [rsp+20h] [rbp-180h]
  size_t v57; // [rsp+20h] [rbp-180h]
  size_t v58; // [rsp+20h] [rbp-180h]
  __int64 v59; // [rsp+30h] [rbp-170h] BYREF
  void *v60; // [rsp+38h] [rbp-168h] BYREF
  __int128 v61; // [rsp+40h] [rbp-160h]
  void *v62; // [rsp+58h] [rbp-148h] BYREF
  __int128 v63; // [rsp+60h] [rbp-140h]
  void *src; // [rsp+78h] [rbp-128h] BYREF
  size_t n[2]; // [rsp+80h] [rbp-120h]
  __int16 v66; // [rsp+90h] [rbp-110h]
  __m256i v67; // [rsp+98h] [rbp-108h] BYREF
  __int16 v68; // [rsp+B8h] [rbp-E8h]
  void *v69; // [rsp+C0h] [rbp-E0h]
  __int128 v70; // [rsp+C8h] [rbp-D8h]
  void *v71; // [rsp+D8h] [rbp-C8h]
  __int128 v72; // [rsp+E0h] [rbp-C0h]
  void *v73; // [rsp+F0h] [rbp-B0h] BYREF
  __int128 v74; // [rsp+F8h] [rbp-A8h]
  __int16 v75; // [rsp+108h] [rbp-98h]
  void *v76; // [rsp+110h] [rbp-90h] BYREF
  __int128 v77; // [rsp+118h] [rbp-88h]
  void *dest; // [rsp+128h] [rbp-78h] BYREF
  __int128 v79; // [rsp+130h] [rbp-70h]
  __int64 v80; // [rsp+140h] [rbp-60h]
  __int64 v81; // [rsp+148h] [rbp-58h]
  int v82; // [rsp+150h] [rbp-50h]
  unsigned __int64 v83; // [rsp+160h] [rbp-40h]

  v4 = *a1;
  v83 = __readfsqword(0x28u);
  v5 = a3;
  v61 = 0;
  v60 = nullptr;
  if ( !a3 )
    v5 = (__int64 *)&v60;
  license_manager = get_license_manager();
  v7 = license_manager;
  if ( !license_manager
    || (v46 = (int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(
                       license_manager,
                       0,
                       0)) == nullptr )
  {
    LODWORD(v4) = 0;
    goto LABEL_64;
  }
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 104LL);
  if ( v8 == sub_387750 )
    v49 = v7 + 360;
  else
    v49 = v8(v7);
  v9 = sub_600330(a2);
  v10 = v9;
  src = nullptr;
  v66 = 0;
  *(_OWORD *)n = 0;
  v11 = *(_QWORD *)(v9 + 16) <= 1u;
  memset(&v67, 0, 24);
  if ( v11 )
  {
    v31 = qvector_reserve(&v67, 0, 10, 1);
    v67.m256i_i64[0] = v31;
    v67.m256i_i64[1] = 10;
    *(_QWORD *)v31 = 0x736F686C61636F6CLL;
    *(_BYTE *)(v31 + 8) = 116;
    v32 = (void *)v67.m256i_i64[0];
    *(_BYTE *)(v67.m256i_i64[0] + 9) = 0;
    v12 = v67.m256i_u64[1];
    if ( v67.m256i_i64[1] )
    {
      v33 = v67.m256i_i64[1] - 1;
      if ( v67.m256i_i64[1] != 1 )
      {
LABEL_91:
        v42 = src;
        if ( n[1] < v12 )
        {
          v55 = v32;
          v52 = v33;
          src = (void *)qvector_reserve(&src, src, v12, 1);
          v32 = v55;
          v42 = src;
          v33 = v52;
        }
        v51 = v33;
        n[0] = v12;
        memmove(v42, v32, v33);
        *((_BYTE *)src + v51) = 0;
        v32 = (void *)v67.m256i_i64[0];
        goto LABEL_70;
      }
    }
  }
  else
  {
    v12 = *(_QWORD *)(v9 + 16);
    if ( !v12 )
    {
      n[0] = 0;
      goto LABEL_10;
    }
    v67.m256i_i64[0] = qalloc_or_throw(*(_QWORD *)(v9 + 16));
    v67.m256i_i64[2] = v12;
    memcpy((void *)v67.m256i_i64[0], *(const void **)(v10 + 8), v12);
    v67.m256i_i64[1] = v12;
    v32 = (void *)v67.m256i_i64[0];
    v33 = v12 - 1;
    if ( v12 != 1 )
      goto LABEL_91;
  }
  n[0] = 0;
LABEL_70:
  if ( v32 )
  {
    v67.m256i_i64[1] = 0;
    qfree(v32);
  }
LABEL_10:
  v13 = *(_WORD *)(v10 + 32);
  if ( !v13 )
    v13 = 443;
  v66 = v13;
  if ( (*(_DWORD *)&debug & 0x800000) != 0 )
  {
    memset(&v67, 0, 24);
    if ( n[0] )
    {
      if ( *(_BYTE *)src != 91 )
        strchr((const char *)src, 58);
    }
    sub_35A790((char **)&v67);
    sub_3879F0();
  }
  v14 = sub_7C0E70((*(_DWORD *)(v10 + 168) & 1) == 0);
  v15 = n[0];
  v59 = v14;
  v16 = v66;
  v67.m256i_i64[0] = 192;
  memset(&v67.m256i_u64[1], 0, 24);
  if ( n[0] )
  {
    v50 = v66;
    v67.m256i_i64[1] = qalloc_or_throw(n[0]);
    v67.m256i_i64[3] = v15;
    memcpy((void *)v67.m256i_i64[1], src, v15);
    v67.m256i_i64[2] = v15;
    v16 = v50;
  }
  v68 = v16;
  v69 = nullptr;
  v71 = nullptr;
  v73 = nullptr;
  v75 = 0;
  v76 = nullptr;
  dest = nullptr;
  v80 = 0;
  v81 = 0;
  v82 = -1;
  v70 = 0;
  v72 = 0;
  v74 = 0;
  v77 = 0;
  v79 = 0;
  if ( &v73 != (void **)(v10 + 88) )
  {
    v17 = *(_QWORD *)(v10 + 96);
    if ( v17 > 1 )
    {
      v53 = *(void **)(v10 + 88);
      v73 = (void *)qvector_reserve(&v73, 0, *(_QWORD *)(v10 + 96), 1);
      *(_QWORD *)&v74 = v17;
      memmove(v73, v53, v17 - 1);
      *((char *)v73 + v17 - 1) = 0;
    }
  }
  v75 = *(_WORD *)(v10 + 112);
  if ( &v76 != (void **)(v10 + 120) )
  {
    v18 = *(_QWORD *)(v10 + 128);
    if ( v18 && (v19 = v18 - 1, v18 != 1) )
    {
      v40 = *(const void **)(v10 + 120);
      v41 = v76;
      if ( *((_QWORD *)&v77 + 1) < v18 )
      {
        v57 = *(_QWORD *)(v10 + 120);
        v41 = (void *)qvector_reserve(&v76, v76, *(_QWORD *)(v10 + 128), 1);
        v76 = v41;
        v40 = (const void *)v57;
        v19 = v18 - 1;
      }
      *(_QWORD *)&v77 = v18;
      memmove(v41, v40, v19);
      *((char *)v76 + v18 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v77 = 0;
    }
  }
  if ( &dest != (void **)(v10 + 144) )
  {
    v20 = *(_QWORD *)(v10 + 152);
    if ( v20 && (v21 = v20 - 1, v20 != 1) )
    {
      v38 = *(const void **)(v10 + 144);
      v39 = dest;
      if ( *((_QWORD *)&v79 + 1) < v20 )
      {
        v58 = *(_QWORD *)(v10 + 144);
        v39 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v10 + 152), 1);
        dest = v39;
        v38 = (const void *)v58;
        v21 = v20 - 1;
      }
      *(_QWORD *)&v79 = v20;
      memmove(v39, v38, v21);
      *((char *)dest + v20 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v79 = 0;
    }
  }
  if ( !(unsigned __int8)sub_7C0EE0(v59) )
  {
    v34 = (const char *)sub_7C0EC0(v59);
    v35 = v34;
    if ( v34 && (v36 = strlen(v34), (v37 = v36) != 0) )
    {
      v43 = (void *)*v5;
      v44 = v36 + 1;
      if ( v5[2] < v36 + 1 )
      {
        v45 = qvector_reserve(v5, *v5, v36 + 1, 1);
        *v5 = v45;
        v43 = (void *)v45;
      }
      v5[1] = v44;
      memmove(v43, v35, v37);
      *(_BYTE *)(*v5 + v37) = 0;
    }
    else
    {
      v5[1] = 0;
    }
    sub_7C0F50(&v59);
    if ( a2 != 2 )
LABEL_48:
      sub_368890();
    LODWORD(v4) = 0;
    goto LABEL_50;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v4)(v4, v59);
    v22 = v4;
  }
  else
  {
    v22 = (_QWORD *)operator new(0xB8u);
    sub_7D5120((__int64)v22, a2, v59);
  }
  v23 = *(_QWORD *)(v10 + 72);
  v62 = nullptr;
  v63 = 0;
  if ( v23 > 1 )
  {
    if ( &v62 == (void **)(v10 + 64) )
      goto LABEL_73;
    v56 = v23;
    v54 = *(void **)(v10 + 64);
    v62 = (void *)qvector_reserve(&v62, 0, v23, 1);
    *(_QWORD *)&v63 = v56;
    memmove(v62, v54, v56 - 1);
    *((char *)v62 + v56 - 1) = 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64, void **, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, &v62, v5);
  }
  if ( !(_QWORD)v63 )
  {
LABEL_73:
    v24 = haystack;
    goto LABEL_35;
  }
  v24 = (const char *)v62;
LABEL_35:
  v25 = haystack;
  if ( *(_QWORD *)(v10 + 48) )
    v25 = *(const char **)(v10 + 40);
  v26 = sub_7D51E0((__int64)v22, v49, v46, v5, v25, v24);
  v27 = v4 == nullptr;
  v28 = v26 ^ 1;
  if ( (unsigned __int8)v26 != 1 && v27 )
  {
    if ( v22 )
    {
      v47 = v26;
      v29 = *(void (__fastcall **)(_QWORD *))(*v22 + 16LL);
      if ( v29 == sub_7D3F30 )
      {
        sub_7D3E20(v22);
        operator delete(v22, 0xB8u);
      }
      else
      {
        v29(v22);
      }
      v26 = v47;
    }
    v22 = nullptr;
  }
  if ( v62 )
  {
    v48 = v26;
    *(_QWORD *)&v63 = 0;
    qfree(v62);
    v26 = v48;
  }
  if ( a2 != 2 && v28 )
    goto LABEL_48;
  LOBYTE(v4) = v26 & v27;
  if ( (_BYTE)v4 )
    *a1 = v22;
  else
    LODWORD(v4) = v26;
LABEL_50:
  if ( dest )
  {
    *(_QWORD *)&v79 = 0;
    qfree(dest);
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
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
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  if ( v67.m256i_i64[1] )
  {
    v67.m256i_i64[2] = 0;
    qfree((void *)v67.m256i_i64[1]);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
LABEL_64:
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  return (unsigned int)v4;
}
