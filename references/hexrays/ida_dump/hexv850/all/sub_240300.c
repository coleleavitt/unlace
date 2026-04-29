__int64 __fastcall sub_240300(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v5; // eax
  int v6; // ecx
  char v7; // dl
  char v8; // al
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  size_t v12; // r15
  __int64 v13; // rbx
  size_t v14; // r15
  void *v15; // rax
  void *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rbp
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  _QWORD *v35; // r13
  __int64 v36; // rdi
  __int64 v37; // rdi
  size_t v38; // rbx
  size_t v39; // rbx
  __int64 v40; // r13
  void *v41; // rax
  void *v42; // rsi
  __int64 v43; // rbx
  void *v44; // rax
  void *v45; // rsi
  void *v46; // rax
  void *v47; // rsi
  int v48; // [rsp+4h] [rbp-18Ch]
  size_t v52; // [rsp+40h] [rbp-150h]
  size_t v53; // [rsp+40h] [rbp-150h]
  int v54; // [rsp+48h] [rbp-148h] BYREF
  __int64 v55; // [rsp+50h] [rbp-140h]
  void *src; // [rsp+58h] [rbp-138h]
  size_t n[2]; // [rsp+60h] [rbp-130h]
  void *v58; // [rsp+70h] [rbp-120h]
  size_t v59[2]; // [rsp+78h] [rbp-118h]
  __int64 v60; // [rsp+88h] [rbp-108h] BYREF
  __int64 v61; // [rsp+90h] [rbp-100h]
  _DWORD v62[4]; // [rsp+98h] [rbp-F8h] BYREF
  void *v63; // [rsp+A8h] [rbp-E8h]
  __int128 v64; // [rsp+B0h] [rbp-E0h]
  void *v65; // [rsp+C0h] [rbp-D0h]
  __int128 v66; // [rsp+C8h] [rbp-C8h]
  __int64 v67; // [rsp+D8h] [rbp-B8h] BYREF
  int v68; // [rsp+E0h] [rbp-B0h]
  unsigned __int64 v69; // [rsp+E8h] [rbp-A8h] BYREF
  __int128 v70; // [rsp+F0h] [rbp-A0h]
  __int64 v71; // [rsp+100h] [rbp-90h]
  __int64 v72; // [rsp+108h] [rbp-88h] BYREF
  __int64 v73; // [rsp+110h] [rbp-80h] BYREF
  __int128 v74; // [rsp+118h] [rbp-78h]
  __int64 v75; // [rsp+128h] [rbp-68h]
  __int128 v76; // [rsp+130h] [rbp-60h]
  char v77; // [rsp+140h] [rbp-50h]
  unsigned __int64 v78; // [rsp+150h] [rbp-40h]

  v4 = a2;
  v78 = __readfsqword(0x28u);
  v69 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 16;
  v70 = 0;
  v74 = 0;
  v76 = 0;
  copy_tinfo_t(&v72, a1);
  v5 = getinf(99);
  v6 = v5;
  v7 = v77 & 0xF;
  if ( (v5 & 0xFFFFFF0F) != 0 || v5 == 192 )
  {
    v8 = v7 | 0xC0;
  }
  else
  {
    v8 = v7 | v5;
    v6 = 0;
  }
  HIDWORD(v71) = v6;
  v77 = v8;
  if ( !a2 )
  {
    v33 = qalloc_or_throw(40);
    *(_QWORD *)v33 = 0;
    v4 = v33;
    *(_OWORD *)(v33 + 8) = 0;
    v9 = v70;
    *(_QWORD *)(v33 + 24) = 0;
    *(_DWORD *)(v33 + 32) = 0;
    if ( !v9 )
      goto LABEL_23;
    v54 = 0;
    v34 = 0;
    v10 = 0;
    v61 = 0;
    v55 = 0;
    src = nullptr;
    v58 = nullptr;
    v60 = 0;
    v48 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v59 = 0;
    goto LABEL_37;
  }
  v9 = v70;
  v48 = *(_QWORD *)(a2 + 8);
  v10 = v48;
  v11 = v70;
  if ( v48 != (_QWORD)v70 )
  {
    v61 = 0;
    v54 = 0;
    v55 = 0;
    src = nullptr;
    v58 = nullptr;
    v60 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v59 = 0;
    if ( v48 >= (unsigned __int64)v70 )
    {
      if ( (unsigned __int64)&v54 < v69 || (unsigned __int64)&v54 >= v69 + 80LL * *((_QWORD *)&v70 + 1) )
      {
        if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)v48 )
        {
          v69 = qvector_reserve(&v69, v69, v48, 80);
          v11 = v70;
        }
        if ( v11 < v48 )
        {
          do
          {
            v13 = v69 + 80 * v11;
            *(_DWORD *)v13 = 0;
            copy_argloc(v13, &v54);
            *(_QWORD *)(v13 + 16) = 0;
            *(_OWORD *)(v13 + 24) = 0;
            v14 = n[0];
            if ( n[0] )
            {
              v15 = (void *)qalloc_or_throw(n[0]);
              *(_QWORD *)(v13 + 16) = v15;
              v16 = src;
              *(_QWORD *)(v13 + 32) = v14;
              memcpy(v15, v16, v14);
              *(_QWORD *)(v13 + 24) = v14;
            }
            *(_QWORD *)(v13 + 40) = 0;
            *(_OWORD *)(v13 + 48) = 0;
            v12 = v59[0];
            if ( v59[0] )
            {
              v44 = (void *)qalloc_or_throw(v59[0]);
              *(_QWORD *)(v13 + 40) = v44;
              v45 = v58;
              *(_QWORD *)(v13 + 56) = v12;
              memcpy(v44, v45, v12);
              *(_QWORD *)(v13 + 48) = v12;
            }
            *(_QWORD *)(v13 + 64) = 0;
            copy_tinfo_t(v13 + 64, &v60);
            ++v11;
            *(_DWORD *)(v13 + 72) = v61;
          }
          while ( v48 != v11 );
        }
        *(_QWORD *)&v70 = v48;
      }
      else
      {
        v62[0] = 0;
        copy_argloc(v62, &v54);
        v38 = n[0];
        v63 = nullptr;
        v64 = 0;
        if ( n[0] )
        {
          v63 = (void *)qalloc_or_throw(n[0]);
          *((_QWORD *)&v64 + 1) = v38;
          memcpy(v63, src, v38);
          *(_QWORD *)&v64 = v38;
        }
        v39 = v59[0];
        v65 = nullptr;
        v66 = 0;
        if ( v59[0] )
        {
          v65 = (void *)qalloc_or_throw(v59[0]);
          *((_QWORD *)&v66 + 1) = v39;
          memcpy(v65, v58, v39);
          *(_QWORD *)&v66 = v39;
        }
        v67 = 0;
        copy_tinfo_t(&v67, &v60);
        v68 = v61;
        if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)v48 )
          v69 = qvector_reserve(&v69, v69, v48, 80);
        v40 = v70;
        if ( (unsigned __int64)v70 < v48 )
        {
          do
          {
            v43 = v69 + 80 * v40;
            *(_DWORD *)v43 = 0;
            copy_argloc(v43, v62);
            *(_QWORD *)(v43 + 16) = 0;
            *(_OWORD *)(v43 + 24) = 0;
            if ( (_QWORD)v64 )
            {
              v52 = v64;
              v41 = (void *)qalloc_or_throw(v64);
              *(_QWORD *)(v43 + 16) = v41;
              v42 = v63;
              *(_QWORD *)(v43 + 32) = v52;
              memcpy(v41, v42, v52);
              *(_QWORD *)(v43 + 24) = v52;
            }
            *(_QWORD *)(v43 + 40) = 0;
            *(_OWORD *)(v43 + 48) = 0;
            if ( (_QWORD)v66 )
            {
              v53 = v66;
              v46 = (void *)qalloc_or_throw(v66);
              *(_QWORD *)(v43 + 40) = v46;
              v47 = v65;
              *(_QWORD *)(v43 + 56) = v53;
              memcpy(v46, v47, v53);
              *(_QWORD *)(v43 + 48) = v53;
            }
            *(_QWORD *)(v43 + 64) = 0;
            copy_tinfo_t(v43 + 64, &v67);
            ++v40;
            *(_DWORD *)(v43 + 72) = v68;
          }
          while ( v48 != v40 );
        }
        *(_QWORD *)&v70 = v48;
        clear_tinfo_t(&v67);
        if ( v65 )
        {
          *(_QWORD *)&v66 = 0;
          qfree(v65);
        }
        if ( v63 )
        {
          *(_QWORD *)&v64 = 0;
          qfree(v63);
        }
        cleanup_argloc(v62);
      }
LABEL_43:
      clear_tinfo_t(&v60);
      if ( v58 )
      {
        v59[0] = 0;
        qfree(v58);
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      cleanup_argloc(&v54);
      goto LABEL_18;
    }
    v34 = v48;
    do
    {
LABEL_37:
      v35 = (_QWORD *)(v69 + 80 * v10);
      clear_tinfo_t(v35 + 8);
      v36 = v35[5];
      if ( v36 )
      {
        v35[6] = 0;
        qfree(v36);
      }
      v37 = v35[2];
      if ( v37 )
      {
        v35[3] = 0;
        qfree(v37);
      }
      ++v10;
      cleanup_argloc(v35);
    }
    while ( v10 < v9 );
    *(_QWORD *)&v70 = v34;
    goto LABEL_43;
  }
LABEL_18:
  if ( v48 > 0 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      v19 = v18 + *(_QWORD *)v4;
      v20 = v19 + 64;
      if ( !*(_BYTE *)(v19 + 64) )
        copy_tinfo_t(v20, v19 + 48);
      copy_tinfo_t(v17 + v69 + 64, v20);
      v18 += 72;
      v17 += 80;
    }
    while ( 72LL * v48 != v18 );
  }
LABEL_23:
  create_tinfo(v4 + 24, 12, 12, &v69);
  *(_DWORD *)(v4 + 32) |= 2u;
  v23 = sub_23D230(0, v4 + 24, a3, a4, v21, v22);
  v24 = j__qalloc_or_throw(64);
  *(_QWORD *)(v24 + 24) = v23;
  v25 = v24;
  *(_QWORD *)v24 = -1;
  *(_DWORD *)(v24 + 8) = 57;
  *(_QWORD *)(v24 + 12) = -1;
  *(_QWORD *)(v24 + 40) = 0;
  *(_QWORD *)(v24 + 48) = 0;
  *(_DWORD *)(v24 + 56) = 0;
  *(_QWORD *)(v24 + 32) = v4;
  copy_tinfo_t(v24 + 48, a1);
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
  cleanup_argloc(&v73);
  clear_tinfo_t(&v72);
  v26 = v69;
  if ( v69 )
  {
    v27 = v70;
    if ( (_QWORD)v70 )
    {
      v28 = 0;
      do
      {
        v29 = (_QWORD *)(v26 + 80 * v28);
        clear_tinfo_t(v29 + 8);
        v30 = v29[5];
        if ( v30 )
        {
          v29[6] = 0;
          qfree(v30);
        }
        v31 = v29[2];
        if ( v31 )
        {
          v29[3] = 0;
          qfree(v31);
        }
        ++v28;
        cleanup_argloc(v29);
        v26 = v69;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v70 = 0;
    qfree(v26);
  }
  return v25;
}
