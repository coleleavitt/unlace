unsigned __int64 __fastcall sub_512070(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // rdx
  __int64 v4; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rdi
  _QWORD *v12; // rax
  void *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rsi
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  _DWORD *v19; // rax
  char *v20; // rdi
  __int64 v21; // rdx
  char *v22; // rdi
  char *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  void *v26; // rdi
  void *v27; // rdi
  __int64 v28; // rax
  size_t v29; // rbp
  __int64 v30; // r14
  unsigned __int64 v31; // r8
  char *v32; // rsi
  __int64 v33; // rax
  const char *v34; // r15
  size_t v35; // rax
  __int64 v36; // rbp
  size_t v37; // r8
  unsigned __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rbp
  void *v41; // rdi
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  char *v45; // rsi
  __int64 v46; // rax
  unsigned __int64 v47; // [rsp+0h] [rbp-78h]
  _QWORD *v48; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v50; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v52[8]; // [rsp+38h] [rbp-40h] BYREF

  v52[0] = __readfsqword(0x28u);
  v2 = a2;
  v3 = *(_QWORD *)(a1 + 144);
  v4 = v3 + 56LL * (int)a2;
  if ( *(_BYTE *)(v4 + 52) || *(_QWORD *)(v4 + 32) || *(_DWORD *)(v4 + 48) )
    return v52[0] - __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, v3) )
  {
    v50 = 0;
    ptr = nullptr;
    v28 = pack_dd(src, v52, (unsigned int)a2) - (_QWORD)src;
    v29 = v28;
    if ( !v28 )
      goto LABEL_41;
    v30 = v50;
    v31 = v50 + v28;
    if ( __CFADD__((_QWORD)v50, v28) )
    {
      if ( (unsigned __int64)v50 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v50 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v50 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_40;
      }
      v31 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v32 = (char *)ptr;
    v33 = v50;
    if ( *((_QWORD *)&v50 + 1) < v31 )
    {
      v47 = v31;
      ptr = (void *)qvector_reserve(&ptr, ptr, v31, 1);
      v32 = (char *)ptr;
      v31 = v47;
      v33 = v50;
    }
    v47 = v31;
    memset(&v32[v33], 0, v31 - v33);
    *(_QWORD *)&v50 = v47;
LABEL_40:
    memcpy((char *)ptr + v30, src, v29);
LABEL_41:
    v34 = haystack;
    if ( *(_QWORD *)(v4 + 8) )
      v34 = *(const char **)v4;
    if ( v34 )
    {
      v35 = strlen(v34);
      v36 = v50;
      v37 = v35 + 1;
      v38 = v35 + 1 + v50;
      if ( __CFADD__(v35 + 1, (_QWORD)v50) )
      {
        if ( (unsigned __int64)v50 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v50 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_48;
          goto LABEL_47;
        }
        v38 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v36 = v50;
      v37 = 1;
      v34 = &byte_22F0C30;
      v38 = v50 + 1;
      if ( (_QWORD)v50 == -1 )
      {
        v36 = -1;
        v34 = &byte_22F0C30;
LABEL_47:
        *(_QWORD *)&v50 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
        memcpy((char *)ptr + v36, v34, v37);
        add_undo_record(126, ptr, v50);
        if ( ptr )
        {
          *(_QWORD *)&v50 = 0;
          qfree(ptr);
        }
        goto LABEL_6;
      }
    }
    v45 = (char *)ptr;
    v46 = v36;
    if ( *((_QWORD *)&v50 + 1) < v38 )
    {
      v47 = v37;
      ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
      v45 = (char *)ptr;
      v37 = v47;
      v46 = v50;
    }
    v47 = v37;
    memset(&v45[v46], 0, v38 - v46);
    *(_QWORD *)&v50 = v38;
    v37 = v47;
    goto LABEL_48;
  }
LABEL_6:
  v7 = sub_4D4E50(a1 + 72, v4);
  v9 = v8;
  v10 = (__int64)v7;
  if ( v7 == *(_QWORD **)(a1 + 96) && v8 == (_QWORD *)(a1 + 80) )
  {
    sub_50D690(*(_QWORD **)(a1 + 88));
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 96) = v9;
    *(_QWORD *)(a1 + 104) = v9;
    *(_QWORD *)(a1 + 112) = 0;
  }
  else
  {
    v47 = a1 + 80;
    if ( v8 != v7 )
    {
      do
      {
        v11 = v10;
        v10 = std::_Rb_tree_increment(v10);
        v12 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v11, v47);
        v13 = (void *)v12[4];
        if ( v13 )
        {
          v12[5] = 0;
          v48 = v12;
          qfree(v13);
          v12 = v48;
        }
        operator delete(v12, 0x40u);
        --*(_QWORD *)(a1 + 112);
      }
      while ( v9 != (_QWORD *)v10 );
    }
  }
  v14 = *(_QWORD *)(a1 + 152);
  v15 = v2 + 1;
  if ( v15 == v14 )
  {
    if ( v2 != -1 )
    {
      v39 = v15 - 1;
      *(_QWORD *)(a1 + 152) = v39;
      v40 = *(_QWORD *)(a1 + 144) + 56 * v39;
      v41 = *(void **)(v40 + 24);
      if ( v41 )
      {
        *(_QWORD *)(v40 + 32) = 0;
        qfree(v41);
      }
      v42 = *(void **)v40;
      if ( *(_QWORD *)v40 )
      {
        *(_QWORD *)(v40 + 8) = 0;
        qfree(v42);
      }
      goto LABEL_29;
    }
LABEL_21:
    while ( 1 )
    {
      v21 = *(_QWORD *)(a1 + 144);
      if ( !*(_BYTE *)(v21 + 56 * v14 - 4) )
        break;
      if ( v14 )
      {
        v24 = v14 - 1;
        *(_QWORD *)(a1 + 152) = v24;
        v25 = v21 + 56 * v24;
        v26 = *(void **)(v25 + 24);
        if ( v26 )
        {
          *(_QWORD *)(v25 + 32) = 0;
          qfree(v26);
        }
        v27 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *(_QWORD *)(v25 + 8) = 0;
          qfree(v27);
        }
        v14 = *(_QWORD *)(a1 + 152);
      }
      v22 = *(char **)(a1 + 48);
      v23 = &v22[4 * *(_QWORD *)(a1 + 56)];
      if ( v22 != v23 )
      {
        while ( (_DWORD)v14 != *(_DWORD *)v22 )
        {
          v22 += 4;
          if ( v23 == v22 )
            goto LABEL_21;
        }
        if ( v23 != v22 )
        {
          memmove(v22, v22 + 4, v23 - v22 - 4);
          --*(_QWORD *)(a1 + 56);
LABEL_29:
          v14 = *(_QWORD *)(a1 + 152);
        }
      }
    }
  }
  else
  {
    v16 = *(_DWORD **)(a1 + 48);
    v17 = *(_QWORD *)(a1 + 56);
    v18 = &v16[v17];
    if ( v16 == v18 )
      goto LABEL_50;
    v19 = *(_DWORD **)(a1 + 48);
    while ( *v19 != v2 )
    {
      if ( v18 == ++v19 )
        goto LABEL_50;
    }
    if ( v18 == v19 )
    {
LABEL_50:
      if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v17 + 1) )
      {
        v43 = qvector_reserve(a1 + 48, v16, v17 + 1, 4);
        v44 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = v43;
        v18 = (_DWORD *)(v43 + 4 * v44);
      }
      *v18 = v2;
      ++*(_QWORD *)(a1 + 56);
    }
    v20 = *(char **)v4;
    *(_BYTE *)(v4 + 52) = 1;
    if ( v20 )
    {
      *(_QWORD *)(v4 + 8) = 0;
      qfree(v20);
      *(_QWORD *)v4 = 0;
      *(_QWORD *)(v4 + 16) = 0;
    }
  }
  *(_BYTE *)(a1 + 168) = 1;
  return v52[0] - __readfsqword(0x28u);
}
