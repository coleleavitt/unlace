unsigned __int64 __fastcall sub_58EAF0(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rax
  size_t v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // r12
  __int64 v18; // rax
  size_t v19; // r12
  __int64 v20; // rbx
  unsigned __int64 v21; // r13
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // r8
  char *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v30; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v32[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v33[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v33[0] - __readfsqword(0x28u);
  v30 = 0;
  ptr = nullptr;
  v10 = pack_dq(src, v33, a1, v7, v8) - (_QWORD)src;
  v11 = v10;
  if ( v10 )
  {
    v12 = v30;
    v13 = v30 + v10;
    if ( __CFADD__((_QWORD)v30, v10) )
    {
      if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v14 = (char *)ptr;
    v15 = v30;
    if ( *((_QWORD *)&v30 + 1) < v13 )
    {
      v28 = v13;
      ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
      v14 = (char *)ptr;
      v13 = v28;
      v15 = v30;
    }
    v28 = v13;
    memset(&v14[v15], 0, v13 - v15);
    *(_QWORD *)&v30 = v28;
LABEL_8:
    memcpy((char *)ptr + v12, src, v11);
  }
  v16 = pack_dd(src, v32, *a2) - (_QWORD)src;
  v17 = v16;
  if ( v16 )
  {
    v24 = v30;
    v25 = v30 + v16;
    if ( __CFADD__((_QWORD)v30, v16) )
    {
      if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_26;
      }
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v26 = (char *)ptr;
    v27 = v30;
    if ( *((_QWORD *)&v30 + 1) < v25 )
    {
      v28 = v25;
      ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
      v26 = (char *)ptr;
      v25 = v28;
      v27 = v30;
    }
    v28 = v25;
    memset(&v26[v27], 0, v25 - v27);
    *(_QWORD *)&v30 = v28;
LABEL_26:
    memcpy((char *)ptr + v24, src, v17);
  }
  if ( a3 )
  {
    v18 = pack_dd(src, v32, *a3) - (_QWORD)src;
    v19 = v18;
    if ( v18 )
    {
      v20 = v30;
      v21 = v30 + v18;
      if ( __CFADD__((_QWORD)v30, v18) )
      {
        if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_19;
        }
        v21 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v22 = (char *)ptr;
      v23 = v30;
      if ( *((_QWORD *)&v30 + 1) < v21 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
        v22 = (char *)ptr;
        v23 = v30;
      }
      memset(&v22[v23], 0, v21 - v23);
      *(_QWORD *)&v30 = v21;
LABEL_19:
      memcpy((char *)ptr + v20, src, v19);
    }
  }
  add_undo_record(a4, ptr, v30);
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  return v33[0] - __readfsqword(0x28u);
}

