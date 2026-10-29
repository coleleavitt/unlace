unsigned __int64 __fastcall sub_412E80(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r12d
  __int64 v7; // rax
  size_t v8; // r8
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // r12
  __int64 v15; // r14
  unsigned __int64 v16; // r8
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  size_t v20; // rbp
  __int64 v21; // r12
  unsigned __int64 v22; // r14
  char *v23; // rsi
  __int64 v24; // rax
  void **p_ptr; // [rsp+8h] [rbp-80h]
  unsigned __int64 v26; // [rsp+10h] [rbp-78h]
  size_t n; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v29; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v31[8]; // [rsp+48h] [rbp-40h] BYREF

  v31[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 156) == -1 )
    return v31[0] - __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v31[0] - __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v29 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v29) = 11;
  *(_QWORD *)&v29 = v29 + 1;
  v7 = pack_dd(src, v31, (unsigned int)a2) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v29;
    v10 = v29 + v7;
    if ( __CFADD__((_QWORD)v29, v7) )
    {
      if ( (unsigned __int64)v29 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v11 = (char *)ptr;
    v12 = v29;
    if ( *((_QWORD *)&v29 + 1) < v10 )
    {
      n = v8;
      v26 = v10;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v10, 1);
      v11 = (char *)ptr;
      v8 = n;
      v12 = v29;
      v10 = v26;
    }
    n = v8;
    v26 = v10;
    memset(&v11[v12], 0, v10 - v12);
    v8 = n;
    *(_QWORD *)&v29 = v26;
LABEL_9:
    memcpy((char *)ptr + v9, src, v8);
  }
  v13 = pack_dd(src, v31, v5 & 0xFFFFFFFC) - (_QWORD)src;
  v14 = v13;
  if ( !v13 )
    goto LABEL_16;
  v15 = v29;
  v16 = v29 + v13;
  if ( __CFADD__((_QWORD)v29, v13) )
  {
    if ( (unsigned __int64)v29 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
    v16 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v17 = (char *)ptr;
  v18 = v29;
  if ( *((_QWORD *)&v29 + 1) < v16 )
  {
    v26 = v16;
    ptr = (void *)qvector_reserve(p_ptr, ptr, v16, 1);
    v17 = (char *)ptr;
    v16 = v26;
    v18 = v29;
  }
  v26 = v16;
  memset(&v17[v18], 0, v16 - v18);
  *(_QWORD *)&v29 = v26;
LABEL_15:
  memcpy((char *)ptr + v15, src, v14);
LABEL_16:
  v19 = pack_dd(src, v31, a4 & 0xFFFFFFFC) - (_QWORD)src;
  v20 = v19;
  if ( !v19 )
    goto LABEL_22;
  v21 = v29;
  v22 = v29 + v19;
  if ( __CFADD__((_QWORD)v29, v19) )
  {
    if ( (unsigned __int64)v29 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v22 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v23 = (char *)ptr;
  v24 = v29;
  if ( *((_QWORD *)&v29 + 1) < v22 )
  {
    ptr = (void *)qvector_reserve(p_ptr, ptr, v22, 1);
    v23 = (char *)ptr;
    v24 = v29;
  }
  memset(&v23[v24], 0, v22 - v24);
  *(_QWORD *)&v29 = v22;
LABEL_21:
  memcpy((char *)ptr + v21, src, v20);
LABEL_22:
  add_undo_record(*(unsigned int *)(a1 + 156), ptr, v29);
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
  }
  return v31[0] - __readfsqword(0x28u);
}

