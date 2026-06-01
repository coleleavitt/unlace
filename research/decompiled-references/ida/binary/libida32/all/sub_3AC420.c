__int64 __fastcall sub_3AC420(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rax
  size_t v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned int *v9; // rbp
  const char *v10; // r14
  size_t v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  size_t v14; // r10
  __int64 v15; // r9
  unsigned __int64 v16; // r11
  char *v17; // rsi
  __int64 v18; // rax
  size_t v19; // r9
  unsigned __int64 v20; // r10
  char *v21; // rsi
  __int64 v22; // rax
  size_t v23; // r15
  const char *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  size_t v27; // r10
  __int64 v28; // r9
  unsigned __int64 v29; // r11
  char *v30; // rsi
  __int64 v31; // rax
  size_t v32; // r9
  unsigned __int64 v33; // r10
  char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  size_t v37; // r14
  __int64 v38; // r15
  unsigned __int64 v39; // r9
  char *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  size_t v43; // r14
  __int64 v44; // r15
  unsigned __int64 v45; // r9
  char *v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // ebx
  char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // [rsp+0h] [rbp-A8h]
  __int64 v53; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v54; // [rsp+10h] [rbp-98h]
  size_t n; // [rsp+18h] [rbp-90h]
  __int64 v56; // [rsp+20h] [rbp-88h]
  __int64 v57; // [rsp+28h] [rbp-80h]
  unsigned int v58; // [rsp+3Ch] [rbp-6Ch] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v60; // [rsp+48h] [rbp-60h]
  _BYTE src[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v62[8]; // [rsp+68h] [rbp-40h] BYREF

  v57 = a1;
  v53 = a3;
  v4 = *((_DWORD *)a2 + 2);
  v62[0] = __readfsqword(0x28u);
  v60 = 0;
  ptr = nullptr;
  v5 = pack_dd(src, v62, v4 | 0x80000000) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v60;
    v8 = v60 + v5;
    if ( __CFADD__((_QWORD)v60, v5) )
    {
      if ( (unsigned __int64)v60 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v60 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v60 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)ptr + v7, src, v6);
        goto LABEL_7;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v50 = (char *)ptr;
    v51 = v60;
    if ( *((_QWORD *)&v60 + 1) < v8 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v8, 1);
      v50 = (char *)ptr;
      v51 = v60;
    }
    memset(&v50[v51], 0, v8 - v51);
    *(_QWORD *)&v60 = v8;
    goto LABEL_6;
  }
LABEL_7:
  v9 = *a2;
  v52 = (__int64)&(*a2)[14 * (_QWORD)a2[1]];
  while ( (unsigned int *)v52 != v9 )
  {
    v36 = pack_dd(src, v62, *v9) - (_QWORD)src;
    v37 = v36;
    if ( !v36 )
      goto LABEL_46;
    v38 = v60;
    v39 = v60 + v36;
    if ( __CFADD__((_QWORD)v60, v36) )
    {
      if ( (unsigned __int64)v60 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v60 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v60 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_45;
      }
      v39 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v40 = (char *)ptr;
    v41 = v60;
    if ( *((_QWORD *)&v60 + 1) < v39 )
    {
      v54 = v39;
      ptr = (void *)qvector_reserve(&ptr, ptr, v39, 1);
      v40 = (char *)ptr;
      v39 = v54;
      v41 = v60;
    }
    v54 = v39;
    memset(&v40[v41], 0, v39 - v41);
    *(_QWORD *)&v60 = v54;
LABEL_45:
    memcpy((char *)ptr + v38, src, v37);
LABEL_46:
    v42 = pack_dd(src, v62, v9[1]) - (_QWORD)src;
    v43 = v42;
    if ( !v42 )
      goto LABEL_52;
    v44 = v60;
    v45 = v60 + v42;
    if ( __CFADD__((_QWORD)v60, v42) )
    {
      if ( (unsigned __int64)v60 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v60 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v60 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_51;
      }
      v45 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v46 = (char *)ptr;
    v47 = v60;
    if ( *((_QWORD *)&v60 + 1) < v45 )
    {
      v54 = v45;
      ptr = (void *)qvector_reserve(&ptr, ptr, v45, 1);
      v46 = (char *)ptr;
      v45 = v54;
      v47 = v60;
    }
    v54 = v45;
    memset(&v46[v47], 0, v45 - v47);
    *(_QWORD *)&v60 = v54;
LABEL_51:
    memcpy((char *)ptr + v44, src, v43);
LABEL_52:
    v11 = *((_QWORD *)v9 + 2);
    if ( v11 )
    {
      v10 = *((const char **)v9 + 1);
      if ( v10 )
      {
        v11 = strlen(*((const char **)v9 + 1));
        if ( HIDWORD(v11) )
        {
          if ( !under_debugger )
            interr(4);
LABEL_99:
          BUG();
        }
        v12 = (unsigned int)v11;
      }
      else
      {
        v12 = 0;
        v11 = 0;
        v10 = &byte_22CD811;
      }
    }
    else
    {
      v12 = 0;
      v10 = haystack;
      if ( !haystack )
        v10 = &byte_22CD811;
    }
    v13 = pack_dd(src, v62, v12) - (_QWORD)src;
    v14 = v13;
    if ( v13 )
    {
      v15 = v60;
      v16 = v60 + v13;
      if ( !__CFADD__((_QWORD)v60, v13) )
        goto LABEL_14;
      if ( (unsigned __int64)v60 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v16 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
        v17 = (char *)ptr;
        v18 = v60;
        if ( *((_QWORD *)&v60 + 1) < v16 )
        {
          v56 = v60;
          n = v14;
          v54 = v16;
          ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
          v17 = (char *)ptr;
          v15 = v56;
          v18 = v60;
          v14 = n;
          v16 = v54;
        }
        v56 = v15;
        n = v14;
        v54 = v16;
        memset(&v17[v18], 0, v16 - v18);
        v14 = n;
        v15 = v56;
        *(_QWORD *)&v60 = v54;
      }
      else if ( (_QWORD)v60 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v60 = 0x7FFFFFFFFFFFFFFFLL;
      }
      memcpy((char *)ptr + v15, src, v14);
    }
    if ( !v11 )
      goto LABEL_24;
    v19 = v60;
    v20 = v11 + v60;
    if ( __CFADD__(v11, (_QWORD)v60) )
    {
      if ( (unsigned __int64)v60 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v60 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v60 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_23;
      }
      v20 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = (char *)ptr;
    v22 = v60;
    if ( *((_QWORD *)&v60 + 1) < v20 )
    {
      n = v60;
      v54 = v20;
      ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
      v21 = (char *)ptr;
      v19 = n;
      v22 = v60;
      v20 = v54;
    }
    n = v19;
    v54 = v20;
    memset(&v21[v22], 0, v20 - v22);
    v19 = n;
    *(_QWORD *)&v60 = v54;
LABEL_23:
    memcpy((char *)ptr + v19, v10, v11);
LABEL_24:
    v23 = *((_QWORD *)v9 + 5);
    if ( v23 )
    {
      v24 = *((const char **)v9 + 4);
      if ( v24 )
      {
        v23 = strlen(*((const char **)v9 + 4));
        if ( HIDWORD(v23) )
        {
          if ( !under_debugger )
            interr(4);
          goto LABEL_99;
        }
        goto LABEL_27;
      }
      v25 = 0;
      v23 = 0;
      v24 = &byte_22CD811;
    }
    else
    {
      v25 = 0;
      v24 = &byte_22CD811;
      if ( haystack )
      {
        v24 = haystack;
LABEL_27:
        v25 = (unsigned int)v23;
      }
    }
    v26 = pack_dd(src, v62, v25) - (_QWORD)src;
    v27 = v26;
    if ( !v26 )
      goto LABEL_34;
    v28 = v60;
    v29 = v60 + v26;
    if ( __CFADD__((_QWORD)v60, v26) )
    {
      if ( (unsigned __int64)v60 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v60 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v60 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_33;
      }
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v30 = (char *)ptr;
    v31 = v60;
    if ( *((_QWORD *)&v60 + 1) < v29 )
    {
      v56 = v60;
      n = v27;
      v54 = v29;
      ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
      v30 = (char *)ptr;
      v28 = v56;
      v31 = v60;
      v27 = n;
      v29 = v54;
    }
    v56 = v28;
    n = v27;
    v54 = v29;
    memset(&v30[v31], 0, v29 - v31);
    v27 = n;
    v28 = v56;
    *(_QWORD *)&v60 = v54;
LABEL_33:
    memcpy((char *)ptr + v28, src, v27);
LABEL_34:
    if ( v23 )
    {
      v32 = v60;
      v33 = v23 + v60;
      if ( __CFADD__(v23, (_QWORD)v60) )
      {
        if ( (unsigned __int64)v60 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v34 = (char *)ptr;
          v35 = v60;
          v33 = 0x7FFFFFFFFFFFFFFFLL;
          if ( *((_QWORD *)&v60 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
            goto LABEL_84;
          goto LABEL_37;
        }
        if ( (_QWORD)v60 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v60 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v34 = (char *)ptr;
        v35 = v60;
        if ( *((_QWORD *)&v60 + 1) >= v33 )
          goto LABEL_37;
LABEL_84:
        n = v60;
        v54 = v33;
        ptr = (void *)qvector_reserve(&ptr, v34, v33, 1);
        v34 = (char *)ptr;
        v32 = n;
        v35 = v60;
        v33 = v54;
LABEL_37:
        n = v32;
        v54 = v33;
        memset(&v34[v35], 0, v33 - v35);
        v32 = n;
        *(_QWORD *)&v60 = v54;
      }
      memcpy((char *)ptr + v32, v24, v23);
    }
    v9 += 14;
  }
  if ( v53 )
    netnode_check(&v58, v53, 0, 0);
  else
    v58 = sub_3AC350(v57);
  v48 = netnode_setblob(v58, ptr, v60, 0, 69);
  if ( ptr )
  {
    *(_QWORD *)&v60 = 0;
    qfree(ptr);
  }
  return v48;
}

