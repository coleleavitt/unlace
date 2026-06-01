__int64 __fastcall sub_3BB240(_QWORD *a1, __int64 a2, unsigned __int16 *a3, signed __int64 a4)
{
  char *v5; // rbp
  __int64 v6; // rbx
  __int64 v8; // r15
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned __int8 *v11; // r15
  unsigned __int64 v12; // r8
  unsigned __int8 *v13; // r9
  _QWORD *v14; // rbx
  _QWORD *v15; // r10
  unsigned __int64 v16; // rdx
  char v17; // cl
  _QWORD *v18; // rax
  _BOOL4 v19; // r15d
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // r15
  __int64 v25; // rax
  size_t v26; // r15
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  char *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned __int64 v32; // r15
  char *v33; // rsi
  __int64 v34; // rax
  const void *v35; // rsi
  unsigned __int16 *v36; // rbp
  char *v37; // rsi
  __int64 v38; // rax
  size_t v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rbx
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int64 v44; // r9
  char *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // r9
  int v48; // r8d
  unsigned __int64 v49; // [rsp+8h] [rbp-80h]
  __int64 v50; // [rsp+10h] [rbp-78h]
  _QWORD *v51; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v53; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  char v55[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v56[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = (char *)a1[3];
  v6 = a1[6];
  v56[0] = __readfsqword(0x28u);
  v8 = a1[5];
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_2;
  ptr = nullptr;
  v53 = 0;
  v23 = pack_dq(src, v56, &v5[v6 - v8]) - (_QWORD)src;
  v24 = v23;
  if ( v23 )
  {
    v43 = v53;
    v44 = v53 + v23;
    if ( __CFADD__((_QWORD)v53, v23) )
    {
      if ( (unsigned __int64)v53 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v53 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v53 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_46;
      }
      v44 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v45 = (char *)ptr;
    v46 = v53;
    if ( *((_QWORD *)&v53 + 1) < v44 )
    {
      v50 = v53;
      v49 = v44;
      ptr = (void *)qvector_reserve(&ptr, ptr, v44, 1);
      v45 = (char *)ptr;
      v43 = v50;
      v46 = v53;
      v44 = v49;
    }
    v50 = v43;
    v49 = v44;
    memset(&v45[v46], 0, v44 - v46);
    v43 = v50;
    *(_QWORD *)&v53 = v49;
LABEL_46:
    memcpy((char *)ptr + v43, src, v24);
  }
  if ( HIDWORD(a4) )
  {
    if ( !under_debugger )
      interr(5);
    BUG();
  }
  v25 = pack_dd(src, v55, (unsigned int)a4) - (_QWORD)src;
  v26 = v25;
  if ( v25 )
  {
    v27 = v53;
    v28 = v53 + v25;
    if ( __CFADD__((_QWORD)v53, v25) )
    {
      if ( (unsigned __int64)v53 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v53 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v53 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_27;
      }
      v28 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v29 = (char *)ptr;
    v30 = v53;
    if ( *((_QWORD *)&v53 + 1) < v28 )
    {
      v50 = v53;
      v49 = v28;
      ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
      v29 = (char *)ptr;
      v27 = v50;
      v30 = v53;
      v28 = v49;
    }
    v50 = v27;
    v49 = v28;
    memset(&v29[v30], 0, v28 - v30);
    v27 = v50;
    *(_QWORD *)&v53 = v49;
LABEL_27:
    memcpy((char *)ptr + v27, src, v26);
  }
  if ( a4 )
  {
    v31 = v53;
    v32 = v53 + a4;
    if ( __CFADD__((_QWORD)v53, a4) )
    {
      if ( (unsigned __int64)v53 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v53 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v53 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_33;
      }
      v32 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v33 = (char *)ptr;
    v34 = v53;
    if ( *((_QWORD *)&v53 + 1) < v32 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
      v33 = (char *)ptr;
      v34 = v53;
    }
    memset(&v33[v34], 0, v32 - v34);
    *(_QWORD *)&v53 = v32;
LABEL_33:
    v35 = v5;
    v36 = a3;
    memcpy((char *)ptr + v31, v35, a4);
    do
    {
      v41 = v53;
      v48 = *v36;
      v36 += 2;
      LOWORD(v48) = v48 & 0x1FF;
      v42 = v53 + 2;
      v47 = v53 + 2;
      if ( (unsigned __int64)v53 < 0xFFFFFFFFFFFFFFFELL )
      {
        v37 = (char *)ptr;
        v38 = v53;
        v39 = 2;
        if ( *((_QWORD *)&v53 + 1) < v42 )
        {
          v51 = (_QWORD *)(v53 + 2);
          LODWORD(v50) = v48;
          v49 = v53 + 2;
          ptr = (void *)qvector_reserve(&ptr, ptr, v42, 1);
          v37 = (char *)ptr;
          v38 = v53;
          v47 = (__int64)v51;
          v48 = v50;
          v39 = v49 - v53;
        }
        v50 = v47;
        LODWORD(v49) = v48;
        memset(&v37[v38], 0, v39);
        LOWORD(v48) = v49;
        v40 = v50;
      }
      else
      {
        v40 = 0x7FFFFFFFFFFFFFFFLL;
      }
      *(_QWORD *)&v53 = v40;
      *(_WORD *)((char *)ptr + v41) = v48;
    }
    while ( v36 != &a3[2 * a4] );
  }
  add_undo_record(11, ptr, v53);
  if ( ptr )
  {
    *(_QWORD *)&v53 = 0;
    qfree(ptr);
  }
LABEL_2:
  v9 = 0;
  if ( a4 > 0 )
  {
    while ( 1 )
    {
      v11 = (unsigned __int8 *)a1[3];
      if ( (*(_DWORD *)&a3[2 * v9] & 0x600) != 0x400 )
        goto LABEL_4;
      v12 = a1[1];
      v13 = &v11[a1[6] - a1[5]];
      v14 = *(_QWORD **)(v12 + 744);
      v15 = (_QWORD *)(v12 + 736);
      if ( !v14 )
        break;
      while ( 1 )
      {
        v16 = v14[4];
        v17 = 0;
        v18 = (_QWORD *)v14[3];
        if ( (unsigned __int64)v13 < v16 )
        {
          v18 = (_QWORD *)v14[2];
          v17 = 1;
        }
        if ( !v18 )
          break;
        v14 = v18;
      }
      if ( v17 )
        goto LABEL_18;
LABEL_13:
      if ( v16 < (unsigned __int64)v13 )
        goto LABEL_14;
LABEL_4:
      a1[3] = v11 + 1;
      v10 = *v11 | *(_DWORD *)&a3[2 * v9] & 0xFFFFFE00;
      BYTE1(v10) |= 1u;
      *(_DWORD *)&a3[2 * v9++] = v10;
      if ( a4 == v9 )
        return -1;
    }
    v14 = (_QWORD *)(v12 + 736);
LABEL_18:
    if ( v14 == *(_QWORD **)(v12 + 752) )
    {
LABEL_14:
      v19 = 1;
      if ( v14 != v15 )
        v19 = (unsigned __int64)v13 < v14[4];
      v49 = v12;
      v51 = v15;
      v50 = (__int64)v13;
      v20 = operator new(0x28u);
      *(_QWORD *)(v20 + 32) = v50;
      std::_Rb_tree_insert_and_rebalance(v19, v20, v14, v51);
      ++*(_QWORD *)(v49 + 768);
      v11 = (unsigned __int8 *)a1[3];
      goto LABEL_4;
    }
    v51 = (_QWORD *)(v12 + 736);
    v50 = (__int64)v13;
    v49 = v12;
    v22 = std::_Rb_tree_decrement(v14);
    v15 = v51;
    v13 = (unsigned __int8 *)v50;
    v16 = *(_QWORD *)(v22 + 32);
    v12 = v49;
    goto LABEL_13;
  }
  return -1;
}
