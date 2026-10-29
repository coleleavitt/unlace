unsigned __int64 __fastcall sub_64A0C0(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5)
{
  int v5; // r12d
  __int64 v8; // rdi
  __int64 v10; // rax
  size_t v11; // r12
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rbp
  __int64 v18; // r12
  unsigned __int64 v19; // r8
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // rbp
  __int64 v24; // rbx
  unsigned __int64 v25; // r12
  char *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v31; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = a3;
  v33[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v33[0] - __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 1672);
  if ( *a2 )
  {
    if ( *a2 != *(_QWORD *)(v8 + 8) )
      return v33[0] - __readfsqword(0x28u);
  }
  v31 = 0;
  ptr = nullptr;
  sub_64A030(v8, (__int64 *)&ptr, a2, 0);
  v10 = pack_dd(src, v33, (unsigned int)(v5 + 1)) - (_QWORD)src;
  v11 = v10;
  if ( v10 )
  {
    v12 = v31;
    v13 = v31 + v10;
    if ( __CFADD__((_QWORD)v31, v10) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_10;
      }
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v14 = (char *)ptr;
    v15 = v31;
    if ( *((_QWORD *)&v31 + 1) < v13 )
    {
      v29 = v31;
      v28 = v13;
      ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
      v14 = (char *)ptr;
      v12 = v29;
      v15 = v31;
      v13 = v28;
    }
    v29 = v12;
    v28 = v13;
    memset(&v14[v15], 0, v13 - v15);
    v12 = v29;
    *(_QWORD *)&v31 = v28;
LABEL_10:
    memcpy((char *)ptr + v12, src, v11);
  }
  v16 = pack_dd(src, v33, (unsigned int)(a4 + 1)) - (_QWORD)src;
  v17 = v16;
  if ( !v16 )
    goto LABEL_17;
  v18 = v31;
  v19 = v31 + v16;
  if ( __CFADD__((_QWORD)v31, v16) )
  {
    if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_16;
    }
    v19 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v20 = (char *)ptr;
  v21 = v31;
  if ( *((_QWORD *)&v31 + 1) < v19 )
  {
    v28 = v19;
    ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
    v20 = (char *)ptr;
    v19 = v28;
    v21 = v31;
  }
  v28 = v19;
  memset(&v20[v21], 0, v19 - v21);
  *(_QWORD *)&v31 = v28;
LABEL_16:
  memcpy((char *)ptr + v18, src, v17);
LABEL_17:
  v22 = pack_dd(src, v33, (unsigned int)(a5 + 1)) - (_QWORD)src;
  v23 = v22;
  if ( !v22 )
    goto LABEL_23;
  v24 = v31;
  v25 = v22 + v31;
  if ( __CFADD__(v22, (_QWORD)v31) )
  {
    if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_22;
    }
    v25 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v26 = (char *)ptr;
  v27 = v31;
  if ( *((_QWORD *)&v31 + 1) < v25 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
    v26 = (char *)ptr;
    v27 = v31;
  }
  memset(&v26[v27], 0, v25 - v27);
  *(_QWORD *)&v31 = v25;
LABEL_22:
  memcpy((char *)ptr + v24, src, v23);
LABEL_23:
  add_undo_record(144, ptr, v31);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  return v33[0] - __readfsqword(0x28u);
}
