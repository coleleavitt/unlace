unsigned __int64 __fastcall sub_5154D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // al
  __int64 v9; // rax
  size_t v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // r8
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // r13
  __int64 v17; // r15
  unsigned __int64 v18; // r8
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // rbp
  __int64 v23; // r13
  unsigned __int64 v24; // r15
  char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // rbx
  __int64 v29; // rbp
  unsigned __int64 v30; // r13
  char *v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v35; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v37[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v38[8]; // [rsp+38h] [rbp-40h] BYREF

  v38[0] = __readfsqword(0x28u);
  v7 = must_journal(a1, a2, a3);
  if ( a3 == a4 || !v7 )
    return v38[0] - __readfsqword(0x28u);
  v35 = 0;
  ptr = nullptr;
  v9 = pack_dd(src, v37, (unsigned int)a1) - (_QWORD)src;
  v10 = v9;
  if ( v9 )
  {
    v11 = v35;
    v12 = v35 + v9;
    if ( __CFADD__((_QWORD)v35, v9) )
    {
      if ( (unsigned __int64)v35 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v35 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v35 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_12;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = (char *)ptr;
    v14 = v35;
    if ( *((_QWORD *)&v35 + 1) < v12 )
    {
      v33 = v12;
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v13 = (char *)ptr;
      v12 = v33;
      v14 = v35;
    }
    v33 = v12;
    memset(&v13[v14], 0, v12 - v14);
    *(_QWORD *)&v35 = v33;
LABEL_12:
    memcpy((char *)ptr + v11, src, v10);
  }
  v15 = pack_dq(src, v38, a2) - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_22;
  v17 = v35;
  v18 = v35 + v15;
  if ( __CFADD__((_QWORD)v35, v15) )
  {
    if ( (unsigned __int64)v35 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v35 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v35 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v19 = (char *)ptr;
  v20 = v35;
  if ( *((_QWORD *)&v35 + 1) < v18 )
  {
    v33 = v18;
    ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
    v19 = (char *)ptr;
    v18 = v33;
    v20 = v35;
  }
  v33 = v18;
  memset(&v19[v20], 0, v18 - v20);
  *(_QWORD *)&v35 = v33;
LABEL_21:
  memcpy((char *)ptr + v17, src, v16);
LABEL_22:
  v21 = pack_dq(src, v38, a3) - (_QWORD)src;
  v22 = v21;
  if ( !v21 )
    goto LABEL_31;
  v23 = v35;
  v24 = v35 + v21;
  if ( __CFADD__((_QWORD)v35, v21) )
  {
    if ( (unsigned __int64)v35 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v35 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v35 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_30;
    }
    v24 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v25 = (char *)ptr;
  v26 = v35;
  if ( *((_QWORD *)&v35 + 1) < v24 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
    v25 = (char *)ptr;
    v26 = v35;
  }
  memset(&v25[v26], 0, v24 - v26);
  *(_QWORD *)&v35 = v24;
LABEL_30:
  memcpy((char *)ptr + v23, src, v22);
LABEL_31:
  v27 = pack_dq(src, v38, a4) - (_QWORD)src;
  v28 = v27;
  if ( !v27 )
    goto LABEL_40;
  v29 = v35;
  v30 = v35 + v27;
  if ( __CFADD__((_QWORD)v35, v27) )
  {
    if ( (unsigned __int64)v35 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v35 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v35 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_39;
    }
    v30 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v31 = (char *)ptr;
  v32 = v35;
  if ( *((_QWORD *)&v35 + 1) < v30 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v30, 1);
    v31 = (char *)ptr;
    v32 = v35;
  }
  memset(&v31[v32], 0, v30 - v32);
  *(_QWORD *)&v35 = v30;
LABEL_39:
  memcpy((char *)ptr + v29, src, v28);
LABEL_40:
  add_undo_record(186, ptr, v35);
  if ( ptr )
  {
    *(_QWORD *)&v35 = 0;
    qfree(ptr);
  }
  return v38[0] - __readfsqword(0x28u);
}
