__int64 __fastcall upload_idb(
        int a1,
        const char *a2,
        const void *a3,
        const void *a4,
        const void *a5,
        const void *a6,
        const void *a7,
        const void *a8,
        const void *a9,
        const void *a10)
{
  char v13; // bl
  __int64 v14; // rbp
  _QWORD *v15; // rbp
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // r15
  size_t v19; // rax
  size_t v20; // r14
  size_t v21; // rax
  size_t v22; // r13
  size_t v23; // rax
  size_t v24; // r12
  size_t v25; // rax
  size_t v26; // r12
  size_t v27; // rax
  size_t v28; // r12
  size_t v29; // rax
  size_t v30; // r12
  size_t v31; // rax
  size_t v32; // r12
  unsigned int v33; // ebx
  void *v35; // rdi
  size_t v36; // r13
  void *v37; // rdi
  size_t v38; // r13
  void *v39; // rdi
  size_t v40; // r13
  void *v41; // rdi
  size_t v42; // r13
  void *v43; // rdi
  size_t v44; // r13
  void *v45; // rdi
  size_t v46; // r14
  void *v47; // rdi
  size_t v48; // r15
  void *v49; // rdi
  size_t v50; // rdx
  void *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  char v61; // [rsp+30h] [rbp-48h]
  size_t v62; // [rsp+30h] [rbp-48h]
  size_t v63; // [rsp+30h] [rbp-48h]
  size_t n; // [rsp+38h] [rbp-40h]

  v13 = a1;
  v14 = qword_2CD46F0;
  if ( !qword_2CD46F0 )
  {
    qword_2CD46F0 = qmutex_create();
    v14 = qword_2CD46F0;
    if ( !qword_2CD46F0 )
    {
      if ( !under_debugger )
        interr(1290);
      BUG();
    }
  }
  if ( (a1 & 0x40) != 0 )
  {
    qmutex_lock(v14);
    v33 = (unsigned __int8)byte_2CD46F8;
    qmutex_unlock(v14);
  }
  else
  {
    qmutex_lock(v14);
    v61 = byte_2CD46F8;
    qmutex_unlock(v14);
    if ( v61 )
      sub_368890();
    v15 = (_QWORD *)operator new(0xE0u);
    memset(v15, 0, 0xE0u);
    *((_DWORD *)v15 + 54) = a1;
    if ( a2 )
    {
      v16 = strlen(a2);
      if ( v16 )
      {
        v62 = v16 + 1;
        n = v16;
        v51 = (void *)qvector_reserve(v15, 0, v16 + 1, 1);
        *v15 = v51;
        v15[1] = v62;
        memmove(v51, a2, n);
        *(_BYTE *)(*v15 + n) = 0;
      }
    }
    if ( a3 && (v17 = strlen((const char *)a3), (v18 = v17) != 0) )
    {
      v49 = (void *)v15[3];
      v50 = v17 + 1;
      if ( v15[5] < v17 + 1 )
      {
        v63 = v17 + 1;
        v52 = qvector_reserve(v15 + 3, v15[3], v50, 1);
        v50 = v63;
        v15[3] = v52;
        v49 = (void *)v52;
      }
      v15[4] = v50;
      memmove(v49, a3, v18);
      *(_BYTE *)(v15[3] + v18) = 0;
    }
    else
    {
      v15[4] = 0;
    }
    if ( a4 && (v19 = strlen((const char *)a4), (v20 = v19) != 0) )
    {
      v47 = (void *)v15[6];
      v48 = v19 + 1;
      if ( v15[8] < v19 + 1 )
      {
        v59 = qvector_reserve(v15 + 6, v15[6], v48, 1);
        v15[6] = v59;
        v47 = (void *)v59;
      }
      v15[7] = v48;
      memmove(v47, a4, v20);
      *(_BYTE *)(v15[6] + v20) = 0;
    }
    else
    {
      v15[7] = 0;
    }
    if ( a5 && (v21 = strlen((const char *)a5), (v22 = v21) != 0) )
    {
      v45 = (void *)v15[9];
      v46 = v21 + 1;
      if ( v15[11] < v21 + 1 )
      {
        v57 = qvector_reserve(v15 + 9, v15[9], v46, 1);
        v15[9] = v57;
        v45 = (void *)v57;
      }
      v15[10] = v46;
      memmove(v45, a5, v22);
      *(_BYTE *)(v15[9] + v22) = 0;
    }
    else
    {
      v15[10] = 0;
    }
    if ( a6 && (v23 = strlen((const char *)a6), (v24 = v23) != 0) )
    {
      v43 = (void *)v15[12];
      v44 = v23 + 1;
      if ( v15[14] < v23 + 1 )
      {
        v58 = qvector_reserve(v15 + 12, v15[12], v44, 1);
        v15[12] = v58;
        v43 = (void *)v58;
      }
      v15[13] = v44;
      memmove(v43, a6, v24);
      *(_BYTE *)(v15[12] + v24) = 0;
    }
    else
    {
      v15[13] = 0;
    }
    if ( a7 && (v25 = strlen((const char *)a7), (v26 = v25) != 0) )
    {
      v41 = (void *)v15[15];
      v42 = v25 + 1;
      if ( v15[17] < v25 + 1 )
      {
        v53 = qvector_reserve(v15 + 15, v15[15], v42, 1);
        v15[15] = v53;
        v41 = (void *)v53;
      }
      v15[16] = v42;
      memmove(v41, a7, v26);
      *(_BYTE *)(v15[15] + v26) = 0;
    }
    else
    {
      v15[16] = 0;
    }
    if ( a8 && (v27 = strlen((const char *)a8), (v28 = v27) != 0) )
    {
      v39 = (void *)v15[18];
      v40 = v27 + 1;
      if ( v15[20] < v27 + 1 )
      {
        v54 = qvector_reserve(v15 + 18, v15[18], v40, 1);
        v15[18] = v54;
        v39 = (void *)v54;
      }
      v15[19] = v40;
      memmove(v39, a8, v28);
      *(_BYTE *)(v15[18] + v28) = 0;
    }
    else
    {
      v15[19] = 0;
    }
    if ( a9 && (v29 = strlen((const char *)a9), (v30 = v29) != 0) )
    {
      v37 = (void *)v15[21];
      v38 = v29 + 1;
      if ( v15[23] < v29 + 1 )
      {
        v55 = qvector_reserve(v15 + 21, v15[21], v38, 1);
        v15[21] = v55;
        v37 = (void *)v55;
      }
      v15[22] = v38;
      memmove(v37, a9, v30);
      *(_BYTE *)(v15[21] + v30) = 0;
    }
    else
    {
      v15[22] = 0;
    }
    if ( a10 && (v31 = strlen((const char *)a10), (v32 = v31) != 0) )
    {
      v35 = (void *)v15[24];
      v36 = v31 + 1;
      if ( v15[26] < v31 + 1 )
      {
        v56 = qvector_reserve(v15 + 24, v15[24], v36, 1);
        v15[24] = v56;
        v35 = (void *)v56;
      }
      v15[25] = v36;
      memmove(v35, a10, v32);
      *(_BYTE *)(v15[24] + v32) = 0;
    }
    else
    {
      v15[25] = 0;
    }
    if ( (v13 & 0x10) == 0 || !a6 )
    {
      *((_DWORD *)v15 + 54) &= ~0x10u;
      sub_7C6E30((const char **)v15);
    }
    v33 = 1;
    qthread_create(sub_7C7C10, v15);
    mark_builtin_widgets(0x8000000, 0, 1);
  }
  return v33;
}
