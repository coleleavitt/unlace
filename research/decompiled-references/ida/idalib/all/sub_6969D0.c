unsigned __int64 __fastcall sub_6969D0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  const __m128i *v7; // rdi
  __int64 v8; // rdx
  __int64 v10; // rax
  size_t v11; // r12
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rbp
  __int64 v18; // r12
  unsigned __int64 v19; // r15
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // rbx
  __int64 v24; // rbp
  unsigned __int64 v25; // r12
  char *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v30; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _QWORD v32[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = *a1;
  v32[0] = __readfsqword(0x28u);
  v7 = *(const __m128i **)(v5 + 1816);
  sub_6962C0(v7, a2, a3, a4);
  if ( !(unsigned __int8)must_journal(v7, a2, v8) )
    return v32[0] - __readfsqword(0x28u);
  v30 = 0;
  ptr = nullptr;
  v10 = pack_dq(src, v32, a2) - (_QWORD)src;
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
  v16 = pack_dq(src, v32, a3) - (_QWORD)src;
  v17 = v16;
  if ( !v16 )
    goto LABEL_15;
  v18 = v30;
  v19 = v30 + v16;
  if ( __CFADD__((_QWORD)v30, v16) )
  {
    if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v19 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v20 = (char *)ptr;
  v21 = v30;
  if ( *((_QWORD *)&v30 + 1) < v19 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
    v20 = (char *)ptr;
    v21 = v30;
  }
  memset(&v20[v21], 0, v19 - v21);
  *(_QWORD *)&v30 = v19;
LABEL_14:
  memcpy((char *)ptr + v18, src, v17);
LABEL_15:
  v22 = pack_dq(src, v32, a4) - (_QWORD)src;
  v23 = v22;
  if ( !v22 )
    goto LABEL_21;
  v24 = v30;
  v25 = v30 + v22;
  if ( __CFADD__((_QWORD)v30, v22) )
  {
    if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_20;
    }
    v25 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v26 = (char *)ptr;
  v27 = v30;
  if ( *((_QWORD *)&v30 + 1) < v25 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
    v26 = (char *)ptr;
    v27 = v30;
  }
  memset(&v26[v27], 0, v25 - v27);
  *(_QWORD *)&v30 = v25;
LABEL_20:
  memcpy((char *)ptr + v24, src, v23);
LABEL_21:
  add_undo_record(158, ptr, v30);
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  return v32[0] - __readfsqword(0x28u);
}
