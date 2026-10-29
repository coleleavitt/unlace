unsigned __int64 __fastcall sub_412490(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  size_t v6; // r13
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  size_t v12; // rbp
  __int64 v13; // r13
  unsigned __int64 v14; // r15
  char *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-78h]
  __int64 v18; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v20; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v22[8]; // [rsp+38h] [rbp-40h] BYREF

  v22[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 156) == -1 )
    return v22[0] - __readfsqword(0x28u);
  v4 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v22[0] - __readfsqword(0x28u);
  v20 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v20) = 3;
  *(_QWORD *)&v20 = v20 + 1;
  v5 = pack_dd(src, v22, (unsigned int)a2) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v20;
    v8 = v20 + v5;
    if ( __CFADD__((_QWORD)v20, v5) )
    {
      if ( (unsigned __int64)v20 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v20 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v20 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v9 = (char *)ptr;
    v10 = v20;
    if ( *((_QWORD *)&v20 + 1) < v8 )
    {
      v18 = v20;
      v17 = v8;
      ptr = (void *)qvector_reserve(&ptr, ptr, v8, 1);
      v9 = (char *)ptr;
      v7 = v18;
      v10 = v20;
      v8 = v17;
    }
    v18 = v7;
    v17 = v8;
    memset(&v9[v10], 0, v8 - v10);
    v7 = v18;
    *(_QWORD *)&v20 = v17;
LABEL_9:
    memcpy((char *)ptr + v7, src, v6);
  }
  v11 = pack_dd(src, v22, v4) - (_QWORD)src;
  v12 = v11;
  if ( !v11 )
    goto LABEL_16;
  v13 = v20;
  v14 = v20 + v11;
  if ( __CFADD__((_QWORD)v20, v11) )
  {
    if ( (unsigned __int64)v20 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v20 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v20 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
    v14 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v15 = (char *)ptr;
  v16 = v20;
  if ( *((_QWORD *)&v20 + 1) < v14 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
    v15 = (char *)ptr;
    v16 = v20;
  }
  memset(&v15[v16], 0, v14 - v16);
  *(_QWORD *)&v20 = v14;
LABEL_15:
  memcpy((char *)ptr + v13, src, v12);
LABEL_16:
  add_undo_record(*(unsigned int *)(a1 + 156), ptr, v20);
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  return v22[0] - __readfsqword(0x28u);
}

