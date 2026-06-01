unsigned __int64 __fastcall sub_39DF60(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  size_t v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // r8
  char *v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+0h] [rbp-78h]
  __int64 v20; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v22; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v24[8]; // [rsp+38h] [rbp-40h] BYREF

  v24[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal() )
    goto LABEL_2;
  v6 = (unsigned int)*a1;
  v22 = 0;
  ptr = nullptr;
  v7 = pack_dd(src, v24, v6) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v22;
    v10 = v22 + v7;
    if ( __CFADD__((_QWORD)v22, v7) )
    {
      if ( (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v11 = (char *)ptr;
    v12 = v22;
    if ( *((_QWORD *)&v22 + 1) < v10 )
    {
      v19 = v10;
      v20 = v22;
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v11 = (char *)ptr;
      v9 = v20;
      v12 = v22;
      v10 = v19;
    }
    v20 = v9;
    v19 = v10;
    memset(&v11[v12], 0, v10 - v12);
    v9 = v20;
    *(_QWORD *)&v22 = v19;
LABEL_8:
    memcpy((char *)ptr + v9, src, v8);
  }
  v13 = pack_dd(src, v24, (unsigned int)*a2) - (_QWORD)src;
  v14 = v13;
  if ( !v13 )
    goto LABEL_15;
  v15 = v22;
  v16 = v22 + v13;
  if ( __CFADD__((_QWORD)v22, v13) )
  {
    if ( (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v16 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v17 = (char *)ptr;
  v18 = v22;
  if ( *((_QWORD *)&v22 + 1) < v16 )
  {
    v19 = v16;
    ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
    v17 = (char *)ptr;
    v16 = v19;
    v18 = v22;
  }
  v19 = v16;
  memset(&v17[v18], 0, v16 - v18);
  *(_QWORD *)&v22 = v19;
LABEL_14:
  memcpy((char *)ptr + v15, src, v14);
LABEL_15:
  add_undo_record(a3, ptr, v22);
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
LABEL_2:
  *a1 = *a2;
  return v24[0] - __readfsqword(0x28u);
}

