__int64 __fastcall sub_38D000(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  size_t v7; // rbp
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rbp
  int v16; // ebp
  int v17; // ebx
  __int64 v18; // r8
  const char **v19; // rdx
  const char **v20; // r15
  const char *v21; // rcx
  __int64 v22; // rax
  size_t v23; // rax
  void *v24; // rcx
  const char *v25; // rcx
  __int128 v26; // kr10_16
  const char *v27; // rdx
  __int64 v28; // rax
  const char *v29; // r9
  const char *v30; // rax
  const char *v31; // rcx
  __int128 v32; // kr00_16
  char *v34; // rax
  const void *v35; // rsi
  const char *v36; // r9
  const char *v37; // r11
  size_t v38; // r9
  char *v39; // r10
  size_t v40; // r15
  void *v41; // rdi
  size_t v42; // rdx
  size_t v43; // rcx
  void *v44; // r10
  size_t v45; // r15
  __int64 v46; // [rsp+0h] [rbp-10F8h]
  __int64 v47; // [rsp+8h] [rbp-10F0h]
  int v48; // [rsp+Ch] [rbp-10ECh]
  __int64 v49; // [rsp+10h] [rbp-10E8h]
  const char *v50; // [rsp+10h] [rbp-10E8h]
  const char *v51; // [rsp+10h] [rbp-10E8h]
  const char *v52; // [rsp+10h] [rbp-10E8h]
  const char *v53; // [rsp+10h] [rbp-10E8h]
  size_t v54; // [rsp+10h] [rbp-10E8h]
  size_t v55; // [rsp+10h] [rbp-10E8h]
  __int64 v56; // [rsp+18h] [rbp-10E0h]
  unsigned int v57; // [rsp+18h] [rbp-10E0h]
  unsigned int v58; // [rsp+1Ch] [rbp-10DCh]
  void **src; // [rsp+20h] [rbp-10D8h]
  void *srcb; // [rsp+20h] [rbp-10D8h]
  char *srca; // [rsp+20h] [rbp-10D8h]
  const char *v62; // [rsp+28h] [rbp-10D0h]
  void (__fastcall *v63)(__int64); // [rsp+38h] [rbp-10C0h] BYREF
  void (__fastcall *v64)(__int64, const char **, __int64, _QWORD); // [rsp+40h] [rbp-10B8h] BYREF
  void (__fastcall *v65)(__int64); // [rsp+48h] [rbp-10B0h] BYREF
  __int64 v66; // [rsp+50h] [rbp-10A8h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-10A0h]
  __int64 v68; // [rsp+60h] [rbp-1098h] BYREF
  unsigned int v69; // [rsp+68h] [rbp-1090h]
  const char *v70; // [rsp+70h] [rbp-1088h] BYREF
  __int128 v71; // [rsp+78h] [rbp-1080h]
  void *v72; // [rsp+90h] [rbp-1068h] BYREF
  __int128 v73; // [rsp+98h] [rbp-1060h]
  _BYTE v74[4104]; // [rsp+B0h] [rbp-1048h] BYREF
  unsigned __int64 v75; // [rsp+10B8h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v63 = nullptr;
  v64 = nullptr;
  v65 = nullptr;
  ((void (__fastcall *)(__int64, void (__fastcall **)(__int64), void (__fastcall **)(__int64), void (__fastcall **)(__int64, const char **, __int64, _QWORD), __int64, __int64))callui)(
    47,
    &v63,
    &v65,
    &v64,
    a5,
    a6);
  if ( !v64 )
    return 0;
  v6 = a1[3];
  v70 = nullptr;
  v71 = 0;
  v7 = *(_QWORD *)(v6 + 416);
  if ( !v7
    || (v34 = (char *)qalloc_or_throw(*(_QWORD *)(v6 + 416)),
        v35 = *(const void **)(v6 + 408),
        *((_QWORD *)&v71 + 1) = v7,
        v70 = v34,
        memcpy(v34, v35, v7),
        *(_QWORD *)&v71 = v7,
        v8 = v70,
        v7 != 1)
    && (tag_remove(&v70, v70, 0), v8 = v70, !(_QWORD)v71) )
  {
    v8 = s1;
  }
  qstrncpy(v74, v8, 4096);
  sanitize_file_name(v74, 4096);
  set_file_ext(v74, 4096, v74, "html");
  v9 = sub_388AC0(1u, (__int64)v74, (__int64)"Please specify the html file name");
  if ( !v9 )
  {
LABEL_33:
    if ( v70 )
    {
      *(_QWORD *)&v71 = 0;
      qfree(v70);
    }
    return 0;
  }
  v12 = fopenWT(v9, v74);
  if ( !v12 )
  {
    sub_2B5230((__int64)"AUTOHIDE NONE\nCould not create output file");
    goto LABEL_33;
  }
  if ( v63 )
    v63(v12);
  v13 = a1[4];
  v14 = a1[1];
  v66 = 0;
  v67 = 0;
  v15 = *(_QWORD *)(v13 + 136);
  v68 = 0;
  v69 = 0;
  if ( (unsigned __int8)callui(8, v14, &v66, &v68, v10, v11, v46, v47, v49, v56) )
  {
    v48 = *(_DWORD *)(v66 + 12);
    v16 = *(_DWORD *)(v68 + 12);
    v57 = v67;
    v58 = v69;
  }
  else
  {
    v58 = 1024;
    v16 = v15 - 1;
    v57 = 0;
    v48 = 0;
  }
  v17 = v48;
  if ( v48 <= v16 )
  {
    while ( 1 )
    {
      v18 = 32LL * v17;
      v19 = (const char **)(v18 + *(_QWORD *)(v13 + 128));
      v20 = v19;
      if ( v16 == v17 )
      {
        v21 = s1;
        if ( v19[1] )
          v21 = *v19;
        src = (void **)(v18 + *(_QWORD *)(v13 + 128));
        v50 = v21;
        v22 = tag_advance(v21, v58);
        if ( v22 )
          break;
      }
      if ( v48 == v17 )
        goto LABEL_24;
LABEL_13:
      v64(v12, v20, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v13 + 128) + 32LL * v17++ + 28));
      if ( v16 < v17 )
        goto LABEL_46;
    }
    v23 = v22 - (_QWORD)v50;
    v24 = src[1];
    if ( !v24 )
      goto LABEL_19;
    v43 = (size_t)v24 - 1;
    v44 = *src;
    v72 = nullptr;
    v73 = 0;
    if ( v43 <= v23 )
      v23 = v43;
    v45 = v23;
    if ( v23 )
    {
      srcb = v44;
      v54 = v23 + 1;
      v72 = (void *)qvector_reserve(&v72, 0, v23 + 1, 1);
      *(_QWORD *)&v73 = v54;
      memmove(v72, srcb, v45);
      *((_BYTE *)v72 + v45) = 0;
      v25 = (const char *)v72;
      v26 = v73;
    }
    else
    {
LABEL_19:
      v25 = nullptr;
      v26 = 0u;
    }
    v72 = nullptr;
    v73 = 0;
    if ( v70 )
    {
      v51 = v25;
      *(_QWORD *)&v71 = 0;
      qfree(v70);
      v70 = v51;
      v71 = v26;
      if ( v72 )
      {
        *(_QWORD *)&v73 = 0;
        qfree(v72);
      }
    }
    else
    {
      v70 = v25;
      v71 = v26;
    }
    v20 = &v70;
    if ( v48 != v17 )
      goto LABEL_13;
LABEL_24:
    v27 = s1;
    if ( v20[1] )
      v27 = *v20;
    v52 = v27;
    v28 = tag_advance(v27, v57);
    v29 = v20[1];
    v30 = (const char *)(v28 - (_QWORD)v52);
    if ( !v29 )
      goto LABEL_27;
    v36 = v29 - 1;
    v37 = *v20;
    v72 = nullptr;
    v73 = 0;
    if ( v30 > v36 )
      v30 = v36;
    v38 = v36 - v30;
    v39 = (char *)v30;
    v40 = v38;
    if ( v38 )
    {
      v41 = nullptr;
      v42 = v38 + 1;
      if ( v38 != -1 )
      {
        v62 = v37;
        srca = (char *)v30;
        v55 = v38 + 1;
        v72 = (void *)qvector_reserve(&v72, 0, v42, 1);
        v37 = v62;
        v41 = v72;
        v39 = srca;
        v42 = v55;
      }
      *(_QWORD *)&v73 = v42;
      memmove(v41, &v39[(_QWORD)v37], v40);
      *((_BYTE *)v72 + v40) = 0;
      v31 = (const char *)v72;
      v32 = v73;
    }
    else
    {
LABEL_27:
      v31 = nullptr;
      v32 = 0u;
    }
    v72 = nullptr;
    v73 = 0;
    if ( v70 )
    {
      v53 = v31;
      *(_QWORD *)&v71 = 0;
      qfree(v70);
      v70 = v53;
      v71 = v32;
      if ( v72 )
      {
        *(_QWORD *)&v73 = 0;
        qfree(v72);
      }
    }
    else
    {
      v70 = v31;
      v71 = v32;
    }
    v20 = &v70;
    goto LABEL_13;
  }
LABEL_46:
  if ( v65 )
    v65(v12);
  qfclose(v12);
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v70);
  }
  return 1;
}
