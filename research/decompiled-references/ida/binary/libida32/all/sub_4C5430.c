char *__fastcall sub_4C5430(const char *a1, const char *a2, unsigned int *a3, unsigned int a4)
{
  const char *v4; // r12
  char *v5; // r15
  char *v6; // rbx
  __int64 v7; // r13
  char *v8; // rbp
  int v9; // eax
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // r13
  const char *v15; // r14
  void *v16; // rbp
  size_t v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  char *v20; // rsi
  size_t v21; // rbp
  void *v23; // rax
  const void *v24; // rsi
  __int64 v25; // rax
  size_t v26; // rbp
  __int64 v27; // r13
  unsigned __int64 v28; // r8
  char *v29; // rsi
  __int64 v30; // rax
  const char *v31; // [rsp+8h] [rbp-90h]
  unsigned __int64 v32; // [rsp+8h] [rbp-90h]
  unsigned __int64 v33; // [rsp+8h] [rbp-90h]
  unsigned __int64 v34; // [rsp+8h] [rbp-90h]
  unsigned __int64 v35; // [rsp+8h] [rbp-90h]
  char *v37; // [rsp+18h] [rbp-80h]
  size_t n; // [rsp+28h] [rbp-70h]
  size_t na; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v42; // [rsp+38h] [rbp-60h]
  unsigned int v43; // [rsp+48h] [rbp-50h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v45[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a2;
  v5 = *((char **)a1 + 2);
  v37 = (char *)a1;
  v45[0] = __readfsqword(0x28u);
  v6 = (char *)(a1 + 8);
  v31 = a1 + 8;
  if ( !v5 )
  {
    v6 = (char *)(a1 + 8);
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
      goto LABEL_32;
LABEL_20:
    v14 = *((_QWORD *)v4 + 1);
    ptr = nullptr;
    v42 = 0;
    if ( v14 )
    {
      v16 = (void *)qalloc_or_throw(v14, a2);
      memcpy(v16, *(const void **)v4, v14);
      v14 = v42;
      if ( v16 )
      {
        v15 = (const char *)v16;
        v17 = strlen((const char *)v16) + 1;
        v18 = v17 + v42;
      }
      else
      {
        v18 = v42 + 1;
        v17 = 1;
        v15 = &byte_22CD811;
      }
      if ( v18 < (unsigned __int64)v42 )
      {
        if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_45:
          memcpy((char *)ptr + v14, v15, v17);
          if ( v16 )
            qfree(v16);
          v25 = pack_dd(src, v45, *a3) - (_QWORD)src;
          v26 = v25;
          if ( !v25 )
            goto LABEL_30;
          v27 = v42;
          v28 = v42 + v25;
          if ( __CFADD__((_QWORD)v42, v25) )
          {
            if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_29;
            }
            v28 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v29 = (char *)ptr;
          v30 = v42;
          if ( *((_QWORD *)&v42 + 1) < v28 )
          {
            v35 = v28;
            ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
            v29 = (char *)ptr;
            v28 = v35;
            v30 = v42;
          }
          v33 = v28;
          memset(&v29[v30], 0, v28 - v30);
          *(_QWORD *)&v42 = v33;
LABEL_29:
          memcpy((char *)ptr + v27, src, v26);
LABEL_30:
          a2 = (const char *)ptr;
          add_undo_record(a4, ptr, v42);
          if ( ptr )
          {
            *(_QWORD *)&v42 = 0;
            qfree(ptr);
          }
          goto LABEL_32;
        }
        v19 = *((_QWORD *)&v42 + 1);
        v20 = (char *)ptr;
        v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
        if ( v19 >= v18 )
        {
LABEL_25:
          n = v17;
          v32 = v18;
          memset(&v20[v42], 0, v18 - v42);
          v17 = n;
          *(_QWORD *)&v42 = v32;
          goto LABEL_45;
        }
LABEL_55:
        na = v17;
        v34 = v18;
        ptr = (void *)qvector_reserve(&ptr, v20, v18, 1);
        v17 = na;
        v20 = (char *)ptr;
        v18 = v34;
        goto LABEL_25;
      }
    }
    else
    {
      v15 = haystack;
      if ( !haystack )
      {
        v17 = 1;
        v20 = nullptr;
        v16 = nullptr;
        v18 = 1;
        v15 = &byte_22CD811;
        goto LABEL_55;
      }
      v16 = nullptr;
      v17 = 1;
      v18 = 1;
    }
    v19 = *((_QWORD *)&v42 + 1);
    v20 = (char *)ptr;
    goto LABEL_24;
  }
  v7 = *((_QWORD *)a2 + 1);
  while ( 1 )
  {
    v11 = *((_QWORD *)v5 + 5);
    if ( !v7 )
      break;
    a2 = *(const char **)v4;
    v8 = v5;
    a1 = haystack;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(a1, a2);
    v10 = *((char **)v5 + 2);
    v5 = *((char **)v5 + 3);
    if ( v9 >= 0 )
    {
      v6 = v8;
      v5 = v10;
    }
    if ( !v5 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    a2 = haystack;
LABEL_4:
    a1 = *((const char **)v5 + 4);
    v8 = v5;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)v5 + 2);
    if ( !v12 )
      break;
    v6 = v5;
    v5 = *((char **)v5 + 2);
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v6 = v5;
LABEL_14:
  if ( v31 == v6 )
    goto LABEL_19;
  v13 = *((_QWORD *)v6 + 5);
  if ( v7 )
  {
    a2 = *(const char **)v4;
    a1 = haystack;
    if ( v13 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(a1, a2) )
    {
LABEL_19:
      if ( (unsigned __int8)must_journal(a1, a2, a3) )
        goto LABEL_20;
LABEL_32:
      v21 = *((_QWORD *)v4 + 1);
      ptr = nullptr;
      v42 = 0;
      if ( v21 )
      {
        v23 = (void *)qalloc_or_throw(v21, a2);
        v24 = *(const void **)v4;
        *((_QWORD *)&v42 + 1) = v21;
        ptr = v23;
        memcpy(v23, v24, v21);
        *(_QWORD *)&v42 = v21;
      }
      v43 = *a3;
      v6 = (char *)sub_4C5300(v37, v6, (__int64)&ptr);
      if ( ptr )
        qfree(ptr);
    }
  }
  else
  {
    a2 = haystack;
    if ( v13 )
    {
LABEL_17:
      a1 = *((const char **)v6 + 4);
      goto LABEL_18;
    }
  }
  return v6;
}

