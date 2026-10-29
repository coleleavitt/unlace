unsigned __int64 __fastcall sub_514A20(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v6; // rax
  size_t v7; // r13
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rax
  size_t v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // r13
  __int64 v22; // r15
  unsigned __int64 v23; // r8
  char *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  size_t v27; // r13
  __int64 v28; // rax
  char v29; // bl
  _BYTE *v30; // rsi
  __int64 v31; // r14
  unsigned __int64 v32; // r15
  char *v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v39; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _BYTE v41[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v42[8]; // [rsp+48h] [rbp-40h] BYREF

  v42[0] = __readfsqword(0x28u);
  v4 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v42[0] - __readfsqword(0x28u);
  v39 = 0;
  ptr = nullptr;
  v6 = pack_dd(src, v41, (unsigned int)a1) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v8 = v39;
    v9 = v39 + v6;
    if ( __CFADD__((_QWORD)v39, v6) )
    {
      if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v10 = (char *)ptr;
    v11 = v39;
    if ( *((_QWORD *)&v39 + 1) < v9 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
      v10 = (char *)ptr;
      v11 = v39;
    }
    memset(&v10[v11], 0, v9 - v11);
    *(_QWORD *)&v39 = v9;
LABEL_8:
    memcpy((char *)ptr + v8, src, v7);
  }
  v12 = *a2;
  v13 = a2[1];
  v14 = pack_dq(src, v42, *a2) - (_QWORD)src;
  v15 = v14;
  if ( !v14 )
    goto LABEL_15;
  v16 = v39;
  v17 = v39 + v14;
  if ( __CFADD__((_QWORD)v39, v14) )
  {
    if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v17 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v18 = (char *)ptr;
  v19 = v39;
  if ( *((_QWORD *)&v39 + 1) < v17 )
  {
    v37 = v39;
    n = v15;
    v35 = v17;
    ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
    v18 = (char *)ptr;
    v16 = v37;
    v19 = v39;
    v15 = n;
    v17 = v35;
  }
  v37 = v16;
  n = v15;
  v35 = v17;
  memset(&v18[v19], 0, v17 - v19);
  v15 = n;
  v16 = v37;
  *(_QWORD *)&v39 = v35;
LABEL_14:
  memcpy((char *)ptr + v16, src, v15);
LABEL_15:
  v20 = pack_dq(src, v42, v13 - v12) - (_QWORD)src;
  v21 = v20;
  if ( !v20 )
    goto LABEL_21;
  v22 = v39;
  v23 = v39 + v20;
  if ( __CFADD__((_QWORD)v39, v20) )
  {
    if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_20;
    }
    v23 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v24 = (char *)ptr;
  v25 = v39;
  if ( *((_QWORD *)&v39 + 1) < v23 )
  {
    v35 = v23;
    ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
    v24 = (char *)ptr;
    v23 = v35;
    v25 = v39;
  }
  v35 = v23;
  memset(&v24[v25], 0, v23 - v25);
  *(_QWORD *)&v39 = v35;
LABEL_20:
  memcpy((char *)ptr + v22, src, v21);
LABEL_21:
  v26 = pack_dq(src, v42, a2[2]) - (_QWORD)src;
  v27 = v26;
  if ( v26 )
  {
    v31 = v39;
    v32 = v39 + v26;
    if ( __CFADD__((_QWORD)v39, v26) )
    {
      if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_30;
      }
      v32 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v33 = (char *)ptr;
    v34 = v39;
    if ( *((_QWORD *)&v39 + 1) < v32 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
      v33 = (char *)ptr;
      v34 = v39;
    }
    memset(&v33[v34], 0, v32 - v34);
    *(_QWORD *)&v39 = v32;
LABEL_30:
    memcpy((char *)ptr + v31, src, v27);
  }
  v28 = v39;
  v29 = *((_BYTE *)a2 + 24);
  v30 = ptr;
  if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v39 + 1, 1);
    v30 = ptr;
    v28 = v39;
  }
  v30[v28] = v29;
  *(_QWORD *)&v39 = v39 + 1;
  add_undo_record(v4, ptr, v39);
  if ( ptr )
  {
    *(_QWORD *)&v39 = 0;
    qfree(ptr);
  }
  return v42[0] - __readfsqword(0x28u);
}
