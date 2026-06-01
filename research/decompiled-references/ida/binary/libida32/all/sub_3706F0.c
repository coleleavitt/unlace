__int64 __fastcall sub_3706F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // r13
  size_t v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  size_t v8; // r8
  __int64 v9; // r15
  unsigned __int64 v10; // r9
  __int64 v11; // r15
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  size_t v14; // r13
  __int64 v15; // r12
  unsigned __int64 v16; // r14
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  char *v20; // rsi
  __int64 v21; // rax
  size_t v22; // rdx
  void *v23; // rdi
  unsigned __int8 undo_point; // al
  void *v25; // rdi
  char *v27; // rsi
  __int64 v28; // rax
  char *v29; // rsi
  __int64 v30; // rax
  char *v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+0h] [rbp-78h]
  size_t v34; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v36; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v38[8]; // [rsp+38h] [rbp-40h] BYREF

  v38[0] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 16);
  v36 = 0;
  ptr = nullptr;
  if ( !v3 )
    goto LABEL_29;
  v4 = *(const char **)(a1 + 8);
  if ( !*v4 )
  {
    v3 = 0;
LABEL_29:
    v23 = nullptr;
    goto LABEL_30;
  }
  if ( v4 )
  {
    v5 = strlen(*(const char **)(a1 + 8));
    if ( HIDWORD(v5) )
      sub_36B3F0();
    v6 = (unsigned int)v5;
  }
  else
  {
    v6 = 0;
    v5 = 0;
    v4 = &byte_22CD811;
  }
  v7 = pack_dd(src, v38, v6) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v36;
    v10 = v36 + v7;
    if ( __CFADD__((_QWORD)v36, v7) )
    {
      if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
        memcpy((char *)ptr + v9, src, v8);
        goto LABEL_12;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v27 = (char *)ptr;
    v28 = v36;
    if ( *((_QWORD *)&v36 + 1) < v10 )
    {
      v33 = v10;
      v34 = v8;
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v27 = (char *)ptr;
      v8 = v34;
      v28 = v36;
      v10 = v33;
    }
    v34 = v8;
    v33 = v10;
    memset(&v27[v28], 0, v10 - v28);
    v8 = v34;
    *(_QWORD *)&v36 = v33;
    goto LABEL_11;
  }
LABEL_12:
  if ( !v5 )
    goto LABEL_18;
  v11 = v36;
  v12 = v5 + v36;
  if ( !__CFADD__(v5, (_QWORD)v36) )
    goto LABEL_41;
  if ( (unsigned __int64)v36 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v12 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_41:
    v29 = (char *)ptr;
    v30 = v36;
    if ( *((_QWORD *)&v36 + 1) < v12 )
    {
      v33 = v12;
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v29 = (char *)ptr;
      v12 = v33;
      v30 = v36;
    }
    v33 = v12;
    memset(&v29[v30], 0, v12 - v30);
    *(_QWORD *)&v36 = v33;
    goto LABEL_17;
  }
  if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_17:
  memcpy((char *)ptr + v11, v4, v5);
LABEL_18:
  v13 = pack_dd(src, v38, 0) - (_QWORD)src;
  v14 = v13;
  if ( v13 )
  {
    v15 = v36;
    v16 = v36 + v13;
    if ( __CFADD__((_QWORD)v36, v13) )
    {
      if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_23:
        memcpy((char *)ptr + v15, src, v14);
        goto LABEL_24;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v31 = (char *)ptr;
    v32 = v36;
    if ( *((_QWORD *)&v36 + 1) < v16 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
      v31 = (char *)ptr;
      v32 = v36;
    }
    memset(&v31[v32], 0, v16 - v32);
    *(_QWORD *)&v36 = v16;
    goto LABEL_23;
  }
LABEL_24:
  v17 = v36;
  v18 = v36 + 1;
  v19 = v36 + 1;
  if ( (_QWORD)v36 == -1 )
  {
    v19 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v20 = (char *)ptr;
    v21 = v36;
    v22 = 1;
    if ( *((_QWORD *)&v36 + 1) < v18 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v36 + 1, 1);
      v20 = (char *)ptr;
      v21 = v36;
      v22 = v18 - v36;
    }
    memset(&v20[v21], 0, v22);
  }
  *(_QWORD *)&v36 = v19;
  *((_BYTE *)ptr + v17) = 0;
  v23 = ptr;
  v3 = v36;
LABEL_30:
  undo_point = create_undo_point(v23, v3);
  v25 = ptr;
  *(_DWORD *)(a2 + 8) = undo_point;
  if ( v25 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v25);
  }
  return 0;
}

