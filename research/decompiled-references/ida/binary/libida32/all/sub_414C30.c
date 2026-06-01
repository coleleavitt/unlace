unsigned __int64 __fastcall sub_414C30(
        __int64 a1,
        char **a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  size_t v14; // r8
  __int64 v15; // r15
  unsigned __int64 v16; // r9
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  size_t v20; // r15
  __int64 v21; // r14
  unsigned __int64 v22; // r8
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // r13
  __int64 v27; // r14
  unsigned __int64 v28; // r15
  char *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  size_t v32; // r12
  __int64 v33; // r13
  unsigned __int64 v34; // r14
  char *v35; // rsi
  __int64 v36; // rax
  _BYTE *v37; // [rsp+8h] [rbp-90h]
  void **p_ptr; // [rsp+10h] [rbp-88h]
  unsigned __int64 v39; // [rsp+18h] [rbp-80h]
  size_t n; // [rsp+20h] [rbp-78h]
  unsigned int v41; // [rsp+2Ch] [rbp-6Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v43; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v45[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v46[8]; // [rsp+58h] [rbp-40h] BYREF

  v41 = a6;
  v46[0] = __readfsqword(0x28u);
  sub_753890();
  sub_414990(a2, &v41);
  if ( *(_DWORD *)(a1 + 156) == -1 || !(unsigned __int8)must_journal(a2, &v41, v10) )
    return v46[0] - __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v43 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v43) = 9;
  *(_QWORD *)&v43 = v43 + 1;
  v37 = v45;
  v12 = pack_dd(src, v45, a3) - (_QWORD)src;
  v14 = v12;
  if ( v12 )
  {
    v15 = v43;
    v16 = v43 + v12;
    if ( __CFADD__((_QWORD)v43, v12) )
    {
      if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v17 = (char *)ptr;
    v18 = v43;
    if ( *((_QWORD *)&v43 + 1) < v16 )
    {
      n = v14;
      v39 = v16;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v16, 1);
      v17 = (char *)ptr;
      v14 = n;
      v18 = v43;
      v16 = v39;
    }
    n = v14;
    v39 = v16;
    memset(&v17[v18], 0, v16 - v18);
    v14 = n;
    *(_QWORD *)&v43 = v39;
LABEL_9:
    memcpy((char *)ptr + v15, src, v14);
  }
  v19 = pack_dq(src, v46, a4, v13, v14) - (_QWORD)src;
  v20 = v19;
  if ( !v19 )
    goto LABEL_16;
  v21 = v43;
  v22 = v43 + v19;
  if ( __CFADD__((_QWORD)v43, v19) )
  {
    if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
    v22 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v23 = (char *)ptr;
  v24 = v43;
  if ( *((_QWORD *)&v43 + 1) < v22 )
  {
    v39 = v22;
    ptr = (void *)qvector_reserve(p_ptr, ptr, v22, 1);
    v23 = (char *)ptr;
    v22 = v39;
    v24 = v43;
  }
  v39 = v22;
  memset(&v23[v24], 0, v22 - v24);
  *(_QWORD *)&v43 = v39;
LABEL_15:
  memcpy((char *)ptr + v21, src, v20);
LABEL_16:
  v25 = pack_dd(src, v37, a5) - (_QWORD)src;
  v26 = v25;
  if ( !v25 )
    goto LABEL_22;
  v27 = v43;
  v28 = v43 + v25;
  if ( __CFADD__((_QWORD)v43, v25) )
  {
    if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v28 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v29 = (char *)ptr;
  v30 = v43;
  if ( *((_QWORD *)&v43 + 1) < v28 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v28, 1);
    v29 = (char *)ptr;
    v30 = v43;
  }
  memset(&v29[v30], 0, v28 - v30);
  *(_QWORD *)&v43 = v28;
LABEL_21:
  memcpy((char *)ptr + v27, src, v26);
LABEL_22:
  v31 = pack_dd(src, v37, a6) - (_QWORD)src;
  v32 = v31;
  if ( !v31 )
    goto LABEL_28;
  v33 = v43;
  v34 = v43 + v31;
  if ( __CFADD__((_QWORD)v43, v31) )
  {
    if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_27;
    }
    v34 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v35 = (char *)ptr;
  v36 = v43;
  if ( *((_QWORD *)&v43 + 1) < v34 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v34, 1);
    v35 = (char *)ptr;
    v36 = v43;
  }
  memset(&v35[v36], 0, v34 - v36);
  *(_QWORD *)&v43 = v34;
LABEL_27:
  memcpy((char *)ptr + v33, src, v32);
LABEL_28:
  add_undo_record(*(unsigned int *)(a1 + 156), ptr, v43);
  if ( ptr )
  {
    *(_QWORD *)&v43 = 0;
    qfree(ptr);
  }
  return v46[0] - __readfsqword(0x28u);
}

