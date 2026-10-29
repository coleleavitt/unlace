unsigned __int64 __fastcall sub_50D950(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v8; // rax
  size_t v9; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  size_t v16; // r12
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // r12
  __int64 v23; // r12
  __int64 v24; // rax
  size_t v25; // r13
  __int64 v26; // rbp
  unsigned __int64 v27; // r8
  char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // r12
  __int64 v32; // rbp
  unsigned __int64 v33; // r13
  char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r13
  unsigned __int64 v37; // r8
  char *v38; // rsi
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+0h] [rbp-78h]
  __int64 v41; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v43; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _QWORD v45[8]; // [rsp+38h] [rbp-40h] BYREF

  v45[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v45[0] - __readfsqword(0x28u);
  v43 = 0;
  ptr = nullptr;
  v8 = pack_dq(src, v45, a1) - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v10 = v43;
    v11 = v43 + v8;
    if ( __CFADD__((_QWORD)v43, v8) )
    {
      if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = (char *)ptr;
    v13 = v43;
    if ( *((_QWORD *)&v43 + 1) < v11 )
    {
      v40 = v11;
      v41 = v43;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v12 = (char *)ptr;
      v10 = v41;
      v13 = v43;
      v11 = v40;
    }
    v41 = v10;
    v40 = v11;
    memset(&v12[v13], 0, v11 - v13);
    v10 = v41;
    *(_QWORD *)&v43 = v40;
LABEL_8:
    memcpy((char *)ptr + v10, src, v9);
  }
  v14 = a2[1];
  v15 = pack_dq(src, v45, *a2) - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_15;
  v17 = v43;
  v18 = v43 + v15;
  if ( __CFADD__((_QWORD)v43, v15) )
  {
    if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v19 = (char *)ptr;
  v20 = v43;
  if ( *((_QWORD *)&v43 + 1) < v18 )
  {
    v40 = v18;
    v41 = v43;
    ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
    v19 = (char *)ptr;
    v17 = v41;
    v20 = v43;
    v18 = v40;
  }
  v41 = v17;
  v40 = v18;
  memset(&v19[v20], 0, v18 - v20);
  v17 = v41;
  *(_QWORD *)&v43 = v40;
LABEL_14:
  memcpy((char *)ptr + v17, src, v16);
LABEL_15:
  v21 = pack_dq(src, v45, v14) - (_QWORD)src;
  v22 = v21;
  if ( !v21 )
    goto LABEL_16;
  v36 = v43;
  v37 = v43 + v21;
  if ( __CFADD__((_QWORD)v43, v21) )
  {
    if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_41;
    }
    v37 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v38 = (char *)ptr;
  v39 = v43;
  if ( *((_QWORD *)&v43 + 1) < v37 )
  {
    v40 = v37;
    ptr = (void *)qvector_reserve(&ptr, ptr, v37, 1);
    v38 = (char *)ptr;
    v37 = v40;
    v39 = v43;
  }
  v40 = v37;
  memset(&v38[v39], 0, v37 - v39);
  *(_QWORD *)&v43 = v40;
LABEL_41:
  memcpy((char *)ptr + v36, src, v22);
LABEL_16:
  if ( !a3 )
    goto LABEL_35;
  v23 = a3[1];
  v24 = pack_dq(src, v45, *a3) - (_QWORD)src;
  v25 = v24;
  if ( v24 )
  {
    v26 = v43;
    v27 = v43 + v24;
    if ( __CFADD__((_QWORD)v43, v24) )
    {
      if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_25;
      }
      v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v28 = (char *)ptr;
    v29 = v43;
    if ( *((_QWORD *)&v43 + 1) < v27 )
    {
      v40 = v27;
      ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
      v28 = (char *)ptr;
      v27 = v40;
      v29 = v43;
    }
    v40 = v27;
    memset(&v28[v29], 0, v27 - v29);
    *(_QWORD *)&v43 = v40;
LABEL_25:
    memcpy((char *)ptr + v26, src, v25);
  }
  v30 = pack_dq(src, v45, v23) - (_QWORD)src;
  v31 = v30;
  if ( !v30 )
    goto LABEL_35;
  v32 = v43;
  v33 = v43 + v30;
  if ( __CFADD__((_QWORD)v43, v30) )
  {
    if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_34;
    }
    v33 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v34 = (char *)ptr;
  v35 = v43;
  if ( *((_QWORD *)&v43 + 1) < v33 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v33, 1);
    v34 = (char *)ptr;
    v35 = v43;
  }
  memset(&v34[v35], 0, v33 - v35);
  *(_QWORD *)&v43 = v33;
LABEL_34:
  memcpy((char *)ptr + v32, src, v31);
LABEL_35:
  add_undo_record(a4, ptr, v43);
  if ( ptr )
  {
    *(_QWORD *)&v43 = 0;
    qfree(ptr);
  }
  return v45[0] - __readfsqword(0x28u);
}
