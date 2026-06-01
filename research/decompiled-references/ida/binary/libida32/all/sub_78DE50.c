unsigned __int64 __fastcall sub_78DE50(__int64 a1, __int64 a2, const char *a3)
{
  const char *v3; // rbx
  __int64 v5; // rax
  size_t v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  size_t v9; // rax
  __int64 v10; // rbp
  size_t v11; // r14
  unsigned __int64 v12; // r13
  char *v13; // rsi
  __int64 v14; // rax
  char *v15; // rsi
  __int64 v16; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v18; // [rsp+8h] [rbp-60h]
  _BYTE src[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v20[8]; // [rsp+28h] [rbp-40h] BYREF

  v20[0] = __readfsqword(0x28u);
  v3 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v20[0] - __readfsqword(0x28u);
  ptr = nullptr;
  v18 = 0;
  v5 = pack_dd(src, v20, (unsigned int)a2) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v18;
    v8 = v18 + v5;
    if ( __CFADD__((_QWORD)v18, v5) )
    {
      if ( (unsigned __int64)v18 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v18 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
        memcpy((char *)ptr + v7, src, v6);
        goto LABEL_9;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = (char *)ptr;
    v16 = v18;
    if ( *((_QWORD *)&v18 + 1) < v8 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v8, 1);
      v15 = (char *)ptr;
      v16 = v18;
    }
    memset(&v15[v16], 0, v8 - v16);
    *(_QWORD *)&v18 = v8;
    goto LABEL_8;
  }
LABEL_9:
  if ( v3 )
  {
    v9 = strlen(v3);
    v10 = v18;
    v11 = v9 + 1;
    v12 = v9 + 1 + v18;
    if ( __CFADD__(v9 + 1, (_QWORD)v18) )
    {
      if ( (unsigned __int64)v18 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v18 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_14;
        goto LABEL_13;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
LABEL_17:
    v13 = (char *)ptr;
    v14 = v10;
    if ( *((_QWORD *)&v18 + 1) < v12 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v13 = (char *)ptr;
      v14 = v18;
    }
    memset(&v13[v14], 0, v12 - v14);
    *(_QWORD *)&v18 = v12;
    goto LABEL_14;
  }
  v10 = v18;
  v11 = 1;
  v3 = &byte_22CD811;
  v12 = v18 + 1;
  if ( (_QWORD)v18 != -1 )
    goto LABEL_17;
  v10 = -1;
  v3 = &byte_22CD811;
LABEL_13:
  *(_QWORD *)&v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
  memcpy((char *)ptr + v10, v3, v11);
  add_undo_record((unsigned int)a1, ptr, v18);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  return v20[0] - __readfsqword(0x28u);
}

