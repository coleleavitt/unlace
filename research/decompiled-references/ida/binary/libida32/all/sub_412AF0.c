unsigned __int64 __fastcall sub_412AF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v10; // r13
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  size_t v18; // r14
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // r12
  __int64 v25; // r13
  unsigned __int64 v26; // r14
  char *v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-78h]
  __int64 v30; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v32; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v34[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v35[8]; // [rsp+38h] [rbp-40h] BYREF

  v35[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 156) == -1 || !(unsigned __int8)must_journal(a1, a2, a3) )
    return v35[0] - __readfsqword(0x28u);
  v32 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v32) = 6;
  *(_QWORD *)&v32 = v32 + 1;
  v7 = pack_dd(src, v34, (unsigned int)a2) - (_QWORD)src;
  v10 = v7;
  if ( v7 )
  {
    v11 = v32;
    v12 = v32 + v7;
    if ( __CFADD__((_QWORD)v32, v7) )
    {
      if ( (unsigned __int64)v32 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = (char *)ptr;
    v14 = v32;
    if ( *((_QWORD *)&v32 + 1) < v12 )
    {
      v30 = v32;
      v29 = v12;
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v13 = (char *)ptr;
      v11 = v30;
      v14 = v32;
      v12 = v29;
    }
    v30 = v11;
    v29 = v12;
    memset(&v13[v14], 0, v12 - v14);
    v11 = v30;
    *(_QWORD *)&v32 = v29;
LABEL_9:
    memcpy((char *)ptr + v11, src, v10);
  }
  v15 = pack_dq(src, v35, a3, v8, v9) - (_QWORD)src;
  v18 = v15;
  if ( !v15 )
    goto LABEL_16;
  v19 = v32;
  v20 = v32 + v15;
  if ( __CFADD__((_QWORD)v32, v15) )
  {
    if ( (unsigned __int64)v32 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
    v20 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v21 = (char *)ptr;
  v22 = v32;
  if ( *((_QWORD *)&v32 + 1) < v20 )
  {
    v30 = v32;
    v29 = v20;
    ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
    v21 = (char *)ptr;
    v19 = v30;
    v22 = v32;
    v20 = v29;
  }
  v30 = v19;
  v29 = v20;
  memset(&v21[v22], 0, v20 - v22);
  v19 = v30;
  *(_QWORD *)&v32 = v29;
LABEL_15:
  memcpy((char *)ptr + v19, src, v18);
LABEL_16:
  v23 = pack_dq(src, v35, a4, v16, v17) - (_QWORD)src;
  v24 = v23;
  if ( !v23 )
    goto LABEL_22;
  v25 = v32;
  v26 = v32 + v23;
  if ( __CFADD__((_QWORD)v32, v23) )
  {
    if ( (unsigned __int64)v32 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v26 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v27 = (char *)ptr;
  v28 = v32;
  if ( *((_QWORD *)&v32 + 1) < v26 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v26, 1);
    v27 = (char *)ptr;
    v28 = v32;
  }
  memset(&v27[v28], 0, v26 - v28);
  *(_QWORD *)&v32 = v26;
LABEL_21:
  memcpy((char *)ptr + v25, src, v24);
LABEL_22:
  add_undo_record(*(unsigned int *)(a1 + 156), ptr, v32);
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  return v35[0] - __readfsqword(0x28u);
}

