unsigned __int64 __fastcall sub_67AAA0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  char *v4; // r13
  __int64 v6; // rsi
  char *v7; // rbx
  __int64 i; // rax
  char *v9; // rcx
  char *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  char *v15; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // r14
  __int64 v20; // r15
  unsigned __int64 v21; // r8
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r14
  __int64 v26; // r15
  unsigned __int64 v27; // r8
  char *v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v32; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  char v34[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v35[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = a1[6];
  v4 = (char *)a1[5];
  v35[0] = __readfsqword(0x28u);
  v6 = 4 * v3;
  v7 = v4;
  for ( i = (4 * v3) >> 2; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      a3 = i >> 1;
      v9 = &v7[4 * (i >> 1)];
      if ( *(_DWORD *)v9 >= a2 )
        break;
      v7 = v9 + 4;
      i = i - 1 - a3;
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  v10 = &v4[v6];
  if ( v7 == v10 || *(_DWORD *)v7 != a2 )
  {
    if ( !(unsigned __int8)must_journal(a1, v10, a3) )
    {
LABEL_8:
      v13 = a1[5];
      v14 = a1[6];
      v15 = &v7[-v13];
      if ( a1[7] < (unsigned __int64)(v14 + 1) )
      {
        v17 = qvector_reserve(a1 + 5, v13, v14 + 1, 4);
        v14 = a1[6];
        a1[5] = v17;
        v7 = &v15[v17];
      }
      memmove(v7 + 4, v7, 4 * v14 - (_QWORD)v15);
      *(_DWORD *)v7 = a2;
      ++a1[6];
      return v35[0] - __readfsqword(0x28u);
    }
    ptr = nullptr;
    v32 = 0;
    v18 = pack_dq(src, v35, (v7 - v4) >> 2, v11, v12) - (_QWORD)src;
    v19 = v18;
    if ( !v18 )
    {
LABEL_22:
      v24 = pack_dd(src, v34, a2) - (_QWORD)src;
      v25 = v24;
      if ( !v24 )
        goto LABEL_31;
      v26 = v32;
      v27 = v32 + v24;
      if ( __CFADD__((_QWORD)v32, v24) )
      {
        if ( (unsigned __int64)v32 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_30;
        }
        v27 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v28 = (char *)ptr;
      v29 = v32;
      if ( *((_QWORD *)&v32 + 1) < v27 )
      {
        v30 = v27;
        ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
        v28 = (char *)ptr;
        v27 = v30;
        v29 = v32;
      }
      v30 = v27;
      memset(&v28[v29], 0, v27 - v29);
      *(_QWORD *)&v32 = v30;
LABEL_30:
      memcpy((char *)ptr + v26, src, v25);
LABEL_31:
      add_undo_record(172, ptr, v32);
      if ( ptr )
      {
        *(_QWORD *)&v32 = 0;
        qfree(ptr);
      }
      goto LABEL_8;
    }
    v20 = v32;
    v21 = v32 + v18;
    if ( __CFADD__((_QWORD)v32, v18) )
    {
      if ( (unsigned __int64)v32 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_21;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = (char *)ptr;
    v23 = v32;
    if ( *((_QWORD *)&v32 + 1) < v21 )
    {
      v30 = v21;
      ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
      v22 = (char *)ptr;
      v21 = v30;
      v23 = v32;
    }
    v30 = v21;
    memset(&v22[v23], 0, v21 - v23);
    *(_QWORD *)&v32 = v30;
LABEL_21:
    memcpy((char *)ptr + v20, src, v19);
    goto LABEL_22;
  }
  return v35[0] - __readfsqword(0x28u);
}

