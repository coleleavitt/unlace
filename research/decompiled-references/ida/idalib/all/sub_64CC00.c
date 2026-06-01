__int64 __fastcall sub_64CC00(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v8; // rax
  size_t v9; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // r8
  char *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v23; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v25[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *a1;
  v25[0] = __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return sub_64AD70(a2, v5);
  v6 = *(_QWORD *)(v4 + 1672);
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)a2 != *(_QWORD *)(v6 + 8) )
      return sub_64AD70(a2, v5);
  }
  v23 = 0;
  ptr = nullptr;
  sub_64A030(v6, (__int64 *)&ptr, (__int64 *)a2, 0);
  v8 = pack_dd(src, v25, *(unsigned int *)(a2 + 48)) - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v10 = v23;
    v11 = v23 + v8;
    if ( __CFADD__((_QWORD)v23, v8) )
    {
      if ( (unsigned __int64)v23 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v23 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v23 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_10;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = (char *)ptr;
    v13 = v23;
    if ( *((_QWORD *)&v23 + 1) < v11 )
    {
      v21 = v23;
      v20 = v11;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v12 = (char *)ptr;
      v10 = v21;
      v13 = v23;
      v11 = v20;
    }
    v21 = v10;
    v20 = v11;
    memset(&v12[v13], 0, v11 - v13);
    v10 = v21;
    *(_QWORD *)&v23 = v20;
LABEL_10:
    memcpy((char *)ptr + v10, src, v9);
  }
  v14 = pack_dd(src, v25, v5) - (_QWORD)src;
  v15 = v14;
  if ( !v14 )
    goto LABEL_17;
  v16 = v23;
  v17 = v23 + v14;
  if ( __CFADD__((_QWORD)v23, v14) )
  {
    if ( (unsigned __int64)v23 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v23 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v23 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_16;
    }
    v17 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v18 = (char *)ptr;
  v19 = v23;
  if ( *((_QWORD *)&v23 + 1) < v17 )
  {
    v20 = v17;
    ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
    v18 = (char *)ptr;
    v17 = v20;
    v19 = v23;
  }
  v20 = v17;
  memset(&v18[v19], 0, v17 - v19);
  *(_QWORD *)&v23 = v20;
LABEL_16:
  memcpy((char *)ptr + v16, src, v15);
LABEL_17:
  add_undo_record(145, ptr, v23);
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  return sub_64AD70(a2, v5);
}
