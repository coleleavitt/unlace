unsigned __int64 __fastcall sub_4FA5A0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // rdx
  __int64 v4; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r14
  __int64 v10; // rbp
  _QWORD *v11; // rax
  void *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rsi
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  _DWORD *v18; // rax
  char *v19; // rdi
  __int64 v20; // rdx
  char *v21; // rdi
  char *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  size_t v28; // rbp
  __int64 v29; // r14
  unsigned __int64 v30; // r8
  char *v31; // rsi
  __int64 v32; // rax
  const char *v33; // r15
  size_t v34; // rax
  __int64 v35; // rbp
  size_t v36; // r8
  unsigned __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rbp
  void *v40; // rdi
  void *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  char *v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+0h] [rbp-78h]
  _QWORD *v47; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v49; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v51[8]; // [rsp+38h] [rbp-40h] BYREF

  v51[0] = __readfsqword(0x28u);
  v2 = a2;
  v3 = *(_QWORD *)(a1 + 136);
  v4 = v3 + 56LL * (int)a2;
  if ( *(_BYTE *)(v4 + 52) || *(_QWORD *)(v4 + 32) || *(_DWORD *)(v4 + 48) )
    return v51[0] - __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, v3) )
  {
    v49 = 0;
    ptr = nullptr;
    v27 = pack_dd(src, v51, (unsigned int)a2) - (_QWORD)src;
    v28 = v27;
    if ( !v27 )
      goto LABEL_41;
    v29 = v49;
    v30 = v49 + v27;
    if ( __CFADD__((_QWORD)v49, v27) )
    {
      if ( (unsigned __int64)v49 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_40;
      }
      v30 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v31 = (char *)ptr;
    v32 = v49;
    if ( *((_QWORD *)&v49 + 1) < v30 )
    {
      v46 = v30;
      ptr = (void *)qvector_reserve(&ptr, ptr, v30, 1);
      v31 = (char *)ptr;
      v30 = v46;
      v32 = v49;
    }
    v46 = v30;
    memset(&v31[v32], 0, v30 - v32);
    *(_QWORD *)&v49 = v46;
LABEL_40:
    memcpy((char *)ptr + v29, src, v28);
LABEL_41:
    v33 = haystack;
    if ( *(_QWORD *)(v4 + 8) )
      v33 = *(const char **)v4;
    if ( v33 )
    {
      v34 = strlen(v33);
      v35 = v49;
      v36 = v34 + 1;
      v37 = v34 + 1 + v49;
      if ( __CFADD__(v34 + 1, (_QWORD)v49) )
      {
        if ( (unsigned __int64)v49 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v49 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_48;
          goto LABEL_47;
        }
        v37 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v35 = v49;
      v36 = 1;
      v33 = &byte_22CD811;
      v37 = v49 + 1;
      if ( (_QWORD)v49 == -1 )
      {
        v35 = -1;
        v33 = &byte_22CD811;
LABEL_47:
        *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
        memcpy((char *)ptr + v35, v33, v36);
        add_undo_record(126, ptr, v49);
        if ( ptr )
        {
          *(_QWORD *)&v49 = 0;
          qfree(ptr);
        }
        goto LABEL_6;
      }
    }
    v44 = (char *)ptr;
    v45 = v35;
    if ( *((_QWORD *)&v49 + 1) < v37 )
    {
      v46 = v36;
      ptr = (void *)qvector_reserve(&ptr, ptr, v37, 1);
      v44 = (char *)ptr;
      v36 = v46;
      v45 = v49;
    }
    v46 = v36;
    memset(&v44[v45], 0, v37 - v45);
    *(_QWORD *)&v49 = v37;
    v36 = v46;
    goto LABEL_48;
  }
LABEL_6:
  v7 = sub_4BDDB0(a1 + 64, v4);
  v9 = v8;
  if ( v7 == *(_QWORD **)(a1 + 88) && v8 == (_QWORD *)(a1 + 72) )
  {
    sub_4F5F50(*(_QWORD **)(a1 + 80));
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = v9;
    *(_QWORD *)(a1 + 96) = v9;
    *(_QWORD *)(a1 + 104) = 0;
  }
  else
  {
    v46 = a1 + 72;
    if ( v8 != v7 )
    {
      do
      {
        v10 = std::_Rb_tree_increment();
        v11 = (_QWORD *)std::_Rb_tree_rebalance_for_erase();
        v12 = (void *)v11[4];
        if ( v12 )
        {
          v11[5] = 0;
          v47 = v11;
          qfree(v12);
          v11 = v47;
        }
        operator delete(v11, 0x40u);
        --*(_QWORD *)(a1 + 104);
      }
      while ( v9 != (_QWORD *)v10 );
    }
  }
  v13 = *(_QWORD *)(a1 + 144);
  v14 = v2 + 1;
  if ( v14 == v13 )
  {
    if ( v2 != -1 )
    {
      v38 = v14 - 1;
      *(_QWORD *)(a1 + 144) = v38;
      v39 = *(_QWORD *)(a1 + 136) + 56 * v38;
      v40 = *(void **)(v39 + 24);
      if ( v40 )
      {
        *(_QWORD *)(v39 + 32) = 0;
        qfree(v40);
      }
      v41 = *(void **)v39;
      if ( *(_QWORD *)v39 )
      {
        *(_QWORD *)(v39 + 8) = 0;
        qfree(v41);
      }
      goto LABEL_29;
    }
LABEL_21:
    while ( 1 )
    {
      v20 = *(_QWORD *)(a1 + 136);
      if ( !*(_BYTE *)(v20 + 56 * v13 - 4) )
        break;
      if ( v13 )
      {
        v23 = v13 - 1;
        *(_QWORD *)(a1 + 144) = v23;
        v24 = v20 + 56 * v23;
        v25 = *(void **)(v24 + 24);
        if ( v25 )
        {
          *(_QWORD *)(v24 + 32) = 0;
          qfree(v25);
        }
        v26 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *(_QWORD *)(v24 + 8) = 0;
          qfree(v26);
        }
        v13 = *(_QWORD *)(a1 + 144);
      }
      v21 = *(char **)(a1 + 40);
      v22 = &v21[4 * *(_QWORD *)(a1 + 48)];
      if ( v21 != v22 )
      {
        while ( (_DWORD)v13 != *(_DWORD *)v21 )
        {
          v21 += 4;
          if ( v22 == v21 )
            goto LABEL_21;
        }
        if ( v22 != v21 )
        {
          memmove(v21, v21 + 4, v22 - v21 - 4);
          --*(_QWORD *)(a1 + 48);
LABEL_29:
          v13 = *(_QWORD *)(a1 + 144);
        }
      }
    }
  }
  else
  {
    v15 = *(_DWORD **)(a1 + 40);
    v16 = *(_QWORD *)(a1 + 48);
    v17 = &v15[v16];
    if ( v15 == v17 )
      goto LABEL_50;
    v18 = *(_DWORD **)(a1 + 40);
    while ( *v18 != v2 )
    {
      if ( v17 == ++v18 )
        goto LABEL_50;
    }
    if ( v17 == v18 )
    {
LABEL_50:
      if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v16 + 1) )
      {
        v42 = qvector_reserve(a1 + 40, v15, v16 + 1, 4);
        v43 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = v42;
        v17 = (_DWORD *)(v42 + 4 * v43);
      }
      *v17 = v2;
      ++*(_QWORD *)(a1 + 48);
    }
    v19 = *(char **)v4;
    *(_BYTE *)(v4 + 52) = 1;
    if ( v19 )
    {
      *(_QWORD *)(v4 + 8) = 0;
      qfree(v19);
      *(_QWORD *)v4 = 0;
      *(_QWORD *)(v4 + 16) = 0;
    }
  }
  *(_BYTE *)(a1 + 160) = 1;
  return v51[0] - __readfsqword(0x28u);
}

