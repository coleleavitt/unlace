unsigned __int64 __fastcall sub_428FC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  size_t v6; // rbp
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  char *v9; // rsi
  __int64 v10; // rax
  const char *v11; // r13
  size_t v12; // rax
  __int64 v13; // rbx
  size_t v14; // r12
  unsigned __int64 v15; // rbp
  char *v16; // rsi
  __int64 v17; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  _BYTE src[5]; // [rsp+23h] [rbp-35h] BYREF
  unsigned __int64 v21[6]; // [rsp+28h] [rbp-30h] BYREF

  v21[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v21[0] - __readfsqword(0x28u);
  ptr = nullptr;
  v19 = 0;
  v5 = pack_dd(src, v21, (unsigned int)a1) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v19;
    v8 = v19 + v5;
    if ( __CFADD__((_QWORD)v19, v5) )
    {
      if ( (unsigned __int64)v19 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v19 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v19 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v9 = (char *)ptr;
    v10 = v19;
    if ( *((_QWORD *)&v19 + 1) < v8 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v8, 1);
      v9 = (char *)ptr;
      v10 = v19;
    }
    memset(&v9[v10], 0, v8 - v10);
    *(_QWORD *)&v19 = v8;
LABEL_8:
    memcpy((char *)ptr + v7, src, v6);
  }
  v11 = haystack;
  if ( *(_QWORD *)(a2 + 8) )
    v11 = *(const char **)a2;
  if ( !v11 )
  {
    v13 = v19;
    v14 = 1;
    v11 = &byte_22CD811;
    v15 = v19 + 1;
    if ( (_QWORD)v19 != -1 )
      goto LABEL_13;
    v13 = -1;
    v11 = &byte_22CD811;
LABEL_20:
    *(_QWORD *)&v19 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_16;
  }
  v12 = strlen(v11);
  v13 = v19;
  v14 = v12 + 1;
  v15 = v12 + 1 + v19;
  if ( !__CFADD__(v12 + 1, (_QWORD)v19) )
  {
LABEL_13:
    v16 = (char *)ptr;
    v17 = v13;
    if ( *((_QWORD *)&v19 + 1) < v15 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v16 = (char *)ptr;
      v17 = v19;
    }
    memset(&v16[v17], 0, v15 - v17);
    *(_QWORD *)&v19 = v15;
    goto LABEL_16;
  }
  if ( (unsigned __int64)v19 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v15 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_13;
  }
  if ( (_QWORD)v19 != 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_20;
LABEL_16:
  memcpy((char *)ptr + v13, v11, v14);
  add_undo_record(219, ptr, v19);
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  return v21[0] - __readfsqword(0x28u);
}

