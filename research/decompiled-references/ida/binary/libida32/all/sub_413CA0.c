unsigned __int64 __fastcall sub_413CA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int64 a7)
{
  unsigned int v8; // r15d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  size_t v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  size_t v20; // r13
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  size_t v28; // r13
  __int64 v29; // r15
  unsigned __int64 v30; // r8
  char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  size_t v36; // r13
  __int64 v37; // r15
  unsigned __int64 v38; // r8
  char *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  size_t v42; // r13
  unsigned int *v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  size_t v47; // r15
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // r10
  char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // r15
  _BYTE *v54; // rsi
  __int64 v55; // r14
  unsigned __int64 v56; // r15
  char *v57; // rsi
  __int64 v58; // rax
  void **p_ptr; // [rsp+8h] [rbp-90h]
  __int64 v60; // [rsp+10h] [rbp-88h]
  unsigned __int64 v61; // [rsp+18h] [rbp-80h]
  unsigned __int64 v62; // [rsp+20h] [rbp-78h]
  __int64 v63; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v65; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v67[5]; // [rsp+53h] [rbp-45h] BYREF
  _QWORD v68[8]; // [rsp+58h] [rbp-40h] BYREF

  v60 = a1;
  v61 = a5;
  v68[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 156) == -1 )
    return v68[0] - __readfsqword(0x28u);
  v8 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v68[0] - __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v65 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v65) = 8;
  *(_QWORD *)&v65 = v65 + 1;
  v11 = pack_dd(src, v67, (unsigned int)a2) - (_QWORD)src;
  v14 = v11;
  if ( v11 )
  {
    v15 = v65;
    v16 = v65 + v11;
    if ( __CFADD__((_QWORD)v65, v11) )
    {
      if ( (unsigned __int64)v65 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v65 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v65 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v17 = (char *)ptr;
    v18 = v65;
    if ( *((_QWORD *)&v65 + 1) < v16 )
    {
      v63 = v65;
      v62 = v16;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v16, 1);
      v17 = (char *)ptr;
      v15 = v63;
      v18 = v65;
      v16 = v62;
    }
    v63 = v15;
    v62 = v16;
    memset(&v17[v18], 0, v16 - v18);
    v15 = v63;
    *(_QWORD *)&v65 = v62;
LABEL_9:
    memcpy((char *)ptr + v15, src, v14);
  }
  v19 = pack_dq(src, v68, a4, v12, v13) - (_QWORD)src;
  v20 = v19;
  if ( !v19 )
    goto LABEL_16;
  v21 = v65;
  v22 = v65 + v19;
  if ( __CFADD__((_QWORD)v65, v19) )
  {
    if ( (unsigned __int64)v65 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v65 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v65 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
    v22 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v23 = (char *)ptr;
  v24 = v65;
  if ( *((_QWORD *)&v65 + 1) < v22 )
  {
    v63 = v65;
    v62 = v22;
    ptr = (void *)qvector_reserve(p_ptr, ptr, v22, 1);
    v23 = (char *)ptr;
    v21 = v63;
    v24 = v65;
    v22 = v62;
  }
  v63 = v21;
  v62 = v22;
  memset(&v23[v24], 0, v22 - v24);
  v21 = v63;
  *(_QWORD *)&v65 = v62;
LABEL_15:
  memcpy((char *)ptr + v21, src, v20);
LABEL_16:
  v25 = pack_dd(src, v67, v8) - (_QWORD)src;
  v28 = v25;
  if ( !v25 )
    goto LABEL_22;
  v29 = v65;
  v30 = v65 + v25;
  if ( __CFADD__((_QWORD)v65, v25) )
  {
    if ( (unsigned __int64)v65 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v65 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v65 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v30 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v31 = (char *)ptr;
  v32 = v65;
  if ( *((_QWORD *)&v65 + 1) < v30 )
  {
    v62 = v30;
    ptr = (void *)qvector_reserve(p_ptr, ptr, v30, 1);
    v31 = (char *)ptr;
    v30 = v62;
    v32 = v65;
  }
  v62 = v30;
  memset(&v31[v32], 0, v30 - v32);
  *(_QWORD *)&v65 = v62;
LABEL_21:
  memcpy((char *)ptr + v29, src, v28);
LABEL_22:
  v33 = pack_dq(src, v68, v61, v26, v27) - (_QWORD)src;
  v36 = v33;
  if ( !v33 )
    goto LABEL_28;
  v37 = v65;
  v38 = v65 + v33;
  if ( __CFADD__((_QWORD)v65, v33) )
  {
    if ( (unsigned __int64)v65 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v65 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v65 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_27;
    }
    v38 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v39 = (char *)ptr;
  v40 = v65;
  if ( *((_QWORD *)&v65 + 1) < v38 )
  {
    v61 = v38;
    ptr = (void *)qvector_reserve(p_ptr, ptr, v38, 1);
    v39 = (char *)ptr;
    v38 = v61;
    v40 = v65;
  }
  v61 = v38;
  memset(&v39[v40], 0, v38 - v40);
  *(_QWORD *)&v65 = v61;
LABEL_27:
  memcpy((char *)ptr + v37, src, v36);
LABEL_28:
  v41 = pack_dq(src, v68, a7, v34, v35) - (_QWORD)src;
  v42 = v41;
  if ( v41 )
  {
    v55 = v65;
    v56 = v65 + v41;
    if ( __CFADD__((_QWORD)v65, v41) )
    {
      if ( (unsigned __int64)v65 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v65 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v65 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_50;
      }
      v56 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v57 = (char *)ptr;
    v58 = v65;
    if ( *((_QWORD *)&v65 + 1) < v56 )
    {
      ptr = (void *)qvector_reserve(p_ptr, ptr, v56, 1);
      v57 = (char *)ptr;
      v58 = v65;
    }
    memset(&v57[v58], 0, v56 - v58);
    *(_QWORD *)&v65 = v56;
LABEL_50:
    memcpy((char *)ptr + v55, src, v42);
  }
  if ( a7 )
  {
    v43 = (unsigned int *)((char *)a6 + 5 * a7);
    while ( 1 )
    {
      v45 = *a6;
      a6 = (unsigned int *)((char *)a6 + 5);
      v46 = pack_dd(src, v67, v45) - (_QWORD)src;
      v47 = v46;
      if ( v46 )
        break;
LABEL_38:
      v52 = v65;
      v53 = *((_BYTE *)a6 - 1);
      v54 = ptr;
      if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v65 + 1, 1);
        v54 = ptr;
        v52 = v65;
      }
      v54[v52] = v53;
      v44 = v65 + 1;
      *(_QWORD *)&v65 = v65 + 1;
      if ( v43 == a6 )
        goto LABEL_44;
    }
    v48 = v65;
    v49 = v65 + v46;
    if ( __CFADD__((_QWORD)v65, v46) )
    {
      if ( (unsigned __int64)v65 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v65 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v65 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_37;
      }
      v49 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v50 = (char *)ptr;
    v51 = v65;
    if ( *((_QWORD *)&v65 + 1) < v49 )
    {
      v62 = v65;
      v61 = v49;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v49, 1);
      v50 = (char *)ptr;
      v48 = v62;
      v51 = v65;
      v49 = v61;
    }
    v62 = v48;
    v61 = v49;
    memset(&v50[v51], 0, v49 - v51);
    v48 = v62;
    *(_QWORD *)&v65 = v61;
LABEL_37:
    memcpy((char *)ptr + v48, src, v47);
    goto LABEL_38;
  }
  v44 = v65;
LABEL_44:
  add_undo_record(*(unsigned int *)(v60 + 156), ptr, v44);
  if ( ptr )
  {
    *(_QWORD *)&v65 = 0;
    qfree(ptr);
  }
  return v68[0] - __readfsqword(0x28u);
}

