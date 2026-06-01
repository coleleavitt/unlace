unsigned __int64 __fastcall sub_426130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rdx
  __int64 v10; // rax
  size_t v11; // r8
  __int64 v12; // r14
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  size_t v15; // r13
  __int64 v16; // r14
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  size_t v19; // r12
  __int64 v20; // r13
  unsigned __int64 v21; // r14
  char *v22; // rsi
  __int64 v23; // rax
  char *v24; // rsi
  __int64 v25; // rax
  char *v26; // rsi
  __int64 v27; // rax
  void **p_ptr; // [rsp+8h] [rbp-80h]
  unsigned __int64 v29; // [rsp+10h] [rbp-78h]
  size_t v30; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v32; // [rsp+28h] [rbp-60h]
  _BYTE src[10]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _QWORD v34[8]; // [rsp+48h] [rbp-40h] BYREF

  v34[0] = __readfsqword(0x28u);
  sub_774290(a1, a2, a3, a4, a5);
  if ( *(_DWORD *)(a1 + 160) == -1 || !(unsigned __int8)must_journal(a1, a2, v8) )
    return v34[0] - __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v32 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v32) = 5 - a5;
  *(_QWORD *)&v32 = v32 + 1;
  v10 = pack_dq(src, v34, a2) - (_QWORD)src;
  v11 = v10;
  if ( v10 )
  {
    v12 = v32;
    v13 = v32 + v10;
    if ( __CFADD__((_QWORD)v32, v10) )
    {
      if ( (unsigned __int64)v32 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((char *)ptr + v12, src, v11);
        goto LABEL_10;
      }
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v24 = (char *)ptr;
    v25 = v32;
    if ( *((_QWORD *)&v32 + 1) < v13 )
    {
      v30 = v11;
      v29 = v13;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v13, 1);
      v24 = (char *)ptr;
      v11 = v30;
      v25 = v32;
      v13 = v29;
    }
    v30 = v11;
    v29 = v13;
    memset(&v24[v25], 0, v13 - v25);
    v11 = v30;
    *(_QWORD *)&v32 = v29;
    goto LABEL_9;
  }
LABEL_10:
  v14 = pack_dq(src, v34, a3) - (_QWORD)src;
  v15 = v14;
  if ( !v14 )
    goto LABEL_16;
  v16 = v32;
  v17 = v32 + v14;
  if ( !__CFADD__((_QWORD)v32, v14) )
    goto LABEL_25;
  if ( (unsigned __int64)v32 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v17 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_25:
    v22 = (char *)ptr;
    v23 = v32;
    if ( *((_QWORD *)&v32 + 1) < v17 )
    {
      v29 = v17;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v17, 1);
      v22 = (char *)ptr;
      v17 = v29;
      v23 = v32;
    }
    v29 = v17;
    memset(&v22[v23], 0, v17 - v23);
    *(_QWORD *)&v32 = v29;
    goto LABEL_15;
  }
  if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
  memcpy((char *)ptr + v16, src, v15);
LABEL_16:
  v18 = pack_dq(src, v34, a4) - (_QWORD)src;
  v19 = v18;
  if ( !v18 )
    goto LABEL_22;
  v20 = v32;
  v21 = v32 + v18;
  if ( !__CFADD__((_QWORD)v32, v18) )
    goto LABEL_33;
  if ( (unsigned __int64)v32 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v21 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_33:
    v26 = (char *)ptr;
    v27 = v32;
    if ( *((_QWORD *)&v32 + 1) < v21 )
    {
      ptr = (void *)qvector_reserve(p_ptr, ptr, v21, 1);
      v26 = (char *)ptr;
      v27 = v32;
    }
    memset(&v26[v27], 0, v21 - v27);
    *(_QWORD *)&v32 = v21;
    goto LABEL_21;
  }
  if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
  memcpy((char *)ptr + v20, src, v19);
LABEL_22:
  add_undo_record(*(unsigned int *)(a1 + 160), ptr, v32);
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  return v34[0] - __readfsqword(0x28u);
}
