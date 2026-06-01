unsigned __int64 __fastcall sub_4285E0(__int64 a1, char **a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v10; // rdx
  __int64 v12; // rax
  size_t v13; // r8
  __int64 v14; // r15
  unsigned __int64 v15; // r9
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // r15
  __int64 v20; // r14
  unsigned __int64 v21; // r8
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r13
  __int64 v26; // r14
  unsigned __int64 v27; // r15
  char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // r12
  __int64 v32; // r13
  unsigned __int64 v33; // r14
  char *v34; // rsi
  __int64 v35; // rax
  _QWORD *v36; // [rsp+8h] [rbp-90h]
  void **p_ptr; // [rsp+10h] [rbp-88h]
  unsigned __int64 v38; // [rsp+18h] [rbp-80h]
  size_t n; // [rsp+20h] [rbp-78h]
  unsigned __int64 v40; // [rsp+28h] [rbp-70h] BYREF
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v42; // [rsp+38h] [rbp-60h]
  _BYTE src[10]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _QWORD v44[8]; // [rsp+58h] [rbp-40h] BYREF

  v40 = a6;
  v44[0] = __readfsqword(0x28u);
  sub_773D30();
  sub_428330(a2, &v40);
  if ( *(_DWORD *)(a1 + 160) == -1 || !(unsigned __int8)must_journal(a2, &v40, v10) )
    return v44[0] - __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v42 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v42) = 9;
  *(_QWORD *)&v42 = v42 + 1;
  v36 = v44;
  v12 = pack_dq(src, v44, a3) - (_QWORD)src;
  v13 = v12;
  if ( v12 )
  {
    v14 = v42;
    v15 = v42 + v12;
    if ( __CFADD__((_QWORD)v42, v12) )
    {
      if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v16 = (char *)ptr;
    v17 = v42;
    if ( *((_QWORD *)&v42 + 1) < v15 )
    {
      n = v13;
      v38 = v15;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v15, 1);
      v16 = (char *)ptr;
      v13 = n;
      v17 = v42;
      v15 = v38;
    }
    n = v13;
    v38 = v15;
    memset(&v16[v17], 0, v15 - v17);
    v13 = n;
    *(_QWORD *)&v42 = v38;
LABEL_9:
    memcpy((char *)ptr + v14, src, v13);
  }
  v18 = pack_dq(src, v36, a4) - (_QWORD)src;
  v19 = v18;
  if ( !v18 )
    goto LABEL_16;
  v20 = v42;
  v21 = v42 + v18;
  if ( __CFADD__((_QWORD)v42, v18) )
  {
    if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v22 = (char *)ptr;
  v23 = v42;
  if ( *((_QWORD *)&v42 + 1) < v21 )
  {
    v38 = v21;
    ptr = (void *)qvector_reserve(p_ptr, ptr, v21, 1);
    v22 = (char *)ptr;
    v21 = v38;
    v23 = v42;
  }
  v38 = v21;
  memset(&v22[v23], 0, v21 - v23);
  *(_QWORD *)&v42 = v38;
LABEL_15:
  memcpy((char *)ptr + v20, src, v19);
LABEL_16:
  v24 = pack_dq(src, v36, a5) - (_QWORD)src;
  v25 = v24;
  if ( !v24 )
    goto LABEL_22;
  v26 = v42;
  v27 = v42 + v24;
  if ( __CFADD__((_QWORD)v42, v24) )
  {
    if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v27 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v28 = (char *)ptr;
  v29 = v42;
  if ( *((_QWORD *)&v42 + 1) < v27 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v27, 1);
    v28 = (char *)ptr;
    v29 = v42;
  }
  memset(&v28[v29], 0, v27 - v29);
  *(_QWORD *)&v42 = v27;
LABEL_21:
  memcpy((char *)ptr + v26, src, v25);
LABEL_22:
  v30 = pack_dq(src, v36, a6) - (_QWORD)src;
  v31 = v30;
  if ( !v30 )
    goto LABEL_28;
  v32 = v42;
  v33 = v42 + v30;
  if ( __CFADD__((_QWORD)v42, v30) )
  {
    if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_27;
    }
    v33 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v34 = (char *)ptr;
  v35 = v42;
  if ( *((_QWORD *)&v42 + 1) < v33 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v33, 1);
    v34 = (char *)ptr;
    v35 = v42;
  }
  memset(&v34[v35], 0, v33 - v35);
  *(_QWORD *)&v42 = v33;
LABEL_27:
  memcpy((char *)ptr + v32, src, v31);
LABEL_28:
  add_undo_record(*(unsigned int *)(a1 + 160), ptr, v42);
  if ( ptr )
  {
    *(_QWORD *)&v42 = 0;
    qfree(ptr);
  }
  return v44[0] - __readfsqword(0x28u);
}
