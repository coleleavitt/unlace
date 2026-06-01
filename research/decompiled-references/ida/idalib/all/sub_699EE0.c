unsigned __int64 __fastcall sub_699EE0(__int64 a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  __int64 v8; // rax
  size_t v9; // r13
  size_t v10; // r8
  unsigned __int64 v11; // r9
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  size_t v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r10
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // r12
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // rax
  size_t v27; // r8
  __int64 v28; // r13
  unsigned __int64 v29; // r9
  char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  size_t v33; // r12
  __int64 v34; // rbp
  unsigned __int64 v35; // r13
  char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r13
  unsigned __int64 v39; // r8
  char *v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v44; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v46; // [rsp+28h] [rbp-60h]
  _BYTE src[10]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _QWORD v48[8]; // [rsp+48h] [rbp-40h] BYREF

  v48[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v48[0] - __readfsqword(0x28u);
  v46 = 0;
  ptr = nullptr;
  v8 = pack_dq(src, v48, a1) - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v10 = v46;
    v11 = v46 + v8;
    if ( __CFADD__((_QWORD)v46, v8) )
    {
      if ( (unsigned __int64)v46 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v46 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v46 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = (char *)ptr;
    v13 = v46;
    if ( *((_QWORD *)&v46 + 1) < v11 )
    {
      n = v46;
      v42 = v11;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v12 = (char *)ptr;
      v10 = n;
      v13 = v46;
      v11 = v42;
    }
    n = v10;
    v42 = v11;
    memset(&v12[v13], 0, v11 - v13);
    v10 = n;
    *(_QWORD *)&v46 = v42;
LABEL_8:
    memcpy((char *)ptr + v10, src, v9);
  }
  v14 = *a2;
  v15 = a2[1];
  v16 = pack_dq(src, v48, v14) - (_QWORD)src;
  v17 = v16;
  if ( !v16 )
    goto LABEL_15;
  v18 = v46;
  v19 = v46 + v16;
  if ( __CFADD__((_QWORD)v46, v16) )
  {
    if ( (unsigned __int64)v46 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v46 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v46 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v19 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v20 = (char *)ptr;
  v21 = v46;
  if ( *((_QWORD *)&v46 + 1) < v19 )
  {
    v44 = v46;
    n = v17;
    v42 = v19;
    ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
    v20 = (char *)ptr;
    v18 = v44;
    v21 = v46;
    v17 = n;
    v19 = v42;
  }
  v44 = v18;
  n = v17;
  v42 = v19;
  memset(&v20[v21], 0, v19 - v21);
  v17 = n;
  v18 = v44;
  *(_QWORD *)&v46 = v42;
LABEL_14:
  memcpy((char *)ptr + v18, src, v17);
LABEL_15:
  v22 = pack_dq(src, v48, v15 - v14) - (_QWORD)src;
  v23 = v22;
  if ( !v22 )
    goto LABEL_16;
  v38 = v46;
  v39 = v46 + v22;
  if ( __CFADD__((_QWORD)v46, v22) )
  {
    if ( (unsigned __int64)v46 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v46 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v46 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_41;
    }
    v39 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v40 = (char *)ptr;
  v41 = v46;
  if ( *((_QWORD *)&v46 + 1) < v39 )
  {
    v42 = v39;
    ptr = (void *)qvector_reserve(&ptr, ptr, v39, 1);
    v40 = (char *)ptr;
    v39 = v42;
    v41 = v46;
  }
  v42 = v39;
  memset(&v40[v41], 0, v39 - v41);
  *(_QWORD *)&v46 = v42;
LABEL_41:
  memcpy((char *)ptr + v38, src, v23);
LABEL_16:
  if ( !a3 )
    goto LABEL_35;
  v24 = *a3;
  v25 = a3[1];
  v26 = pack_dq(src, v48, v24) - (_QWORD)src;
  v27 = v26;
  if ( v26 )
  {
    v28 = v46;
    v29 = v46 + v26;
    if ( __CFADD__((_QWORD)v46, v26) )
    {
      if ( (unsigned __int64)v46 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v46 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v46 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_25;
      }
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v30 = (char *)ptr;
    v31 = v46;
    if ( *((_QWORD *)&v46 + 1) < v29 )
    {
      n = v27;
      v42 = v29;
      ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
      v30 = (char *)ptr;
      v27 = n;
      v31 = v46;
      v29 = v42;
    }
    n = v27;
    v42 = v29;
    memset(&v30[v31], 0, v29 - v31);
    v27 = n;
    *(_QWORD *)&v46 = v42;
LABEL_25:
    memcpy((char *)ptr + v28, src, v27);
  }
  v32 = pack_dq(src, v48, v25 - v24) - (_QWORD)src;
  v33 = v32;
  if ( !v32 )
    goto LABEL_35;
  v34 = v46;
  v35 = v46 + v32;
  if ( __CFADD__((_QWORD)v46, v32) )
  {
    if ( (unsigned __int64)v46 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v46 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v46 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_34;
    }
    v35 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v36 = (char *)ptr;
  v37 = v46;
  if ( *((_QWORD *)&v46 + 1) < v35 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v35, 1);
    v36 = (char *)ptr;
    v37 = v46;
  }
  memset(&v36[v37], 0, v35 - v37);
  *(_QWORD *)&v46 = v35;
LABEL_34:
  memcpy((char *)ptr + v34, src, v33);
LABEL_35:
  add_undo_record(a4, ptr, v46);
  if ( ptr )
  {
    *(_QWORD *)&v46 = 0;
    qfree(ptr);
  }
  return v48[0] - __readfsqword(0x28u);
}
