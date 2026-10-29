__int64 __fastcall sub_3A7A00(__int64 a1, unsigned int a2)
{
  __int64 *v3; // r14
  __int64 idati; // rax
  double v6; // xmm0_8
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rbp
  const char *v20; // rsi
  __int64 v21; // rdi
  unsigned int v22; // ebx
  void *v24; // r13
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 tinfo_property; // rax
  __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r13
  size_t v41; // r9
  __int64 v42; // r8
  char v43; // cl
  int v44; // edx
  __int16 v45; // ax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rbp
  __int64 v50; // r12
  void *v51; // r8
  void *v52; // r10
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // [rsp+8h] [rbp-90h]
  void *v56; // [rsp+8h] [rbp-90h]
  void *v57; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v59; // [rsp+28h] [rbp-70h]
  __int64 v60; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-50h]
  int v62; // [rsp+4Ch] [rbp-4Ch]
  __int16 v63; // [rsp+50h] [rbp-48h]
  unsigned __int64 v64; // [rsp+58h] [rbp-40h]

  v3 = (__int64 *)(a1 + 304);
  v64 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 280) = 0;
  idati = get_idati(a1);
  v6 = 0.0;
  v62 = 0;
  src = nullptr;
  v7 = idati;
  v63 = 257;
  *(_DWORD *)(a1 + 312) = a2;
  v61 = a2;
  v59 = 0;
  if ( !idati )
    idati = get_idati(a1);
  v60 = idati;
  if ( !(unsigned __int8)create_tinfo(a1 + 304, 61, 189, &v60)
    || (v8 = *(_QWORD *)(a1 + 304), (v8 & 0x100) == 0)
    || !get_tinfo_pdata(&src, v8, 0) )
  {
    v9 = *(_QWORD *)(a1 + 272);
    v10 = *(_QWORD *)(a1 + 288);
    v11 = *(_QWORD *)(a1 + 280);
LABEL_6:
    LODWORD(v60) = 0;
    v12 = v9;
    if ( v10 < v11 + 1 )
    {
      v12 = qvector_reserve(a1 + 272, v9, v11 + 1, 4);
      *(_QWORD *)(a1 + 272) = v12;
      v11 = *(_QWORD *)(a1 + 280);
    }
    *(_DWORD *)(v12 + 4 * v11) = 0;
    v13 = *(_QWORD *)(a1 + 280);
    v14 = *(_QWORD *)(a1 + 288);
    LODWORD(v60) = 1;
    v15 = v13 + 1;
    v16 = v13 + 2;
    v17 = *(_QWORD *)(a1 + 272);
    *(_QWORD *)(a1 + 280) = v15;
    if ( v14 < v16 )
    {
      v26 = qvector_reserve(a1 + 272, v17, v16, 4);
      *(_QWORD *)(a1 + 272) = v26;
      v17 = v26;
      v15 = *(_QWORD *)(a1 + 280);
    }
    *(_DWORD *)(v17 + 4 * v15) = 1;
    LOBYTE(v18) = 1;
    ++*(_QWORD *)(a1 + 280);
    goto LABEL_11;
  }
  if ( get_tinfo_property(*(_QWORD *)(a1 + 304), 288) )
  {
    v27 = *(_QWORD *)(a1 + 280);
    v28 = *(_QWORD *)(a1 + 288);
    LODWORD(v60) = 0;
    v29 = *(_QWORD *)(a1 + 272);
    if ( v28 < v27 + 1 )
    {
      v48 = qvector_reserve(a1 + 272, v29, v27 + 1, 4);
      *(_QWORD *)(a1 + 272) = v48;
      v29 = v48;
      v27 = *(_QWORD *)(a1 + 280);
    }
    *(_DWORD *)(v29 + 4 * v27) = 0;
    v30 = *(_QWORD *)(a1 + 280);
    v31 = *(_QWORD *)(a1 + 288);
    LODWORD(v60) = 1;
    v32 = v30 + 1;
    v16 = v30 + 2;
    v33 = *(_QWORD *)(a1 + 272);
    *(_QWORD *)(a1 + 280) = v32;
    if ( v31 < v16 )
    {
      v47 = qvector_reserve(a1 + 272, v33, v16, 4);
      *(_QWORD *)(a1 + 272) = v47;
      v33 = v47;
      v32 = *(_QWORD *)(a1 + 280);
    }
    *(_DWORD *)(v33 + 4 * v32) = 1;
    LOBYTE(v18) = 61;
    ++*(_QWORD *)(a1 + 280);
    goto LABEL_11;
  }
  tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 304), 5);
  v35 = *(_QWORD *)(a1 + 304);
  if ( tinfo_property )
  {
    v18 = get_tinfo_property(v35, 290) & 0x3F;
    if ( (_BYTE)v18 != 13 )
      LOBYTE(v18) = 29;
    goto LABEL_11;
  }
  v36 = get_tinfo_property(v35, 2);
  v11 = *(_QWORD *)(a1 + 280);
  v9 = *(_QWORD *)(a1 + 272);
  LOBYTE(v18) = v36 & 0x3F;
  v10 = *(_QWORD *)(a1 + 288);
  v37 = v9;
  v38 = v11;
  v39 = v11 + 1;
  if ( (_BYTE)v18 == 29 )
    goto LABEL_34;
  if ( (_BYTE)v18 == 45 )
  {
    LODWORD(v60) = 0;
    if ( v10 < v39 )
    {
      v37 = qvector_reserve(a1 + 272, v9, v11 + 1, 4);
      *(_QWORD *)(a1 + 272) = v37;
      v38 = *(_QWORD *)(a1 + 280);
    }
    *(_DWORD *)(v37 + 4 * v38) = 0;
    v49 = v59;
    ++*(_QWORD *)(a1 + 280);
    if ( v49 > 1 )
    {
      v51 = src;
      v50 = a1 + 64;
      if ( *(_QWORD *)(a1 + 80) < v49 )
      {
        v56 = src;
        *(_QWORD *)(a1 + 64) = qvector_reserve(a1 + 64, *(_QWORD *)(a1 + 64), v49, 1);
        v51 = v56;
      }
      *(_QWORD *)(a1 + 72) = v49;
      memmove(*(void **)(a1 + 64), v51, v49 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + v49 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0;
      v50 = a1 + 64;
    }
    v20 = (const char *)v3;
    if ( !(unsigned __int8)sub_3A5FA0(v50, v3) )
      goto LABEL_51;
LABEL_11:
    *(_BYTE *)(a1 + 296) = v18;
    copy_tinfo_t(a1 + 136, v3, v16);
    v19 = v59;
    if ( (unsigned __int64)v59 > 1 )
    {
      v24 = src;
      v25 = *(void **)(a1 + 144);
      if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)v59 )
      {
        v46 = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), v59, 1);
        *(_QWORD *)(a1 + 144) = v46;
        v25 = (void *)v46;
      }
      *(_QWORD *)(a1 + 152) = v19;
      memmove(v25, v24, v19 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 144) + v19 - 1) = 0;
      v20 = *(const char **)(a1 + 304);
      if ( (unsigned __int64)v20 <= 0xFF )
        goto LABEL_13;
    }
    else
    {
      v20 = *(const char **)(a1 + 304);
      *(_QWORD *)(a1 + 152) = 0;
      if ( (unsigned __int64)v20 <= 0xFF )
        goto LABEL_13;
    }
    if ( (unsigned int)get_tinfo_pdata(a1 + 168, v20, 5) )
    {
LABEL_22:
      v22 = 1;
      goto LABEL_15;
    }
LABEL_13:
    v21 = *(_QWORD *)(a1 + 168);
    if ( v21 )
    {
      *(_QWORD *)(a1 + 176) = 0;
      v6 = qfree(v21, v20);
      *(_QWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 184) = 0;
      v22 = 1;
      goto LABEL_15;
    }
    goto LABEL_22;
  }
  if ( (_BYTE)v18 != 13 )
    goto LABEL_6;
LABEL_34:
  LODWORD(v60) = 1;
  if ( v10 < v39 )
  {
    v37 = qvector_reserve(a1 + 272, v9, v11 + 1, 4);
    *(_QWORD *)(a1 + 272) = v37;
    v38 = *(_QWORD *)(a1 + 280);
  }
  *(_DWORD *)(v37 + 4 * v38) = 1;
  v40 = v59;
  ++*(_QWORD *)(a1 + 280);
  if ( v40 && (v41 = v40 - 1, v40 != 1) )
  {
    v52 = src;
    v53 = a1 + 8;
    if ( *(_QWORD *)(a1 + 24) < v40 )
    {
      v57 = src;
      v54 = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v40, 1);
      v52 = v57;
      v41 = v40 - 1;
      *(_QWORD *)(a1 + 8) = v54;
      v53 = a1 + 8;
    }
    *(_QWORD *)(a1 + 16) = v40;
    v55 = v53;
    memmove(*(void **)(a1 + 8), v52, v41);
    v42 = v55;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v40 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0;
    v42 = a1 + 8;
  }
  v20 = (const char *)v3;
  if ( (unsigned __int8)sub_3A7860(v42, (const char **)v3) )
  {
    v43 = is_type_choosable(v7, a2);
    v44 = *(unsigned __int16 *)(a1 + 56);
    v45 = v44 | 1;
    v16 = v44 & 0xFFFFFFFE;
    if ( !v43 )
      v45 = v16;
    *(_WORD *)(a1 + 56) = v45;
    goto LABEL_11;
  }
LABEL_51:
  v22 = 0;
LABEL_15:
  if ( src )
  {
    *(_QWORD *)&v59 = 0;
    qfree(src, v20, v6);
  }
  return v22;
}
