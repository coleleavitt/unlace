unsigned __int64 __fastcall sub_4B2660(unsigned int a1, char a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  size_t v12; // rbp
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  _BYTE *v16; // rsi
  const char *v17; // rsi
  __int64 v18; // rax
  size_t v19; // rbp
  __int64 v20; // r15
  unsigned __int64 v21; // r14
  size_t v22; // rbx
  char *v23; // r14
  char *v24; // r15
  size_t v25; // rax
  __int64 v26; // rbx
  size_t v27; // r12
  unsigned __int64 v28; // rbp
  char *v29; // rsi
  __int64 v30; // rax
  char *v32; // rsi
  __int64 v33; // rax
  char *v34; // rsi
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-78h]
  __int64 v37; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v39; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v41[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v42[8]; // [rsp+38h] [rbp-40h] BYREF

  v42[0] = __readfsqword(0x28u);
  ptr = nullptr;
  v39 = 0;
  v9 = pack_dd(src, v41, a1) - (_QWORD)src;
  v12 = v9;
  if ( v9 )
  {
    v13 = v39;
    v14 = v39 + v9;
    if ( __CFADD__((_QWORD)v39, v9) )
    {
      if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)ptr + v13, src, v12);
        goto LABEL_7;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v32 = (char *)ptr;
    v33 = v39;
    if ( *((_QWORD *)&v39 + 1) < v14 )
    {
      v36 = v14;
      v37 = v39;
      ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
      v32 = (char *)ptr;
      v13 = v37;
      v33 = v39;
      v14 = v36;
    }
    v37 = v13;
    v36 = v14;
    memset(&v32[v33], 0, v14 - v33);
    v13 = v37;
    *(_QWORD *)&v39 = v36;
    goto LABEL_6;
  }
LABEL_7:
  v15 = v39;
  v16 = ptr;
  if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v39 + 1, 1);
    v16 = ptr;
    v15 = v39;
  }
  v16[v15] = a2;
  v17 = (const char *)v42;
  *(_QWORD *)&v39 = v39 + 1;
  v18 = pack_dq(src, v42, a3, v10, v11) - (_QWORD)src;
  v19 = v18;
  if ( v18 )
  {
    v20 = v39;
    v21 = v39 + v18;
    if ( __CFADD__((_QWORD)v39, v18) )
    {
      if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
        v17 = src;
        memcpy((char *)ptr + v20, src, v19);
        goto LABEL_15;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v34 = (char *)ptr;
    v35 = v39;
    if ( *((_QWORD *)&v39 + 1) < v21 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
      v34 = (char *)ptr;
      v35 = v39;
    }
    memset(&v34[v35], 0, v21 - v35);
    *(_QWORD *)&v39 = v21;
    goto LABEL_14;
  }
LABEL_15:
  v22 = *(_QWORD *)(a4 + 8);
  v23 = nullptr;
  v24 = (char *)haystack;
  if ( !v22 )
  {
    if ( haystack )
      goto LABEL_17;
LABEL_29:
    v26 = v39;
    v27 = 1;
    v24 = (char *)&byte_22CD811;
    v28 = v39 + 1;
    if ( (_QWORD)v39 != -1 )
    {
LABEL_18:
      v29 = (char *)ptr;
      v30 = v26;
      if ( *((_QWORD *)&v39 + 1) >= v28 )
      {
LABEL_19:
        memset(&v29[v30], 0, v28 - v30);
        *(_QWORD *)&v39 = v28;
        goto LABEL_20;
      }
LABEL_40:
      ptr = (void *)qvector_reserve(&ptr, v29, v28, 1);
      v29 = (char *)ptr;
      v30 = v39;
      goto LABEL_19;
    }
    v26 = -1;
    v24 = (char *)&byte_22CD811;
    goto LABEL_27;
  }
  v24 = (char *)qalloc_or_throw(*(_QWORD *)(a4 + 8), v17);
  v23 = v24;
  memcpy(v24, *(const void **)a4, v22);
  if ( !v24 )
    goto LABEL_29;
LABEL_17:
  v25 = strlen(v24);
  v26 = v39;
  v27 = v25 + 1;
  v28 = v25 + 1 + v39;
  if ( !__CFADD__(v25 + 1, (_QWORD)v39) )
    goto LABEL_18;
  if ( (unsigned __int64)v39 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v29 = (char *)ptr;
    v30 = v39;
    v28 = 0x7FFFFFFFFFFFFFFFLL;
    if ( *((_QWORD *)&v39 + 1) >= 0x7FFFFFFFFFFFFFFFuLL )
      goto LABEL_19;
    goto LABEL_40;
  }
  if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
LABEL_27:
    *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_20:
  memcpy((char *)ptr + v26, v24, v27);
  if ( v23 )
    qfree(v23);
  add_undo_record(a5, ptr, v39);
  if ( ptr )
  {
    *(_QWORD *)&v39 = 0;
    qfree(ptr);
  }
  return v42[0] - __readfsqword(0x28u);
}

