unsigned __int64 __fastcall sub_69F870(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // rax
  size_t v16; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // r8
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // rbp
  __int64 v23; // r12
  unsigned __int64 v24; // r15
  char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // rbx
  __int64 v29; // rbp
  unsigned __int64 v30; // r12
  char *v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v35; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _QWORD v37[8]; // [rsp+38h] [rbp-40h] BYREF

  v10 = *a1;
  v37[0] = __readfsqword(0x28u);
  v12 = *(_QWORD **)(v10 + 1840);
  sub_69F700(v12, a2, a3, a4, a5 ^ 1, a6, a7, a8, a9);
  if ( !(unsigned __int8)must_journal(v12, a2, v13) )
    return v37[0] - __readfsqword(0x28u);
  v35 = 0;
  ptr = nullptr;
  v15 = pack_dq(src, v37, a2) - (_QWORD)src;
  v16 = v15;
  if ( v15 )
  {
    v17 = v35;
    v18 = v35 + v15;
    if ( __CFADD__((_QWORD)v35, v15) )
    {
      if ( (unsigned __int64)v35 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v35 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v35 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
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
LABEL_8:
    memcpy((char *)ptr + v17, src, v16);
  }
  v21 = pack_dq(src, v37, a3) - (_QWORD)src;
  v22 = v21;
  if ( !v21 )
    goto LABEL_15;
  v23 = v35;
  v24 = v35 + v21;
  if ( __CFADD__((_QWORD)v35, v21) )
  {
    if ( (unsigned __int64)v35 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v35 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v35 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
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
LABEL_14:
  memcpy((char *)ptr + v23, src, v22);
LABEL_15:
  v27 = pack_dq(src, v37, a4) - (_QWORD)src;
  v28 = v27;
  if ( !v27 )
    goto LABEL_21;
  v29 = v35;
  v30 = v35 + v27;
  if ( __CFADD__((_QWORD)v35, v27) )
  {
    if ( (unsigned __int64)v35 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v35 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v35 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_20;
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
LABEL_20:
  memcpy((char *)ptr + v29, src, v28);
LABEL_21:
  add_undo_record(174, ptr, v35);
  if ( ptr )
  {
    *(_QWORD *)&v35 = 0;
    qfree(ptr);
  }
  return v37[0] - __readfsqword(0x28u);
}
