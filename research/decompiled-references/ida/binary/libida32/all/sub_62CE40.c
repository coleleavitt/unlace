unsigned __int64 __fastcall sub_62CE40(
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
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  size_t v32; // rax
  size_t v33; // rbp
  __int64 v34; // r8
  unsigned __int64 v35; // r9
  char *v36; // rsi
  __int64 v37; // rax
  size_t v38; // rax
  __int64 v39; // rbx
  size_t v40; // rbp
  unsigned __int64 v41; // r8
  size_t v42; // rax
  __int64 v43; // rbx
  size_t v44; // rbp
  unsigned __int64 v45; // r8
  size_t v46; // rax
  __int64 v47; // rbx
  size_t v48; // rbp
  unsigned __int64 v49; // r14
  size_t v50; // rax
  __int64 v51; // rbx
  size_t v52; // r13
  unsigned __int64 v53; // rbp
  __int64 v54; // rax
  _BYTE *v55; // rsi
  char *v56; // rsi
  __int64 v57; // rax
  char *v58; // rsi
  __int64 v59; // rax
  char *v60; // rsi
  __int64 v61; // rax
  char *v62; // rsi
  __int64 v63; // rax
  char *v64; // rsi
  __int64 v65; // rax
  char *s; // [rsp+0h] [rbp-98h]
  char *v67; // [rsp+8h] [rbp-90h]
  __int64 v68; // [rsp+10h] [rbp-88h]
  unsigned int v69; // [rsp+18h] [rbp-80h]
  int v70; // [rsp+1Ch] [rbp-7Ch]
  unsigned __int64 v71; // [rsp+20h] [rbp-78h]
  __int64 v72; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v74; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v76[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v77[8]; // [rsp+58h] [rbp-40h] BYREF

  v69 = a2;
  s = a5;
  v14 = a7;
  v70 = a10;
  v67 = a6;
  v15 = a8;
  LODWORD(v68) = a12;
  v16 = a9;
  v77[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v77[0] - __readfsqword(0x28u);
  v17 = *(_QWORD *)(a1 + 1480);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a3 != *(_QWORD *)(v17 + 8) )
      return v77[0] - __readfsqword(0x28u);
  }
  v74 = 0;
  ptr = nullptr;
  sub_62CA30(v17, (__int64 *)&ptr, (__int64 *)a3, 4 * v68);
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v19 = pack_dd(src, v76, (unsigned int)(a4 + 1)) - (_QWORD)src;
    v20 = v19;
    if ( v19 )
    {
      v21 = v74;
      v22 = v74 + v19;
      if ( __CFADD__((_QWORD)v74, v19) )
      {
        if ( (unsigned __int64)v74 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v74 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v74 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_14;
        }
        v22 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v23 = (char *)ptr;
      v24 = v74;
      if ( *((_QWORD *)&v74 + 1) < v22 )
      {
        v72 = v74;
        v71 = v22;
        ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
        v23 = (char *)ptr;
        v21 = v72;
        v24 = v74;
        v22 = v71;
      }
      v72 = v21;
      v71 = v22;
      memset(&v23[v24], 0, v22 - v24);
      v21 = v72;
      *(_QWORD *)&v74 = v71;
LABEL_14:
      memcpy((char *)ptr + v21, src, v20);
    }
  }
  if ( s )
  {
    v25 = strlen(s);
    v26 = v74;
    v27 = v25 + 1;
    v28 = v25 + 1 + v74;
    if ( __CFADD__(v25 + 1, (_QWORD)v74) )
    {
      if ( (unsigned __int64)v74 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v74 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_20;
        goto LABEL_19;
      }
      v28 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v26 = v74;
    v27 = 1;
    v28 = v74 + 1;
    if ( (_QWORD)v74 == -1 )
    {
      v26 = -1;
      s = (char *)&byte_22CD811;
LABEL_19:
      *(_QWORD *)&v74 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_20;
    }
    s = (char *)&byte_22CD811;
  }
  v56 = (char *)ptr;
  v57 = v26;
  if ( *((_QWORD *)&v74 + 1) < v28 )
  {
    v71 = v28;
    ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
    v56 = (char *)ptr;
    v28 = v71;
    v57 = v74;
  }
  v71 = v28;
  memset(&v56[v57], 0, v28 - v57);
  *(_QWORD *)&v74 = v71;
LABEL_20:
  memcpy((char *)ptr + v26, s, v27);
  if ( (_BYTE)v68 )
    v31 = pack_dq(src, v77, a11, v29, v30);
  else
    v31 = pack_dd(src, v76, (unsigned int)a11);
  v32 = v31 - (_QWORD)src;
  v33 = v32;
  if ( v32 )
  {
    v34 = v74;
    v35 = v74 + v32;
    if ( __CFADD__((_QWORD)v74, v32) )
    {
      if ( (unsigned __int64)v74 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v74 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v74 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_27;
      }
      v35 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v36 = (char *)ptr;
    v37 = v74;
    if ( *((_QWORD *)&v74 + 1) < v35 )
    {
      v68 = v74;
      s = (char *)v35;
      ptr = (void *)qvector_reserve(&ptr, ptr, v35, 1);
      v36 = (char *)ptr;
      v34 = v68;
      v37 = v74;
      v35 = (unsigned __int64)s;
    }
    v68 = v34;
    s = (char *)v35;
    memset(&v36[v37], 0, v35 - v37);
    v34 = v68;
    *(_QWORD *)&v74 = s;
LABEL_27:
    memcpy((char *)ptr + v34, src, v33);
  }
  if ( v67 )
  {
    v38 = strlen(v67);
    v39 = v74;
    v40 = v38 + 1;
    v41 = v74 + v38 + 1;
    if ( __CFADD__((_QWORD)v74, v38 + 1) )
    {
      if ( (unsigned __int64)v74 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v74 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_33;
        goto LABEL_32;
      }
      v41 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v39 = v74;
    v40 = 1;
    v41 = v74 + 1;
    if ( (_QWORD)v74 == -1 )
    {
      v39 = -1;
      v67 = (char *)&byte_22CD811;
LABEL_32:
      *(_QWORD *)&v74 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_33;
    }
    v67 = (char *)&byte_22CD811;
  }
  v64 = (char *)ptr;
  v65 = v39;
  if ( *((_QWORD *)&v74 + 1) < v41 )
  {
    s = (char *)v41;
    ptr = (void *)qvector_reserve(&ptr, ptr, v41, 1);
    v64 = (char *)ptr;
    v41 = (unsigned __int64)s;
    v65 = v74;
  }
  s = (char *)v41;
  memset(&v64[v65], 0, v41 - v65);
  *(_QWORD *)&v74 = s;
LABEL_33:
  memcpy((char *)ptr + v39, v67, v40);
  if ( a8 )
  {
    v42 = strlen(a8);
    v43 = v74;
    v44 = v42 + 1;
    v45 = v42 + 1 + v74;
    if ( __CFADD__(v42 + 1, (_QWORD)v74) )
    {
      if ( (unsigned __int64)v74 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v74 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_38;
        goto LABEL_37;
      }
      v45 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v43 = v74;
    v44 = 1;
    v15 = &byte_22CD811;
    v45 = v74 + 1;
    if ( (_QWORD)v74 == -1 )
    {
      v43 = -1;
      v15 = &byte_22CD811;
LABEL_37:
      *(_QWORD *)&v74 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_38;
    }
  }
  v62 = (char *)ptr;
  v63 = v43;
  if ( *((_QWORD *)&v74 + 1) < v45 )
  {
    s = (char *)v45;
    ptr = (void *)qvector_reserve(&ptr, ptr, v45, 1);
    v62 = (char *)ptr;
    v45 = (unsigned __int64)s;
    v63 = v74;
  }
  s = (char *)v45;
  memset(&v62[v63], 0, v45 - v63);
  *(_QWORD *)&v74 = s;
LABEL_38:
  memcpy((char *)ptr + v43, v15, v44);
  if ( a7 )
  {
    v46 = strlen(a7);
    v47 = v74;
    v48 = v46 + 1;
    v49 = v46 + 1 + v74;
    if ( __CFADD__(v46 + 1, (_QWORD)v74) )
    {
      if ( (unsigned __int64)v74 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v74 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_43;
        goto LABEL_42;
      }
      v49 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v47 = v74;
    v14 = &byte_22CD811;
    v48 = 1;
    v49 = v74 + 1;
    if ( (_QWORD)v74 == -1 )
    {
      v47 = -1;
      v14 = &byte_22CD811;
      v48 = 1;
LABEL_42:
      *(_QWORD *)&v74 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_43;
    }
  }
  v60 = (char *)ptr;
  v61 = v47;
  if ( *((_QWORD *)&v74 + 1) < v49 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v49, 1);
    v60 = (char *)ptr;
    v61 = v74;
  }
  memset(&v60[v61], 0, v49 - v61);
  *(_QWORD *)&v74 = v49;
LABEL_43:
  memcpy((char *)ptr + v47, v14, v48);
  if ( !a9 )
  {
    v51 = v74;
    v52 = 1;
    v16 = &byte_22CD811;
    v53 = v74 + 1;
    if ( (_QWORD)v74 == -1 )
    {
      v51 = -1;
      v16 = &byte_22CD811;
      goto LABEL_47;
    }
LABEL_59:
    v58 = (char *)ptr;
    v59 = v51;
    if ( *((_QWORD *)&v74 + 1) < v53 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v53, 1);
      v58 = (char *)ptr;
      v59 = v74;
    }
    memset(&v58[v59], 0, v53 - v59);
    *(_QWORD *)&v74 = v53;
    goto LABEL_48;
  }
  v50 = strlen(a9);
  v51 = v74;
  v52 = v50 + 1;
  v53 = v50 + 1 + v74;
  if ( !__CFADD__(v50 + 1, (_QWORD)v74) )
    goto LABEL_59;
  if ( (unsigned __int64)v74 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v53 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_59;
  }
  if ( (_QWORD)v74 != 0x7FFFFFFFFFFFFFFFLL )
LABEL_47:
    *(_QWORD *)&v74 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
  memcpy((char *)ptr + v51, v16, v52);
  v54 = v74;
  v55 = ptr;
  if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)(v74 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v74 + 1, 1);
    v55 = ptr;
    v54 = v74;
  }
  v55[v54] = v70;
  *(_QWORD *)&v74 = v74 + 1;
  add_undo_record(v69, ptr, v74);
  if ( ptr )
  {
    *(_QWORD *)&v74 = 0;
    qfree(ptr);
  }
  return v77[0] - __readfsqword(0x28u);
}

