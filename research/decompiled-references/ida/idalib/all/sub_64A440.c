unsigned __int64 __fastcall sub_64A440(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char *a5,
        char *a6,
        char *a7,
        char *a8,
        char *a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  const char *v14; // r13
  const char *v15; // r14
  const char *v16; // r15
  __int64 v17; // rdi
  __int64 v19; // rax
  size_t v20; // rbp
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  char *v23; // rsi
  __int64 v24; // rax
  size_t v25; // rax
  __int64 v26; // rbx
  size_t v27; // rbp
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  size_t v30; // rax
  size_t v31; // rbp
  __int64 v32; // r8
  unsigned __int64 v33; // r9
  char *v34; // rsi
  __int64 v35; // rax
  size_t v36; // rax
  __int64 v37; // rbx
  size_t v38; // rbp
  unsigned __int64 v39; // r8
  size_t v40; // rax
  __int64 v41; // rbx
  size_t v42; // rbp
  unsigned __int64 v43; // r8
  size_t v44; // rax
  __int64 v45; // rbx
  size_t v46; // rbp
  unsigned __int64 v47; // r14
  size_t v48; // rax
  __int64 v49; // rbx
  size_t v50; // r13
  unsigned __int64 v51; // rbp
  __int64 v52; // rax
  _BYTE *v53; // rsi
  char *v54; // rsi
  __int64 v55; // rax
  char *v56; // rsi
  __int64 v57; // rax
  char *v58; // rsi
  __int64 v59; // rax
  char *v60; // rsi
  __int64 v61; // rax
  char *v62; // rsi
  __int64 v63; // rax
  char *s; // [rsp+0h] [rbp-98h]
  char *v65; // [rsp+8h] [rbp-90h]
  __int64 v66; // [rsp+10h] [rbp-88h]
  unsigned int v67; // [rsp+18h] [rbp-80h]
  int v68; // [rsp+1Ch] [rbp-7Ch]
  unsigned __int64 v69; // [rsp+20h] [rbp-78h]
  __int64 v70; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v72; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v74[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v75[8]; // [rsp+58h] [rbp-40h] BYREF

  v67 = a2;
  s = a5;
  v14 = a7;
  v68 = a10;
  v65 = a6;
  v15 = a8;
  LODWORD(v66) = a12;
  v16 = a9;
  v75[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v75[0] - __readfsqword(0x28u);
  v17 = *(_QWORD *)(a1 + 1672);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a3 != *(_QWORD *)(v17 + 8) )
      return v75[0] - __readfsqword(0x28u);
  }
  v72 = 0;
  ptr = nullptr;
  sub_64A030(v17, (__int64 *)&ptr, (__int64 *)a3, 4 * v66);
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v19 = pack_dd(src, v74, (unsigned int)(a4 + 1)) - (_QWORD)src;
    v20 = v19;
    if ( v19 )
    {
      v21 = v72;
      v22 = v72 + v19;
      if ( __CFADD__((_QWORD)v72, v19) )
      {
        if ( (unsigned __int64)v72 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v72 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v72 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_14;
        }
        v22 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v23 = (char *)ptr;
      v24 = v72;
      if ( *((_QWORD *)&v72 + 1) < v22 )
      {
        v70 = v72;
        v69 = v22;
        ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
        v23 = (char *)ptr;
        v21 = v70;
        v24 = v72;
        v22 = v69;
      }
      v70 = v21;
      v69 = v22;
      memset(&v23[v24], 0, v22 - v24);
      v21 = v70;
      *(_QWORD *)&v72 = v69;
LABEL_14:
      memcpy((char *)ptr + v21, src, v20);
    }
  }
  if ( s )
  {
    v25 = strlen(s);
    v26 = v72;
    v27 = v25 + 1;
    v28 = v25 + 1 + v72;
    if ( __CFADD__(v25 + 1, (_QWORD)v72) )
    {
      if ( (unsigned __int64)v72 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v72 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_20;
        goto LABEL_19;
      }
      v28 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v26 = v72;
    v27 = 1;
    v28 = v72 + 1;
    if ( (_QWORD)v72 == -1 )
    {
      v26 = -1;
      s = (char *)&byte_22F0C30;
LABEL_19:
      *(_QWORD *)&v72 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_20;
    }
    s = (char *)&byte_22F0C30;
  }
  v54 = (char *)ptr;
  v55 = v26;
  if ( *((_QWORD *)&v72 + 1) < v28 )
  {
    v69 = v28;
    ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
    v54 = (char *)ptr;
    v28 = v69;
    v55 = v72;
  }
  v69 = v28;
  memset(&v54[v55], 0, v28 - v55);
  *(_QWORD *)&v72 = v69;
LABEL_20:
  memcpy((char *)ptr + v26, s, v27);
  if ( (_BYTE)v66 )
    v29 = pack_dq(src, v75, a11);
  else
    v29 = pack_dd(src, v74, (unsigned int)a11);
  v30 = v29 - (_QWORD)src;
  v31 = v30;
  if ( v30 )
  {
    v32 = v72;
    v33 = v72 + v30;
    if ( __CFADD__((_QWORD)v72, v30) )
    {
      if ( (unsigned __int64)v72 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v72 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v72 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_27;
      }
      v33 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v34 = (char *)ptr;
    v35 = v72;
    if ( *((_QWORD *)&v72 + 1) < v33 )
    {
      v66 = v72;
      s = (char *)v33;
      ptr = (void *)qvector_reserve(&ptr, ptr, v33, 1);
      v34 = (char *)ptr;
      v32 = v66;
      v35 = v72;
      v33 = (unsigned __int64)s;
    }
    v66 = v32;
    s = (char *)v33;
    memset(&v34[v35], 0, v33 - v35);
    v32 = v66;
    *(_QWORD *)&v72 = s;
LABEL_27:
    memcpy((char *)ptr + v32, src, v31);
  }
  if ( v65 )
  {
    v36 = strlen(v65);
    v37 = v72;
    v38 = v36 + 1;
    v39 = v72 + v36 + 1;
    if ( __CFADD__((_QWORD)v72, v36 + 1) )
    {
      if ( (unsigned __int64)v72 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v72 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_33;
        goto LABEL_32;
      }
      v39 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v37 = v72;
    v38 = 1;
    v39 = v72 + 1;
    if ( (_QWORD)v72 == -1 )
    {
      v37 = -1;
      v65 = (char *)&byte_22F0C30;
LABEL_32:
      *(_QWORD *)&v72 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_33;
    }
    v65 = (char *)&byte_22F0C30;
  }
  v62 = (char *)ptr;
  v63 = v37;
  if ( *((_QWORD *)&v72 + 1) < v39 )
  {
    s = (char *)v39;
    ptr = (void *)qvector_reserve(&ptr, ptr, v39, 1);
    v62 = (char *)ptr;
    v39 = (unsigned __int64)s;
    v63 = v72;
  }
  s = (char *)v39;
  memset(&v62[v63], 0, v39 - v63);
  *(_QWORD *)&v72 = s;
LABEL_33:
  memcpy((char *)ptr + v37, v65, v38);
  if ( a8 )
  {
    v40 = strlen(a8);
    v41 = v72;
    v42 = v40 + 1;
    v43 = v40 + 1 + v72;
    if ( __CFADD__(v40 + 1, (_QWORD)v72) )
    {
      if ( (unsigned __int64)v72 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v72 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_38;
        goto LABEL_37;
      }
      v43 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v41 = v72;
    v42 = 1;
    v15 = &byte_22F0C30;
    v43 = v72 + 1;
    if ( (_QWORD)v72 == -1 )
    {
      v41 = -1;
      v15 = &byte_22F0C30;
LABEL_37:
      *(_QWORD *)&v72 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_38;
    }
  }
  v60 = (char *)ptr;
  v61 = v41;
  if ( *((_QWORD *)&v72 + 1) < v43 )
  {
    s = (char *)v43;
    ptr = (void *)qvector_reserve(&ptr, ptr, v43, 1);
    v60 = (char *)ptr;
    v43 = (unsigned __int64)s;
    v61 = v72;
  }
  s = (char *)v43;
  memset(&v60[v61], 0, v43 - v61);
  *(_QWORD *)&v72 = s;
LABEL_38:
  memcpy((char *)ptr + v41, v15, v42);
  if ( a7 )
  {
    v44 = strlen(a7);
    v45 = v72;
    v46 = v44 + 1;
    v47 = v44 + 1 + v72;
    if ( __CFADD__(v44 + 1, (_QWORD)v72) )
    {
      if ( (unsigned __int64)v72 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v72 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_43;
        goto LABEL_42;
      }
      v47 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v45 = v72;
    v14 = &byte_22F0C30;
    v46 = 1;
    v47 = v72 + 1;
    if ( (_QWORD)v72 == -1 )
    {
      v45 = -1;
      v14 = &byte_22F0C30;
      v46 = 1;
LABEL_42:
      *(_QWORD *)&v72 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_43;
    }
  }
  v58 = (char *)ptr;
  v59 = v45;
  if ( *((_QWORD *)&v72 + 1) < v47 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v47, 1);
    v58 = (char *)ptr;
    v59 = v72;
  }
  memset(&v58[v59], 0, v47 - v59);
  *(_QWORD *)&v72 = v47;
LABEL_43:
  memcpy((char *)ptr + v45, v14, v46);
  if ( !a9 )
  {
    v49 = v72;
    v50 = 1;
    v16 = &byte_22F0C30;
    v51 = v72 + 1;
    if ( (_QWORD)v72 == -1 )
    {
      v49 = -1;
      v16 = &byte_22F0C30;
      goto LABEL_47;
    }
LABEL_59:
    v56 = (char *)ptr;
    v57 = v49;
    if ( *((_QWORD *)&v72 + 1) < v51 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v51, 1);
      v56 = (char *)ptr;
      v57 = v72;
    }
    memset(&v56[v57], 0, v51 - v57);
    *(_QWORD *)&v72 = v51;
    goto LABEL_48;
  }
  v48 = strlen(a9);
  v49 = v72;
  v50 = v48 + 1;
  v51 = v48 + 1 + v72;
  if ( !__CFADD__(v48 + 1, (_QWORD)v72) )
    goto LABEL_59;
  if ( (unsigned __int64)v72 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v51 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_59;
  }
  if ( (_QWORD)v72 != 0x7FFFFFFFFFFFFFFFLL )
LABEL_47:
    *(_QWORD *)&v72 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
  memcpy((char *)ptr + v49, v16, v50);
  v52 = v72;
  v53 = ptr;
  if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v72 + 1, 1);
    v53 = ptr;
    v52 = v72;
  }
  v53[v52] = v68;
  *(_QWORD *)&v72 = v72 + 1;
  add_undo_record(v67, ptr, v72);
  if ( ptr )
  {
    *(_QWORD *)&v72 = 0;
    qfree(ptr);
  }
  return v75[0] - __readfsqword(0x28u);
}
