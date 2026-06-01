__int64 __fastcall sub_5AA7D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rax
  size_t v7; // r13
  __int64 v8; // r14
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  size_t v11; // r13
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  char *v14; // rsi
  __int64 v15; // rax
  char *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v20; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v22[8]; // [rsp+38h] [rbp-40h] BYREF

  v22[0] = __readfsqword(0x28u);
  if ( (int)a2 < 0 )
    return 0;
  v2 = a2;
  v3 = 0;
  if ( (unsigned __int64)(int)a2 < *(_QWORD *)(a1 + 16) )
  {
    if ( !(unsigned __int8)must_journal(a1, a2, 0) )
    {
LABEL_5:
      *(_DWORD *)(a1 + 44) = v2;
      return 1;
    }
    v5 = *(unsigned int *)(a1 + 44);
    v20 = 0;
    ptr = nullptr;
    v6 = pack_dd(src, v22, v5) - (_QWORD)src;
    v7 = v6;
    if ( !v6 )
    {
LABEL_13:
      v10 = pack_dd(src, v22, v2) - (_QWORD)src;
      v11 = v10;
      if ( !v10 )
        goto LABEL_19;
      v12 = v20;
      v13 = v20 + v10;
      if ( __CFADD__((_QWORD)v20, v10) )
      {
        if ( (unsigned __int64)v20 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v20 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
          memcpy((char *)ptr + v12, src, v11);
LABEL_19:
          add_undo_record(180, ptr, v20);
          if ( ptr )
          {
            *(_QWORD *)&v20 = 0;
            qfree(ptr);
          }
          goto LABEL_5;
        }
        v13 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v16 = (char *)ptr;
      v17 = v20;
      if ( *((_QWORD *)&v20 + 1) < v13 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
        v16 = (char *)ptr;
        v17 = v20;
      }
      memset(&v16[v17], 0, v13 - v17);
      *(_QWORD *)&v20 = v13;
      goto LABEL_18;
    }
    v8 = v20;
    v9 = v20 + v6;
    if ( __CFADD__((_QWORD)v20, v6) )
    {
      if ( (unsigned __int64)v20 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v20 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
        memcpy((char *)ptr + v8, src, v7);
        goto LABEL_13;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v14 = (char *)ptr;
    v15 = v20;
    if ( *((_QWORD *)&v20 + 1) < v9 )
    {
      v18 = v9;
      ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
      v14 = (char *)ptr;
      v9 = v18;
      v15 = v20;
    }
    v18 = v9;
    memset(&v14[v15], 0, v9 - v15);
    *(_QWORD *)&v20 = v18;
    goto LABEL_12;
  }
  return v3;
}
