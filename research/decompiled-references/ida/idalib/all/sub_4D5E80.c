__int64 __fastcall sub_4D5E80(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r12
  void *v5; // rbx
  size_t v6; // rax
  size_t v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 v9; // r13
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdx
  void *v14; // rbx
  size_t v15; // rax
  size_t v16; // rbx
  __int64 v17; // rbp
  unsigned __int64 v18; // r13
  char *v19; // rsi
  __int64 v20; // rax
  char *v21; // r8
  char *v22; // rbp
  __int64 v23; // r14
  const char *v24; // r15
  size_t v25; // rax
  __int64 v26; // rbx
  size_t v27; // r13
  unsigned __int64 v28; // r11
  char *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rbx
  char *v33; // rax
  void *v34; // rdi
  __int64 v35; // r8
  __int64 v36; // rbp
  __int64 v37; // r14
  __int64 v38; // rdx
  const void **v39; // rbx
  size_t v40; // r15
  void *v41; // rax
  unsigned __int64 v42; // [rsp+8h] [rbp-B0h]
  void *src; // [rsp+10h] [rbp-A8h]
  _QWORD *v44; // [rsp+18h] [rbp-A0h]
  unsigned __int64 *v45; // [rsp+20h] [rbp-98h]
  unsigned int v46; // [rsp+2Ch] [rbp-8Ch]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int128 v48; // [rsp+38h] [rbp-80h]
  __int64 v49; // [rsp+50h] [rbp-68h]
  __int128 v50; // [rsp+58h] [rbp-60h]
  char v51; // [rsp+6Eh] [rbp-4Ah] BYREF
  char v52[5]; // [rsp+73h] [rbp-45h] BYREF
  unsigned __int64 v53; // [rsp+78h] [rbp-40h] BYREF

  v3 = a1;
  v44 = a2;
  v46 = a3;
  v53 = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return 1;
  ptr = nullptr;
  v48 = 0;
  if ( a1 == v44 )
    return 0;
  src = &v51;
  v45 = &v53;
  do
  {
    v5 = src;
    v6 = pack_dq(src, v45, v3[4]) - (_QWORD)v5;
    v7 = v6;
    if ( v6 )
    {
      v8 = v48;
      v9 = v48 + v6;
      if ( __CFADD__((_QWORD)v48, v6) )
      {
        if ( (unsigned __int64)v48 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v48 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v48 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_10;
        }
        v9 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v10 = (char *)ptr;
      v11 = v48;
      if ( *((_QWORD *)&v48 + 1) < v9 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
        v10 = (char *)ptr;
        v11 = v48;
      }
      memset(&v10[v11], 0, v9 - v11);
      *(_QWORD *)&v48 = v9;
LABEL_10:
      memcpy((char *)ptr + v8, src, v7);
    }
    v12 = v3[6];
    v13 = 0;
    v49 = 0;
    v50 = 0;
    if ( !v12 )
      goto LABEL_12;
    v49 = qalloc_or_throw(24 * v12);
    v35 = v49;
    v36 = 0;
    *((_QWORD *)&v50 + 1) = v12;
    while ( 1 )
    {
      v37 = v35 + 24 * v36;
      v38 = v3[5] + 24 * v36;
      *(_QWORD *)v37 = 0;
      v39 = (const void **)v38;
      *(_OWORD *)(v37 + 8) = 0;
      v40 = *(_QWORD *)(v38 + 8);
      if ( v40 )
        break;
      if ( v12 == ++v36 )
        goto LABEL_54;
LABEL_51:
      v35 = v49;
    }
    v41 = (void *)qalloc_or_throw(*(_QWORD *)(v38 + 8));
    *(_QWORD *)v37 = v41;
    ++v36;
    *(_QWORD *)(v37 + 16) = v40;
    memcpy(v41, *v39, v40);
    *(_QWORD *)(v37 + 8) = v40;
    if ( v12 != v36 )
      goto LABEL_51;
LABEL_54:
    *(_QWORD *)&v50 = v12;
    v13 = (unsigned int)v12;
LABEL_12:
    v14 = src;
    v15 = pack_dd(src, v52, v13) - (_QWORD)v14;
    v16 = v15;
    if ( v15 )
    {
      v17 = v48;
      v18 = v48 + v15;
      if ( !__CFADD__((_QWORD)v48, v15) )
        goto LABEL_14;
      if ( (unsigned __int64)v48 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
        v19 = (char *)ptr;
        v20 = v48;
        if ( *((_QWORD *)&v48 + 1) < v18 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
          v19 = (char *)ptr;
          v20 = v48;
        }
        memset(&v19[v20], 0, v18 - v20);
        *(_QWORD *)&v48 = v18;
      }
      else if ( (_QWORD)v48 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v48 = 0x7FFFFFFFFFFFFFFFLL;
      }
      memcpy((char *)ptr + v17, src, v16);
    }
    v21 = (char *)v49;
    v22 = (char *)(v49 + 24 * v50);
    if ( (char *)v49 == v22 )
      goto LABEL_38;
    v23 = v49;
    while ( 2 )
    {
      v24 = haystack;
      if ( *(_QWORD *)(v23 + 8) )
        v24 = *(const char **)v23;
      if ( v24 )
      {
        v25 = strlen(v24);
        v26 = v48;
        v27 = v25 + 1;
        v28 = v25 + 1 + v48;
        if ( !__CFADD__(v25 + 1, (_QWORD)v48) )
          goto LABEL_28;
        if ( (unsigned __int64)v48 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v48 != 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_22;
          goto LABEL_23;
        }
        v29 = (char *)ptr;
        v30 = v48;
        v28 = 0x7FFFFFFFFFFFFFFFLL;
        if ( *((_QWORD *)&v48 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_36:
          v42 = v28;
          ptr = (void *)qvector_reserve(&ptr, v29, v28, 1);
          v29 = (char *)ptr;
          v28 = v42;
          v30 = v48;
        }
LABEL_29:
        v42 = v28;
        memset(&v29[v30], 0, v28 - v30);
        *(_QWORD *)&v48 = v42;
        goto LABEL_23;
      }
      v26 = v48;
      v27 = 1;
      v24 = &byte_22F0C30;
      v28 = v48 + 1;
      if ( (_QWORD)v48 != -1 )
      {
LABEL_28:
        v29 = (char *)ptr;
        v30 = v26;
        if ( *((_QWORD *)&v48 + 1) < v28 )
          goto LABEL_36;
        goto LABEL_29;
      }
      v26 = -1;
      v24 = &byte_22F0C30;
LABEL_22:
      *(_QWORD *)&v48 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_23:
      v23 += 24;
      memcpy((char *)ptr + v26, v24, v27);
      if ( v22 != (char *)v23 )
        continue;
      break;
    }
    v22 = (char *)v49;
    v21 = (char *)v49;
LABEL_38:
    if ( v22 )
    {
      v31 = v50;
      if ( (_QWORD)v50 )
      {
        v32 = 0;
        do
        {
          v33 = &v22[24 * v32];
          v34 = *(void **)v33;
          if ( *(_QWORD *)v33 )
          {
            *((_QWORD *)v33 + 1) = 0;
            qfree(v34);
            v21 = (char *)v49;
          }
          ++v32;
          v22 = v21;
        }
        while ( v31 != v32 );
      }
      *(_QWORD *)&v50 = 0;
      qfree(v22);
    }
    v3 = (_QWORD *)std::_Rb_tree_increment(v3);
  }
  while ( v3 != v44 );
  if ( (_QWORD)v48 )
  {
    add_undo_record(v46, ptr, v48);
    if ( ptr )
    {
      *(_QWORD *)&v48 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( ptr )
    qfree(ptr);
  return 0;
}
