__int64 __fastcall sub_3B6AC0(__int64 a1, __int64 a2, __int16 *a3, size_t a4)
{
  int v5; // r12d
  __int64 v6; // r14
  const void *v7; // r13
  __int64 v8; // r13
  unsigned int v9; // eax
  unsigned __int8 *v10; // r14
  _QWORD *v11; // r15
  unsigned int v12; // r9d
  _QWORD *v13; // r12
  size_t v14; // r10
  unsigned int v15; // edx
  char v16; // cl
  _QWORD *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // r9
  __int64 v22; // rax
  size_t v23; // r14
  __int64 v24; // r15
  unsigned __int64 v25; // r9
  char *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r12
  unsigned __int64 v29; // r14
  char *v30; // rsi
  __int64 v31; // rax
  const void *v32; // rsi
  __int16 *v33; // r13
  __int16 *v34; // r14
  char *v35; // rsi
  __int64 v36; // rax
  size_t v37; // rcx
  __int64 v38; // r9
  __int64 v39; // r12
  __int16 v40; // r15
  __int16 v41; // r15
  unsigned __int64 v42; // rdx
  __int64 v43; // r14
  unsigned __int64 v44; // r10
  char *v45; // rsi
  __int64 v46; // rax
  size_t v47; // r9
  size_t n; // [rsp+8h] [rbp-80h]
  unsigned __int64 v49; // [rsp+10h] [rbp-78h]
  size_t v50; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v52; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v54[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 40);
  n = a4;
  v54[0] = __readfsqword(0x28u);
  v7 = *(const void **)(a1 + 24);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_2;
  ptr = nullptr;
  v52 = 0;
  v20 = pack_dd(src, v54, (unsigned int)(v5 + (_DWORD)v7 - v6)) - (_QWORD)src;
  v21 = v20;
  if ( v20 )
  {
    v43 = v52;
    v44 = v52 + v20;
    if ( __CFADD__((_QWORD)v52, v20) )
    {
      if ( (unsigned __int64)v52 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_44;
      }
      v44 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v45 = (char *)ptr;
    v46 = v52;
    if ( *((_QWORD *)&v52 + 1) < v44 )
    {
      v50 = v21;
      v49 = v44;
      ptr = (void *)qvector_reserve(&ptr, ptr, v44, 1);
      v45 = (char *)ptr;
      v21 = v50;
      v46 = v52;
      v44 = v49;
    }
    v50 = v21;
    v49 = v44;
    memset(&v45[v46], 0, v44 - v46);
    v21 = v50;
    *(_QWORD *)&v52 = v49;
LABEL_44:
    memcpy((char *)ptr + v43, src, v21);
  }
  if ( HIDWORD(n) )
  {
    if ( !under_debugger )
      interr(5);
    BUG();
  }
  v22 = pack_dd(src, v54, (unsigned int)n) - (_QWORD)src;
  v23 = v22;
  if ( v22 )
  {
    v24 = v52;
    v25 = v52 + v22;
    if ( __CFADD__((_QWORD)v52, v22) )
    {
      if ( (unsigned __int64)v52 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_25;
      }
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v26 = (char *)ptr;
    v27 = v52;
    if ( *((_QWORD *)&v52 + 1) < v25 )
    {
      v49 = v25;
      ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
      v26 = (char *)ptr;
      v25 = v49;
      v27 = v52;
    }
    v49 = v25;
    memset(&v26[v27], 0, v25 - v27);
    *(_QWORD *)&v52 = v49;
LABEL_25:
    memcpy((char *)ptr + v24, src, v23);
  }
  if ( n )
  {
    v28 = v52;
    v29 = v52 + n;
    if ( __CFADD__((_QWORD)v52, n) )
    {
      if ( (unsigned __int64)v52 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_31;
      }
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v30 = (char *)ptr;
    v31 = v52;
    if ( *((_QWORD *)&v52 + 1) < v29 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
      v30 = (char *)ptr;
      v31 = v52;
    }
    memset(&v30[v31], 0, v29 - v31);
    *(_QWORD *)&v52 = v29;
LABEL_31:
    v32 = v7;
    v33 = a3;
    v34 = &a3[2 * n];
    memcpy((char *)ptr + v28, v32, n);
    do
    {
      v39 = v52;
      v40 = *v33;
      v33 += 2;
      v41 = v40 & 0x1FF;
      v42 = v52 + 2;
      v47 = v52 + 2;
      if ( (unsigned __int64)v52 < 0xFFFFFFFFFFFFFFFELL )
      {
        v35 = (char *)ptr;
        v36 = v52;
        v37 = 2;
        if ( *((_QWORD *)&v52 + 1) < v42 )
        {
          v50 = v52 + 2;
          v49 = v52 + 2;
          ptr = (void *)qvector_reserve(&ptr, ptr, v42, 1);
          v35 = (char *)ptr;
          v36 = v52;
          v47 = v50;
          v37 = v49 - v52;
        }
        v49 = v47;
        memset(&v35[v36], 0, v37);
        v38 = v49;
      }
      else
      {
        v38 = 0x7FFFFFFFFFFFFFFFLL;
      }
      *(_QWORD *)&v52 = v38;
      *(_WORD *)((char *)ptr + v39) = v41;
    }
    while ( v33 != v34 );
  }
  add_undo_record(11, ptr, v52);
  if ( ptr )
  {
    *(_QWORD *)&v52 = 0;
    qfree(ptr);
  }
LABEL_2:
  v8 = 0;
  if ( (__int64)n > 0 )
  {
    while ( 1 )
    {
      v10 = *(unsigned __int8 **)(a1 + 24);
      if ( (*(_DWORD *)&a3[2 * v8] & 0x600) != 0x400 )
        goto LABEL_4;
      v11 = *(_QWORD **)(a1 + 8);
      v12 = *(_DWORD *)(a1 + 48) + (_DWORD)v10 - *(_DWORD *)(a1 + 40);
      v13 = (_QWORD *)v11[92];
      v14 = (size_t)(v11 + 91);
      if ( !v13 )
        break;
      while ( 1 )
      {
        v15 = *((_DWORD *)v13 + 8);
        v16 = 0;
        v17 = (_QWORD *)v13[3];
        if ( v12 < v15 )
        {
          v17 = (_QWORD *)v13[2];
          v16 = 1;
        }
        if ( !v17 )
          break;
        v13 = v17;
      }
      if ( v16 )
        goto LABEL_16;
LABEL_13:
      if ( v15 < v12 )
        goto LABEL_14;
LABEL_4:
      *(_QWORD *)(a1 + 24) = v10 + 1;
      v9 = *v10 | *(_DWORD *)&a3[2 * v8] & 0xFFFFFE00;
      BYTE1(v9) |= 1u;
      *(_DWORD *)&a3[2 * v8++] = v9;
      if ( n == v8 )
        return -1;
    }
    v13 = v11 + 91;
LABEL_16:
    if ( v13 == (_QWORD *)v11[93] )
    {
LABEL_14:
      v50 = v14;
      LODWORD(v49) = v12;
      *(_DWORD *)(operator new(0x28u) + 32) = v12;
      std::_Rb_tree_insert_and_rebalance();
      ++v11[95];
      v10 = *(unsigned __int8 **)(a1 + 24);
      goto LABEL_4;
    }
    v50 = (size_t)(v11 + 91);
    LODWORD(v49) = v12;
    v19 = std::_Rb_tree_decrement();
    v14 = v50;
    v12 = v49;
    v15 = *(_DWORD *)(v19 + 32);
    goto LABEL_13;
  }
  return -1;
}

