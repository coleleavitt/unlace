unsigned __int64 __fastcall sub_3B7100(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rax
  size_t v8; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  size_t v12; // rbp
  __int64 v13; // r12
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  size_t v16; // rbx
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  char *v19; // rsi
  __int64 v20; // rax
  char *v21; // rsi
  __int64 v22; // rax
  char *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v27; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v29[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = a2;
  v29[0] = __readfsqword(0x28u);
  v4 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v29[0] - __readfsqword(0x28u);
  ptr = nullptr;
  v27 = 0;
  if ( (unsigned __int8)must_journal(a1, a2, v5) )
  {
    v7 = pack_dd(src, v29, (unsigned int)a1) - (_QWORD)src;
    v8 = v7;
    if ( !v7 )
      goto LABEL_12;
    v9 = v27;
    v10 = v27 + v7;
    if ( __CFADD__((_QWORD)v27, v7) )
    {
      if ( (unsigned __int64)v27 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v27 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v27 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
        memcpy((char *)ptr + v9, src, v8);
LABEL_12:
        v11 = pack_dd(src, v29, v3) - (_QWORD)src;
        v12 = v11;
        if ( !v11 )
          goto LABEL_18;
        v13 = v27;
        v14 = v27 + v11;
        if ( __CFADD__((_QWORD)v27, v11) )
        {
          if ( (unsigned __int64)v27 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v27 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v27 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_17:
            memcpy((char *)ptr + v13, src, v12);
LABEL_18:
            v15 = pack_dd(src, v29, v4) - (_QWORD)src;
            v16 = v15;
            if ( !v15 )
              goto LABEL_4;
            v17 = v27;
            v18 = v27 + v15;
            if ( __CFADD__((_QWORD)v27, v15) )
            {
              if ( (unsigned __int64)v27 > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( (_QWORD)v27 != 0x7FFFFFFFFFFFFFFFLL )
                  *(_QWORD *)&v27 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_23:
                memcpy((char *)ptr + v17, src, v16);
                goto LABEL_4;
              }
              v18 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v19 = (char *)ptr;
            v20 = v27;
            if ( *((_QWORD *)&v27 + 1) < v18 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
              v19 = (char *)ptr;
              v20 = v27;
            }
            memset(&v19[v20], 0, v18 - v20);
            *(_QWORD *)&v27 = v18;
            goto LABEL_23;
          }
          v14 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v23 = (char *)ptr;
        v24 = v27;
        if ( *((_QWORD *)&v27 + 1) < v14 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
          v23 = (char *)ptr;
          v24 = v27;
        }
        memset(&v23[v24], 0, v14 - v24);
        *(_QWORD *)&v27 = v14;
        goto LABEL_17;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = (char *)ptr;
    v22 = v27;
    if ( *((_QWORD *)&v27 + 1) < v10 )
    {
      v25 = v10;
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v21 = (char *)ptr;
      v10 = v25;
      v22 = v27;
    }
    v25 = v10;
    memset(&v21[v22], 0, v10 - v22);
    *(_QWORD *)&v27 = v25;
    goto LABEL_11;
  }
LABEL_4:
  add_undo_record(6, ptr, v27);
  if ( ptr )
  {
    *(_QWORD *)&v27 = 0;
    qfree(ptr);
  }
  return v29[0] - __readfsqword(0x28u);
}

