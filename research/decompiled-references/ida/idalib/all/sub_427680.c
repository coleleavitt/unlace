unsigned __int64 __fastcall sub_427680(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v11; // rax
  size_t v12; // r13
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // r13
  __int64 v19; // r14
  unsigned __int64 v20; // r8
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // r13
  __int64 v25; // r14
  unsigned __int64 v26; // r15
  char *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  size_t v30; // r13
  __int64 v31; // r14
  unsigned __int64 v32; // r15
  char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // r13
  _QWORD *v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  size_t v41; // r15
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // r10
  char *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // r15
  _BYTE *v48; // rsi
  __int64 v49; // r14
  unsigned __int64 v50; // r15
  char *v51; // rsi
  __int64 v52; // rax
  void **p_ptr; // [rsp+8h] [rbp-90h]
  __int64 v54; // [rsp+10h] [rbp-88h]
  unsigned __int64 v55; // [rsp+18h] [rbp-80h]
  unsigned __int64 v56; // [rsp+20h] [rbp-78h]
  __int64 v57; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v59; // [rsp+38h] [rbp-60h]
  _BYTE src[10]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _QWORD v61[8]; // [rsp+58h] [rbp-40h] BYREF

  v54 = a1;
  v55 = a5;
  v61[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 160) == -1 || !(unsigned __int8)must_journal(a1, a2, a3) )
    return v61[0] - __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v59 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v59) = 8;
  *(_QWORD *)&v59 = v59 + 1;
  v11 = pack_dq(src, v61, a2) - (_QWORD)src;
  v12 = v11;
  if ( v11 )
  {
    v13 = v59;
    v14 = v59 + v11;
    if ( __CFADD__((_QWORD)v59, v11) )
    {
      if ( (unsigned __int64)v59 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v59 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v59 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = (char *)ptr;
    v16 = v59;
    if ( *((_QWORD *)&v59 + 1) < v14 )
    {
      v57 = v59;
      v56 = v14;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v14, 1);
      v15 = (char *)ptr;
      v13 = v57;
      v16 = v59;
      v14 = v56;
    }
    v57 = v13;
    v56 = v14;
    memset(&v15[v16], 0, v14 - v16);
    v13 = v57;
    *(_QWORD *)&v59 = v56;
LABEL_9:
    memcpy((char *)ptr + v13, src, v12);
  }
  v17 = pack_dq(src, v61, a4) - (_QWORD)src;
  v18 = v17;
  if ( !v17 )
    goto LABEL_16;
  v19 = v59;
  v20 = v59 + v17;
  if ( __CFADD__((_QWORD)v59, v17) )
  {
    if ( (unsigned __int64)v59 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v59 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v59 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
    v20 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v21 = (char *)ptr;
  v22 = v59;
  if ( *((_QWORD *)&v59 + 1) < v20 )
  {
    v56 = v20;
    ptr = (void *)qvector_reserve(p_ptr, ptr, v20, 1);
    v21 = (char *)ptr;
    v20 = v56;
    v22 = v59;
  }
  v56 = v20;
  memset(&v21[v22], 0, v20 - v22);
  *(_QWORD *)&v59 = v56;
LABEL_15:
  memcpy((char *)ptr + v19, src, v18);
LABEL_16:
  v23 = pack_dq(src, v61, a3) - (_QWORD)src;
  v24 = v23;
  if ( !v23 )
    goto LABEL_22;
  v25 = v59;
  v26 = v59 + v23;
  if ( __CFADD__((_QWORD)v59, v23) )
  {
    if ( (unsigned __int64)v59 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v59 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v59 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v26 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v27 = (char *)ptr;
  v28 = v59;
  if ( *((_QWORD *)&v59 + 1) < v26 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v26, 1);
    v27 = (char *)ptr;
    v28 = v59;
  }
  memset(&v27[v28], 0, v26 - v28);
  *(_QWORD *)&v59 = v26;
LABEL_21:
  memcpy((char *)ptr + v25, src, v24);
LABEL_22:
  v29 = pack_dq(src, v61, v55) - (_QWORD)src;
  v30 = v29;
  if ( !v29 )
    goto LABEL_28;
  v31 = v59;
  v32 = v59 + v29;
  if ( __CFADD__((_QWORD)v59, v29) )
  {
    if ( (unsigned __int64)v59 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v59 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v59 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_27;
    }
    v32 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v33 = (char *)ptr;
  v34 = v59;
  if ( *((_QWORD *)&v59 + 1) < v32 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v32, 1);
    v33 = (char *)ptr;
    v34 = v59;
  }
  memset(&v33[v34], 0, v32 - v34);
  *(_QWORD *)&v59 = v32;
LABEL_27:
  memcpy((char *)ptr + v31, src, v30);
LABEL_28:
  v35 = pack_dq(src, v61, a7) - (_QWORD)src;
  v36 = v35;
  if ( v35 )
  {
    v49 = v59;
    v50 = v59 + v35;
    if ( __CFADD__((_QWORD)v59, v35) )
    {
      if ( (unsigned __int64)v59 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v59 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v59 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_50;
      }
      v50 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v51 = (char *)ptr;
    v52 = v59;
    if ( *((_QWORD *)&v59 + 1) < v50 )
    {
      ptr = (void *)qvector_reserve(p_ptr, ptr, v50, 1);
      v51 = (char *)ptr;
      v52 = v59;
    }
    memset(&v51[v52], 0, v50 - v52);
    *(_QWORD *)&v59 = v50;
LABEL_50:
    memcpy((char *)ptr + v49, src, v36);
  }
  if ( a7 )
  {
    v37 = (_QWORD *)((char *)a6 + 9 * a7);
    while ( 1 )
    {
      v39 = *a6;
      a6 = (_QWORD *)((char *)a6 + 9);
      v40 = pack_dq(src, v61, v39) - (_QWORD)src;
      v41 = v40;
      if ( v40 )
        break;
LABEL_38:
      v46 = v59;
      v47 = *((_BYTE *)a6 - 1);
      v48 = ptr;
      if ( *((_QWORD *)&v59 + 1) < (unsigned __int64)(v59 + 1) )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v59 + 1, 1);
        v48 = ptr;
        v46 = v59;
      }
      v48[v46] = v47;
      v38 = v59 + 1;
      *(_QWORD *)&v59 = v59 + 1;
      if ( v37 == a6 )
        goto LABEL_44;
    }
    v42 = v59;
    v43 = v59 + v40;
    if ( __CFADD__((_QWORD)v59, v40) )
    {
      if ( (unsigned __int64)v59 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v59 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v59 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_37;
      }
      v43 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v44 = (char *)ptr;
    v45 = v59;
    if ( *((_QWORD *)&v59 + 1) < v43 )
    {
      v56 = v59;
      v55 = v43;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v43, 1);
      v44 = (char *)ptr;
      v42 = v56;
      v45 = v59;
      v43 = v55;
    }
    v56 = v42;
    v55 = v43;
    memset(&v44[v45], 0, v43 - v45);
    v42 = v56;
    *(_QWORD *)&v59 = v55;
LABEL_37:
    memcpy((char *)ptr + v42, src, v41);
    goto LABEL_38;
  }
  v38 = v59;
LABEL_44:
  add_undo_record(*(unsigned int *)(v54 + 160), ptr, v38);
  if ( ptr )
  {
    *(_QWORD *)&v59 = 0;
    qfree(ptr);
  }
  return v61[0] - __readfsqword(0x28u);
}
