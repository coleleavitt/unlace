__int64 __fastcall sub_4FBB40(__int64 a1, const char *a2)
{
  const char *v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v10; // rax
  size_t v11; // r13
  __int64 v12; // r14
  unsigned __int64 v13; // r8
  char *v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-70h]
  unsigned __int64 v17; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v19; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v21[8]; // [rsp+38h] [rbp-40h] BYREF

  v21[0] = __readfsqword(0x28u);
  v3 = *(const char **)(a1 + 1568);
  v4 = sub_4FB240(v3, a2);
  v6 = v4;
  if ( v4 > 0 )
  {
    v7 = *(_QWORD *)(a1 + 1568);
    v8 = (unsigned int)v4;
    if ( (unsigned __int64)(unsigned int)v4 < *(_QWORD *)(v7 + 144) )
    {
      if ( !(unsigned __int8)must_journal(v3, a2, v5) )
      {
LABEL_5:
        ++*(_DWORD *)(*(_QWORD *)(v7 + 136) + 56 * v8 + 48);
        return v6;
      }
      v19 = 0;
      ptr = nullptr;
      v10 = pack_dd(src, v21, v6) - (_QWORD)src;
      v11 = v10;
      if ( !v10 )
      {
LABEL_12:
        add_undo_record(129, ptr, v19);
        if ( ptr )
        {
          *(_QWORD *)&v19 = 0;
          qfree(ptr);
        }
        goto LABEL_5;
      }
      v12 = v19;
      v13 = v19 + v10;
      if ( __CFADD__((_QWORD)v19, v10) )
      {
        if ( (unsigned __int64)v19 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v19 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v19 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_11;
        }
        v13 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v14 = (char *)ptr;
      v15 = v19;
      if ( *((_QWORD *)&v19 + 1) < v13 )
      {
        v17 = v13;
        ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
        v14 = (char *)ptr;
        v13 = v17;
        v15 = v19;
      }
      v16 = v13;
      memset(&v14[v15], 0, v13 - v15);
      *(_QWORD *)&v19 = v16;
LABEL_11:
      memcpy((char *)ptr + v12, src, v11);
      goto LABEL_12;
    }
  }
  return v6;
}

