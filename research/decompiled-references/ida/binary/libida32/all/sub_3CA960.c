unsigned __int64 __fastcall sub_3CA960(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // r14
  _DWORD *v13; // rdi
  _DWORD *v14; // rax
  unsigned int v15; // r15d
  __int64 v16; // rdx
  unsigned int v17; // r13d
  __int64 v18; // rax
  size_t v19; // r15
  __int64 v20; // r10
  unsigned __int64 v21; // r11
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r15
  __int64 v26; // r10
  unsigned __int64 v27; // r11
  char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  size_t v32; // r13
  __int64 v33; // r15
  unsigned __int64 v34; // r10
  char *v35; // rsi
  __int64 v36; // rax
  _DWORD *v37; // [rsp+8h] [rbp-90h]
  unsigned int v38; // [rsp+14h] [rbp-84h]
  unsigned __int64 *v39; // [rsp+18h] [rbp-80h]
  unsigned __int64 v40; // [rsp+20h] [rbp-78h]
  __int64 v41; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v43; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-40h] BYREF

  v45 = __readfsqword(0x28u);
  v4 = a2;
  if ( a3 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    while ( 1 )
    {
      sub_3CA660((_QWORD *)a1, a2, -1047040);
      if ( a2 == -2 || (sub_3B9AA0(a1, a2 + 1, 4) & 0x600) != 0x200 )
        break;
      ++a2;
    }
    goto LABEL_3;
  }
  sub_3B8E40(a1, a2, 0);
  if ( *(_DWORD *)(a1 + 1016) == -1 )
    goto LABEL_3;
  v6 = a2;
  v7 = *(unsigned int *)(*(_QWORD *)(a1 + 992) + 36LL);
  v38 = v7 + v4;
  sub_3B63D0(v6, v7, 0);
  v8 = *(_QWORD *)(a1 + 992);
  ptr = nullptr;
  v43 = 0;
  *(_DWORD *)(v8 + 36) = 0;
  v9 = *(_QWORD *)(a1 + 1024);
  if ( v9 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v10 = 0;
  }
  else
  {
    v10 = a1 + 896;
    if ( v9 == -1 )
      v10 = a1 + 944;
  }
  v11 = (_DWORD *)(v10 + 8);
  v12 = *(_DWORD **)(a1 + 992);
  v37 = v11;
  v39 = &v45;
  while ( 1 )
  {
    v13 = v12;
    v14 = (_DWORD *)std::_Rb_tree_increment();
    v12 = v14;
    if ( v37 == v14 )
      break;
    v15 = v14[8];
    if ( v15 >= v38 )
      break;
    v16 = (unsigned int)v14[9];
    if ( (_DWORD)v16 || (v17 = v14[10], (v17 & 0x600) != 0x200) )
    {
      if ( !under_debugger )
        interr(70);
      BUG();
    }
    if ( (unsigned __int8)must_journal(v13, v7, v16) )
    {
      v18 = pack_dd(src, v39, v15) - (_QWORD)src;
      v19 = v18;
      if ( v18 )
      {
        v20 = v43;
        v21 = v43 + v18;
        if ( !__CFADD__((_QWORD)v43, v18) )
          goto LABEL_19;
        if ( (unsigned __int64)v43 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v21 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_19:
          v22 = (char *)ptr;
          v23 = v43;
          if ( *((_QWORD *)&v43 + 1) < v21 )
          {
            v41 = v43;
            v40 = v21;
            ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
            v22 = (char *)ptr;
            v20 = v41;
            v23 = v43;
            v21 = v40;
          }
          v41 = v20;
          v40 = v21;
          memset(&v22[v23], 0, v21 - v23);
          v20 = v41;
          *(_QWORD *)&v43 = v40;
        }
        else if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((char *)ptr + v20, src, v19);
      }
      v24 = pack_dd(src, v39, v17) - (_QWORD)src;
      v25 = v24;
      if ( v24 )
      {
        v26 = v43;
        v27 = v43 + v24;
        if ( !__CFADD__((_QWORD)v43, v24) )
          goto LABEL_25;
        if ( (unsigned __int64)v43 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v27 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_25:
          v28 = (char *)ptr;
          v29 = v43;
          if ( *((_QWORD *)&v43 + 1) < v27 )
          {
            v41 = v43;
            v40 = v27;
            ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
            v28 = (char *)ptr;
            v26 = v41;
            v29 = v43;
            v27 = v40;
          }
          v41 = v26;
          v40 = v27;
          memset(&v28[v29], 0, v27 - v29);
          v26 = v41;
          *(_QWORD *)&v43 = v40;
        }
        else if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((char *)ptr + v26, src, v25);
      }
      v30 = v17;
      v7 = (__int64)v39;
      BYTE1(v30) = BYTE1(v17) & 0xFD;
      v31 = pack_dd(src, v39, v30) - (_QWORD)src;
      v32 = v31;
      if ( !v31 )
        goto LABEL_11;
      v33 = v43;
      v34 = v43 + v31;
      if ( __CFADD__((_QWORD)v43, v31) )
      {
        if ( (unsigned __int64)v43 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v34 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_31;
        }
        if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
LABEL_31:
        v35 = (char *)ptr;
        v36 = v43;
        if ( *((_QWORD *)&v43 + 1) < v34 )
        {
          v40 = v34;
          ptr = (void *)qvector_reserve(&ptr, ptr, v34, 1);
          v35 = (char *)ptr;
          v34 = v40;
          v36 = v43;
        }
        v40 = v34;
        memset(&v35[v36], 0, v34 - v36);
        *(_QWORD *)&v43 = v40;
      }
      v7 = (__int64)src;
      memcpy((char *)ptr + v33, src, v32);
    }
LABEL_11:
    v12[10] &= ~0x200u;
  }
  if ( (_QWORD)v43 )
    add_undo_record(6, ptr, v43);
  if ( (unsigned __int8)sub_3CA660((_QWORD *)a1, v4, -1047040) && qword_2CA1648 )
    qword_2CA1648(v4, 1);
  if ( ptr )
  {
    *(_QWORD *)&v43 = 0;
    qfree(ptr);
  }
LABEL_3:
  *(_QWORD *)(a1 + 1204) = 0xFFFFFFFFLL;
  return v45 - __readfsqword(0x28u);
}

