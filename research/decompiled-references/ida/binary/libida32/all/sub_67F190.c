unsigned __int64 __fastcall sub_67F190(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v6; // rax
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v11; // rax
  size_t v12; // r12
  __int64 v13; // r15
  unsigned __int64 v14; // r8
  char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // rbp
  __int64 v19; // r12
  unsigned __int64 v20; // r15
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // rbx
  __int64 v25; // rbp
  unsigned __int64 v26; // r12
  char *v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v31; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = *a1;
  v33[0] = __readfsqword(0x28u);
  v8 = *(__int64 **)(v6 + 1648);
  sub_67F020(v8, a2, a3, a4, a5 ^ 1);
  if ( !(unsigned __int8)must_journal(v8, a2, v9) )
    return v33[0] - __readfsqword(0x28u);
  v31 = 0;
  ptr = nullptr;
  v11 = pack_dd(src, v33, (unsigned int)a2) - (_QWORD)src;
  v12 = v11;
  if ( v11 )
  {
    v13 = v31;
    v14 = v31 + v11;
    if ( __CFADD__((_QWORD)v31, v11) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = (char *)ptr;
    v16 = v31;
    if ( *((_QWORD *)&v31 + 1) < v14 )
    {
      v29 = v14;
      ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
      v15 = (char *)ptr;
      v14 = v29;
      v16 = v31;
    }
    v29 = v14;
    memset(&v15[v16], 0, v14 - v16);
    *(_QWORD *)&v31 = v29;
LABEL_8:
    memcpy((char *)ptr + v13, src, v12);
  }
  v17 = pack_dd(src, v33, a3) - (_QWORD)src;
  v18 = v17;
  if ( !v17 )
    goto LABEL_15;
  v19 = v31;
  v20 = v31 + v17;
  if ( __CFADD__((_QWORD)v31, v17) )
  {
    if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v20 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v21 = (char *)ptr;
  v22 = v31;
  if ( *((_QWORD *)&v31 + 1) < v20 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
    v21 = (char *)ptr;
    v22 = v31;
  }
  memset(&v21[v22], 0, v20 - v22);
  *(_QWORD *)&v31 = v20;
LABEL_14:
  memcpy((char *)ptr + v19, src, v18);
LABEL_15:
  v23 = pack_dd(src, v33, a4) - (_QWORD)src;
  v24 = v23;
  if ( !v23 )
    goto LABEL_21;
  v25 = v31;
  v26 = v31 + v23;
  if ( __CFADD__((_QWORD)v31, v23) )
  {
    if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_20;
    }
    v26 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v27 = (char *)ptr;
  v28 = v31;
  if ( *((_QWORD *)&v31 + 1) < v26 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v26, 1);
    v27 = (char *)ptr;
    v28 = v31;
  }
  memset(&v27[v28], 0, v26 - v28);
  *(_QWORD *)&v31 = v26;
LABEL_20:
  memcpy((char *)ptr + v25, src, v24);
LABEL_21:
  add_undo_record(174, ptr, v31);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  return v33[0] - __readfsqword(0x28u);
}

