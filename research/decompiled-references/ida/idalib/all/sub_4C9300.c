unsigned __int64 __fastcall sub_4C9300(__int64 a1, char a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rax
  size_t v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rax
  size_t v16; // rbp
  __int64 v17; // r15
  unsigned __int64 v18; // r14
  size_t v19; // rbx
  char *v20; // r14
  char *v21; // r15
  size_t v22; // rax
  __int64 v23; // rbx
  size_t v24; // r12
  unsigned __int64 v25; // rbp
  char *v26; // rsi
  __int64 v27; // rax
  char *v29; // rsi
  __int64 v30; // rax
  char *v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+0h] [rbp-80h]
  size_t v34; // [rsp+8h] [rbp-78h]
  __int64 v35; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+18h] [rbp-68h] BYREF
  __int128 v37; // [rsp+20h] [rbp-60h]
  _BYTE src[10]; // [rsp+36h] [rbp-4Ah] BYREF
  _QWORD v39[8]; // [rsp+40h] [rbp-40h] BYREF

  v39[0] = __readfsqword(0x28u);
  ptr = nullptr;
  v37 = 0;
  v9 = pack_dq(src, v39, a1) - (_QWORD)src;
  v10 = v9;
  if ( v9 )
  {
    v11 = v37;
    v12 = v37 + v9;
    if ( __CFADD__((_QWORD)v37, v9) )
    {
      if ( (unsigned __int64)v37 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v37 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v37 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)ptr + v11, src, v10);
        goto LABEL_7;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v29 = (char *)ptr;
    v30 = v37;
    if ( *((_QWORD *)&v37 + 1) < v12 )
    {
      v35 = v37;
      v34 = v10;
      v33 = v12;
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v29 = (char *)ptr;
      v11 = v35;
      v30 = v37;
      v10 = v34;
      v12 = v33;
    }
    v35 = v11;
    v34 = v10;
    v33 = v12;
    memset(&v29[v30], 0, v12 - v30);
    v10 = v34;
    v11 = v35;
    *(_QWORD *)&v37 = v33;
    goto LABEL_6;
  }
LABEL_7:
  v13 = v37;
  v14 = ptr;
  if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v37 + 1, 1);
    v14 = ptr;
    v13 = v37;
  }
  v14[v13] = a2;
  *(_QWORD *)&v37 = v37 + 1;
  v15 = pack_dq(src, v39, a3) - (_QWORD)src;
  v16 = v15;
  if ( v15 )
  {
    v17 = v37;
    v18 = v37 + v15;
    if ( __CFADD__((_QWORD)v37, v15) )
    {
      if ( (unsigned __int64)v37 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v37 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v37 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
        memcpy((char *)ptr + v17, src, v16);
        goto LABEL_15;
      }
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v31 = (char *)ptr;
    v32 = v37;
    if ( *((_QWORD *)&v37 + 1) < v18 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
      v31 = (char *)ptr;
      v32 = v37;
    }
    memset(&v31[v32], 0, v18 - v32);
    *(_QWORD *)&v37 = v18;
    goto LABEL_14;
  }
LABEL_15:
  v19 = *(_QWORD *)(a4 + 8);
  v20 = nullptr;
  v21 = (char *)haystack;
  if ( !v19 )
  {
    if ( haystack )
      goto LABEL_17;
LABEL_29:
    v23 = v37;
    v24 = 1;
    v21 = (char *)&byte_22F0C30;
    v25 = v37 + 1;
    if ( (_QWORD)v37 != -1 )
    {
LABEL_18:
      v26 = (char *)ptr;
      v27 = v23;
      if ( *((_QWORD *)&v37 + 1) >= v25 )
      {
LABEL_19:
        memset(&v26[v27], 0, v25 - v27);
        *(_QWORD *)&v37 = v25;
        goto LABEL_20;
      }
LABEL_40:
      ptr = (void *)qvector_reserve(&ptr, v26, v25, 1);
      v26 = (char *)ptr;
      v27 = v37;
      goto LABEL_19;
    }
    v23 = -1;
    v21 = (char *)&byte_22F0C30;
    goto LABEL_27;
  }
  v21 = (char *)qalloc_or_throw(*(_QWORD *)(a4 + 8));
  v20 = v21;
  memcpy(v21, *(const void **)a4, v19);
  if ( !v21 )
    goto LABEL_29;
LABEL_17:
  v22 = strlen(v21);
  v23 = v37;
  v24 = v22 + 1;
  v25 = v22 + 1 + v37;
  if ( !__CFADD__(v22 + 1, (_QWORD)v37) )
    goto LABEL_18;
  if ( (unsigned __int64)v37 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v26 = (char *)ptr;
    v27 = v37;
    v25 = 0x7FFFFFFFFFFFFFFFLL;
    if ( *((_QWORD *)&v37 + 1) >= 0x7FFFFFFFFFFFFFFFuLL )
      goto LABEL_19;
    goto LABEL_40;
  }
  if ( (_QWORD)v37 != 0x7FFFFFFFFFFFFFFFLL )
LABEL_27:
    *(_QWORD *)&v37 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_20:
  memcpy((char *)ptr + v23, v21, v24);
  if ( v20 )
    qfree(v20);
  add_undo_record(a5, ptr, v37);
  if ( ptr )
  {
    *(_QWORD *)&v37 = 0;
    qfree(ptr);
  }
  return v39[0] - __readfsqword(0x28u);
}
