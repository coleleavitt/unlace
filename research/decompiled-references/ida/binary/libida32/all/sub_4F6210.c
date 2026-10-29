unsigned __int64 __fastcall sub_4F6210(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rax
  size_t v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  char *v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rax
  size_t v18; // r12
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // r12
  unsigned int v25; // r12d
  __int64 v26; // rax
  size_t v27; // r15
  __int64 v28; // rbp
  unsigned __int64 v29; // r8
  char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  size_t v33; // r12
  __int64 v34; // rbp
  unsigned __int64 v35; // r13
  char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r15
  unsigned __int64 v39; // r8
  char *v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // [rsp+0h] [rbp-78h]
  __int64 v43; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v45; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v47[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v48[8]; // [rsp+38h] [rbp-40h] BYREF

  v48[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v48[0] - __readfsqword(0x28u);
  v45 = 0;
  ptr = nullptr;
  v10 = pack_dq(src, v48, a1, v7, v8) - (_QWORD)src;
  v11 = v10;
  if ( v10 )
  {
    v12 = v45;
    v13 = v45 + v10;
    if ( __CFADD__((_QWORD)v45, v10) )
    {
      if ( (unsigned __int64)v45 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v14 = (char *)ptr;
    v15 = v45;
    if ( *((_QWORD *)&v45 + 1) < v13 )
    {
      v42 = v13;
      ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
      v14 = (char *)ptr;
      v13 = v42;
      v15 = v45;
    }
    v42 = v13;
    memset(&v14[v15], 0, v13 - v15);
    *(_QWORD *)&v45 = v42;
LABEL_8:
    memcpy((char *)ptr + v12, src, v11);
  }
  v16 = a2[1];
  v17 = pack_dd(src, v47, *a2) - (_QWORD)src;
  v18 = v17;
  if ( !v17 )
    goto LABEL_15;
  v19 = v45;
  v20 = v45 + v17;
  if ( __CFADD__((_QWORD)v45, v17) )
  {
    if ( (unsigned __int64)v45 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v20 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v21 = (char *)ptr;
  v22 = v45;
  if ( *((_QWORD *)&v45 + 1) < v20 )
  {
    v42 = v20;
    v43 = v45;
    ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
    v21 = (char *)ptr;
    v19 = v43;
    v22 = v45;
    v20 = v42;
  }
  v43 = v19;
  v42 = v20;
  memset(&v21[v22], 0, v20 - v22);
  v19 = v43;
  *(_QWORD *)&v45 = v42;
LABEL_14:
  memcpy((char *)ptr + v19, src, v18);
LABEL_15:
  v23 = pack_dd(src, v47, v16) - (_QWORD)src;
  v24 = v23;
  if ( !v23 )
    goto LABEL_16;
  v38 = v45;
  v39 = v45 + v23;
  if ( __CFADD__((_QWORD)v45, v23) )
  {
    if ( (unsigned __int64)v45 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_41;
    }
    v39 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v40 = (char *)ptr;
  v41 = v45;
  if ( *((_QWORD *)&v45 + 1) < v39 )
  {
    v42 = v39;
    ptr = (void *)qvector_reserve(&ptr, ptr, v39, 1);
    v40 = (char *)ptr;
    v39 = v42;
    v41 = v45;
  }
  v42 = v39;
  memset(&v40[v41], 0, v39 - v41);
  *(_QWORD *)&v45 = v42;
LABEL_41:
  memcpy((char *)ptr + v38, src, v24);
LABEL_16:
  if ( !a3 )
    goto LABEL_35;
  v25 = a3[1];
  v26 = pack_dd(src, v47, *a3) - (_QWORD)src;
  v27 = v26;
  if ( v26 )
  {
    v28 = v45;
    v29 = v45 + v26;
    if ( __CFADD__((_QWORD)v45, v26) )
    {
      if ( (unsigned __int64)v45 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_25;
      }
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v30 = (char *)ptr;
    v31 = v45;
    if ( *((_QWORD *)&v45 + 1) < v29 )
    {
      v42 = v29;
      ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
      v30 = (char *)ptr;
      v29 = v42;
      v31 = v45;
    }
    v42 = v29;
    memset(&v30[v31], 0, v29 - v31);
    *(_QWORD *)&v45 = v42;
LABEL_25:
    memcpy((char *)ptr + v28, src, v27);
  }
  v32 = pack_dd(src, v47, v25) - (_QWORD)src;
  v33 = v32;
  if ( !v32 )
    goto LABEL_35;
  v34 = v45;
  v35 = v45 + v32;
  if ( __CFADD__((_QWORD)v45, v32) )
  {
    if ( (unsigned __int64)v45 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_34;
    }
    v35 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v36 = (char *)ptr;
  v37 = v45;
  if ( *((_QWORD *)&v45 + 1) < v35 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v35, 1);
    v36 = (char *)ptr;
    v37 = v45;
  }
  memset(&v36[v37], 0, v35 - v37);
  *(_QWORD *)&v45 = v35;
LABEL_34:
  memcpy((char *)ptr + v34, src, v33);
LABEL_35:
  add_undo_record(a4, ptr, v45);
  if ( ptr )
  {
    *(_QWORD *)&v45 = 0;
    qfree(ptr);
  }
  return v48[0] - __readfsqword(0x28u);
}

