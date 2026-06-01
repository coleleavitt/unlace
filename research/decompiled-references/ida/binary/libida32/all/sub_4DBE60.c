unsigned __int64 __fastcall sub_4DBE60(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 v5; // rsi
  unsigned int v6; // r12d
  _QWORD *v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // r13
  _QWORD *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  _BYTE *v18; // rax
  size_t v19; // r9
  __int64 v20; // r10
  size_t v21; // r11
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE *v25; // rsi
  __int64 v26; // rax
  size_t v27; // r9
  __int64 v28; // r10
  size_t v29; // r11
  __int64 v30; // rax
  size_t v31; // rax
  size_t v32; // r9
  size_t v33; // r10
  unsigned __int64 v34; // r11
  char *v35; // rsi
  __int64 v36; // rax
  char *v37; // rsi
  __int64 v38; // rax
  void *src; // [rsp+0h] [rbp-98h]
  char v40; // [rsp+Fh] [rbp-89h]
  _QWORD *v41; // [rsp+10h] [rbp-88h]
  size_t v42; // [rsp+18h] [rbp-80h]
  size_t n; // [rsp+20h] [rbp-78h]
  __int64 v44; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v46; // [rsp+38h] [rbp-60h]
  _BYTE v47[5]; // [rsp+53h] [rbp-45h] BYREF
  _QWORD v48[8]; // [rsp+58h] [rbp-40h] BYREF

  v3 = a1;
  v5 = *a1;
  v48[0] = __readfsqword(0x28u);
  v6 = a3;
  v7 = *(_QWORD **)(v5 + 1560);
  v8 = v7[3];
  v9 = v7 + 2;
  if ( !v8 )
    goto LABEL_51;
  v10 = v7 + 2;
  v11 = v7[3];
  do
  {
    while ( 1 )
    {
      a1 = *(__int64 **)(v11 + 16);
      v12 = *(_QWORD *)(v11 + 24);
      if ( *(_DWORD *)(v11 + 32) < a2 )
        break;
      v10 = (_QWORD *)v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !a1 )
        goto LABEL_6;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v12 );
LABEL_6:
  if ( v9 != v10 && a2 >= *((_DWORD *)v10 + 8) )
    v6 |= *((_DWORD *)v10 + 9);
  v13 = (__int64)(v7 + 2);
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v8 + 16);
      a3 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v8 + 32) < a2 )
        break;
      v13 = v8;
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v14 )
        goto LABEL_13;
    }
    v8 = *(_QWORD *)(v8 + 24);
  }
  while ( a3 );
LABEL_13:
  if ( v9 == (_QWORD *)v13 )
  {
LABEL_51:
    v13 = (__int64)(v7 + 2);
    if ( !(unsigned __int8)must_journal(a1, v5, a3) )
      goto LABEL_16;
    v40 = 0;
    goto LABEL_24;
  }
  if ( a2 == *(_DWORD *)(v13 + 32) )
  {
    if ( *(_DWORD *)(v13 + 36) == v6 )
      goto LABEL_22;
    v40 = must_journal(a1, v5, a3);
    if ( !v40 )
      goto LABEL_21;
LABEL_24:
    v41 = v48;
    ptr = nullptr;
    src = v47;
    v46 = 0;
    v18 = (_BYTE *)pack_dd(v47, v48, a2);
    v19 = v18 - v47;
    if ( v18 == v47 )
      goto LABEL_30;
    v20 = v46;
    v21 = v46 + v19;
    if ( __CFADD__((_QWORD)v46, v19) )
    {
      if ( (unsigned __int64)v46 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v46 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v46 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_29;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = (char *)ptr;
    v23 = v46;
    if ( *((_QWORD *)&v46 + 1) < v21 )
    {
      v44 = v46;
      n = v19;
      v42 = v21;
      ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
      v22 = (char *)ptr;
      v20 = v44;
      v23 = v46;
      v19 = n;
      v21 = v42;
    }
    v44 = v20;
    n = v19;
    v42 = v21;
    memset(&v22[v23], 0, v21 - v23);
    v19 = n;
    v20 = v44;
    *(_QWORD *)&v46 = v42;
LABEL_29:
    memcpy((char *)ptr + v20, src, v19);
LABEL_30:
    v24 = v46;
    v25 = ptr;
    if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v46 + 1, 1);
      v25 = ptr;
      v24 = v46;
    }
    v25[v24] = v40;
    *(_QWORD *)&v46 = v46 + 1;
    if ( !v40 || (v26 = pack_dd(src, v41, *(unsigned int *)(v13 + 36)) - (_QWORD)src, (v27 = v26) == 0) )
    {
LABEL_39:
      v30 = pack_dd(src, v41, v6);
      v31 = v30 - (_QWORD)src;
      v32 = v31;
      if ( !v31 )
        goto LABEL_45;
      v33 = v46;
      v34 = v46 + v31;
      if ( __CFADD__((_QWORD)v46, v31) )
      {
        if ( (unsigned __int64)v46 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v46 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v46 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_44;
        }
        v34 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v35 = (char *)ptr;
      v36 = v46;
      if ( *((_QWORD *)&v46 + 1) < v34 )
      {
        n = v46;
        v42 = v32;
        v41 = (_QWORD *)v34;
        ptr = (void *)qvector_reserve(&ptr, ptr, v34, 1);
        v35 = (char *)ptr;
        v33 = n;
        v36 = v46;
        v32 = v42;
        v34 = (unsigned __int64)v41;
      }
      n = v33;
      v42 = v32;
      v41 = (_QWORD *)v34;
      memset(&v35[v36], 0, v34 - v36);
      v32 = v42;
      v33 = n;
      *(_QWORD *)&v46 = v41;
LABEL_44:
      memcpy((char *)ptr + v33, src, v32);
LABEL_45:
      add_undo_record(181, ptr, v46);
      if ( ptr )
      {
        *(_QWORD *)&v46 = 0;
        qfree(ptr);
      }
      if ( !v40 )
        goto LABEL_16;
LABEL_21:
      *(_DWORD *)(v13 + 36) = v6;
      v5 = *v3;
      goto LABEL_22;
    }
    v28 = v46;
    v29 = v46 + v26;
    if ( __CFADD__((_QWORD)v46, v26) )
    {
      if ( (unsigned __int64)v46 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v46 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v46 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_38:
        memcpy((char *)ptr + v28, src, v27);
        goto LABEL_39;
      }
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v37 = (char *)ptr;
    v38 = v46;
    if ( *((_QWORD *)&v46 + 1) < v29 )
    {
      v44 = v46;
      n = v27;
      v42 = v29;
      ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
      v37 = (char *)ptr;
      v28 = v44;
      v38 = v46;
      v27 = n;
      v29 = v42;
    }
    v44 = v28;
    n = v27;
    v42 = v29;
    memset(&v37[v38], 0, v29 - v38);
    v27 = n;
    v28 = v44;
    *(_QWORD *)&v46 = v42;
    goto LABEL_38;
  }
  if ( (unsigned __int8)must_journal(a1, v5, a3) )
  {
    v40 = 0;
    goto LABEL_24;
  }
LABEL_16:
  v15 = (_DWORD *)operator new(0x28u);
  v15[8] = a2;
  v15[9] = v6;
  src = v15;
  sub_4D9F40(v7 + 1, v13, a2);
  if ( v16 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++v7[6];
  }
  else if ( src )
  {
    operator delete(src, 0x28u);
  }
  v5 = *v3;
LABEL_22:
  LODWORD(ptr) = v6;
  sub_79B440(v3 + 318, v5, a2, &ptr, 4, 321);
  return v48[0] - __readfsqword(0x28u);
}

