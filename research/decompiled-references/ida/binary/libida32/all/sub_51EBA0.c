__int64 __fastcall sub_51EBA0(_QWORD *a1, __int64 a2, const char **a3, __int64 a4, __int64 a5)
{
  int v7; // ebp
  const char *v9; // r14
  __int64 v10; // rax
  bool v11; // zf
  unsigned __int64 v12; // rbx
  size_t v13; // r10
  unsigned __int64 v14; // r9
  char *v15; // rsi
  unsigned __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // r14
  size_t v19; // rax
  __int64 v20; // rbx
  size_t v21; // r13
  unsigned __int64 v22; // r9
  const char *v23; // rsi
  const char *v24; // r14
  size_t v25; // rax
  __int64 v26; // rbx
  size_t v27; // r13
  unsigned __int64 v28; // r12
  char *v29; // rsi
  __int64 v30; // rax
  char *v31; // rsi
  __int64 v32; // rax
  char *v33; // rdi
  unsigned int v34; // ebx
  unsigned __int64 v37; // [rsp+10h] [rbp-78h]
  unsigned __int64 v38; // [rsp+10h] [rbp-78h]
  unsigned __int64 v39; // [rsp+10h] [rbp-78h]
  unsigned __int64 v40; // [rsp+10h] [rbp-78h]
  size_t na; // [rsp+18h] [rbp-70h]
  size_t n; // [rsp+18h] [rbp-70h]
  int v43; // [rsp+2Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v45; // [rsp+38h] [rbp-50h]
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v7 = a2;
  v46 = __readfsqword(0x28u);
  sub_51A620((unsigned int)a2, a2, (__int64)a3);
  ptr = nullptr;
  v45 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  v9 = byte_2389C44;
  *((_BYTE *)ptr + v45) = 1;
  v10 = v45;
  v11 = a3[1] == nullptr;
  v12 = v45 + 1;
  *(_QWORD *)&v45 = v45 + 1;
  if ( !v11 )
    v9 = *a3;
  if ( !v9 )
  {
    v14 = v10 + 2;
    v13 = 1;
    v9 = &byte_22CD811;
    if ( v10 + 2 < v12 )
    {
      v9 = &byte_22CD811;
      v13 = 1;
      *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_8;
    }
    goto LABEL_5;
  }
  v13 = strlen(v9) + 1;
  v14 = v13 + v12;
  if ( !__CFADD__(v13, v12) )
  {
LABEL_5:
    v15 = (char *)ptr;
    v16 = v12;
    if ( *((_QWORD *)&v45 + 1) < v14 )
    {
      n = v13;
      v40 = v14;
      ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
      v15 = (char *)ptr;
      v13 = n;
      v16 = v45;
      v14 = v40;
    }
    na = v13;
    v37 = v14;
    memset(&v15[v16], 0, v14 - v16);
    v13 = na;
    *(_QWORD *)&v45 = v37;
    goto LABEL_8;
  }
  if ( v12 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v14 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_5;
  }
  if ( v12 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
  v17 = v9;
  v18 = byte_2389C44;
  memcpy((char *)ptr + v12, v17, v13);
  if ( *(_QWORD *)(a4 + 8) )
    v18 = *(const char **)a4;
  if ( v18 )
  {
    v19 = strlen(v18);
    v20 = v45;
    v21 = v19 + 1;
    v22 = v19 + 1 + v45;
    if ( __CFADD__(v19 + 1, (_QWORD)v45) )
    {
      if ( (unsigned __int64)v45 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v45 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_15;
        goto LABEL_14;
      }
      v22 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v20 = v45;
    v21 = 1;
    v18 = &byte_22CD811;
    v22 = v45 + 1;
    if ( (_QWORD)v45 == -1 )
    {
      v20 = -1;
      v18 = &byte_22CD811;
LABEL_14:
      *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
  }
  v29 = (char *)ptr;
  v30 = v20;
  if ( *((_QWORD *)&v45 + 1) < v22 )
  {
    v39 = v22;
    ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
    v29 = (char *)ptr;
    v22 = v39;
    v30 = v45;
  }
  v38 = v22;
  memset(&v29[v30], 0, v22 - v30);
  *(_QWORD *)&v45 = v38;
LABEL_15:
  v23 = v18;
  v24 = byte_2389C44;
  memcpy((char *)ptr + v20, v23, v21);
  if ( *(_QWORD *)(a5 + 8) )
    v24 = *(const char **)a5;
  if ( v24 )
  {
    v25 = strlen(v24);
    v26 = v45;
    v27 = v25 + 1;
    v28 = v25 + 1 + v45;
    if ( __CFADD__(v25 + 1, (_QWORD)v45) )
    {
      if ( (unsigned __int64)v45 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v45 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_33;
        goto LABEL_21;
      }
      v28 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v26 = v45;
    v27 = 1;
    v24 = &byte_22CD811;
    v28 = v45 + 1;
    if ( (_QWORD)v45 == -1 )
    {
      v26 = -1;
      v24 = &byte_22CD811;
LABEL_21:
      *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_33;
    }
  }
  v31 = (char *)ptr;
  v32 = v26;
  if ( *((_QWORD *)&v45 + 1) < v28 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
    v31 = (char *)ptr;
    v32 = v45;
  }
  memset(&v31[v32], 0, v28 - v32);
  *(_QWORD *)&v45 = v28;
LABEL_33:
  v33 = (char *)ptr + v26;
  v34 = 0;
  memcpy(v33, v24, v27);
  v43 = v7;
  if ( (unsigned __int64)v45 <= 0x4000000 )
    v34 = sub_79BB40(&v43, *a1, ptr, v45, 1089536, 83);
  if ( ptr )
  {
    *(_QWORD *)&v45 = 0;
    qfree(ptr);
  }
  return v34;
}

