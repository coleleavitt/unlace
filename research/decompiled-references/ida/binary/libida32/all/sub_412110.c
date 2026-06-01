unsigned __int64 __fastcall sub_412110(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  size_t v5; // rbp
  __int64 v6; // r13
  unsigned __int64 v7; // r15
  char *v8; // rsi
  __int64 v9; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v11; // [rsp+8h] [rbp-60h]
  _BYTE src[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v13[8]; // [rsp+28h] [rbp-40h] BYREF

  v13[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 156) == -1 || !(unsigned __int8)must_journal(a1, a2, a3) )
    return v13[0] - __readfsqword(0x28u);
  ptr = nullptr;
  v11 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v11) = 10;
  *(_QWORD *)&v11 = v11 + 1;
  v4 = pack_dd(src, v13, (unsigned int)a2) - (_QWORD)src;
  v5 = v4;
  if ( v4 )
  {
    v6 = v11;
    v7 = v11 + v4;
    if ( __CFADD__((_QWORD)v11, v4) )
    {
      if ( (unsigned __int64)v11 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v11 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v11 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = (char *)ptr;
    v9 = v11;
    if ( *((_QWORD *)&v11 + 1) < v7 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v7, 1);
      v8 = (char *)ptr;
      v9 = v11;
    }
    memset(&v8[v9], 0, v7 - v9);
    *(_QWORD *)&v11 = v7;
LABEL_9:
    memcpy((char *)ptr + v6, src, v5);
  }
  add_undo_record(*(unsigned int *)(a1 + 156), ptr, v11);
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  return v13[0] - __readfsqword(0x28u);
}

