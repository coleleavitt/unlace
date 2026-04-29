__int64 __fastcall sub_2456C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // eax
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  size_t v8; // r15
  int *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  size_t v13; // r15
  void *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  _QWORD *v31; // r13
  __int64 v32; // rdi
  __int64 v33; // rdi
  int *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  size_t v37; // rbx
  size_t v38; // rbx
  __int64 v39; // r13
  void *v40; // rax
  _DWORD *v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rcx
  void *v44; // rax
  void *v45; // rsi
  void *v46; // rax
  void *v47; // rsi
  void *v48; // rax
  int v49; // [rsp+4h] [rbp-18Ch]
  size_t v50; // [rsp+40h] [rbp-150h]
  size_t v51; // [rsp+40h] [rbp-150h]
  int v52; // [rsp+48h] [rbp-148h] BYREF
  __int64 v53; // [rsp+50h] [rbp-140h]
  void *src; // [rsp+58h] [rbp-138h]
  size_t n[2]; // [rsp+60h] [rbp-130h]
  void *v56; // [rsp+70h] [rbp-120h]
  size_t v57[2]; // [rsp+78h] [rbp-118h]
  __int64 v58; // [rsp+88h] [rbp-108h]
  __int64 v59; // [rsp+90h] [rbp-100h]
  _DWORD v60[4]; // [rsp+98h] [rbp-F8h] BYREF
  void *v61; // [rsp+A8h] [rbp-E8h]
  __int128 v62; // [rsp+B0h] [rbp-E0h]
  void *v63; // [rsp+C0h] [rbp-D0h]
  __int128 v64; // [rsp+C8h] [rbp-C8h]
  __int64 v65; // [rsp+D8h] [rbp-B8h]
  int v66; // [rsp+E0h] [rbp-B0h]
  unsigned __int64 v67; // [rsp+E8h] [rbp-A8h] BYREF
  __int128 v68; // [rsp+F0h] [rbp-A0h]
  __int64 v69; // [rsp+100h] [rbp-90h]
  __int64 v70; // [rsp+108h] [rbp-88h]
  __int64 v71; // [rsp+110h] [rbp-80h]
  __int128 v72; // [rsp+118h] [rbp-78h]
  __int64 v73; // [rsp+128h] [rbp-68h]
  __int128 v74; // [rsp+130h] [rbp-60h]
  char v75; // [rsp+140h] [rbp-50h]
  unsigned __int64 v76; // [rsp+150h] [rbp-40h]

  v2 = a2;
  v76 = __readfsqword(0x28u);
  v67 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v73 = 0;
  v68 = 0;
  v72 = 0;
  v74 = 0;
  copy_tinfo_t();
  v3 = getinf();
  v4 = v3;
  if ( (v3 & 0xFFFFFF0F) != 0 || v3 == 192 )
    LOBYTE(v3) = -64;
  else
    v4 = 0;
  HIDWORD(v69) = v4;
  v75 = v3;
  if ( !a2 )
  {
    v29 = qalloc_or_throw(40, a1, 0, v4);
    *(_QWORD *)v29 = 0;
    v2 = v29;
    *(_OWORD *)(v29 + 8) = 0;
    v5 = v68;
    *(_QWORD *)(v29 + 24) = 0;
    *(_DWORD *)(v29 + 32) = 0;
    if ( !v5 )
      goto LABEL_23;
    v52 = 0;
    v30 = 0;
    v6 = 0;
    v59 = 0;
    v53 = 0;
    src = nullptr;
    v56 = nullptr;
    v58 = 0;
    v49 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v57 = 0;
    goto LABEL_37;
  }
  v5 = v68;
  v49 = *(_QWORD *)(a2 + 8);
  v6 = v49;
  v7 = v68;
  if ( v49 != (_QWORD)v68 )
  {
    v59 = 0;
    v52 = 0;
    v53 = 0;
    src = nullptr;
    v56 = nullptr;
    v58 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v57 = 0;
    if ( v49 >= (unsigned __int64)v68 )
    {
      if ( (unsigned __int64)&v52 < v67 || (unsigned __int64)&v52 >= v67 + 80LL * *((_QWORD *)&v68 + 1) )
      {
        if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)v49 )
        {
          v67 = qvector_reserve((__int64)&v67, v67, v49, 80);
          v7 = v68;
        }
        if ( v7 < v49 )
        {
          do
          {
            v9 = &v52;
            v10 = v67 + 80 * v7;
            *(_DWORD *)v10 = 0;
            copy_argloc();
            *(_QWORD *)(v10 + 16) = 0;
            *(_OWORD *)(v10 + 24) = 0;
            v13 = n[0];
            if ( n[0] )
            {
              v14 = (void *)qalloc_or_throw(n[0], (__int64)&v52, v11, v12);
              *(_QWORD *)(v10 + 16) = v14;
              v9 = (int *)src;
              *(_QWORD *)(v10 + 32) = v13;
              memcpy(v14, v9, v13);
              *(_QWORD *)(v10 + 24) = v13;
            }
            *(_QWORD *)(v10 + 40) = 0;
            *(_OWORD *)(v10 + 48) = 0;
            v8 = v57[0];
            if ( v57[0] )
            {
              v44 = (void *)qalloc_or_throw(v57[0], (__int64)v9, v11, v12);
              *(_QWORD *)(v10 + 40) = v44;
              v45 = v56;
              *(_QWORD *)(v10 + 56) = v8;
              memcpy(v44, v45, v8);
              *(_QWORD *)(v10 + 48) = v8;
            }
            *(_QWORD *)(v10 + 64) = 0;
            copy_tinfo_t();
            ++v7;
            *(_DWORD *)(v10 + 72) = v59;
          }
          while ( v49 != v7 );
        }
        *(_QWORD *)&v68 = v49;
      }
      else
      {
        v34 = &v52;
        v60[0] = 0;
        copy_argloc();
        v37 = n[0];
        v61 = nullptr;
        v62 = 0;
        if ( n[0] )
        {
          v48 = (void *)qalloc_or_throw(n[0], (__int64)&v52, v35, v36);
          v34 = (int *)src;
          v61 = v48;
          *((_QWORD *)&v62 + 1) = v37;
          memcpy(v48, src, v37);
          *(_QWORD *)&v62 = v37;
        }
        v38 = v57[0];
        v63 = nullptr;
        v64 = 0;
        if ( v57[0] )
        {
          v63 = (void *)qalloc_or_throw(v57[0], (__int64)v34, v35, v36);
          *((_QWORD *)&v64 + 1) = v38;
          memcpy(v63, v56, v38);
          *(_QWORD *)&v64 = v38;
        }
        v65 = 0;
        copy_tinfo_t();
        v66 = v59;
        if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)v49 )
          v67 = qvector_reserve((__int64)&v67, v67, v49, 80);
        v39 = v68;
        if ( (unsigned __int64)v68 < v49 )
        {
          do
          {
            v41 = v60;
            v42 = v67 + 80 * v39;
            *(_DWORD *)v42 = 0;
            copy_argloc();
            *(_QWORD *)(v42 + 16) = 0;
            *(_OWORD *)(v42 + 24) = 0;
            if ( (_QWORD)v62 )
            {
              v50 = v62;
              v40 = (void *)qalloc_or_throw(v62, (__int64)v60, v62, v43);
              *(_QWORD *)(v42 + 16) = v40;
              v41 = v61;
              *(_QWORD *)(v42 + 32) = v50;
              memcpy(v40, v41, v50);
              *(_QWORD *)(v42 + 24) = v50;
            }
            *(_QWORD *)(v42 + 40) = 0;
            *(_OWORD *)(v42 + 48) = 0;
            if ( (_QWORD)v64 )
            {
              v51 = v64;
              v46 = (void *)qalloc_or_throw(v64, (__int64)v41, v64, v43);
              *(_QWORD *)(v42 + 40) = v46;
              v47 = v63;
              *(_QWORD *)(v42 + 56) = v51;
              memcpy(v46, v47, v51);
              *(_QWORD *)(v42 + 48) = v51;
            }
            *(_QWORD *)(v42 + 64) = 0;
            copy_tinfo_t();
            ++v39;
            *(_DWORD *)(v42 + 72) = v66;
          }
          while ( v49 != v39 );
        }
        *(_QWORD *)&v68 = v49;
        clear_tinfo_t();
        if ( v63 )
        {
          *(_QWORD *)&v64 = 0;
          qfree((__int64)v63);
        }
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          qfree((__int64)v61);
        }
        cleanup_argloc();
      }
LABEL_43:
      clear_tinfo_t();
      if ( v56 )
      {
        v57[0] = 0;
        qfree((__int64)v56);
      }
      if ( src )
      {
        n[0] = 0;
        qfree((__int64)src);
      }
      cleanup_argloc();
      goto LABEL_18;
    }
    v30 = v49;
    do
    {
LABEL_37:
      v31 = (_QWORD *)(v67 + 80 * v6);
      clear_tinfo_t();
      v32 = v31[5];
      if ( v32 )
      {
        v31[6] = 0;
        qfree(v32);
      }
      v33 = v31[2];
      if ( v33 )
      {
        v31[3] = 0;
        qfree(v33);
      }
      ++v6;
      cleanup_argloc();
    }
    while ( v6 < v5 );
    *(_QWORD *)&v68 = v30;
    goto LABEL_43;
  }
LABEL_18:
  if ( v49 > 0 )
  {
    v15 = 0;
    v16 = 0;
    do
    {
      if ( !*(_BYTE *)(v16 + *(_QWORD *)v2 + 64) )
        copy_tinfo_t();
      copy_tinfo_t();
      v16 += 72;
      v15 += 80;
    }
    while ( 72LL * v49 != v16 );
  }
LABEL_23:
  create_tinfo();
  *(_DWORD *)(v2 + 32) |= 2u;
  v17 = sub_2425F0(0);
  v20 = j__qalloc_or_throw(64, v2 + 24, v18, v19);
  *(_QWORD *)(v20 + 24) = v17;
  v21 = v20;
  *(_QWORD *)v20 = -1;
  *(_DWORD *)(v20 + 8) = 57;
  *(_QWORD *)(v20 + 12) = -1;
  *(_QWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 48) = 0;
  *(_DWORD *)(v20 + 56) = 0;
  *(_QWORD *)(v20 + 32) = v2;
  copy_tinfo_t();
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v22 = v67;
  if ( v67 )
  {
    v23 = v68;
    if ( (_QWORD)v68 )
    {
      v24 = 0;
      do
      {
        v25 = (_QWORD *)(v22 + 80 * v24);
        clear_tinfo_t();
        v26 = v25[5];
        if ( v26 )
        {
          v25[6] = 0;
          qfree(v26);
        }
        v27 = v25[2];
        if ( v27 )
        {
          v25[3] = 0;
          qfree(v27);
        }
        ++v24;
        cleanup_argloc();
        v22 = v67;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v68 = 0;
    qfree(v22);
  }
  return v21;
}
