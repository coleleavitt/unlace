__int64 __fastcall sub_4BEDC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  void *v5; // rbx
  const char *v6; // rsi
  size_t v7; // rax
  size_t v8; // rbx
  __int64 v9; // rbp
  unsigned __int64 v10; // r13
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  void *v15; // rbx
  size_t v16; // rax
  size_t v17; // rbx
  __int64 v18; // rbp
  unsigned __int64 v19; // r13
  char *v20; // rsi
  __int64 v21; // rax
  char *v22; // r8
  char *v23; // rbp
  __int64 v24; // r14
  const char *v25; // r15
  size_t v26; // rax
  __int64 v27; // rbx
  size_t v28; // r13
  unsigned __int64 v29; // r11
  char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rbx
  char *v34; // rax
  void *v35; // rdi
  __int64 v36; // r8
  __int64 v37; // rbp
  __int64 v38; // r14
  __int64 v39; // rdx
  const void **v40; // rbx
  size_t v41; // r15
  void *v42; // rax
  unsigned __int64 v43; // [rsp+8h] [rbp-B0h]
  void *src; // [rsp+10h] [rbp-A8h]
  unsigned __int64 *v45; // [rsp+18h] [rbp-A0h]
  __int64 v46; // [rsp+20h] [rbp-98h]
  unsigned int v47; // [rsp+2Ch] [rbp-8Ch]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int128 v49; // [rsp+38h] [rbp-80h]
  __int64 v50; // [rsp+50h] [rbp-68h]
  __int128 v51; // [rsp+58h] [rbp-60h]
  char v52; // [rsp+73h] [rbp-45h] BYREF
  unsigned __int64 v53; // [rsp+78h] [rbp-40h] BYREF

  v3 = a1;
  v46 = a2;
  v47 = a3;
  v53 = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return 1;
  ptr = nullptr;
  v49 = 0;
  if ( a1 == v46 )
    return 0;
  src = &v52;
  v45 = &v53;
  do
  {
    v5 = src;
    v6 = (const char *)v45;
    v7 = pack_dd(src, v45, *(unsigned int *)(v3 + 32)) - (_QWORD)v5;
    v8 = v7;
    if ( v7 )
    {
      v9 = v49;
      v10 = v49 + v7;
      if ( __CFADD__((_QWORD)v49, v7) )
      {
        if ( (unsigned __int64)v49 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_10;
        }
        v10 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v11 = (char *)ptr;
      v12 = v49;
      if ( *((_QWORD *)&v49 + 1) < v10 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
        v11 = (char *)ptr;
        v12 = v49;
      }
      memset(&v11[v12], 0, v10 - v12);
      *(_QWORD *)&v49 = v10;
LABEL_10:
      v6 = (const char *)src;
      memcpy((char *)ptr + v9, src, v8);
    }
    v13 = *(_QWORD *)(v3 + 48);
    v14 = 0;
    v50 = 0;
    v51 = 0;
    if ( !v13 )
      goto LABEL_12;
    v50 = qalloc_or_throw(24 * v13, v6, 0);
    v36 = v50;
    v37 = 0;
    *((_QWORD *)&v51 + 1) = v13;
    while ( 1 )
    {
      v38 = v36 + 24 * v37;
      v39 = *(_QWORD *)(v3 + 40) + 24 * v37;
      *(_QWORD *)v38 = 0;
      v40 = (const void **)v39;
      *(_OWORD *)(v38 + 8) = 0;
      v41 = *(_QWORD *)(v39 + 8);
      if ( v41 )
        break;
      if ( v13 == ++v37 )
        goto LABEL_54;
LABEL_51:
      v36 = v50;
    }
    v42 = (void *)qalloc_or_throw(*(_QWORD *)(v39 + 8), v6);
    *(_QWORD *)v38 = v42;
    ++v37;
    *(_QWORD *)(v38 + 16) = v41;
    v6 = (const char *)*v40;
    memcpy(v42, *v40, v41);
    *(_QWORD *)(v38 + 8) = v41;
    if ( v13 != v37 )
      goto LABEL_51;
LABEL_54:
    *(_QWORD *)&v51 = v13;
    v14 = (unsigned int)v13;
LABEL_12:
    v15 = src;
    v16 = pack_dd(src, v45, v14) - (_QWORD)v15;
    v17 = v16;
    if ( v16 )
    {
      v18 = v49;
      v19 = v49 + v16;
      if ( !__CFADD__((_QWORD)v49, v16) )
        goto LABEL_14;
      if ( (unsigned __int64)v49 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v19 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
        v20 = (char *)ptr;
        v21 = v49;
        if ( *((_QWORD *)&v49 + 1) < v19 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
          v20 = (char *)ptr;
          v21 = v49;
        }
        memset(&v20[v21], 0, v19 - v21);
        *(_QWORD *)&v49 = v19;
      }
      else if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
      }
      memcpy((char *)ptr + v18, src, v17);
    }
    v22 = (char *)v50;
    v23 = (char *)(v50 + 24 * v51);
    if ( (char *)v50 == v23 )
      goto LABEL_38;
    v24 = v50;
    while ( 2 )
    {
      v25 = haystack;
      if ( *(_QWORD *)(v24 + 8) )
        v25 = *(const char **)v24;
      if ( v25 )
      {
        v26 = strlen(v25);
        v27 = v49;
        v28 = v26 + 1;
        v29 = v26 + 1 + v49;
        if ( !__CFADD__(v26 + 1, (_QWORD)v49) )
          goto LABEL_28;
        if ( (unsigned __int64)v49 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_22;
          goto LABEL_23;
        }
        v30 = (char *)ptr;
        v31 = v49;
        v29 = 0x7FFFFFFFFFFFFFFFLL;
        if ( *((_QWORD *)&v49 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_36:
          v43 = v29;
          ptr = (void *)qvector_reserve(&ptr, v30, v29, 1);
          v30 = (char *)ptr;
          v29 = v43;
          v31 = v49;
        }
LABEL_29:
        v43 = v29;
        memset(&v30[v31], 0, v29 - v31);
        *(_QWORD *)&v49 = v43;
        goto LABEL_23;
      }
      v27 = v49;
      v28 = 1;
      v25 = &byte_22CD811;
      v29 = v49 + 1;
      if ( (_QWORD)v49 != -1 )
      {
LABEL_28:
        v30 = (char *)ptr;
        v31 = v27;
        if ( *((_QWORD *)&v49 + 1) < v29 )
          goto LABEL_36;
        goto LABEL_29;
      }
      v27 = -1;
      v25 = &byte_22CD811;
LABEL_22:
      *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_23:
      v24 += 24;
      memcpy((char *)ptr + v27, v25, v28);
      if ( v23 != (char *)v24 )
        continue;
      break;
    }
    v23 = (char *)v50;
    v22 = (char *)v50;
LABEL_38:
    if ( v23 )
    {
      v32 = v51;
      if ( (_QWORD)v51 )
      {
        v33 = 0;
        do
        {
          v34 = &v23[24 * v33];
          v35 = *(void **)v34;
          if ( *(_QWORD *)v34 )
          {
            *((_QWORD *)v34 + 1) = 0;
            qfree(v35);
            v22 = (char *)v50;
          }
          ++v33;
          v23 = v22;
        }
        while ( v32 != v33 );
      }
      *(_QWORD *)&v51 = 0;
      qfree(v23);
    }
    v3 = std::_Rb_tree_increment();
  }
  while ( v3 != v46 );
  if ( (_QWORD)v49 )
  {
    add_undo_record(v47, ptr, v49);
    if ( ptr )
    {
      *(_QWORD *)&v49 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( ptr )
    qfree(ptr);
  return 0;
}

