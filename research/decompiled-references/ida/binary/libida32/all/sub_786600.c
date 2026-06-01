__int64 __fastcall sub_786600(__int64 a1, char a2, char a3, __int64 a4, __int64 a5, size_t a6)
{
  char v8; // al
  _BYTE *v10; // rcx
  char *v11; // rdi
  char v12; // al
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r12d
  __int64 v18; // r12
  unsigned __int64 v19; // rdx
  _BYTE *v20; // rsi
  char v21; // r12
  unsigned __int64 v22; // rdx
  _BYTE *v23; // rsi
  char v24; // r12
  __int64 v25; // r8
  size_t v26; // r10
  _BYTE *v27; // rsi
  void *v28; // rdx
  int v29; // r12d
  const char *v30; // rdi
  char *v31; // rax
  const char *v32; // rsi
  size_t v33; // rax
  size_t v34; // r13
  size_t v35; // r12
  const char **v36; // r15
  const char **v37; // r12
  __int64 v38; // r13
  const char *v39; // rdi
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  void *v46; // [rsp+0h] [rbp-10E8h]
  void *v47; // [rsp+0h] [rbp-10E8h]
  char *v48; // [rsp+0h] [rbp-10E8h]
  void *v49; // [rsp+0h] [rbp-10E8h]
  char *sa; // [rsp+8h] [rbp-10E0h]
  char *s; // [rsp+8h] [rbp-10E0h]
  char *sb; // [rsp+8h] [rbp-10E0h]
  __int64 v53; // [rsp+10h] [rbp-10D8h]
  size_t v54; // [rsp+18h] [rbp-10D0h]
  void *ptr; // [rsp+20h] [rbp-10C8h] BYREF
  __int128 v56; // [rsp+28h] [rbp-10C0h]
  void *v57; // [rsp+40h] [rbp-10A8h] BYREF
  __int128 v58; // [rsp+48h] [rbp-10A0h]
  void *src; // [rsp+60h] [rbp-1088h] BYREF
  __int128 v60; // [rsp+68h] [rbp-1080h]
  __int64 v61; // [rsp+78h] [rbp-1070h]
  __int64 v62; // [rsp+80h] [rbp-1068h]
  __int128 v63; // [rsp+88h] [rbp-1060h]
  _BYTE v64[4104]; // [rsp+A0h] [rbp-1048h] BYREF
  unsigned __int64 v65; // [rsp+10A8h] [rbp-40h]

  v8 = *(_BYTE *)(a1 + 580);
  v65 = __readfsqword(0x28u);
  if ( (unsigned __int8)(v8 - 9) > 4u && v8 != 32 )
  {
    v10 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
    *(_QWORD *)(a1 + 8) = v10;
    *v10 = v8;
  }
  v11 = *(char **)(a1 + 8);
  ptr = nullptr;
  v56 = 0;
  v12 = *v11;
  if ( *v11 == 34 || v12 == 60 )
    goto LABEL_55;
  while ( 1 )
  {
    v60 = 0;
    src = nullptr;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v13 = sub_783E80(a1, (__int64)&src, 0, nullptr, a5, a6);
    v16 = v13;
    if ( *(_QWORD *)(a1 + 64) )
    {
      if ( v13 )
        goto LABEL_8;
      v16 = sub_784DF0(a1, (__int64)&src, v14, v15, a5, a6);
    }
    if ( v16 )
    {
LABEL_8:
      if ( src )
      {
        *(_QWORD *)&v60 = 0;
        qfree(src);
        v11 = (char *)ptr;
        goto LABEL_10;
      }
      v11 = (char *)ptr;
      if ( !ptr )
        return v16;
      goto LABEL_53;
    }
    if ( (_WORD)v61 == 1 )
      break;
    if ( (unsigned __int16)v61 > 0x3Eu )
      goto LABEL_43;
    if ( ((1LL << v61) & 0x5400C00000000000LL) != 0 )
    {
      v21 = v61;
      goto LABEL_26;
    }
    if ( ((1LL << v61) & 0x44) != 0 )
    {
      if ( !(_QWORD)v60 )
        goto LABEL_31;
      a6 = v60 - 1;
      if ( (_QWORD)v60 == 1 )
        goto LABEL_31;
      v24 = 0;
    }
    else
    {
      if ( (_WORD)v61 != 4 )
      {
LABEL_43:
        if ( src )
        {
          *(_QWORD *)&v60 = 0;
          qfree(src);
        }
LABEL_45:
        v11 = (char *)ptr;
        v16 = 30;
        if ( !ptr )
          return v16;
LABEL_53:
        *(_QWORD *)&v56 = 0;
        qfree(v11);
        return v16;
      }
      v18 = v56;
      v19 = 2;
      if ( (_QWORD)v56 )
      {
        v19 = v56 + 1;
        v18 = v56 - 1;
      }
      v20 = ptr;
      if ( *((_QWORD *)&v56 + 1) < v19 )
      {
        v46 = (void *)v19;
        ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
        v19 = (unsigned __int64)v46;
        v20 = ptr;
      }
      *(_QWORD *)&v56 = v19;
      v20[v18] = 34;
      *((_BYTE *)ptr + v18 + 1) = 0;
      if ( !(_QWORD)v60 || (a6 = v60 - 1, (_QWORD)v60 == 1) )
      {
LABEL_25:
        v21 = 34;
LABEL_26:
        a5 = v56;
        v22 = 2;
        if ( (_QWORD)v56 )
        {
          v22 = v56 + 1;
          a5 = v56 - 1;
        }
        v23 = ptr;
        if ( *((_QWORD *)&v56 + 1) < v22 )
        {
          sa = (char *)a5;
          v47 = (void *)v22;
          ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
          a5 = (__int64)sa;
          v23 = ptr;
          v22 = (unsigned __int64)v47;
        }
        *(_QWORD *)&v56 = v22;
        v23[a5] = v21;
        *((_BYTE *)ptr + a5 + 1) = 0;
        goto LABEL_31;
      }
      v24 = 34;
    }
    v25 = v56;
    v26 = a6;
    if ( (_QWORD)v56 )
    {
      v25 = v56 - 1;
      v26 = a6 + v56 - 1;
    }
    v27 = ptr;
    v28 = (void *)(v26 + 1);
    if ( *((_QWORD *)&v56 + 1) < v26 + 1 )
    {
      v54 = v26;
      v53 = v25;
      sb = (char *)a6;
      v49 = (void *)(v26 + 1);
      ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
      v26 = v54;
      v27 = ptr;
      v25 = v53;
      a6 = (size_t)sb;
      v28 = v49;
    }
    *(_QWORD *)&v56 = v28;
    v27[v26] = 0;
    memcpy((char *)ptr + v25, src, a6);
    if ( v24 )
      goto LABEL_25;
LABEL_31:
    if ( src )
    {
      *(_QWORD *)&v60 = 0;
      qfree(src);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v60 = 0;
    qfree(src);
  }
  v11 = (char *)ptr;
  v16 = 30;
  *(_QWORD *)(a1 + 8) = ptr;
  if ( !v11 )
    return v16;
  v12 = *v11;
  if ( *v11 != 60 && v12 != 34 )
  {
    v16 = 30;
    goto LABEL_53;
  }
LABEL_55:
  v29 = 62;
  if ( v12 != 60 )
    v29 = 34;
  v30 = v11 + 1;
  *(_QWORD *)(a1 + 8) = v30;
  v31 = strchr(v30, v29);
  if ( !v31 )
    goto LABEL_45;
  *v31 = 0;
  if ( *(_QWORD *)(a1 + 272) > 0x7Fu )
  {
    v11 = (char *)ptr;
    v16 = 31;
    if ( !ptr )
      return v16;
    goto LABEL_53;
  }
  v32 = v64;
  s = (char *)sub_780040(a1, (__int64)v64, 4096, *(_QWORD *)(a1 + 8), v29, a3);
  v57 = nullptr;
  v58 = 0;
  if ( s )
  {
    v33 = strlen(s);
    v34 = v33 + 1;
    v35 = v33;
    v32 = s;
    v57 = (void *)qvector_reserve(&v57, 0, v33 + 1, 1);
    *(_QWORD *)&v58 = v34;
    memmove(v57, s, v35);
    *((_BYTE *)v57 + v35) = 0;
    v36 = *(const char ***)(a1 + 240);
    v48 = (char *)v57;
    v37 = &v36[3 * *(_QWORD *)(a1 + 248)];
    if ( v36 == v37 )
    {
      if ( v57 )
      {
        *(_QWORD *)&v58 = 0;
        qfree(v57);
      }
      goto LABEL_82;
    }
  }
  else
  {
    v36 = *(const char ***)(a1 + 240);
    v48 = nullptr;
    v37 = &v36[3 * *(_QWORD *)(a1 + 248)];
    if ( v36 == v37 )
      goto LABEL_74;
  }
  v38 = v58;
  while ( 2 )
  {
    if ( v36[1] )
    {
      v32 = *v36;
      v39 = haystack;
      if ( v38 )
        goto LABEL_72;
      goto LABEL_67;
    }
    if ( v38 )
    {
      v32 = haystack;
LABEL_72:
      v39 = v48;
LABEL_67:
      if ( !strcmp(v39, v32) )
        break;
      v36 += 3;
      if ( v36 == v37 )
      {
        if ( !v48 )
          goto LABEL_81;
        goto LABEL_79;
      }
      continue;
    }
    break;
  }
  if ( !v48 )
    goto LABEL_80;
LABEL_79:
  *(_QWORD *)&v58 = 0;
  qfree(v48);
LABEL_80:
  if ( v36 != v37 )
    goto LABEL_76;
LABEL_81:
  if ( s )
  {
LABEL_82:
    v40 = fopenRT(s);
    if ( v40 )
    {
      v41 = *(_QWORD *)(a1 + 272);
      v42 = *(_QWORD *)(a1 + 264);
      v43 = v41 + 1;
      if ( *(_QWORD *)(a1 + 280) < (unsigned __int64)(v41 + 1) )
      {
        v45 = qvector_reserve(a1 + 264, v42, v43, 40);
        *(_QWORD *)(a1 + 264) = v45;
        v42 = v45;
        v41 = *(_QWORD *)(a1 + 272);
        v43 = v41 + 1;
      }
      *(_QWORD *)(a1 + 272) = v43;
      v44 = v42 + 40 * v41;
      *(_QWORD *)(v44 + 8) = *(_QWORD *)(a1 + 288);
      *(_DWORD *)(v44 + 32) = *(_DWORD *)(a1 + 304);
      *(_QWORD *)v44 = *(_QWORD *)(a1 + 296);
      *(_BYTE *)(v44 + 36) = *(_BYTE *)(a1 + 144);
      *(_QWORD *)(v44 + 16) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(v44 + 24) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a1 + 288) = v40;
      *(_QWORD *)(a1 + 296) = qstrdup(s);
      *(_DWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 216) = sub_77EC40;
      *(_QWORD *)(a1 + 224) = a1;
      *(_BYTE *)(a1 + 144) = 0;
LABEL_77:
      v11 = (char *)ptr;
      v16 = 0;
      goto LABEL_10;
    }
  }
LABEL_74:
  if ( a2 )
  {
LABEL_76:
    set_qerrno(0, v32);
    goto LABEL_77;
  }
  set_error_string();
  v11 = (char *)ptr;
  v16 = 32;
LABEL_10:
  if ( v11 )
    goto LABEL_53;
  return v16;
}

