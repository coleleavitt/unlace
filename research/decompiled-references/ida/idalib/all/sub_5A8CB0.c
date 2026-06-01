unsigned __int64 __fastcall sub_5A8CB0(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v8; // rax
  size_t v9; // r13
  __int64 v10; // r15
  unsigned __int64 v11; // r8
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // r12
  __int64 v16; // rax
  size_t v17; // r12
  __int64 v18; // rbx
  unsigned __int64 v19; // r13
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // r8
  char *v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v28; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v30[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v31[8]; // [rsp+38h] [rbp-40h] BYREF

  v31[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v31[0] - __readfsqword(0x28u);
  v28 = 0;
  ptr = nullptr;
  v8 = pack_dq(src, v31, a1) - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v10 = v28;
    v11 = v28 + v8;
    if ( __CFADD__((_QWORD)v28, v8) )
    {
      if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = (char *)ptr;
    v13 = v28;
    if ( *((_QWORD *)&v28 + 1) < v11 )
    {
      v26 = v11;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v12 = (char *)ptr;
      v11 = v26;
      v13 = v28;
    }
    v26 = v11;
    memset(&v12[v13], 0, v11 - v13);
    *(_QWORD *)&v28 = v26;
LABEL_8:
    memcpy((char *)ptr + v10, src, v9);
  }
  v14 = pack_dd(src, v30, *a2) - (_QWORD)src;
  v15 = v14;
  if ( v14 )
  {
    v22 = v28;
    v23 = v28 + v14;
    if ( __CFADD__((_QWORD)v28, v14) )
    {
      if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_26;
      }
      v23 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v24 = (char *)ptr;
    v25 = v28;
    if ( *((_QWORD *)&v28 + 1) < v23 )
    {
      v26 = v23;
      ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
      v24 = (char *)ptr;
      v23 = v26;
      v25 = v28;
    }
    v26 = v23;
    memset(&v24[v25], 0, v23 - v25);
    *(_QWORD *)&v28 = v26;
LABEL_26:
    memcpy((char *)ptr + v22, src, v15);
  }
  if ( a3 )
  {
    v16 = pack_dd(src, v30, *a3) - (_QWORD)src;
    v17 = v16;
    if ( v16 )
    {
      v18 = v28;
      v19 = v28 + v16;
      if ( __CFADD__((_QWORD)v28, v16) )
      {
        if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_19;
        }
        v19 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v20 = (char *)ptr;
      v21 = v28;
      if ( *((_QWORD *)&v28 + 1) < v19 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
        v20 = (char *)ptr;
        v21 = v28;
      }
      memset(&v20[v21], 0, v19 - v21);
      *(_QWORD *)&v28 = v19;
LABEL_19:
      memcpy((char *)ptr + v18, src, v17);
    }
  }
  add_undo_record(a4, ptr, v28);
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  return v31[0] - __readfsqword(0x28u);
}
