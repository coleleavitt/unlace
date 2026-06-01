unsigned __int64 __fastcall sub_427040(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        int a7,
        char a8)
{
  bool v8; // zf
  __int64 v12; // rax
  size_t v13; // r8
  __int64 v14; // r14
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  size_t v17; // r8
  __int64 v18; // r14
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  size_t v21; // r14
  __int64 v22; // r15
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  _BYTE *v25; // rsi
  __int64 v26; // rax
  const char *v27; // r15
  unsigned __int64 v28; // r13
  size_t v29; // r14
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  size_t v32; // r12
  __int64 v33; // r13
  unsigned __int64 v34; // r14
  char *v35; // rsi
  __int64 v36; // rax
  char *v37; // rsi
  unsigned __int64 v38; // rax
  char *v39; // rsi
  __int64 v40; // rax
  char *v41; // rsi
  __int64 v42; // rax
  char *v43; // rsi
  __int64 v44; // rax
  unsigned __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+10h] [rbp-88h]
  void **p_ptr; // [rsp+18h] [rbp-80h]
  unsigned __int64 v48; // [rsp+20h] [rbp-78h]
  size_t v49; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v51; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  char v53[5]; // [rsp+53h] [rbp-45h] BYREF
  _QWORD v54[8]; // [rsp+58h] [rbp-40h] BYREF

  v8 = *(_DWORD *)(a1 + 160) == -1;
  v45 = a3;
  v46 = a4;
  v54[0] = __readfsqword(0x28u);
  if ( v8 || !(unsigned __int8)must_journal(a1, a2, a3) )
    return v54[0] - __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v51 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v51) = a8 ^ 1;
  *(_QWORD *)&v51 = v51 + 1;
  v12 = pack_dq(src, v54, a2) - (_QWORD)src;
  v13 = v12;
  if ( v12 )
  {
    v14 = v51;
    v15 = v51 + v12;
    if ( __CFADD__((_QWORD)v51, v12) )
    {
      if ( (unsigned __int64)v51 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v51 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v51 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((char *)ptr + v14, src, v13);
        goto LABEL_10;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v39 = (char *)ptr;
    v40 = v51;
    if ( *((_QWORD *)&v51 + 1) < v15 )
    {
      v49 = v13;
      v48 = v15;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v15, 1);
      v39 = (char *)ptr;
      v13 = v49;
      v40 = v51;
      v15 = v48;
    }
    v49 = v13;
    v48 = v15;
    memset(&v39[v40], 0, v15 - v40);
    v13 = v49;
    *(_QWORD *)&v51 = v48;
    goto LABEL_9;
  }
LABEL_10:
  v16 = pack_dq(src, v54, v45) - (_QWORD)src;
  v17 = v16;
  if ( !v16 )
    goto LABEL_16;
  v18 = v51;
  v19 = v51 + v16;
  if ( !__CFADD__((_QWORD)v51, v16) )
    goto LABEL_48;
  if ( (unsigned __int64)v51 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v19 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
    v41 = (char *)ptr;
    v42 = v51;
    if ( *((_QWORD *)&v51 + 1) < v19 )
    {
      v48 = v17;
      v45 = v19;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v19, 1);
      v41 = (char *)ptr;
      v17 = v48;
      v42 = v51;
      v19 = v45;
    }
    v48 = v17;
    v45 = v19;
    memset(&v41[v42], 0, v19 - v42);
    v17 = v48;
    *(_QWORD *)&v51 = v45;
    goto LABEL_15;
  }
  if ( (_QWORD)v51 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v51 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
  memcpy((char *)ptr + v18, src, v17);
LABEL_16:
  v20 = pack_dq(src, v54, v46) - (_QWORD)src;
  v21 = v20;
  if ( !v20 )
    goto LABEL_22;
  v22 = v51;
  v23 = v51 + v20;
  if ( !__CFADD__((_QWORD)v51, v20) )
    goto LABEL_52;
  if ( (unsigned __int64)v51 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_52:
    v43 = (char *)ptr;
    v44 = v51;
    if ( *((_QWORD *)&v51 + 1) < v23 )
    {
      v45 = v23;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v23, 1);
      v43 = (char *)ptr;
      v23 = v45;
      v44 = v51;
    }
    v45 = v23;
    memset(&v43[v44], 0, v23 - v44);
    *(_QWORD *)&v51 = v45;
    goto LABEL_21;
  }
  if ( (_QWORD)v51 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v51 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
  memcpy((char *)ptr + v22, src, v21);
LABEL_22:
  v24 = v51;
  v25 = ptr;
  if ( *((_QWORD *)&v51 + 1) < (unsigned __int64)(v51 + 1) )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v51 + 1, 1);
    v25 = ptr;
    v24 = v51;
  }
  v25[v24] = a5;
  v26 = v51;
  v27 = haystack;
  v8 = *(_QWORD *)(a6 + 8) == 0;
  v28 = v51 + 1;
  *(_QWORD *)&v51 = v51 + 1;
  if ( !v8 )
    v27 = *(const char **)a6;
  if ( v27 )
  {
    v29 = strlen(v27) + 1;
    v30 = v29 + v28;
    if ( __CFADD__(v29, v28) )
    {
      if ( v28 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v28 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_31;
        goto LABEL_30;
      }
      v30 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v30 = v26 + 2;
    v29 = 1;
    v27 = &byte_22F0C30;
    if ( v26 + 2 < v28 )
    {
      v27 = &byte_22F0C30;
      v29 = 1;
LABEL_30:
      *(_QWORD *)&v51 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_31;
    }
  }
  v37 = (char *)ptr;
  v38 = v28;
  if ( *((_QWORD *)&v51 + 1) < v30 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v30, 1);
    v37 = (char *)ptr;
    v38 = v51;
  }
  memset(&v37[v38], 0, v30 - v38);
  *(_QWORD *)&v51 = v30;
LABEL_31:
  memcpy((char *)ptr + v28, v27, v29);
  v31 = pack_dd(src, v53, a7 & 0xFFFFFFFC) - (_QWORD)src;
  v32 = v31;
  if ( !v31 )
    goto LABEL_37;
  v33 = v51;
  v34 = v51 + v31;
  if ( __CFADD__((_QWORD)v51, v31) )
  {
    if ( (unsigned __int64)v51 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v51 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v51 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_36;
    }
    v34 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v35 = (char *)ptr;
  v36 = v51;
  if ( *((_QWORD *)&v51 + 1) < v34 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v34, 1);
    v35 = (char *)ptr;
    v36 = v51;
  }
  memset(&v35[v36], 0, v34 - v36);
  *(_QWORD *)&v51 = v34;
LABEL_36:
  memcpy((char *)ptr + v33, src, v32);
LABEL_37:
  add_undo_record(*(unsigned int *)(a1 + 160), ptr, v51);
  if ( ptr )
  {
    *(_QWORD *)&v51 = 0;
    qfree(ptr);
  }
  return v54[0] - __readfsqword(0x28u);
}
