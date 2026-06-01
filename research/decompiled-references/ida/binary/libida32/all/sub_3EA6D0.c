unsigned __int64 __fastcall sub_3EA6D0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v6; // rax
  size_t v7; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  void *v11; // rdi
  size_t v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax
  size_t v15; // r10
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  char *v18; // rsi
  __int64 v19; // rax
  size_t v20; // r9
  unsigned __int64 v21; // r10
  char *v22; // rsi
  __int64 v23; // rax
  size_t v24; // r15
  void *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  size_t v28; // r10
  __int64 v29; // r9
  unsigned __int64 v30; // r11
  char *v31; // rsi
  __int64 v32; // rax
  size_t v33; // r9
  unsigned __int64 v34; // r10
  char *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // r15
  _BYTE *v39; // rsi
  char v40; // bp
  _BYTE *v41; // rsi
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int *v45; // rbp
  __int64 v46; // rax
  size_t v47; // r15
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r9
  char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  size_t v53; // r15
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // r9
  char *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // r15
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // r9
  char *v62; // rsi
  __int64 v63; // rax
  char *v64; // rax
  char *v65; // rsi
  __int64 v66; // rax
  int v67; // [rsp+Ch] [rbp-ACh]
  void *v68; // [rsp+10h] [rbp-A8h]
  _QWORD *v69; // [rsp+18h] [rbp-A0h]
  int *v70; // [rsp+20h] [rbp-98h]
  unsigned __int64 v71; // [rsp+28h] [rbp-90h]
  size_t n; // [rsp+30h] [rbp-88h]
  __int64 v73; // [rsp+38h] [rbp-80h]
  int v74; // [rsp+4Ch] [rbp-6Ch] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v76; // [rsp+58h] [rbp-60h]
  _BYTE src[5]; // [rsp+73h] [rbp-45h] BYREF
  _QWORD v78[8]; // [rsp+78h] [rbp-40h] BYREF

  v69 = a1;
  v78[0] = __readfsqword(0x28u);
  v3 = *a1;
  v70 = &v74;
  v74 = -1;
  sub_79BC40(&v74, v3, "$ dbgmemregs", 0);
  v4 = a2[1];
  if ( !v4 )
  {
    sub_79BB90(&v74, *a1, 0, 82);
    return v78[0] - __readfsqword(0x28u);
  }
  ptr = nullptr;
  v76 = 0;
  v6 = pack_dd(src, v78, v4) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v8 = v76;
    v9 = v76 + v6;
    if ( __CFADD__((_QWORD)v76, v6) )
    {
      if ( (unsigned __int64)v76 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v76 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v76 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((char *)ptr + v8, src, v7);
        goto LABEL_10;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v65 = (char *)ptr;
    v66 = v76;
    if ( *((_QWORD *)&v76 + 1) < v9 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
      v65 = (char *)ptr;
      v66 = v76;
    }
    memset(&v65[v66], 0, v9 - v66);
    *(_QWORD *)&v76 = v9;
    goto LABEL_9;
  }
LABEL_10:
  if ( a2[1] )
  {
    v67 = 0;
    v10 = 0;
    while ( 1 )
    {
      v45 = (unsigned int *)(*a2 + (v10 << 6));
      v46 = pack_dd(src, v78, *v45) - (_QWORD)src;
      v47 = v46;
      if ( !v46 )
        goto LABEL_53;
      v48 = v76;
      v49 = v76 + v46;
      if ( __CFADD__((_QWORD)v76, v46) )
      {
        if ( (unsigned __int64)v76 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v76 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v76 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_52;
        }
        v49 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v50 = (char *)ptr;
      v51 = v76;
      if ( *((_QWORD *)&v76 + 1) < v49 )
      {
        v71 = v76;
        v68 = (void *)v49;
        ptr = (void *)qvector_reserve(&ptr, ptr, v49, 1);
        v50 = (char *)ptr;
        v48 = v71;
        v51 = v76;
        v49 = (unsigned __int64)v68;
      }
      v71 = v48;
      v68 = (void *)v49;
      memset(&v50[v51], 0, v49 - v51);
      v48 = v71;
      *(_QWORD *)&v76 = v68;
LABEL_52:
      memcpy((char *)ptr + v48, src, v47);
LABEL_53:
      v52 = pack_dd(src, v78, v45[1] - *v45) - (_QWORD)src;
      v53 = v52;
      if ( !v52 )
        goto LABEL_59;
      v54 = v76;
      v55 = v76 + v52;
      if ( __CFADD__((_QWORD)v76, v52) )
      {
        if ( (unsigned __int64)v76 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v76 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v76 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_58;
        }
        v55 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v56 = (char *)ptr;
      v57 = v76;
      if ( *((_QWORD *)&v76 + 1) < v55 )
      {
        v71 = v76;
        v68 = (void *)v55;
        ptr = (void *)qvector_reserve(&ptr, ptr, v55, 1);
        v56 = (char *)ptr;
        v54 = v71;
        v57 = v76;
        v55 = (unsigned __int64)v68;
      }
      v71 = v54;
      v68 = (void *)v55;
      memset(&v56[v57], 0, v55 - v57);
      v54 = v71;
      *(_QWORD *)&v76 = v68;
LABEL_58:
      memcpy((char *)ptr + v54, src, v53);
LABEL_59:
      v58 = pack_dd(src, v78, v45[14]) - (_QWORD)src;
      v59 = v58;
      if ( !v58 )
        goto LABEL_65;
      v60 = v76;
      v61 = v76 + v58;
      if ( __CFADD__((_QWORD)v76, v58) )
      {
        if ( (unsigned __int64)v76 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v76 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v76 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_64;
        }
        v61 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v62 = (char *)ptr;
      v63 = v76;
      if ( *((_QWORD *)&v76 + 1) < v61 )
      {
        v71 = v76;
        v68 = (void *)v61;
        ptr = (void *)qvector_reserve(&ptr, ptr, v61, 1);
        v62 = (char *)ptr;
        v60 = v71;
        v63 = v76;
        v61 = (unsigned __int64)v68;
      }
      v71 = v60;
      v68 = (void *)v61;
      memset(&v62[v63], 0, v61 - v63);
      v60 = v71;
      *(_QWORD *)&v76 = v68;
LABEL_64:
      memcpy((char *)ptr + v60, src, v59);
LABEL_65:
      v12 = *((_QWORD *)v45 + 2);
      if ( v12 )
      {
        v11 = *((void **)v45 + 1);
        v68 = v11;
        if ( v11 )
        {
          v12 = strlen((const char *)v11);
          if ( HIDWORD(v12) )
          {
            if ( !under_debugger )
              interr(4);
LABEL_113:
            BUG();
          }
          v13 = (unsigned int)v12;
        }
        else
        {
          v13 = 0;
          v12 = 0;
          v68 = (void *)&byte_22CD811;
        }
      }
      else
      {
        v64 = (char *)haystack;
        v13 = 0;
        if ( !haystack )
          v64 = (char *)&byte_22CD811;
        v68 = v64;
      }
      v14 = pack_dd(src, v78, v13) - (_QWORD)src;
      v15 = v14;
      if ( v14 )
      {
        v16 = v76;
        v17 = v76 + v14;
        if ( !__CFADD__((_QWORD)v76, v14) )
          goto LABEL_17;
        if ( (unsigned __int64)v76 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v17 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_17:
          v18 = (char *)ptr;
          v19 = v76;
          if ( *((_QWORD *)&v76 + 1) < v17 )
          {
            v73 = v76;
            n = v15;
            v71 = v17;
            ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
            v18 = (char *)ptr;
            v16 = v73;
            v19 = v76;
            v15 = n;
            v17 = v71;
          }
          v73 = v16;
          n = v15;
          v71 = v17;
          memset(&v18[v19], 0, v17 - v19);
          v15 = n;
          v16 = v73;
          *(_QWORD *)&v76 = v71;
        }
        else if ( (_QWORD)v76 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v76 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((char *)ptr + v16, src, v15);
      }
      if ( !v12 )
        goto LABEL_27;
      v20 = v76;
      v21 = v12 + v76;
      if ( __CFADD__(v12, (_QWORD)v76) )
      {
        if ( (unsigned __int64)v76 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v76 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v76 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_26;
        }
        v21 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v22 = (char *)ptr;
      v23 = v76;
      if ( *((_QWORD *)&v76 + 1) < v21 )
      {
        n = v76;
        v71 = v21;
        ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
        v22 = (char *)ptr;
        v20 = n;
        v23 = v76;
        v21 = v71;
      }
      n = v20;
      v71 = v21;
      memset(&v22[v23], 0, v21 - v23);
      v20 = n;
      *(_QWORD *)&v76 = v71;
LABEL_26:
      memcpy((char *)ptr + v20, v68, v12);
LABEL_27:
      v24 = *((_QWORD *)v45 + 5);
      if ( v24 )
      {
        v25 = *((void **)v45 + 4);
        v68 = v25;
        if ( v25 )
        {
          v24 = strlen((const char *)v25);
          if ( HIDWORD(v24) )
          {
            if ( !under_debugger )
              interr(4);
            goto LABEL_113;
          }
          goto LABEL_30;
        }
        v26 = 0;
        v24 = 0;
        v68 = (void *)&byte_22CD811;
      }
      else
      {
        v26 = 0;
        v68 = (void *)&byte_22CD811;
        if ( haystack )
        {
          v68 = (void *)haystack;
LABEL_30:
          v26 = (unsigned int)v24;
        }
      }
      v27 = pack_dd(src, v78, v26) - (_QWORD)src;
      v28 = v27;
      if ( !v27 )
        goto LABEL_37;
      v29 = v76;
      v30 = v76 + v27;
      if ( __CFADD__((_QWORD)v76, v27) )
      {
        if ( (unsigned __int64)v76 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v76 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v76 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_36;
        }
        v30 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v31 = (char *)ptr;
      v32 = v76;
      if ( *((_QWORD *)&v76 + 1) < v30 )
      {
        v73 = v76;
        n = v28;
        v71 = v30;
        ptr = (void *)qvector_reserve(&ptr, ptr, v30, 1);
        v31 = (char *)ptr;
        v29 = v73;
        v32 = v76;
        v28 = n;
        v30 = v71;
      }
      v73 = v29;
      n = v28;
      v71 = v30;
      memset(&v31[v32], 0, v30 - v32);
      v28 = n;
      v29 = v73;
      *(_QWORD *)&v76 = v71;
LABEL_36:
      memcpy((char *)ptr + v29, src, v28);
LABEL_37:
      if ( v24 )
      {
        v33 = v76;
        v34 = v24 + v76;
        if ( __CFADD__(v24, (_QWORD)v76) )
        {
          if ( (unsigned __int64)v76 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v35 = (char *)ptr;
            v36 = v76;
            v34 = 0x7FFFFFFFFFFFFFFFLL;
            if ( *((_QWORD *)&v76 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
              goto LABEL_98;
            goto LABEL_40;
          }
          if ( (_QWORD)v76 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v76 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v35 = (char *)ptr;
          v36 = v76;
          if ( *((_QWORD *)&v76 + 1) >= v34 )
            goto LABEL_40;
LABEL_98:
          n = v76;
          v71 = v34;
          ptr = (void *)qvector_reserve(&ptr, v35, v34, 1);
          v35 = (char *)ptr;
          v33 = n;
          v36 = v76;
          v34 = v71;
LABEL_40:
          n = v33;
          v71 = v34;
          memset(&v35[v36], 0, v34 - v36);
          v33 = n;
          *(_QWORD *)&v76 = v71;
        }
        memcpy((char *)ptr + v33, v68, v24);
      }
      v37 = v76;
      v38 = *((_BYTE *)v45 + 61);
      v39 = ptr;
      if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v76 + 1, 1);
        v39 = ptr;
        v37 = v76;
      }
      v39[v37] = v38;
      v40 = *((_BYTE *)v45 + 60);
      v41 = ptr;
      v42 = v76 + 1;
      v43 = v76 + 2;
      *(_QWORD *)&v76 = v76 + 1;
      if ( *((_QWORD *)&v76 + 1) < v43 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v43, 1);
        v41 = ptr;
        v42 = v76;
      }
      v41[v42] = v40;
      v10 = ++v67;
      v44 = v76 + 1;
      *(_QWORD *)&v76 = v76 + 1;
      if ( (unsigned __int64)v67 >= a2[1] )
        goto LABEL_95;
    }
  }
  v44 = v76;
LABEL_95:
  sub_79BB40(v70, *v69, ptr, v44, 0, 82);
  if ( ptr )
  {
    *(_QWORD *)&v76 = 0;
    qfree(ptr);
  }
  return v78[0] - __readfsqword(0x28u);
}

