unsigned __int64 __fastcall sub_4F6F30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v6; // rax
  size_t v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  char *v10; // rsi
  __int64 v11; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h]
  _BYTE src[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v15[8]; // [rsp+28h] [rbp-40h] BYREF

  v15[0] = __readfsqword(0x28u);
  if ( (int)a2 > 0 )
  {
    v3 = *(_QWORD *)(a1 + 1568);
    v4 = (int)a2;
    if ( (unsigned __int64)(int)a2 < *(_QWORD *)(v3 + 144) )
    {
      if ( !(unsigned __int8)must_journal(a1, a2, a3) )
      {
LABEL_5:
        ++*(_DWORD *)(*(_QWORD *)(v3 + 136) + 56 * v4 + 48);
        return v15[0] - __readfsqword(0x28u);
      }
      ptr = nullptr;
      v13 = 0;
      v6 = pack_dd(src, v15, (unsigned int)a2) - (_QWORD)src;
      v7 = v6;
      if ( !v6 )
      {
LABEL_12:
        add_undo_record(129, ptr, v13);
        if ( ptr )
        {
          *(_QWORD *)&v13 = 0;
          qfree(ptr);
        }
        goto LABEL_5;
      }
      v8 = v13;
      v9 = v13 + v6;
      if ( __CFADD__((_QWORD)v13, v6) )
      {
        if ( (unsigned __int64)v13 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v13 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v13 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_11;
        }
        v9 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v10 = (char *)ptr;
      v11 = v13;
      if ( *((_QWORD *)&v13 + 1) < v9 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
        v10 = (char *)ptr;
        v11 = v13;
      }
      memset(&v10[v11], 0, v9 - v11);
      *(_QWORD *)&v13 = v9;
LABEL_11:
      memcpy((char *)ptr + v8, src, v7);
      goto LABEL_12;
    }
  }
  return v15[0] - __readfsqword(0x28u);
}

