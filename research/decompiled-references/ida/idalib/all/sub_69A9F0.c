unsigned __int64 __fastcall sub_69A9F0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char *v4; // r13
  __int64 v6; // rsi
  char *v7; // rbx
  __int64 i; // rax
  char *v9; // rcx
  char *v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  char *v13; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // r14
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // r14
  __int64 v24; // r15
  unsigned __int64 v25; // r8
  char *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v31; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _QWORD v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = a1[6];
  v4 = (char *)a1[5];
  v33[0] = __readfsqword(0x28u);
  v6 = 8 * v3;
  v7 = v4;
  for ( i = (8 * v3) >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      a3 = i >> 1;
      v9 = &v7[8 * (i >> 1)];
      if ( *(_QWORD *)v9 >= a2 )
        break;
      v7 = v9 + 8;
      i = i - 1 - a3;
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  v10 = &v4[v6];
  if ( v7 == v10 || *(_QWORD *)v7 != a2 )
  {
    if ( !(unsigned __int8)must_journal(a1, v10, a3) )
    {
LABEL_8:
      v11 = a1[5];
      v12 = a1[6];
      v13 = &v7[-v11];
      if ( a1[7] < (unsigned __int64)(v12 + 1) )
      {
        v15 = qvector_reserve(a1 + 5, v11, v12 + 1, 8);
        v12 = a1[6];
        a1[5] = v15;
        v7 = &v13[v15];
      }
      memmove(v7 + 8, v7, 8 * v12 - (_QWORD)v13);
      *(_QWORD *)v7 = a2;
      ++a1[6];
      return v33[0] - __readfsqword(0x28u);
    }
    ptr = nullptr;
    v31 = 0;
    v16 = pack_dq(src, v33, (v7 - v4) >> 3) - (_QWORD)src;
    v17 = v16;
    if ( !v16 )
    {
LABEL_22:
      v22 = pack_dq(src, v33, a2) - (_QWORD)src;
      v23 = v22;
      if ( !v22 )
        goto LABEL_31;
      v24 = v31;
      v25 = v31 + v22;
      if ( __CFADD__((_QWORD)v31, v22) )
      {
        if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_30;
        }
        v25 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v26 = (char *)ptr;
      v27 = v31;
      if ( *((_QWORD *)&v31 + 1) < v25 )
      {
        v28 = v25;
        ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
        v26 = (char *)ptr;
        v25 = v28;
        v27 = v31;
      }
      v28 = v25;
      memset(&v26[v27], 0, v25 - v27);
      *(_QWORD *)&v31 = v28;
LABEL_30:
      memcpy((char *)ptr + v24, src, v23);
LABEL_31:
      add_undo_record(172, ptr, v31);
      if ( ptr )
      {
        *(_QWORD *)&v31 = 0;
        qfree(ptr);
      }
      goto LABEL_8;
    }
    v18 = v31;
    v19 = v31 + v16;
    if ( __CFADD__((_QWORD)v31, v16) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_21;
      }
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v20 = (char *)ptr;
    v21 = v31;
    if ( *((_QWORD *)&v31 + 1) < v19 )
    {
      v28 = v19;
      v29 = v31;
      ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
      v20 = (char *)ptr;
      v18 = v29;
      v21 = v31;
      v19 = v28;
    }
    v29 = v18;
    v28 = v19;
    memset(&v20[v21], 0, v19 - v21);
    v18 = v29;
    *(_QWORD *)&v31 = v28;
LABEL_21:
    memcpy((char *)ptr + v18, src, v17);
    goto LABEL_22;
  }
  return v33[0] - __readfsqword(0x28u);
}
