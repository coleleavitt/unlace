unsigned __int64 __fastcall sub_39BBF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  size_t v8; // r14
  __int64 v9; // rax
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // r14
  __int64 v20; // r15
  unsigned __int64 v21; // r8
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  char *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v31; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v33[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal() )
    goto LABEL_2;
  v6 = *(unsigned int *)(a2 + 32);
  v31 = 0;
  ptr = nullptr;
  v7 = pack_dd(src, v33, v6) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v24 = v31;
    v25 = v31 + v7;
    if ( __CFADD__((_QWORD)v31, v7) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_24;
      }
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v26 = (char *)ptr;
    v27 = v31;
    if ( *((_QWORD *)&v31 + 1) < v25 )
    {
      v28 = v25;
      v29 = v31;
      ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
      v26 = (char *)ptr;
      v24 = v29;
      v27 = v31;
      v25 = v28;
    }
    v29 = v24;
    v28 = v25;
    memset(&v26[v27], 0, v25 - v27);
    v24 = v29;
    *(_QWORD *)&v31 = v28;
LABEL_24:
    memcpy((char *)ptr + v24, src, v8);
  }
  v9 = v31;
  v10 = ptr;
  if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v31 + 1, 1);
    v10 = ptr;
    v9 = v31;
  }
  v10[v9] = 1;
  v11 = *(unsigned int *)(a2 + 36);
  *(_QWORD *)&v31 = v31 + 1;
  v12 = pack_dd(src, v33, v11) - (_QWORD)src;
  v13 = v12;
  if ( v12 )
  {
    v14 = v31;
    v15 = v31 + v12;
    if ( __CFADD__((_QWORD)v31, v12) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_11;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v16 = (char *)ptr;
    v17 = v31;
    if ( *((_QWORD *)&v31 + 1) < v15 )
    {
      v28 = v15;
      v29 = v31;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v16 = (char *)ptr;
      v14 = v29;
      v17 = v31;
      v15 = v28;
    }
    v29 = v14;
    v28 = v15;
    memset(&v16[v17], 0, v15 - v17);
    v14 = v29;
    *(_QWORD *)&v31 = v28;
LABEL_11:
    memcpy((char *)ptr + v14, src, v13);
  }
  v18 = pack_dd(src, v33, a3) - (_QWORD)src;
  v19 = v18;
  if ( !v18 )
    goto LABEL_18;
  v20 = v31;
  v21 = v31 + v18;
  if ( __CFADD__((_QWORD)v31, v18) )
  {
    if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_17;
    }
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v22 = (char *)ptr;
  v23 = v31;
  if ( *((_QWORD *)&v31 + 1) < v21 )
  {
    v28 = v21;
    ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
    v22 = (char *)ptr;
    v21 = v28;
    v23 = v31;
  }
  v28 = v21;
  memset(&v22[v23], 0, v21 - v23);
  *(_QWORD *)&v31 = v28;
LABEL_17:
  memcpy((char *)ptr + v20, src, v19);
LABEL_18:
  add_undo_record(*(unsigned int *)(a1 + 72), ptr, v31);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
LABEL_2:
  *(_DWORD *)(a2 + 36) = a3;
  return v33[0] - __readfsqword(0x28u);
}

