unsigned __int64 __fastcall sub_413640(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        int a7,
        char a8)
{
  bool v8; // zf
  __int64 v12; // rax
  __int64 v13; // rcx
  size_t v14; // r8
  __int64 v15; // r14
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  size_t v18; // r8
  __int64 v19; // r14
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  size_t v22; // r8
  __int64 v23; // r14
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  _BYTE *v26; // rsi
  __int64 v27; // rax
  const char *v28; // r14
  unsigned __int64 v29; // r13
  size_t v30; // r8
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  size_t v33; // r12
  __int64 v34; // r13
  unsigned __int64 v35; // r14
  char *v36; // rsi
  __int64 v37; // rax
  char *v38; // rsi
  unsigned __int64 v39; // rax
  char *v40; // rsi
  __int64 v41; // rax
  char *v42; // rsi
  __int64 v43; // rax
  char *v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+8h] [rbp-90h]
  size_t v47; // [rsp+10h] [rbp-88h]
  void **p_ptr; // [rsp+18h] [rbp-80h]
  unsigned __int64 v49; // [rsp+20h] [rbp-78h]
  size_t v50; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v52; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v54[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v55[8]; // [rsp+58h] [rbp-40h] BYREF

  v8 = *(_DWORD *)(a1 + 156) == -1;
  v46 = a3;
  LODWORD(v47) = a4;
  v55[0] = __readfsqword(0x28u);
  if ( v8 || !(unsigned __int8)must_journal(a1, a2, a3) )
    return v55[0] - __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v52 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v52) = a8 ^ 1;
  *(_QWORD *)&v52 = v52 + 1;
  v12 = pack_dd(src, v54, (unsigned int)a2) - (_QWORD)src;
  v14 = v12;
  if ( v12 )
  {
    v15 = v52;
    v16 = v52 + v12;
    if ( __CFADD__((_QWORD)v52, v12) )
    {
      if ( (unsigned __int64)v52 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((char *)ptr + v15, src, v14);
        goto LABEL_10;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v40 = (char *)ptr;
    v41 = v52;
    if ( *((_QWORD *)&v52 + 1) < v16 )
    {
      v50 = v14;
      v49 = v16;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v16, 1);
      v40 = (char *)ptr;
      v14 = v50;
      v41 = v52;
      v16 = v49;
    }
    v50 = v14;
    v49 = v16;
    memset(&v40[v41], 0, v16 - v41);
    v14 = v50;
    *(_QWORD *)&v52 = v49;
    goto LABEL_9;
  }
LABEL_10:
  v17 = pack_dq(src, v55, v46, v13, v14) - (_QWORD)src;
  v18 = v17;
  if ( !v17 )
    goto LABEL_16;
  v19 = v52;
  v20 = v52 + v17;
  if ( !__CFADD__((_QWORD)v52, v17) )
    goto LABEL_48;
  if ( (unsigned __int64)v52 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
    v42 = (char *)ptr;
    v43 = v52;
    if ( *((_QWORD *)&v52 + 1) < v20 )
    {
      v49 = v18;
      v46 = v20;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v20, 1);
      v42 = (char *)ptr;
      v18 = v49;
      v43 = v52;
      v20 = v46;
    }
    v49 = v18;
    v46 = v20;
    memset(&v42[v43], 0, v20 - v43);
    v18 = v49;
    *(_QWORD *)&v52 = v46;
    goto LABEL_15;
  }
  if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
  memcpy((char *)ptr + v19, src, v18);
LABEL_16:
  v21 = pack_dd(src, v54, (unsigned int)v47) - (_QWORD)src;
  v22 = v21;
  if ( !v21 )
    goto LABEL_22;
  v23 = v52;
  v24 = v52 + v21;
  if ( !__CFADD__((_QWORD)v52, v21) )
    goto LABEL_52;
  if ( (unsigned __int64)v52 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v24 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_52:
    v44 = (char *)ptr;
    v45 = v52;
    if ( *((_QWORD *)&v52 + 1) < v24 )
    {
      v47 = v22;
      v46 = v24;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v24, 1);
      v44 = (char *)ptr;
      v22 = v47;
      v45 = v52;
      v24 = v46;
    }
    v47 = v22;
    v46 = v24;
    memset(&v44[v45], 0, v24 - v45);
    v22 = v47;
    *(_QWORD *)&v52 = v46;
    goto LABEL_21;
  }
  if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
  memcpy((char *)ptr + v23, src, v22);
LABEL_22:
  v25 = v52;
  v26 = ptr;
  if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v52 + 1, 1);
    v26 = ptr;
    v25 = v52;
  }
  v26[v25] = a5;
  v27 = v52;
  v28 = haystack;
  v8 = *(_QWORD *)(a6 + 8) == 0;
  v29 = v52 + 1;
  *(_QWORD *)&v52 = v52 + 1;
  if ( !v8 )
    v28 = *(const char **)a6;
  if ( v28 )
  {
    v30 = strlen(v28) + 1;
    v31 = v30 + v29;
    if ( __CFADD__(v30, v29) )
    {
      if ( v29 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v29 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_31;
        goto LABEL_30;
      }
      v31 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v31 = v27 + 2;
    v30 = 1;
    v28 = &byte_22CD811;
    if ( v27 + 2 < v29 )
    {
      v28 = &byte_22CD811;
      v30 = 1;
LABEL_30:
      *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_31;
    }
  }
  v38 = (char *)ptr;
  v39 = v29;
  if ( *((_QWORD *)&v52 + 1) < v31 )
  {
    v46 = v30;
    ptr = (void *)qvector_reserve(p_ptr, ptr, v31, 1);
    v38 = (char *)ptr;
    v30 = v46;
    v39 = v52;
  }
  v46 = v30;
  memset(&v38[v39], 0, v31 - v39);
  *(_QWORD *)&v52 = v31;
  v30 = v46;
LABEL_31:
  memcpy((char *)ptr + v29, v28, v30);
  v32 = pack_dd(src, v54, a7 & 0xFFFFFFFC) - (_QWORD)src;
  v33 = v32;
  if ( !v32 )
    goto LABEL_37;
  v34 = v52;
  v35 = v52 + v32;
  if ( __CFADD__((_QWORD)v52, v32) )
  {
    if ( (unsigned __int64)v52 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_36;
    }
    v35 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v36 = (char *)ptr;
  v37 = v52;
  if ( *((_QWORD *)&v52 + 1) < v35 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v35, 1);
    v36 = (char *)ptr;
    v37 = v52;
  }
  memset(&v36[v37], 0, v35 - v37);
  *(_QWORD *)&v52 = v35;
LABEL_36:
  memcpy((char *)ptr + v34, src, v33);
LABEL_37:
  add_undo_record(*(unsigned int *)(a1 + 156), ptr, v52);
  if ( ptr )
  {
    *(_QWORD *)&v52 = 0;
    qfree(ptr);
  }
  return v55[0] - __readfsqword(0x28u);
}

