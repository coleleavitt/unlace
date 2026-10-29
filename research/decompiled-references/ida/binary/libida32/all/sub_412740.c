unsigned __int64 __fastcall sub_412740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  size_t v12; // r8
  __int64 v13; // r14
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  size_t v16; // r13
  __int64 v17; // r14
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  size_t v20; // r12
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  char *v23; // rsi
  __int64 v24; // rax
  char *v25; // rsi
  __int64 v26; // rax
  char *v27; // rsi
  __int64 v28; // rax
  void **p_ptr; // [rsp+8h] [rbp-80h]
  unsigned __int64 v30; // [rsp+10h] [rbp-78h]
  size_t v31; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v33; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _BYTE v35[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v36[8]; // [rsp+48h] [rbp-40h] BYREF

  v36[0] = __readfsqword(0x28u);
  v7 = a4;
  sub_753E10(a1, a2, a3, a4, a5);
  if ( *(_DWORD *)(a1 + 156) == -1 || !(unsigned __int8)must_journal(a1, a2, v8) )
    return v36[0] - __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v33 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v33) = 5 - a5;
  *(_QWORD *)&v33 = v33 + 1;
  v10 = pack_dd(src, v35, (unsigned int)a2) - (_QWORD)src;
  v12 = v10;
  if ( v10 )
  {
    v13 = v33;
    v14 = v33 + v10;
    if ( __CFADD__((_QWORD)v33, v10) )
    {
      if ( (unsigned __int64)v33 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((char *)ptr + v13, src, v12);
        goto LABEL_10;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v25 = (char *)ptr;
    v26 = v33;
    if ( *((_QWORD *)&v33 + 1) < v14 )
    {
      v31 = v12;
      v30 = v14;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v14, 1);
      v25 = (char *)ptr;
      v12 = v31;
      v26 = v33;
      v14 = v30;
    }
    v31 = v12;
    v30 = v14;
    memset(&v25[v26], 0, v14 - v26);
    v12 = v31;
    *(_QWORD *)&v33 = v30;
    goto LABEL_9;
  }
LABEL_10:
  v15 = pack_dq(src, v36, a3, v11, v12) - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_16;
  v17 = v33;
  v18 = v33 + v15;
  if ( !__CFADD__((_QWORD)v33, v15) )
    goto LABEL_25;
  if ( (unsigned __int64)v33 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_25:
    v23 = (char *)ptr;
    v24 = v33;
    if ( *((_QWORD *)&v33 + 1) < v18 )
    {
      v30 = v18;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v18, 1);
      v23 = (char *)ptr;
      v18 = v30;
      v24 = v33;
    }
    v30 = v18;
    memset(&v23[v24], 0, v18 - v24);
    *(_QWORD *)&v33 = v30;
    goto LABEL_15;
  }
  if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
  memcpy((char *)ptr + v17, src, v16);
LABEL_16:
  v19 = pack_dd(src, v35, v7) - (_QWORD)src;
  v20 = v19;
  if ( !v19 )
    goto LABEL_22;
  v21 = v33;
  v22 = v33 + v19;
  if ( !__CFADD__((_QWORD)v33, v19) )
    goto LABEL_33;
  if ( (unsigned __int64)v33 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_33:
    v27 = (char *)ptr;
    v28 = v33;
    if ( *((_QWORD *)&v33 + 1) < v22 )
    {
      ptr = (void *)qvector_reserve(p_ptr, ptr, v22, 1);
      v27 = (char *)ptr;
      v28 = v33;
    }
    memset(&v27[v28], 0, v22 - v28);
    *(_QWORD *)&v33 = v22;
    goto LABEL_21;
  }
  if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
  memcpy((char *)ptr + v21, src, v20);
LABEL_22:
  add_undo_record(*(unsigned int *)(a1 + 156), ptr, v33);
  if ( ptr )
  {
    *(_QWORD *)&v33 = 0;
    qfree(ptr);
  }
  return v36[0] - __readfsqword(0x28u);
}

