void *__fastcall sub_4F70D0(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // r15
  unsigned int v6; // r14d
  unsigned int v8; // ebx
  __int64 v9; // r13
  char *v10; // rdi
  char *v11; // rdx
  __int64 v12; // rax
  size_t v13; // r9
  __int64 v14; // rbp
  unsigned __int64 v15; // r10
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // r9
  __int64 v20; // rbp
  unsigned __int64 v21; // r10
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r14
  __int64 v26; // rbp
  unsigned __int64 v27; // r8
  char *v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // [rsp+8h] [rbp-80h]
  unsigned __int64 v31; // [rsp+10h] [rbp-78h]
  size_t n; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v34; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v36[8]; // [rsp+48h] [rbp-40h] BYREF

  v36[0] = __readfsqword(0x28u);
  v3 = a2[2];
  if ( !v3 )
    return (void *)(v36[0] - __readfsqword(0x28u));
  v4 = *(_QWORD *)(a1 + 1568);
  if ( (unsigned __int64)v3 >= *(_QWORD *)(v4 + 144) )
    return (void *)(v36[0] - __readfsqword(0x28u));
  v6 = *a2;
  v8 = a3;
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v30 = v36;
    ptr = nullptr;
    v34 = 0;
    v12 = pack_dd(src, v36, v3) - (_QWORD)src;
    v13 = v12;
    if ( !v12 )
      goto LABEL_17;
    v14 = v34;
    v15 = v34 + v12;
    if ( __CFADD__((_QWORD)v34, v12) )
    {
      if ( (unsigned __int64)v34 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v34 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v34 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_16;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v16 = (char *)ptr;
    v17 = v34;
    if ( *((_QWORD *)&v34 + 1) < v15 )
    {
      n = v13;
      v31 = v15;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v16 = (char *)ptr;
      v13 = n;
      v17 = v34;
      v15 = v31;
    }
    n = v13;
    v31 = v15;
    memset(&v16[v17], 0, v15 - v17);
    v13 = n;
    *(_QWORD *)&v34 = v31;
LABEL_16:
    memcpy((char *)ptr + v14, src, v13);
LABEL_17:
    v18 = pack_dd(src, v30, v8) - (_QWORD)src;
    v19 = v18;
    if ( !v18 )
      goto LABEL_23;
    v20 = v34;
    v21 = v34 + v18;
    if ( __CFADD__((_QWORD)v34, v18) )
    {
      if ( (unsigned __int64)v34 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v34 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v34 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_22;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = (char *)ptr;
    v23 = v34;
    if ( *((_QWORD *)&v34 + 1) < v21 )
    {
      n = v19;
      v31 = v21;
      ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
      v22 = (char *)ptr;
      v19 = n;
      v23 = v34;
      v21 = v31;
    }
    n = v19;
    v31 = v21;
    memset(&v22[v23], 0, v21 - v23);
    v19 = n;
    *(_QWORD *)&v34 = v31;
LABEL_22:
    memcpy((char *)ptr + v20, src, v19);
LABEL_23:
    v24 = pack_dd(src, v30, v6) - (_QWORD)src;
    v25 = v24;
    if ( !v24 )
      goto LABEL_29;
    v26 = v34;
    v27 = v34 + v24;
    if ( __CFADD__((_QWORD)v34, v24) )
    {
      if ( (unsigned __int64)v34 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v34 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v34 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_28;
      }
      v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v28 = (char *)ptr;
    v29 = v34;
    if ( *((_QWORD *)&v34 + 1) < v27 )
    {
      v30 = (_QWORD *)v27;
      ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
      v28 = (char *)ptr;
      v27 = (unsigned __int64)v30;
      v29 = v34;
    }
    v30 = (_QWORD *)v27;
    memset(&v28[v29], 0, v27 - v29);
    *(_QWORD *)&v34 = v30;
LABEL_28:
    memcpy((char *)ptr + v26, src, v25);
LABEL_29:
    add_undo_record(131, ptr, v34);
    if ( ptr )
    {
      *(_QWORD *)&v34 = 0;
      qfree(ptr);
    }
  }
  v9 = *(_QWORD *)(v4 + 136) + 56LL * a2[2];
  v10 = *(char **)(v9 + 24);
  v11 = &v10[4 * *(_QWORD *)(v9 + 32)];
  if ( v10 == v11 )
    goto LABEL_31;
  while ( *(_DWORD *)v10 != v8 )
  {
    v10 += 4;
    if ( v11 == v10 )
      goto LABEL_31;
  }
  if ( v11 == v10 )
  {
LABEL_31:
    if ( !under_debugger )
      interr(151);
    BUG();
  }
  memmove(v10, v10 + 4, v11 - v10 - 4);
  --*(_QWORD *)(v9 + 32);
  return sub_4F5950((__int64 *)(v9 + 24), *a2);
}

