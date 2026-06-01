unsigned __int64 __fastcall sub_3FD660(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v6; // rax
  size_t v7; // rbp
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  int v10; // r14d
  __int64 v11; // rax
  void *v12; // rdi
  size_t v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  size_t v16; // r10
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  char *v19; // rsi
  __int64 v20; // rax
  size_t v21; // r9
  unsigned __int64 v22; // r10
  char *v23; // rsi
  __int64 v24; // rax
  size_t v25; // r15
  void *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  size_t v29; // r10
  __int64 v30; // r9
  unsigned __int64 v31; // r11
  char *v32; // rsi
  __int64 v33; // rax
  size_t v34; // r9
  unsigned __int64 v35; // r10
  char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // r15
  _BYTE *v40; // rsi
  char v41; // bp
  _BYTE *v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // rax
  size_t v48; // r15
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r9
  char *v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  size_t v54; // r15
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // r9
  char *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  size_t v60; // r15
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r9
  char *v63; // rsi
  __int64 v64; // rax
  char *v65; // rax
  char *v66; // rsi
  __int64 v67; // rax
  unsigned __int64 *v68; // [rsp+0h] [rbp-B8h]
  _BYTE *v69; // [rsp+8h] [rbp-B0h]
  void *v70; // [rsp+10h] [rbp-A8h]
  _QWORD *v71; // [rsp+18h] [rbp-A0h]
  __int64 *v72; // [rsp+20h] [rbp-98h]
  unsigned __int64 v73; // [rsp+28h] [rbp-90h]
  size_t n; // [rsp+30h] [rbp-88h]
  __int64 v75; // [rsp+38h] [rbp-80h]
  __int64 v76; // [rsp+48h] [rbp-70h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v78; // [rsp+58h] [rbp-60h]
  _BYTE src[5]; // [rsp+6Eh] [rbp-4Ah] BYREF
  _BYTE v80[5]; // [rsp+73h] [rbp-45h] BYREF
  unsigned __int64 v81; // [rsp+78h] [rbp-40h] BYREF

  v71 = a1;
  v81 = __readfsqword(0x28u);
  v3 = *a1;
  v72 = &v76;
  v76 = -1;
  sub_7BF040(&v76, v3, "$ dbgmemregs", 0);
  v4 = a2[1];
  if ( !v4 )
  {
    sub_7BEF80(&v76, *a1, 0, 82);
    return v81 - __readfsqword(0x28u);
  }
  ptr = nullptr;
  v69 = v80;
  v78 = 0;
  v6 = pack_dd(src, v80, v4) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v8 = v78;
    v9 = v78 + v6;
    if ( __CFADD__((_QWORD)v78, v6) )
    {
      if ( (unsigned __int64)v78 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v78 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v78 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((char *)ptr + v8, src, v7);
        goto LABEL_10;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v66 = (char *)ptr;
    v67 = v78;
    if ( *((_QWORD *)&v78 + 1) < v9 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
      v66 = (char *)ptr;
      v67 = v78;
    }
    memset(&v66[v67], 0, v9 - v67);
    *(_QWORD *)&v78 = v9;
    goto LABEL_9;
  }
LABEL_10:
  if ( a2[1] )
  {
    v10 = 0;
    v11 = 0;
    v68 = &v81;
    while ( 1 )
    {
      v46 = *a2 + 80 * v11;
      v47 = pack_dq(src, v68, *(_QWORD *)v46) - (_QWORD)src;
      v48 = v47;
      if ( !v47 )
        goto LABEL_53;
      v49 = v78;
      v50 = v78 + v47;
      if ( __CFADD__((_QWORD)v78, v47) )
      {
        if ( (unsigned __int64)v78 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v78 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v78 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_52;
        }
        v50 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v51 = (char *)ptr;
      v52 = v78;
      if ( *((_QWORD *)&v78 + 1) < v50 )
      {
        v73 = v78;
        v70 = (void *)v50;
        ptr = (void *)qvector_reserve(&ptr, ptr, v50, 1);
        v51 = (char *)ptr;
        v49 = v73;
        v52 = v78;
        v50 = (unsigned __int64)v70;
      }
      v73 = v49;
      v70 = (void *)v50;
      memset(&v51[v52], 0, v50 - v52);
      v49 = v73;
      *(_QWORD *)&v78 = v70;
LABEL_52:
      memcpy((char *)ptr + v49, src, v48);
LABEL_53:
      v53 = pack_dq(src, v68, *(_QWORD *)(v46 + 8) - *(_QWORD *)v46) - (_QWORD)src;
      v54 = v53;
      if ( !v53 )
        goto LABEL_59;
      v55 = v78;
      v56 = v78 + v53;
      if ( __CFADD__((_QWORD)v78, v53) )
      {
        if ( (unsigned __int64)v78 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v78 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v78 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_58;
        }
        v56 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v57 = (char *)ptr;
      v58 = v78;
      if ( *((_QWORD *)&v78 + 1) < v56 )
      {
        v73 = v78;
        v70 = (void *)v56;
        ptr = (void *)qvector_reserve(&ptr, ptr, v56, 1);
        v57 = (char *)ptr;
        v55 = v73;
        v58 = v78;
        v56 = (unsigned __int64)v70;
      }
      v73 = v55;
      v70 = (void *)v56;
      memset(&v57[v58], 0, v56 - v58);
      v55 = v73;
      *(_QWORD *)&v78 = v70;
LABEL_58:
      memcpy((char *)ptr + v55, src, v54);
LABEL_59:
      v59 = pack_dq(src, v68, *(_QWORD *)(v46 + 64)) - (_QWORD)src;
      v60 = v59;
      if ( !v59 )
        goto LABEL_65;
      v61 = v78;
      v62 = v78 + v59;
      if ( __CFADD__((_QWORD)v78, v59) )
      {
        if ( (unsigned __int64)v78 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v78 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v78 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_64;
        }
        v62 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v63 = (char *)ptr;
      v64 = v78;
      if ( *((_QWORD *)&v78 + 1) < v62 )
      {
        v73 = v78;
        v70 = (void *)v62;
        ptr = (void *)qvector_reserve(&ptr, ptr, v62, 1);
        v63 = (char *)ptr;
        v61 = v73;
        v64 = v78;
        v62 = (unsigned __int64)v70;
      }
      v73 = v61;
      v70 = (void *)v62;
      memset(&v63[v64], 0, v62 - v64);
      v61 = v73;
      *(_QWORD *)&v78 = v70;
LABEL_64:
      memcpy((char *)ptr + v61, src, v60);
LABEL_65:
      v13 = *(_QWORD *)(v46 + 24);
      if ( v13 )
      {
        v12 = *(void **)(v46 + 16);
        v70 = v12;
        if ( v12 )
        {
          v13 = strlen((const char *)v12);
          if ( HIDWORD(v13) )
          {
            if ( !under_debugger )
              interr(4);
LABEL_113:
            BUG();
          }
          v14 = (unsigned int)v13;
        }
        else
        {
          v14 = 0;
          v13 = 0;
          v70 = (void *)&byte_22F0C30;
        }
      }
      else
      {
        v65 = (char *)haystack;
        v14 = 0;
        if ( !haystack )
          v65 = (char *)&byte_22F0C30;
        v70 = v65;
      }
      v15 = pack_dd(src, v69, v14) - (_QWORD)src;
      v16 = v15;
      if ( v15 )
      {
        v17 = v78;
        v18 = v78 + v15;
        if ( !__CFADD__((_QWORD)v78, v15) )
          goto LABEL_17;
        if ( (unsigned __int64)v78 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_17:
          v19 = (char *)ptr;
          v20 = v78;
          if ( *((_QWORD *)&v78 + 1) < v18 )
          {
            v75 = v78;
            n = v16;
            v73 = v18;
            ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
            v19 = (char *)ptr;
            v17 = v75;
            v20 = v78;
            v16 = n;
            v18 = v73;
          }
          v75 = v17;
          n = v16;
          v73 = v18;
          memset(&v19[v20], 0, v18 - v20);
          v16 = n;
          v17 = v75;
          *(_QWORD *)&v78 = v73;
        }
        else if ( (_QWORD)v78 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v78 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((char *)ptr + v17, src, v16);
      }
      if ( !v13 )
        goto LABEL_27;
      v21 = v78;
      v22 = v13 + v78;
      if ( __CFADD__(v13, (_QWORD)v78) )
      {
        if ( (unsigned __int64)v78 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v78 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v78 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_26;
        }
        v22 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v23 = (char *)ptr;
      v24 = v78;
      if ( *((_QWORD *)&v78 + 1) < v22 )
      {
        n = v78;
        v73 = v22;
        ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
        v23 = (char *)ptr;
        v21 = n;
        v24 = v78;
        v22 = v73;
      }
      n = v21;
      v73 = v22;
      memset(&v23[v24], 0, v22 - v24);
      v21 = n;
      *(_QWORD *)&v78 = v73;
LABEL_26:
      memcpy((char *)ptr + v21, v70, v13);
LABEL_27:
      v25 = *(_QWORD *)(v46 + 48);
      if ( v25 )
      {
        v26 = *(void **)(v46 + 40);
        v70 = v26;
        if ( v26 )
        {
          v25 = strlen((const char *)v26);
          if ( HIDWORD(v25) )
          {
            if ( !under_debugger )
              interr(4);
            goto LABEL_113;
          }
          goto LABEL_30;
        }
        v27 = 0;
        v25 = 0;
        v70 = (void *)&byte_22F0C30;
      }
      else
      {
        v27 = 0;
        v70 = (void *)&byte_22F0C30;
        if ( haystack )
        {
          v70 = (void *)haystack;
LABEL_30:
          v27 = (unsigned int)v25;
        }
      }
      v28 = pack_dd(src, v69, v27) - (_QWORD)src;
      v29 = v28;
      if ( !v28 )
        goto LABEL_37;
      v30 = v78;
      v31 = v78 + v28;
      if ( __CFADD__((_QWORD)v78, v28) )
      {
        if ( (unsigned __int64)v78 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v78 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v78 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_36;
        }
        v31 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v32 = (char *)ptr;
      v33 = v78;
      if ( *((_QWORD *)&v78 + 1) < v31 )
      {
        v75 = v78;
        n = v29;
        v73 = v31;
        ptr = (void *)qvector_reserve(&ptr, ptr, v31, 1);
        v32 = (char *)ptr;
        v30 = v75;
        v33 = v78;
        v29 = n;
        v31 = v73;
      }
      v75 = v30;
      n = v29;
      v73 = v31;
      memset(&v32[v33], 0, v31 - v33);
      v29 = n;
      v30 = v75;
      *(_QWORD *)&v78 = v73;
LABEL_36:
      memcpy((char *)ptr + v30, src, v29);
LABEL_37:
      if ( v25 )
      {
        v34 = v78;
        v35 = v25 + v78;
        if ( __CFADD__(v25, (_QWORD)v78) )
        {
          if ( (unsigned __int64)v78 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v36 = (char *)ptr;
            v37 = v78;
            v35 = 0x7FFFFFFFFFFFFFFFLL;
            if ( *((_QWORD *)&v78 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
              goto LABEL_98;
            goto LABEL_40;
          }
          if ( (_QWORD)v78 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v78 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v36 = (char *)ptr;
          v37 = v78;
          if ( *((_QWORD *)&v78 + 1) >= v35 )
            goto LABEL_40;
LABEL_98:
          n = v78;
          v73 = v35;
          ptr = (void *)qvector_reserve(&ptr, v36, v35, 1);
          v36 = (char *)ptr;
          v34 = n;
          v37 = v78;
          v35 = v73;
LABEL_40:
          n = v34;
          v73 = v35;
          memset(&v36[v37], 0, v35 - v37);
          v34 = n;
          *(_QWORD *)&v78 = v73;
        }
        memcpy((char *)ptr + v34, v70, v25);
      }
      v38 = v78;
      v39 = *(_BYTE *)(v46 + 73);
      v40 = ptr;
      if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v78 + 1, 1);
        v40 = ptr;
        v38 = v78;
      }
      v40[v38] = v39;
      v41 = *(_BYTE *)(v46 + 72);
      v42 = ptr;
      v43 = v78 + 1;
      v44 = v78 + 2;
      *(_QWORD *)&v78 = v78 + 1;
      if ( *((_QWORD *)&v78 + 1) < v44 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v44, 1);
        v42 = ptr;
        v43 = v78;
      }
      v42[v43] = v41;
      ++v10;
      v45 = v78 + 1;
      v11 = v10;
      *(_QWORD *)&v78 = v78 + 1;
      if ( (unsigned __int64)v10 >= a2[1] )
        goto LABEL_95;
    }
  }
  v45 = v78;
LABEL_95:
  sub_7BEF30(v72, *v71, ptr, v45, 0, 82);
  if ( ptr )
  {
    *(_QWORD *)&v78 = 0;
    qfree(ptr);
  }
  return v81 - __readfsqword(0x28u);
}
