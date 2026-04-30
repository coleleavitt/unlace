unsigned __int64 __fastcall cc_chooser_t__::vfunc_6(__int64 a1, void ***a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  size_t *v11; // rbx
  size_t *v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  size_t v15; // r14
  size_t v16; // r14
  size_t v17; // r14
  __int16 v18; // ax
  __int64 v19; // rbx
  _QWORD *v20; // r14
  void *v21; // rbx
  void **v22; // r14
  void *v23; // rbx
  void **v24; // r14
  size_t *v25; // rbp
  size_t *v27; // r8
  void *v28; // rdi
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  unsigned __int8 v32; // al
  unsigned int v33; // r15d
  __int64 v34; // rax
  void *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // eax
  size_t v39; // r14
  size_t v40; // r14
  size_t v41; // r14
  __int16 v42; // ax
  __int64 *v43; // rbx
  bool v44; // cc
  void *v45; // rsi
  __int64 v46; // rax
  unsigned __int64 v47; // rbx
  void **v48; // r14
  void *v49; // rbp
  void *v50; // rdi
  _DWORD *v51; // rax
  __int64 v52; // rax
  _BOOL8 v53; // rdi
  void *v54; // rdi
  size_t *v55; // r8
  void *v56; // rdi
  __int64 v57; // rax
  void *v58; // rax
  const void *v59; // rsi
  void *v60; // rax
  const void *v61; // rsi
  void *v62; // rax
  const void *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  void *v68; // [rsp+8h] [rbp-B0h]
  size_t *v69; // [rsp+8h] [rbp-B0h]
  size_t *v70; // [rsp+8h] [rbp-B0h]
  int v71; // [rsp+1Ch] [rbp-9Ch] BYREF
  unsigned int *v72; // [rsp+20h] [rbp-98h] BYREF
  void *src; // [rsp+28h] [rbp-90h]
  __int128 v74; // [rsp+30h] [rbp-88h]
  void *v75; // [rsp+40h] [rbp-78h]
  __int128 v76; // [rsp+48h] [rbp-70h]
  void *v77; // [rsp+58h] [rbp-60h]
  __int128 v78; // [rsp+60h] [rbp-58h]
  __int16 v79; // [rsp+70h] [rbp-48h]
  unsigned __int64 v80; // [rsp+78h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 184);
  v80 = __readfsqword(0x28u);
  v9 = *(unsigned int *)(v7 + 4 * a5);
  v71 = v9;
  if ( (_DWORD)v9 != 16 )
  {
    v10 = qword_8D0A50;
    if ( qword_8D0A50 )
    {
      v11 = (size_t *)&unk_8D0A48;
      do
      {
        while ( 1 )
        {
          v12 = *(size_t **)(v10 + 16);
          v13 = *(_QWORD *)(v10 + 24);
          if ( *(_DWORD *)(v10 + 32) < (unsigned int)v9 )
            break;
          v11 = (size_t *)v10;
          v10 = *(_QWORD *)(v10 + 16);
          if ( !v12 )
            goto LABEL_7;
        }
        v10 = *(_QWORD *)(v10 + 24);
      }
      while ( v13 );
LABEL_7:
      if ( v11 != (size_t *)&unk_8D0A48 && (unsigned int)v9 >= *((_DWORD *)v11 + 8) )
        goto LABEL_10;
    }
    else
    {
      v11 = (size_t *)&unk_8D0A48;
    }
    v12 = v11;
    v72 = (unsigned int *)&v71;
    v11 = (size_t *)sub_3C4F20(&qword_8D0A40, (__int64)v11, &v72);
LABEL_10:
    v14 = *((_DWORD *)v11 + 10);
    v15 = v11[7];
    src = nullptr;
    v74 = 0;
    LODWORD(v72) = v14;
    if ( v15 )
    {
      v31 = (void *)qalloc_or_throw(v15);
      v12 = (size_t *)v11[6];
      *((_QWORD *)&v74 + 1) = v15;
      src = v31;
      memcpy(v31, v12, v15);
      *(_QWORD *)&v74 = v15;
    }
    v16 = v11[10];
    v75 = nullptr;
    v76 = 0;
    if ( v16 )
    {
      v30 = (void *)qalloc_or_throw(v16);
      v12 = (size_t *)v11[9];
      v75 = v30;
      *((_QWORD *)&v76 + 1) = v16;
      memcpy(v30, v12, v16);
      *(_QWORD *)&v76 = v16;
    }
    v17 = v11[13];
    v77 = nullptr;
    v78 = 0;
    if ( v17 )
    {
      v29 = (void *)qalloc_or_throw(v17);
      v12 = (size_t *)v11[12];
      v77 = v29;
      *((_QWORD *)&v78 + 1) = v17;
      memcpy(v29, v12, v17);
      *(_QWORD *)&v78 = v17;
    }
    v18 = *((_WORD *)v11 + 60);
    v19 = v74;
    v20 = *a2;
    v79 = v18;
    if ( (unsigned __int64)v74 > 1 )
    {
      v27 = (size_t *)src;
      v28 = (void *)*v20;
      if ( v20[2] < (unsigned __int64)v74 )
      {
        v70 = (size_t *)src;
        v65 = qvector_reserve(v20, *v20, v74, 1);
        *v20 = v65;
        v27 = v70;
        v28 = (void *)v65;
      }
      v20[1] = v19;
      v12 = v27;
      memmove(v28, v27, v19 - 1);
      *(_BYTE *)(*v20 + v19 - 1) = 0;
    }
    else
    {
      v20[1] = 0;
    }
    v21 = (void *)v76;
    v22 = *a2;
    if ( (unsigned __int64)v76 > 1 )
    {
      v55 = (size_t *)v75;
      v56 = v22[3];
      if ( (unsigned __int64)v22[5] < (unsigned __int64)v76 )
      {
        v69 = (size_t *)v75;
        v64 = qvector_reserve(v22 + 3, v22[3], v76, 1);
        v22[3] = (void *)v64;
        v55 = v69;
        v56 = (void *)v64;
      }
      v22[4] = v21;
      v12 = v55;
      memmove(v56, v55, (size_t)v21 - 1);
      *((_BYTE *)v21 + (_QWORD)v22[3] - 1) = 0;
    }
    else
    {
      v22[4] = nullptr;
    }
    v23 = (void *)v78;
    v24 = *a2;
    v25 = (size_t *)v77;
    if ( (unsigned __int64)v78 > 1 )
    {
      v54 = v24[6];
      if ( (unsigned __int64)v24[8] < (unsigned __int64)v78 )
      {
        v66 = qvector_reserve(v24 + 6, v24[6], v78, 1);
        v24[6] = (void *)v66;
        v54 = (void *)v66;
      }
      v24[7] = v23;
      v12 = v25;
      memmove(v54, v25, (size_t)v23 - 1);
      *((_BYTE *)v23 + (_QWORD)v24[6] - 1) = 0;
    }
    else
    {
      v24[7] = nullptr;
    }
    if ( v25 )
      qfree(v25, (const char *)v12, v9, v13);
    if ( v75 )
      qfree(v75, (const char *)v12, v9, v13);
    if ( src )
      qfree(src, (const char *)v12, v9, v13);
    goto LABEL_28;
  }
  v32 = getinf(58);
  v33 = v32;
  if ( v32 <= 0x10u )
    v33 = getinf(99);
  v34 = qword_8D0A50;
  v35 = &unk_8D0A48;
  if ( !qword_8D0A50 )
    goto LABEL_62;
  do
  {
    while ( 1 )
    {
      v36 = *(_QWORD *)(v34 + 16);
      v37 = *(_QWORD *)(v34 + 24);
      if ( *(_DWORD *)(v34 + 32) < v33 )
        break;
      v35 = (void *)v34;
      v34 = *(_QWORD *)(v34 + 16);
      if ( !v36 )
        goto LABEL_41;
    }
    v34 = *(_QWORD *)(v34 + 24);
  }
  while ( v37 );
LABEL_41:
  if ( v35 == &unk_8D0A48 || v33 < *((_DWORD *)v35 + 8) )
  {
LABEL_62:
    v51 = (_DWORD *)operator new(0x80u);
    v51[8] = v33;
    v68 = v51;
    memset(v51 + 10, 0, 0x58u);
    v52 = sub_3C44C0(&qword_8D0A40, (__int64)v35, v33);
    v35 = (void *)v52;
    if ( v37 )
    {
      v53 = v52 || &unk_8D0A48 == (_UNKNOWN *)v37 || v33 < *(_DWORD *)(v37 + 32);
      std::_Rb_tree_insert_and_rebalance(v53, v68, v37, &unk_8D0A48);
      ++qword_8D0A68;
      v35 = v68;
    }
    else if ( v68 )
    {
      operator delete(v68, 0x80u);
    }
  }
  v38 = *((_DWORD *)v35 + 10);
  v39 = *((_QWORD *)v35 + 7);
  src = nullptr;
  v74 = 0;
  LODWORD(v72) = v38;
  if ( v39 )
  {
    v58 = (void *)qalloc_or_throw(v39);
    v59 = *((const void **)v35 + 6);
    *((_QWORD *)&v74 + 1) = v39;
    src = v58;
    memcpy(v58, v59, v39);
    *(_QWORD *)&v74 = v39;
  }
  v40 = *((_QWORD *)v35 + 10);
  v75 = nullptr;
  v76 = 0;
  if ( v40 )
  {
    v62 = (void *)qalloc_or_throw(v40);
    v63 = *((const void **)v35 + 9);
    v75 = v62;
    *((_QWORD *)&v76 + 1) = v40;
    memcpy(v62, v63, v40);
    *(_QWORD *)&v76 = v40;
  }
  v41 = *((_QWORD *)v35 + 13);
  v77 = nullptr;
  v78 = 0;
  if ( v41 )
  {
    v60 = (void *)qalloc_or_throw(v41);
    v61 = *((const void **)v35 + 12);
    v77 = v60;
    *((_QWORD *)&v78 + 1) = v41;
    memcpy(v60, v61, v41);
    *(_QWORD *)&v78 = v41;
  }
  v42 = *((_WORD *)v35 + 60);
  v43 = (__int64 *)*a2;
  v44 = (unsigned __int64)(*a2)[2] <= 0xC;
  v45 = **a2;
  v79 = v42;
  if ( v44 )
  {
    v57 = qvector_reserve(v43, v45, 13, 1);
    *v43 = v57;
    v45 = (void *)v57;
  }
  v43[1] = 13;
  qmemcpy(v45, "<default cc>", 12);
  v46 = *v43;
  v47 = v78;
  *(_BYTE *)(v46 + 12) = 0;
  v48 = *a2;
  v49 = v77;
  if ( v47 > 1 )
  {
    v50 = v48[6];
    if ( (unsigned __int64)v48[8] < v47 )
    {
      v67 = qvector_reserve(v48 + 6, v48[6], v47, 1);
      v48[6] = (void *)v67;
      v50 = (void *)v67;
    }
    v48[7] = (void *)v47;
    v45 = v49;
    memmove(v50, v49, v47 - 1);
    *((char *)v48[6] + v47 - 1) = 0;
  }
  else
  {
    v48[7] = nullptr;
  }
  if ( v49 )
    qfree(v49, (const char *)v45, v37);
  if ( v75 )
    qfree(v75, (const char *)v45, v37);
  if ( src )
    qfree(src, (const char *)v45, v37);
LABEL_28:
  if ( *(_DWORD *)(a1 + 208) == v71 )
    *(_DWORD *)(a4 + 4) |= 1u;
  return v80 - __readfsqword(0x28u);
}
