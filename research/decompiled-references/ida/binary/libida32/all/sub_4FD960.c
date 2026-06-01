unsigned __int64 __fastcall sub_4FD960(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned int v5; // ebp
  char v7; // al
  __int64 v9; // rax
  size_t v10; // r14
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // r13
  __int64 v17; // r14
  unsigned __int64 v18; // r8
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // rbp
  __int64 v23; // r13
  unsigned __int64 v24; // r14
  char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // rbx
  __int64 v29; // rbp
  unsigned __int64 v30; // r13
  char *v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+0h] [rbp-78h]
  __int64 v34; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v36; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v38[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a3;
  v38[0] = __readfsqword(0x28u);
  v7 = must_journal(a1, a2, a3);
  if ( v5 == a4 || !v7 )
    return v38[0] - __readfsqword(0x28u);
  v36 = 0;
  ptr = nullptr;
  v9 = pack_dd(src, v38, (unsigned int)a1) - (_QWORD)src;
  v10 = v9;
  if ( v9 )
  {
    v11 = v36;
    v12 = v36 + v9;
    if ( __CFADD__((_QWORD)v36, v9) )
    {
      if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_12;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = (char *)ptr;
    v14 = v36;
    if ( *((_QWORD *)&v36 + 1) < v12 )
    {
      v33 = v12;
      v34 = v36;
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v13 = (char *)ptr;
      v11 = v34;
      v14 = v36;
      v12 = v33;
    }
    v34 = v11;
    v33 = v12;
    memset(&v13[v14], 0, v12 - v14);
    v11 = v34;
    *(_QWORD *)&v36 = v33;
LABEL_12:
    memcpy((char *)ptr + v11, src, v10);
  }
  v15 = pack_dd(src, v38, v4) - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_22;
  v17 = v36;
  v18 = v36 + v15;
  if ( __CFADD__((_QWORD)v36, v15) )
  {
    if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v19 = (char *)ptr;
  v20 = v36;
  if ( *((_QWORD *)&v36 + 1) < v18 )
  {
    v33 = v18;
    ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
    v19 = (char *)ptr;
    v18 = v33;
    v20 = v36;
  }
  v33 = v18;
  memset(&v19[v20], 0, v18 - v20);
  *(_QWORD *)&v36 = v33;
LABEL_21:
  memcpy((char *)ptr + v17, src, v16);
LABEL_22:
  v21 = pack_dd(src, v38, v5) - (_QWORD)src;
  v22 = v21;
  if ( !v21 )
    goto LABEL_31;
  v23 = v36;
  v24 = v36 + v21;
  if ( __CFADD__((_QWORD)v36, v21) )
  {
    if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_30;
    }
    v24 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v25 = (char *)ptr;
  v26 = v36;
  if ( *((_QWORD *)&v36 + 1) < v24 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
    v25 = (char *)ptr;
    v26 = v36;
  }
  memset(&v25[v26], 0, v24 - v26);
  *(_QWORD *)&v36 = v24;
LABEL_30:
  memcpy((char *)ptr + v23, src, v22);
LABEL_31:
  v27 = pack_dd(src, v38, a4) - (_QWORD)src;
  v28 = v27;
  if ( !v27 )
    goto LABEL_40;
  v29 = v36;
  v30 = v36 + v27;
  if ( __CFADD__((_QWORD)v36, v27) )
  {
    if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_39;
    }
    v30 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v31 = (char *)ptr;
  v32 = v36;
  if ( *((_QWORD *)&v36 + 1) < v30 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v30, 1);
    v31 = (char *)ptr;
    v32 = v36;
  }
  memset(&v31[v32], 0, v30 - v32);
  *(_QWORD *)&v36 = v30;
LABEL_39:
  memcpy((char *)ptr + v29, src, v28);
LABEL_40:
  add_undo_record(186, ptr, v36);
  if ( ptr )
  {
    *(_QWORD *)&v36 = 0;
    qfree(ptr);
  }
  return v38[0] - __readfsqword(0x28u);
}

