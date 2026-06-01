unsigned __int64 __fastcall sub_679FC0(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
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
  unsigned int v17; // r12d
  __int64 v18; // rax
  size_t v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r10
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r12
  unsigned int v26; // r12d
  unsigned int v27; // ebp
  __int64 v28; // rax
  size_t v29; // r8
  __int64 v30; // r15
  unsigned __int64 v31; // r9
  char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  size_t v35; // r12
  __int64 v36; // rbp
  unsigned __int64 v37; // r13
  char *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r15
  unsigned __int64 v41; // r8
  char *v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v46; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v48; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _BYTE v50[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v51[8]; // [rsp+48h] [rbp-40h] BYREF

  v51[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v51[0] - __readfsqword(0x28u);
  v48 = 0;
  ptr = nullptr;
  v10 = pack_dq(src, v51, a1, v7, v8) - (_QWORD)src;
  v11 = v10;
  if ( v10 )
  {
    v12 = v48;
    v13 = v48 + v10;
    if ( __CFADD__((_QWORD)v48, v10) )
    {
      if ( (unsigned __int64)v48 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v48 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v48 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v14 = (char *)ptr;
    v15 = v48;
    if ( *((_QWORD *)&v48 + 1) < v13 )
    {
      v44 = v13;
      ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
      v14 = (char *)ptr;
      v13 = v44;
      v15 = v48;
    }
    v44 = v13;
    memset(&v14[v15], 0, v13 - v15);
    *(_QWORD *)&v48 = v44;
LABEL_8:
    memcpy((char *)ptr + v12, src, v11);
  }
  v16 = *a2;
  v17 = a2[1];
  v18 = pack_dd(src, v50, v16) - (_QWORD)src;
  v19 = v18;
  if ( !v18 )
    goto LABEL_15;
  v20 = v48;
  v21 = v48 + v18;
  if ( __CFADD__((_QWORD)v48, v18) )
  {
    if ( (unsigned __int64)v48 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v48 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v48 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v22 = (char *)ptr;
  v23 = v48;
  if ( *((_QWORD *)&v48 + 1) < v21 )
  {
    v46 = v48;
    n = v19;
    v44 = v21;
    ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
    v22 = (char *)ptr;
    v20 = v46;
    v23 = v48;
    v19 = n;
    v21 = v44;
  }
  v46 = v20;
  n = v19;
  v44 = v21;
  memset(&v22[v23], 0, v21 - v23);
  v19 = n;
  v20 = v46;
  *(_QWORD *)&v48 = v44;
LABEL_14:
  memcpy((char *)ptr + v20, src, v19);
LABEL_15:
  v24 = pack_dd(src, v50, v17 - v16) - (_QWORD)src;
  v25 = v24;
  if ( !v24 )
    goto LABEL_16;
  v40 = v48;
  v41 = v48 + v24;
  if ( __CFADD__((_QWORD)v48, v24) )
  {
    if ( (unsigned __int64)v48 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v48 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v48 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_41;
    }
    v41 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v42 = (char *)ptr;
  v43 = v48;
  if ( *((_QWORD *)&v48 + 1) < v41 )
  {
    v44 = v41;
    ptr = (void *)qvector_reserve(&ptr, ptr, v41, 1);
    v42 = (char *)ptr;
    v41 = v44;
    v43 = v48;
  }
  v44 = v41;
  memset(&v42[v43], 0, v41 - v43);
  *(_QWORD *)&v48 = v44;
LABEL_41:
  memcpy((char *)ptr + v40, src, v25);
LABEL_16:
  if ( !a3 )
    goto LABEL_35;
  v26 = *a3;
  v27 = a3[1];
  v28 = pack_dd(src, v50, v26) - (_QWORD)src;
  v29 = v28;
  if ( v28 )
  {
    v30 = v48;
    v31 = v48 + v28;
    if ( __CFADD__((_QWORD)v48, v28) )
    {
      if ( (unsigned __int64)v48 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v48 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v48 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_25;
      }
      v31 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v32 = (char *)ptr;
    v33 = v48;
    if ( *((_QWORD *)&v48 + 1) < v31 )
    {
      n = v29;
      v44 = v31;
      ptr = (void *)qvector_reserve(&ptr, ptr, v31, 1);
      v32 = (char *)ptr;
      v29 = n;
      v33 = v48;
      v31 = v44;
    }
    n = v29;
    v44 = v31;
    memset(&v32[v33], 0, v31 - v33);
    v29 = n;
    *(_QWORD *)&v48 = v44;
LABEL_25:
    memcpy((char *)ptr + v30, src, v29);
  }
  v34 = pack_dd(src, v50, v27 - v26) - (_QWORD)src;
  v35 = v34;
  if ( !v34 )
    goto LABEL_35;
  v36 = v48;
  v37 = v48 + v34;
  if ( __CFADD__((_QWORD)v48, v34) )
  {
    if ( (unsigned __int64)v48 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v48 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v48 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_34;
    }
    v37 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v38 = (char *)ptr;
  v39 = v48;
  if ( *((_QWORD *)&v48 + 1) < v37 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v37, 1);
    v38 = (char *)ptr;
    v39 = v48;
  }
  memset(&v38[v39], 0, v37 - v39);
  *(_QWORD *)&v48 = v37;
LABEL_34:
  memcpy((char *)ptr + v36, src, v35);
LABEL_35:
  add_undo_record(a4, ptr, v48);
  if ( ptr )
  {
    *(_QWORD *)&v48 = 0;
    qfree(ptr);
  }
  return v51[0] - __readfsqword(0x28u);
}

